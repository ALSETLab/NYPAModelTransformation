/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 792
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, 13, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 795
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 3, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 796
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 3, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 797
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 798
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->localData[0]->realVars[121] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 799
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->localData[0]->realVars[120] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 800
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  data->localData[0]->realVars[110] /* gENROE.ud variable */ = (-data->localData[0]->realVars[102] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 801
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 802
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->localData[0]->realVars[98] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 803
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[111] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 804
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[110] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 805
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[194] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[194] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 807
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  data->localData[0]->realVars[93] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 808
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[128] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[129] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[92] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->localData[0]->realVars[113] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 812
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->localData[0]->realVars[112] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 813
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[130] /* pwLine1.is.im variable */) - data->localData[0]->realVars[142] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 814
type: SIMPLE_ASSIGN
pwLine.ir.re = (-pwLine1.is.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[131] /* pwLine1.is.re variable */) - data->localData[0]->realVars[143] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}

void residualFunc882(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,882};
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
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
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
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  /* iteration variables */
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = xloc[0];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[1];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = xloc[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[3];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = xloc[4];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = xloc[5];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = xloc[8];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = xloc[9];
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = xloc[16];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = xloc[17];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = xloc[18];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_792(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_793(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_794(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_795(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_796(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_797(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_798(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_799(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_800(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_801(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_802(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_803(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_804(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_805(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_806(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_807(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_808(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_809(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_810(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_811(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_812(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_813(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_814(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */, 1, Less);
  res[1] = ((tmp0 && tmp1)?data->localData[0]->realVars[118] /* pwLine.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */, 6, Less);
  res[2] = ((tmp2 && tmp3)?data->localData[0]->realVars[142] /* pwLine3.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */, 6, Less);
  res[3] = ((tmp4 && tmp5)?data->localData[0]->realVars[143] /* pwLine3.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwFault.t1 PARAM */, 9, Less);
  tmp15 = (modelica_boolean)tmp6;
  if(tmp15)
  {
    tmp16 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */, 10, Less);
    tmp13 = (modelica_boolean)(tmp7 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp13)
    {
      tmp14 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */, 10, Less);
      tmp11 = (modelica_boolean)tmp8;
      if(tmp11)
      {
        tmp9 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp10 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp12 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[305] /* pwFault.R PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[306] /* pwFault.X PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */),(tmp9 * tmp9) + (tmp10 * tmp10),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp12 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
      }
      tmp14 = tmp12;
    }
    tmp16 = tmp14;
  }
  res[4] = tmp16;

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwFault.t1 PARAM */, 9, Less);
  tmp26 = (modelica_boolean)tmp17;
  if(tmp26)
  {
    tmp27 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */, 10, Less);
    tmp24 = (modelica_boolean)(tmp18 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp24)
    {
      tmp25 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */, 10, Less);
      tmp22 = (modelica_boolean)tmp19;
      if(tmp22)
      {
        tmp20 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp21 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp23 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[305] /* pwFault.R PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[306] /* pwFault.X PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)),(tmp20 * tmp20) + (tmp21 * tmp21),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp23 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
      }
      tmp25 = tmp23;
    }
    tmp27 = tmp25;
  }
  res[5] = tmp27;

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */, 6, Less);
  res[6] = ((tmp28 && tmp29)?data->localData[0]->realVars[141] /* pwLine3.ir.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */, 6, Less);
  res[7] = ((tmp30 && tmp31)?data->localData[0]->realVars[140] /* pwLine3.ir.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */, 1, Less);
  res[8] = ((tmp32 && tmp33)?data->localData[0]->realVars[120] /* pwLine.is.im variable */:data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */, 1, Less);
  res[9] = ((tmp34 && tmp35)?data->localData[0]->realVars[121] /* pwLine.is.re variable */:data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))))));

  res[10] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[11] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */, 1, Less);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[119] /* pwLine.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */, 12, Less);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[130] /* pwLine1.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */, 12, Less);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[131] /* pwLine1.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */, 8, Less);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[153] /* pwLine4.is.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */, 8, Less);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[152] /* pwLine4.is.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */, 8, Less);
  res[17] = ((tmp46 && tmp47)?data->localData[0]->realVars[150] /* pwLine4.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */, 8, Less);
  res[18] = ((tmp48 && tmp49)?data->localData[0]->realVars[151] /* pwLine4.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */, 12, Less);
  res[19] = ((tmp50 && tmp51)?data->localData[0]->realVars[129] /* pwLine1.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */, 12, Less);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[128] /* pwLine1.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */)))));

  res[21] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS882(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,8,11,11,8};
  const int rowIndex[112] = {1,12,13,14,1,10,11,12,1,12,13,14,1,10,11,12,5,15,16,5,6,7,4,6,7,4,15,16,1,2,3,12,1,2,3,12,17,18,19,20,17,18,19,20,0,17,18,21,0,17,18,21,13,16,17,18,19,20,21,0,14,15,17,18,19,20,1,8,9,12,1,8,9,12,2,4,5,6,7,15,16,17,1,2,3,6,9,10,11,12,13,14,19,1,2,3,7,8,10,11,12,13,14,20,3,4,5,6,7,15,16,18};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(112*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 112;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 112*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[20] = 1;
  inSysData->sparsePattern->colorCols[19] = 2;
  inSysData->sparsePattern->colorCols[17] = 3;
  inSysData->sparsePattern->colorCols[21] = 3;
  inSysData->sparsePattern->colorCols[16] = 4;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS882(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS882(sysData);
}

void getIterationVarsNLS882(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  array[1] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[2] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  array[3] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[4] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  array[5] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  array[6] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  array[9] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  array[10] = data->localData[0]->realVars[129] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  array[15] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  array[16] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  array[17] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  array[18] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  array[19] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  array[21] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 647
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 652
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->localData[0]->realVars[121] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 653
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->localData[0]->realVars[120] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 655
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->localData[0]->realVars[110] /* gENROE.ud variable */ = (-data->localData[0]->realVars[102] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 657
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 658
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->localData[0]->realVars[111] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 659
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[98] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 660
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[99] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[235] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[109] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[260] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[261] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[277] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[270] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[235] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eXAC2.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[234] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[108] /* gENROE.id variable */) * (data->simulationInfo->realParameter[270] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[260] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[261] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[100] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */,data->simulationInfo->realParameter[234] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[194] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[194] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->localData[0]->realVars[93] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[128] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[129] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[92] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->localData[0]->realVars[113] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->localData[0]->realVars[112] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[130] /* pwLine1.is.im variable */) - data->localData[0]->realVars[142] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 672
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - data->localData[0]->realVars[143] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}

void residualFunc699(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,699};
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
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  /* iteration variables */
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[1];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = xloc[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[3];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = xloc[4];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = xloc[8];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = xloc[9];
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = xloc[21];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = xloc[23];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_647(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_648(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_649(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_650(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_651(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_652(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_653(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_654(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_655(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_656(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_657(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_658(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_659(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_660(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_661(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_662(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_663(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_664(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_665(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_666(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_667(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_668(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_669(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_670(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_671(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_672(data, threadData);
  /* body */
  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[305] /* pwFault.R PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[306] /* pwFault.X PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[305] /* pwFault.R PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[306] /* pwFault.X PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */);
  res[2] = ((tmp22 && tmp23)?data->localData[0]->realVars[153] /* pwLine4.is.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))))));

  res[3] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp24 && tmp25)?data->localData[0]->realVars[152] /* pwLine4.is.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */)))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */);
  res[5] = ((tmp26 && tmp27)?data->localData[0]->realVars[151] /* pwLine4.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp28 && tmp29)?data->localData[0]->realVars[150] /* pwLine4.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */);
  res[7] = ((tmp30 && tmp31)?data->localData[0]->realVars[143] /* pwLine3.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp32 && tmp33)?data->localData[0]->realVars[142] /* pwLine3.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */)))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp34 && tmp35)?data->localData[0]->realVars[140] /* pwLine3.ir.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp36 && tmp37)?data->localData[0]->realVars[141] /* pwLine3.ir.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))))));

  res[11] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[12] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[130] /* pwLine1.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[131] /* pwLine1.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))))));

  res[15] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[129] /* pwLine1.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[128] /* pwLine1.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */)))));

  res[18] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[240] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[238] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;

  res[19] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[264] /* gENROE.Tppd0 PARAM */));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[121] /* pwLine.is.re variable */:data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[120] /* pwLine.is.im variable */:data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[119] /* pwLine.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[118] /* pwLine.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */)))));

  res[24] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[239] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K4q PARAM */));

  res[25] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[265] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS699(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[140] = {13,14,22,23,11,12,13,14,13,14,22,23,11,12,22,23,7,8,13,14,7,8,22,23,0,2,4,0,9,10,1,9,10,1,2,4,5,6,16,17,5,6,16,17,3,5,6,15,3,5,6,15,18,19,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,2,5,6,14,15,16,17,3,4,5,6,13,16,17,7,8,9,11,12,13,14,17,21,22,23,7,8,10,11,12,13,14,16,20,22,23,0,1,2,4,6,8,9,10,0,1,2,4,5,7,9,10};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(140*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 140;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 140*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[23] = 1;
  inSysData->sparsePattern->colorCols[22] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[25] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[24] = 4;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[4] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS699(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS699(sysData);
}

void getIterationVarsNLS699(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[2] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  array[3] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[4] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  array[5] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  array[9] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  array[10] = data->localData[0]->realVars[129] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[111] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  array[21] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  array[22] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  array[24] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 610
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.u1 = eXAC2.rectifierCommutationVoltageDrop.gain2.k * eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->localData[0]->realVars[77] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[173] /* eXAC2.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 611
type: SIMPLE_ASSIGN
eXAC2.EFD = eXAC2.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->localData[0]->realVars[62] /* eXAC2.EFD variable */ = data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[263] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 612
type: SIMPLE_ASSIGN
eXAC2.Ifd0 = eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[87] /* eXAC2.Ifd0 PARAM */ = data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 613
type: SIMPLE_ASSIGN
eXAC2.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eXAC2.K_C, eXAC2.Efd0, eXAC2.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->simulationInfo->realParameter[110] /* eXAC2.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[90] /* eXAC2.K_C PARAM */, data->simulationInfo->realParameter[86] /* eXAC2.Efd0 PARAM */, data->simulationInfo->realParameter[87] /* eXAC2.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 = eXAC2.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->simulationInfo->realParameter[176] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 PARAM */ = data->simulationInfo->realParameter[110] /* eXAC2.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start = eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[189] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */ = data->simulationInfo->realParameter[176] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 616
type: SIMPLE_ASSIGN
$START.eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->modelData->realVarsData[4].attribute /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[189] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */;
    data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->modelData->realVarsData[4].attribute /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y */.name, (modelica_real) data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 617
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->simulationInfo->realParameter[189] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.y = eXAC2.rectifierCommutationVoltageDrop.division.u1 / eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[77] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */,"eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.fEX.y = if eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eXAC2.rectifierCommutationVoltageDrop.division.y else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC2.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eXAC2.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eXAC2.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp0 = LessEq(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc621(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,621};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_610(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_611(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_612(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_613(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_614(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_615(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_616(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_617(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_618(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_619(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[62] /* eXAC2.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS621(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS621(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXAC2.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* eXAC2.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* eXAC2.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* eXAC2.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS621(sysData);
}

void getIterationVarsNLS621(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */;
}


/* inner equations */

/*
equation index: 51
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[121] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[120] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[110] /* gENROE.ud variable */ = (-data->localData[0]->realVars[102] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->localData[0]->realVars[111] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[98] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[99] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[235] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[109] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[277] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[260] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[261] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[277] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[270] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[235] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eXAC2.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[234] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[108] /* gENROE.id variable */) * (data->simulationInfo->realParameter[270] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[260] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[261] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[100] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */,data->simulationInfo->realParameter[234] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[194] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[194] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[93] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[128] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[129] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[92] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[113] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[112] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[130] /* pwLine1.is.im variable */) - data->localData[0]->realVars[142] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - data->localData[0]->realVars[143] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}

void residualFunc103(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,103};
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
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  /* iteration variables */
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[1];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = xloc[2];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[3];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = xloc[4];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = xloc[8];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = xloc[9];
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = xloc[21];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = xloc[23];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_76(data, threadData);
  /* body */
  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[305] /* pwFault.R PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[306] /* pwFault.X PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[307] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[305] /* pwFault.R PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[306] /* pwFault.X PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */);
  res[2] = ((tmp22 && tmp23)?data->localData[0]->realVars[153] /* pwLine4.is.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))))));

  res[3] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp24 && tmp25)?data->localData[0]->realVars[152] /* pwLine4.is.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */)))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */);
  res[5] = ((tmp26 && tmp27)?data->localData[0]->realVars[151] /* pwLine4.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp28 && tmp29)?data->localData[0]->realVars[150] /* pwLine4.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */);
  res[7] = ((tmp30 && tmp31)?data->localData[0]->realVars[143] /* pwLine3.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp32 && tmp33)?data->localData[0]->realVars[142] /* pwLine3.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */)))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp34 && tmp35)?data->localData[0]->realVars[140] /* pwLine3.ir.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp36 && tmp37)?data->localData[0]->realVars[141] /* pwLine3.ir.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))))));

  res[11] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[12] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[130] /* pwLine1.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[131] /* pwLine1.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))))));

  res[15] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[129] /* pwLine1.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[128] /* pwLine1.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */)))));

  res[18] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[240] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[238] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;

  res[19] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[264] /* gENROE.Tppd0 PARAM */));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[121] /* pwLine.is.re variable */:data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[120] /* pwLine.is.im variable */:data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[119] /* pwLine.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[118] /* pwLine.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */)))));

  res[24] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[239] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K4q PARAM */));

  res[25] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[276] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[271] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[265] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS103(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[140] = {13,14,22,23,11,12,13,14,13,14,22,23,11,12,22,23,7,8,13,14,7,8,22,23,0,2,4,0,9,10,1,9,10,1,2,4,5,6,16,17,5,6,16,17,3,5,6,15,3,5,6,15,18,19,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,2,5,6,14,15,16,17,3,4,5,6,13,16,17,7,8,9,11,12,13,14,17,21,22,23,7,8,10,11,12,13,14,16,20,22,23,0,1,2,4,6,8,9,10,0,1,2,4,5,7,9,10};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(140*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 140;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 140*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[23] = 1;
  inSysData->sparsePattern->colorCols[22] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[25] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[24] = 4;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[4] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS103(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS103(sysData);
}

void getIterationVarsNLS103(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[2] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  array[3] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[4] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  array[5] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  array[9] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  array[10] = data->localData[0]->realVars[129] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[111] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  array[21] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  array[22] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  array[24] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 14
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.u1 = eXAC2.rectifierCommutationVoltageDrop.gain2.k * eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[77] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[173] /* eXAC2.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 15
type: SIMPLE_ASSIGN
eXAC2.EFD = eXAC2.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[62] /* eXAC2.EFD variable */ = data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[263] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 16
type: SIMPLE_ASSIGN
eXAC2.Ifd0 = eXAC2.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->realParameter[87] /* eXAC2.Ifd0 PARAM */ = data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
eXAC2.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eXAC2.K_C, eXAC2.Efd0, eXAC2.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->simulationInfo->realParameter[110] /* eXAC2.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[90] /* eXAC2.K_C PARAM */, data->simulationInfo->realParameter[86] /* eXAC2.Efd0 PARAM */, data->simulationInfo->realParameter[87] /* eXAC2.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 = eXAC2.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->simulationInfo->realParameter[176] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 PARAM */ = data->simulationInfo->realParameter[110] /* eXAC2.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start = eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->simulationInfo->realParameter[189] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */ = data->simulationInfo->realParameter[176] /* eXAC2.rotatingExciterWithDemagnetizationLimited.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
$START.eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->modelData->realVarsData[4].attribute /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[189] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */;
    data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->modelData->realVarsData[4].attribute /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y */.name, (modelica_real) data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y = eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->simulationInfo->realParameter[189] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.division.y = eXAC2.rectifierCommutationVoltageDrop.division.u1 / eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[77] /* eXAC2.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */,"eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
eXAC2.rectifierCommutationVoltageDrop.fEX.y = if eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eXAC2.rectifierCommutationVoltageDrop.division.y else if eXAC2.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC2.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eXAC2.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC2.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eXAC2.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp0 = LessEq(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eXAC2.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[78] /* eXAC2.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc25(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,25};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_14(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_15(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_16(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_17(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_18(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_19(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_20(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_23(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[4] /* eXAC2.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[79] /* eXAC2.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[62] /* eXAC2.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS25(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS25(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXAC2.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* eXAC2.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* eXAC2.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* eXAC2.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS25(sysData);
}

void getIterationVarsNLS25(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[64] /* eXAC2.XADIFD variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 882;
  nonLinearSystemData[4].size = 22;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc882;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacNLSJac18_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianNLSJac18;
  nonLinearSystemData[4].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS882;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS882;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 699;
  nonLinearSystemData[3].size = 26;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc699;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS699;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS699;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 621;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc621;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS621;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS621;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 103;
  nonLinearSystemData[1].size = 26;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc103;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS103;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS103;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 25;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc25;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS25;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS25;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

