/* Non Linear Systems */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 121
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[94] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[43] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[43] /* constantLoad.v variable */, 0.5, 13, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[39] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[43] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 12, Less);
  data->localData[0]->realVars[40] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 124
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 11, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[37] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 11, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[36] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
gENSAE.PSId = gENSAE.PSIppd - gENSAE.Xppd * gENSAE.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[60] /* gENSAE.PSId variable */ = data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */ - ((data->simulationInfo->realParameter[149] /* gENSAE.Xppd PARAM */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */));
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENSAE.iq - $cse7 * gENSAE.id) * gENSAE.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[80] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[18] /* $cse6 variable */) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */) - ((data->localData[0]->realVars[19] /* $cse7 variable */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */))) * (data->simulationInfo->realParameter[102] /* gENSAE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENSAE.iq - (-$cse6) * gENSAE.id) * gENSAE.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[81] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[19] /* $cse7 variable */) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */) - (((-data->localData[0]->realVars[18] /* $cse6 variable */)) * (data->localData[0]->realVars[68] /* gENSAE.id variable */))) * (data->simulationInfo->realParameter[102] /* gENSAE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
gENSAE.uq = gENSAE.PSId - gENSAE.R_a * gENSAE.iq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[71] /* gENSAE.uq variable */ = data->localData[0]->realVars[60] /* gENSAE.PSId variable */ - ((data->simulationInfo->realParameter[134] /* gENSAE.R_a PARAM */) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */));
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
gENSAE.PSIq = (-gENSAE.PSIppq) - gENSAE.Xppq * gENSAE.iq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[63] /* gENSAE.PSIq variable */ = (-data->localData[0]->realVars[4] /* gENSAE.PSIppq STATE(1) */) - ((data->simulationInfo->realParameter[150] /* gENSAE.Xppq PARAM */) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */));
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
gENSAE.ud = (-gENSAE.PSIq) - gENSAE.R_a * gENSAE.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[70] /* gENSAE.ud variable */ = (-data->localData[0]->realVars[63] /* gENSAE.PSIq variable */) - ((data->simulationInfo->realParameter[134] /* gENSAE.R_a PARAM */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */));
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENSAE.uq - $cse7 * gENSAE.ud
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[82] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[18] /* $cse6 variable */) * (data->localData[0]->realVars[71] /* gENSAE.uq variable */) - ((data->localData[0]->realVars[19] /* $cse7 variable */) * (data->localData[0]->realVars[70] /* gENSAE.ud variable */));
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENSAE.ud + $cse7 * gENSAE.uq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[83] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[18] /* $cse6 variable */) * (data->localData[0]->realVars[70] /* gENSAE.ud variable */) + (data->localData[0]->realVars[19] /* $cse7 variable */) * (data->localData[0]->realVars[71] /* gENSAE.uq variable */);
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[52] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[14] /* $cse1 variable */)) * (data->localData[0]->realVars[48] /* gENCLS.id variable */) - ((data->localData[0]->realVars[15] /* $cse2 variable */) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[51] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[15] /* $cse2 variable */) * (data->localData[0]->realVars[48] /* gENCLS.id variable */) - ((data->localData[0]->realVars[14] /* $cse1 variable */) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[54] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[48] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[53] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[48] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[89] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[111] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[52] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[88] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[110] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[51] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[102] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[78] /* pwLine.ir.im variable */) - data->localData[0]->realVars[90] /* pwLine1.is.im variable */ - data->localData[0]->realVars[41] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
pwLine.ir.re = (-pwLine1.is.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[79] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[91] /* pwLine1.is.re variable */) - data->localData[0]->realVars[103] /* pwLine3.is.re variable */ - data->localData[0]->realVars[42] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->realVars[72] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[100] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[112] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[73] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[101] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[113] /* pwLine4.is.re variable */;
  TRACE_POP
}

void residualFunc211(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,211};
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
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
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
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
  modelica_boolean tmp40;
  modelica_real tmp41;
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
  data->localData[0]->realVars[113] /* pwLine4.is.re variable */ = xloc[0];
  data->localData[0]->realVars[101] /* pwLine3.ir.re variable */ = xloc[1];
  data->localData[0]->realVars[112] /* pwLine4.is.im variable */ = xloc[2];
  data->localData[0]->realVars[100] /* pwLine3.ir.im variable */ = xloc[3];
  data->localData[0]->realVars[103] /* pwLine3.is.re variable */ = xloc[4];
  data->localData[0]->realVars[42] /* constantLoad.p.ir variable */ = xloc[5];
  data->localData[0]->realVars[78] /* pwLine.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[41] /* constantLoad.p.ii variable */ = xloc[7];
  data->localData[0]->realVars[90] /* pwLine1.is.im variable */ = xloc[8];
  data->localData[0]->realVars[91] /* pwLine1.is.re variable */ = xloc[9];
  data->localData[0]->realVars[110] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[111] /* pwLine4.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[49] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[48] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[69] /* gENSAE.iq variable */ = xloc[16];
  data->localData[0]->realVars[68] /* gENSAE.id variable */ = xloc[17];
  data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ = xloc[18];
  data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_121(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_122(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_123(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_124(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_125(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_126(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_127(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_128(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_129(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_130(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_131(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_132(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_133(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_134(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_135(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_136(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_137(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_138(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_139(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_140(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_141(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_142(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_143(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[14] /* $cse1 variable */) * (data->localData[0]->realVars[54] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[15] /* $cse2 variable */)) * (data->localData[0]->realVars[53] /* gENCLS.vd variable */) - data->localData[0]->realVars[92] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, 3, Less);
  res[1] = ((tmp0 && tmp1)?data->localData[0]->realVars[91] /* pwLine1.is.re variable */:data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[91] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[90] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, 3, Less);
  res[2] = ((tmp2 && tmp3)?data->localData[0]->realVars[90] /* pwLine1.is.im variable */:data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[90] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[91] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */)))));

  res[3] = (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[37] /* constantLoad.Q variable */;

  res[4] = (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[36] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, 1, Less);
  res[5] = ((tmp4 && tmp5)?data->localData[0]->realVars[81] /* pwLine.is.re variable */:data->localData[0]->realVars[83] /* pwLine.vs.re variable */ - data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[81] /* pwLine.is.re variable */ + (data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[83] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[80] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[83] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, 1, Less);
  res[6] = ((tmp6 && tmp7)?data->localData[0]->realVars[80] /* pwLine.is.im variable */:data->localData[0]->realVars[82] /* pwLine.vs.im variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[80] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[83] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[81] /* pwLine.is.re variable */ + (data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[83] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, 1, Less);
  res[7] = ((tmp8 && tmp9)?data->localData[0]->realVars[78] /* pwLine.ir.im variable */:data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[82] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[78] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[79] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, 7, Less);
  res[8] = ((tmp10 && tmp11)?data->localData[0]->realVars[102] /* pwLine3.is.im variable */:data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[102] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[103] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[181] /* pwFault.t1 PARAM */, 8, Less);
  tmp21 = (modelica_boolean)tmp12;
  if(tmp21)
  {
    tmp22 = data->localData[0]->realVars[72] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, 9, Less);
    tmp19 = (modelica_boolean)(tmp13 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp19)
    {
      tmp20 = data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, 9, Less);
      tmp17 = (modelica_boolean)tmp14;
      if(tmp17)
      {
        tmp15 = data->simulationInfo->realParameter[180] /* pwFault.X PARAM */;
        tmp16 = data->simulationInfo->realParameter[179] /* pwFault.R PARAM */;
        tmp18 = data->localData[0]->realVars[72] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[179] /* pwFault.R PARAM */) * (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[180] /* pwFault.X PARAM */) * (data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)),(tmp15 * tmp15) + (tmp16 * tmp16),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp18 = data->localData[0]->realVars[72] /* pwFault.p.ii variable */;
      }
      tmp20 = tmp18;
    }
    tmp22 = tmp20;
  }
  res[9] = tmp22;

  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, 7, Less);
  res[10] = ((tmp23 && tmp24)?data->localData[0]->realVars[103] /* pwLine3.is.re variable */:data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[103] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[102] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, 1, Less);
  res[11] = ((tmp25 && tmp26)?data->localData[0]->realVars[79] /* pwLine.ir.re variable */:data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[83] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[79] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[78] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, 7, Less);
  res[12] = ((tmp27 && tmp28)?data->localData[0]->realVars[101] /* pwLine3.ir.re variable */:data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[101] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[100] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, 7, Less);
  res[13] = ((tmp29 && tmp30)?data->localData[0]->realVars[100] /* pwLine3.ir.im variable */:data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[100] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[101] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[181] /* pwFault.t1 PARAM */, 8, Less);
  tmp40 = (modelica_boolean)tmp31;
  if(tmp40)
  {
    tmp41 = data->localData[0]->realVars[73] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, 9, Less);
    tmp38 = (modelica_boolean)(tmp32 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp38)
    {
      tmp39 = data->localData[0]->realVars[104] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, 9, Less);
      tmp36 = (modelica_boolean)tmp33;
      if(tmp36)
      {
        tmp34 = data->simulationInfo->realParameter[179] /* pwFault.R PARAM */;
        tmp35 = data->simulationInfo->realParameter[180] /* pwFault.X PARAM */;
        tmp37 = data->localData[0]->realVars[73] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[179] /* pwFault.R PARAM */) * (data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[180] /* pwFault.X PARAM */) * (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */),(tmp34 * tmp34) + (tmp35 * tmp35),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp37 = data->localData[0]->realVars[73] /* pwFault.p.ir variable */;
      }
      tmp39 = tmp37;
    }
    tmp41 = tmp39;
  }
  res[14] = tmp41;

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, 5, Less);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[112] /* pwLine4.is.im variable */:data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[112] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, 5, Less);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[113] /* pwLine4.is.re variable */:data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[112] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))))));

  res[17] = (data->localData[0]->realVars[15] /* $cse2 variable */) * (data->localData[0]->realVars[54] /* gENCLS.vq variable */) + (data->localData[0]->realVars[14] /* $cse1 variable */) * (data->localData[0]->realVars[53] /* gENCLS.vd variable */) - data->localData[0]->realVars[93] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, 3, Less);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[89] /* pwLine1.ir.re variable */:data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[89] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[88] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, 3, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[88] /* pwLine1.ir.im variable */:data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[88] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[89] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, 5, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[111] /* pwLine4.ir.re variable */:data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[111] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[110] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, 5, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[110] /* pwLine4.ir.im variable */:data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[110] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[111] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */)))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS211(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,8,11,8,11};
  const int rowIndex[112] = {14,15,16,12,13,14,9,15,16,9,12,13,7,8,10,11,3,4,7,11,7,8,10,11,3,4,8,10,1,2,8,10,1,2,7,11,18,19,20,21,18,19,20,21,0,17,18,19,0,17,18,19,0,2,15,18,19,20,21,1,16,17,18,19,20,21,5,6,7,11,5,6,7,11,8,9,12,13,14,15,16,21,1,2,3,4,5,7,8,10,11,12,18,9,10,12,13,14,15,16,20,1,2,3,4,6,7,8,10,11,13,19};
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
  inSysData->sparsePattern->colorCols[21] = 1;
  inSysData->sparsePattern->colorCols[20] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[9] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[2] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[3] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS211(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* pwLine3.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* pwLine.ir.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine4.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[93].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[93].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[93].attribute /* pwLine1.vr.re */.max;
  /* static nls data for gENSAE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* gENSAE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* gENSAE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* gENSAE.iq */.max;
  /* static nls data for gENSAE.id */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* gENSAE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* gENSAE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* gENSAE.id */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS211(sysData);
}

void getIterationVarsNLS211(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[113] /* pwLine4.is.re variable */;
  array[1] = data->localData[0]->realVars[101] /* pwLine3.ir.re variable */;
  array[2] = data->localData[0]->realVars[112] /* pwLine4.is.im variable */;
  array[3] = data->localData[0]->realVars[100] /* pwLine3.ir.im variable */;
  array[4] = data->localData[0]->realVars[103] /* pwLine3.is.re variable */;
  array[5] = data->localData[0]->realVars[42] /* constantLoad.p.ir variable */;
  array[6] = data->localData[0]->realVars[78] /* pwLine.ir.im variable */;
  array[7] = data->localData[0]->realVars[41] /* constantLoad.p.ii variable */;
  array[8] = data->localData[0]->realVars[90] /* pwLine1.is.im variable */;
  array[9] = data->localData[0]->realVars[91] /* pwLine1.is.re variable */;
  array[10] = data->localData[0]->realVars[110] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[111] /* pwLine4.ir.re variable */;
  array[12] = data->localData[0]->realVars[49] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[48] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[92] /* pwLine1.vr.im variable */;
  array[15] = data->localData[0]->realVars[93] /* pwLine1.vr.re variable */;
  array[16] = data->localData[0]->realVars[69] /* gENSAE.iq variable */;
  array[17] = data->localData[0]->realVars[68] /* gENSAE.id variable */;
  array[18] = data->localData[0]->realVars[104] /* pwLine3.vr.im variable */;
  array[19] = data->localData[0]->realVars[95] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[105] /* pwLine3.vr.re variable */;
  array[21] = data->localData[0]->realVars[94] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 19
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[94] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[43] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[43] /* constantLoad.v variable */,data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[40] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
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
  tmp0 = Less(data->localData[0]->realVars[43] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[39] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[37] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[36] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENSAE.delta) * gENSAE.iq - (-sin(gENSAE.delta)) * gENSAE.id) * gENSAE.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[81] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */)) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */) - (((-sin(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */))) * (data->localData[0]->realVars[68] /* gENSAE.id variable */))) * (data->simulationInfo->realParameter[102] /* gENSAE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENSAE.delta) * gENSAE.iq - cos(gENSAE.delta) * gENSAE.id) * gENSAE.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[80] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */)) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */) - ((cos(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */)) * (data->localData[0]->realVars[68] /* gENSAE.id variable */))) * (data->simulationInfo->realParameter[102] /* gENSAE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
gENSAE.PSId = gENSAE.PSIppd - gENSAE.Xppd * gENSAE.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[60] /* gENSAE.PSId variable */ = data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */ - ((data->simulationInfo->realParameter[149] /* gENSAE.Xppd PARAM */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */));
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
gENSAE.uq = gENSAE.PSId - gENSAE.R_a * gENSAE.iq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[71] /* gENSAE.uq variable */ = data->localData[0]->realVars[60] /* gENSAE.PSId variable */ - ((data->simulationInfo->realParameter[134] /* gENSAE.R_a PARAM */) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */));
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENSAE.delta) * gENSAE.ud + cos(gENSAE.delta) * gENSAE.uq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[83] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */)) * (data->localData[0]->realVars[70] /* gENSAE.ud variable */) + (cos(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */)) * (data->localData[0]->realVars[71] /* gENSAE.uq variable */);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENSAE.delta) * gENSAE.uq - cos(gENSAE.delta) * gENSAE.ud
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[82] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */)) * (data->localData[0]->realVars[71] /* gENSAE.uq variable */) - ((cos(data->localData[0]->realVars[5] /* gENSAE.delta STATE(1) */)) * (data->localData[0]->realVars[70] /* gENSAE.ud variable */));
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
gENSAE.PSIq = (-gENSAE.R_a) * gENSAE.id - gENSAE.ud
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[63] /* gENSAE.PSIq variable */ = ((-data->simulationInfo->realParameter[134] /* gENSAE.R_a PARAM */)) * (data->localData[0]->realVars[68] /* gENSAE.id variable */) - data->localData[0]->realVars[70] /* gENSAE.ud variable */;
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
gENSAE.PSIppq = (-gENSAE.Xppq) * gENSAE.iq - gENSAE.PSIq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[4] /* gENSAE.PSIppq STATE(1) */ = ((-data->simulationInfo->realParameter[150] /* gENSAE.Xppq PARAM */)) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */) - data->localData[0]->realVars[63] /* gENSAE.PSIq variable */;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
gENSAE.PSIpp = sqrt(gENSAE.PSIppd ^ 2.0 + gENSAE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[4] /* gENSAE.PSIppq STATE(1) */;
  data->localData[0]->realVars[61] /* gENSAE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
gENSAE.PSIkd = (gENSAE.Epq + (gENSAE.Epq + (gENSAE.Xl - gENSAE.Xpd) * gENSAE.id) * gENSAE.K1d + (gENSAE.Xd - gENSAE.Xpd) * gENSAE.id + OpenIPSL.NonElectrical.Functions.SE_exp(gENSAE.PSIpp, gENSAE.S10, gENSAE.S12, 1.0, 1.2) * gENSAE.PSIppd - gENSAE.ISORCE) / gENSAE.K1d
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[3] /* gENSAE.PSIkd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */ + (data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */ + (data->simulationInfo->realParameter[147] /* gENSAE.Xl PARAM */ - data->simulationInfo->realParameter[148] /* gENSAE.Xpd PARAM */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */)) * (data->simulationInfo->realParameter[116] /* gENSAE.K1d PARAM */) + (data->simulationInfo->realParameter[146] /* gENSAE.Xd PARAM */ - data->simulationInfo->realParameter[148] /* gENSAE.Xpd PARAM */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[61] /* gENSAE.PSIpp variable */, data->simulationInfo->realParameter[137] /* gENSAE.S10 PARAM */, data->simulationInfo->realParameter[138] /* gENSAE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */) - data->localData[0]->realVars[57] /* gENSAE.ISORCE variable */,data->simulationInfo->realParameter[116] /* gENSAE.K1d PARAM */,"gENSAE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[52] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[48] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[51] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[48] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[54] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[48] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[53] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[48] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[110] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[88] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[51] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[89] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[111] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[52] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[73] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[101] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[113] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[72] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[100] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[112] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[91] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[79] /* pwLine.ir.re variable */) - data->localData[0]->realVars[103] /* pwLine3.is.re variable */ - data->localData[0]->realVars[42] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[102] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[78] /* pwLine.ir.im variable */) - data->localData[0]->realVars[90] /* pwLine1.is.im variable */ - data->localData[0]->realVars[41] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc69(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,69};
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
  for (i=0; i<25; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<25; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[78] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[90] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[79] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[42] /* constantLoad.p.ir variable */ = xloc[3];
  data->localData[0]->realVars[41] /* constantLoad.p.ii variable */ = xloc[4];
  data->localData[0]->realVars[103] /* pwLine3.is.re variable */ = xloc[5];
  data->localData[0]->realVars[112] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[100] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[113] /* pwLine4.is.re variable */ = xloc[8];
  data->localData[0]->realVars[101] /* pwLine3.ir.re variable */ = xloc[9];
  data->localData[0]->realVars[111] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[88] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[49] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[48] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[70] /* gENSAE.ud variable */ = xloc[15];
  data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[69] /* gENSAE.iq variable */ = xloc[17];
  data->localData[0]->realVars[68] /* gENSAE.id variable */ = xloc[18];
  data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ = xloc[19];
  data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ = xloc[21];
  data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ = xloc[23];
  data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ = xloc[24];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_19(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_20(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_23(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_25(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_30(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_32(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_33(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_34(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_35(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_36(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_37(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_43(data, threadData);
  /* body */
  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[181] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[72] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[180] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[179] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[72] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[179] /* pwFault.R PARAM */) * (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[180] /* pwFault.X PARAM */) * (data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[72] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[181] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[73] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[104] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[179] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[180] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[73] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[179] /* pwFault.R PARAM */) * (data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[180] /* pwFault.X PARAM */) * (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[73] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  res[2] = (cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[54] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[53] /* gENCLS.vd variable */) - data->localData[0]->realVars[93] /* pwLine1.vr.re variable */;

  res[3] = (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[54] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[53] /* gENCLS.vd variable */) - data->localData[0]->realVars[92] /* pwLine1.vr.im variable */;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp22 && tmp23)?data->localData[0]->realVars[113] /* pwLine4.is.re variable */:data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[112] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */);
  res[5] = ((tmp24 && tmp25)?data->localData[0]->realVars[112] /* pwLine4.is.im variable */:data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[112] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */)))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp26 && tmp27)?data->localData[0]->realVars[111] /* pwLine4.ir.re variable */:data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[111] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[110] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */);
  res[7] = ((tmp28 && tmp29)?data->localData[0]->realVars[110] /* pwLine4.ir.im variable */:data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[110] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[111] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[103] /* pwLine3.is.re variable */:data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[103] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[102] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))))));

  res[9] = (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[37] /* constantLoad.Q variable */;

  res[10] = (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[36] /* constantLoad.P variable */;

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp32 && tmp33)?data->localData[0]->realVars[90] /* pwLine1.is.im variable */:data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[90] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[91] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */)))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp34 && tmp35)?data->localData[0]->realVars[91] /* pwLine1.is.re variable */:data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[91] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[90] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[88] /* pwLine1.ir.im variable */:data->localData[0]->realVars[92] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[88] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[89] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[89] /* pwLine1.ir.re variable */:data->localData[0]->realVars[93] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[89] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[93] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[88] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[93] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[92] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[81] /* pwLine.is.re variable */:data->localData[0]->realVars[83] /* pwLine.vs.re variable */ - data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[81] /* pwLine.is.re variable */ + (data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[83] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[80] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[83] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[101] /* pwLine3.ir.re variable */:data->localData[0]->realVars[105] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[101] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[100] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[100] /* pwLine3.ir.im variable */:data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[100] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[105] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[101] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[104] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[105] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */)))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[102] /* pwLine3.is.im variable */:data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[104] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[102] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[103] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[79] /* pwLine.ir.re variable */:data->localData[0]->realVars[95] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[83] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[79] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[78] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[78] /* pwLine.ir.im variable */:data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[82] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[78] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[95] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[79] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[80] /* pwLine.is.im variable */:data->localData[0]->realVars[82] /* pwLine.vs.im variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[80] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[83] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[81] /* pwLine.is.re variable */ + (data->localData[0]->realVars[82] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[83] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */)))));

  res[22] = (data->simulationInfo->realParameter[151] /* gENSAE.Xq PARAM */ - data->simulationInfo->realParameter[150] /* gENSAE.Xppq PARAM */) * (data->localData[0]->realVars[69] /* gENSAE.iq variable */) + ((-data->localData[0]->realVars[4] /* gENSAE.PSIppq STATE(1) */)) * ((data->simulationInfo->realParameter[151] /* gENSAE.Xq PARAM */ - data->simulationInfo->realParameter[147] /* gENSAE.Xl PARAM */) * (DIVISION_SIM(omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[61] /* gENSAE.PSIpp variable */, data->simulationInfo->realParameter[137] /* gENSAE.S10 PARAM */, data->simulationInfo->realParameter[138] /* gENSAE.S12 PARAM */, 1.0, 1.2),data->simulationInfo->realParameter[146] /* gENSAE.Xd PARAM */ - data->simulationInfo->realParameter[147] /* gENSAE.Xl PARAM */,"gENSAE.Xd - gENSAE.Xl",equationIndexes))) - ((data->localData[0]->realVars[11] /* der(gENSAE.PSIppq) STATE_DER */) * (data->simulationInfo->realParameter[142] /* gENSAE.Tppq0 PARAM */)) - data->localData[0]->realVars[4] /* gENSAE.PSIppq STATE(1) */;

  res[23] = (data->localData[0]->realVars[3] /* gENSAE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[119] /* gENSAE.K4d PARAM */) + (data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */) * (data->simulationInfo->realParameter[118] /* gENSAE.K3d PARAM */) - data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */;

  res[24] = data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */ + (data->simulationInfo->realParameter[147] /* gENSAE.Xl PARAM */ - data->simulationInfo->realParameter[148] /* gENSAE.Xpd PARAM */) * (data->localData[0]->realVars[68] /* gENSAE.id variable */) + (-data->localData[0]->realVars[3] /* gENSAE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[10] /* der(gENSAE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[141] /* gENSAE.Tppd0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS69(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+25] = {0,4,4,4,4,4,4,3,3,3,3,4,4,6,6,2,7,7,7,7,7,7,8,8,11,11};
  const int rowIndex[138] = {8,18,19,20,8,11,12,18,11,12,19,20,9,10,11,12,8,9,10,18,8,11,12,18,0,4,5,0,16,17,1,4,5,1,16,17,6,7,13,14,6,7,13,14,2,3,6,7,13,14,2,3,6,7,13,14,23,24,15,19,20,21,22,23,24,15,19,20,21,22,23,24,15,19,20,21,22,23,24,15,19,20,21,22,23,24,2,4,6,7,12,13,14,3,5,6,7,11,13,14,0,1,4,5,7,16,17,18,0,1,4,5,6,8,16,17,8,9,10,11,12,14,15,16,18,19,20,8,9,10,11,12,13,17,18,19,20,21};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((25+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(138*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 138;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(25*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (25+1)*sizeof(int));
  
  for(i=2;i<25+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 138*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[24] = 1;
  inSysData->sparsePattern->colorCols[23] = 2;
  inSysData->sparsePattern->colorCols[22] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[18] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[17] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[5] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[16] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[4] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[15] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[3] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[9] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
}
void initializeStaticDataNLS69(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[79].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[79].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[79].attribute /* pwLine.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* gENCLS.id */.max;
  /* static nls data for gENSAE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[2].attribute /* gENSAE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2].attribute /* gENSAE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2].attribute /* gENSAE.Epq */.max;
  /* static nls data for gENSAE.ud */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* gENSAE.ud */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* gENSAE.ud */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* gENSAE.ud */.max;
  /* static nls data for gENSAE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[62].attribute /* gENSAE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[62].attribute /* gENSAE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[62].attribute /* gENSAE.PSIppd */.max;
  /* static nls data for gENSAE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* gENSAE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* gENSAE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* gENSAE.iq */.max;
  /* static nls data for gENSAE.id */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* gENSAE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* gENSAE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* gENSAE.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[93].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[93].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[93].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS69(sysData);
}

void getIterationVarsNLS69(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[78] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[90] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[79] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[42] /* constantLoad.p.ir variable */;
  array[4] = data->localData[0]->realVars[41] /* constantLoad.p.ii variable */;
  array[5] = data->localData[0]->realVars[103] /* pwLine3.is.re variable */;
  array[6] = data->localData[0]->realVars[112] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[100] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[113] /* pwLine4.is.re variable */;
  array[9] = data->localData[0]->realVars[101] /* pwLine3.ir.re variable */;
  array[10] = data->localData[0]->realVars[111] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[88] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[49] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[48] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[2] /* gENSAE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[70] /* gENSAE.ud variable */;
  array[16] = data->localData[0]->realVars[62] /* gENSAE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[69] /* gENSAE.iq variable */;
  array[18] = data->localData[0]->realVars[68] /* gENSAE.id variable */;
  array[19] = data->localData[0]->realVars[93] /* pwLine1.vr.re variable */;
  array[20] = data->localData[0]->realVars[92] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[104] /* pwLine3.vr.im variable */;
  array[22] = data->localData[0]->realVars[105] /* pwLine3.vr.re variable */;
  array[23] = data->localData[0]->realVars[95] /* pwLine1.vs.re variable */;
  array[24] = data->localData[0]->realVars[94] /* pwLine1.vs.im variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Machines_PSSE_GENSAE_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 211;
  nonLinearSystemData[1].size = 22;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc211;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacNLSJac9_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianNLSJac9;
  nonLinearSystemData[1].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS211;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS211;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 69;
  nonLinearSystemData[0].size = 25;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc69;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS69;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS69;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

