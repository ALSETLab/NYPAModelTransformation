/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 160
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[49] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[49] /* constantLoad.v variable */, data->simulationInfo->realParameter[39] /* constantLoad.PQBRAK PARAM */, 6, Less);
  data->localData[0]->realVars[46] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[58] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[59] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[65] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[49] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[60] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[60] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[45] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_t PARAM */, 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[68] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[43] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_t PARAM */, 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[42] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
gENROU.PSId = gENROU.PSIppd - gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[65] /* gENROU.PSId variable */ = data->localData[0]->realVars[67] /* gENROU.PSIppd variable */ - ((data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[76] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROU.iq - $cse7 * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[88] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[24] /* $cse6 variable */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */) - ((data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[76] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROU.iq - (-$cse6) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[89] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */) - (((-data->localData[0]->realVars[24] /* $cse6 variable */)) * (data->localData[0]->realVars[76] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
gENROU.uq = gENROU.PSId - gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[79] /* gENROU.uq variable */ = data->localData[0]->realVars[65] /* gENROU.PSId variable */ - ((data->simulationInfo->realParameter[143] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
gENROU.PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[69] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[68] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
gENROU.ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[78] /* gENROU.ud variable */ = (-data->localData[0]->realVars[69] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[143] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[76] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROU.ud + $cse7 * gENROU.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[91] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[24] /* $cse6 variable */) * (data->localData[0]->realVars[78] /* gENROU.ud variable */) + (data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[79] /* gENROU.uq variable */);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROU.uq - $cse7 * gENROU.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[90] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[24] /* $cse6 variable */) * (data->localData[0]->realVars[79] /* gENROU.uq variable */) - ((data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[78] /* gENROU.ud variable */));
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[58] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[20] /* $cse1 variable */)) * (data->localData[0]->realVars[54] /* gENCLS.id variable */) - ((data->localData[0]->realVars[21] /* $cse2 variable */) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[80] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[57] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[21] /* $cse2 variable */) * (data->localData[0]->realVars[54] /* gENCLS.id variable */) - ((data->localData[0]->realVars[20] /* $cse1 variable */) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[80] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[59] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[89] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[86] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[54] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[60] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[86] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[89] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[54] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[118] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[57] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[97] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[58] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[81] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[109] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[80] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[108] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[99] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[87] /* pwLine.ir.re variable */) - data->localData[0]->realVars[111] /* pwLine3.is.re variable */ - data->localData[0]->realVars[48] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[47] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[86] /* pwLine.ir.im variable */) - data->localData[0]->realVars[98] /* pwLine1.is.im variable */ - data->localData[0]->realVars[110] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc250(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,250};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
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
  data->localData[0]->realVars[86] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[98] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[48] /* constantLoad.p.ir variable */ = xloc[2];
  data->localData[0]->realVars[87] /* pwLine.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[120] /* pwLine4.is.im variable */ = xloc[5];
  data->localData[0]->realVars[121] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[111] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[110] /* pwLine3.is.im variable */ = xloc[9];
  data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[55] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[54] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[77] /* gENROU.iq variable */ = xloc[16];
  data->localData[0]->realVars[76] /* gENROU.id variable */ = xloc[17];
  data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ = xloc[18];
  data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_160(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_161(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_162(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_163(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_164(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_165(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_166(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_167(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_168(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_169(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_170(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_171(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_172(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_173(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_174(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_175(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_176(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_177(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_178(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_179(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_180(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_181(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_182(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */, 9, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[110] /* pwLine3.is.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */, 9, Less);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[111] /* pwLine3.is.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwFault.t1 PARAM */, 12, Less);
  tmp13 = (modelica_boolean)tmp4;
  if(tmp13)
  {
    tmp14 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */, 13, Less);
    tmp11 = (modelica_boolean)(tmp5 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp11)
    {
      tmp12 = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */, 13, Less);
      tmp9 = (modelica_boolean)tmp6;
      if(tmp9)
      {
        tmp7 = data->simulationInfo->realParameter[191] /* pwFault.R PARAM */;
        tmp8 = data->simulationInfo->realParameter[192] /* pwFault.X PARAM */;
        tmp10 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[191] /* pwFault.R PARAM */) * (data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[192] /* pwFault.X PARAM */) * (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */),(tmp7 * tmp7) + (tmp8 * tmp8),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp10 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */;
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  res[2] = tmp14;

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */, 11, Less);
  res[3] = ((tmp15 && tmp16)?data->localData[0]->realVars[121] /* pwLine4.is.re variable */:data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */, 11, Less);
  res[4] = ((tmp17 && tmp18)?data->localData[0]->realVars[120] /* pwLine4.is.im variable */:data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwFault.t1 PARAM */, 12, Less);
  tmp28 = (modelica_boolean)tmp19;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */, 13, Less);
    tmp26 = (modelica_boolean)(tmp20 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp26)
    {
      tmp27 = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */, 13, Less);
      tmp24 = (modelica_boolean)tmp21;
      if(tmp24)
      {
        tmp22 = data->simulationInfo->realParameter[192] /* pwFault.X PARAM */;
        tmp23 = data->simulationInfo->realParameter[191] /* pwFault.R PARAM */;
        tmp25 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[191] /* pwFault.R PARAM */) * (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[192] /* pwFault.X PARAM */) * (data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)),(tmp22 * tmp22) + (tmp23 * tmp23),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp25 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */;
      }
      tmp27 = tmp25;
    }
    tmp29 = tmp27;
  }
  res[5] = tmp29;

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */, 9, Less);
  res[6] = ((tmp30 && tmp31)?data->localData[0]->realVars[108] /* pwLine3.ir.im variable */:data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */, 9, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[109] /* pwLine3.ir.re variable */:data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */, 1, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[86] /* pwLine.ir.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[90] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */, 1, Less);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[88] /* pwLine.is.im variable */:data->localData[0]->realVars[90] /* pwLine.vs.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */, 1, Less);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[89] /* pwLine.is.re variable */:data->localData[0]->realVars[91] /* pwLine.vs.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))))));

  res[11] = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[43] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */, 3, Less);
  res[12] = ((tmp40 && tmp41)?data->localData[0]->realVars[99] /* pwLine1.is.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))))));

  res[13] = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[42] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */, 1, Less);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[87] /* pwLine.ir.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[91] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */, 3, Less);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[98] /* pwLine1.is.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */)))));

  res[16] = (data->localData[0]->realVars[20] /* $cse1 variable */) * (data->localData[0]->realVars[60] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[21] /* $cse2 variable */)) * (data->localData[0]->realVars[59] /* gENCLS.vd variable */) - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;

  res[17] = (data->localData[0]->realVars[21] /* $cse2 variable */) * (data->localData[0]->realVars[60] /* gENCLS.vq variable */) + (data->localData[0]->realVars[20] /* $cse1 variable */) * (data->localData[0]->realVars[59] /* gENCLS.vd variable */) - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */, 11, Less);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[119] /* pwLine4.ir.re variable */:data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */, 3, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[97] /* pwLine1.ir.re variable */:data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */, 3, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[96] /* pwLine1.ir.im variable */:data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */, 11, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[118] /* pwLine4.ir.im variable */:data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */)))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS250(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {8,11,13,14,11,12,13,15,11,12,13,15,8,12,14,15,5,6,7,3,4,5,2,3,4,2,6,7,0,1,12,15,0,1,11,13,18,19,20,21,18,19,20,21,16,17,18,19,20,21,16,17,18,19,20,21,3,12,17,18,19,20,21,4,15,16,18,19,20,21,8,9,10,14,8,9,10,14,0,1,6,8,9,11,12,13,14,15,20,0,1,7,8,10,11,12,13,14,15,19,0,2,3,4,5,6,7,21,1,2,3,4,5,6,7,18};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(116*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 116;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 116*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[21] = 1;
  inSysData->sparsePattern->colorCols[20] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[9] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS250(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[98].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[98].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[98].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine4.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* gENROU.iq */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* gENROU.id */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS250(sysData);
}

void getIterationVarsNLS250(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[86] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[98] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[48] /* constantLoad.p.ir variable */;
  array[3] = data->localData[0]->realVars[87] /* pwLine.ir.re variable */;
  array[4] = data->localData[0]->realVars[108] /* pwLine3.ir.im variable */;
  array[5] = data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  array[6] = data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[109] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[111] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[110] /* pwLine3.is.im variable */;
  array[10] = data->localData[0]->realVars[97] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[118] /* pwLine4.ir.im variable */;
  array[12] = data->localData[0]->realVars[55] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[54] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[77] /* gENROU.iq variable */;
  array[17] = data->localData[0]->realVars[76] /* gENROU.id variable */;
  array[18] = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  array[19] = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
  array[21] = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 18
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[49] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[49] /* constantLoad.v variable */,data->simulationInfo->realParameter[39] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[46] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[58] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[59] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[65] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
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
  tmp0 = Less(data->localData[0]->realVars[49] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[60] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[66] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[60] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[45] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[68] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[43] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[42] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
sCRX.negCurLogic.Crowbar_V = if sCRX.negCurLogic.RC_rfd == 0.0 then 0.0 else (-sCRX.negCurLogic.RC_rfd) * gENROU.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[130] /* sCRX.negCurLogic.Crowbar_V variable */ = ((data->simulationInfo->realParameter[283] /* sCRX.negCurLogic.RC_rfd PARAM */ == 0.0)?0.0:((-data->simulationInfo->realParameter[283] /* sCRX.negCurLogic.RC_rfd PARAM */)) * (data->localData[0]->realVars[72] /* gENROU.XADIFD variable */));
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
gENROU.EFD = gENROU.XADIFD + $DER.gENROU.Epq * gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[61] /* gENROU.EFD variable */ = data->localData[0]->realVars[72] /* gENROU.XADIFD variable */ + (data->localData[0]->realVars[13] /* der(gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[149] /* gENROU.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
sCRX.ECOMP0 = sCRX.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->simulationInfo->realParameter[246] /* sCRX.ECOMP0 PARAM */ = data->localData[0]->realVars[124] /* sCRX.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
sCRX.VR0 = sCRX.Efd0 / sCRX.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->simulationInfo->realParameter[256] /* sCRX.VR0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[249] /* sCRX.Efd0 PARAM */,data->simulationInfo->realParameter[246] /* sCRX.ECOMP0 PARAM */,"sCRX.ECOMP0",equationIndexes);
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
sCRX.V_REF = sCRX.VR0 / sCRX.K + sCRX.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->simulationInfo->realParameter[258] /* sCRX.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[256] /* sCRX.VR0 PARAM */,data->simulationInfo->realParameter[250] /* sCRX.K PARAM */,"sCRX.K",equationIndexes) + data->simulationInfo->realParameter[246] /* sCRX.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
sCRX.imLeadLag.y_start = sCRX.VR0 / sCRX.K
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->simulationInfo->realParameter[282] /* sCRX.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[256] /* sCRX.VR0 PARAM */,data->simulationInfo->realParameter[250] /* sCRX.K PARAM */,"sCRX.K",equationIndexes);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
sCRX.imLeadLag.TF.y_start = sCRX.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->realParameter[278] /* sCRX.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[282] /* sCRX.imLeadLag.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
sCRX.imLeadLag.TF.y = sCRX.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[128] /* sCRX.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[278] /* sCRX.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
sCRX.simpleLagLim.y_start = sCRX.VR0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[292] /* sCRX.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[256] /* sCRX.VR0 PARAM */;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
$START.sCRX.product.u2 = sCRX.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->modelData->realVarsData[132].attribute /* sCRX.product.u2 variable */.start = data->simulationInfo->realParameter[292] /* sCRX.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[132] /* sCRX.product.u2 variable */ = data->modelData->realVarsData[132].attribute /* sCRX.product.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[132].info /* sCRX.product.u2 */.name, (modelica_real) data->localData[0]->realVars[132] /* sCRX.product.u2 variable */);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
sCRX.simpleLagLim.state = sCRX.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[292] /* sCRX.simpleLagLim.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
sCRX.VoltageReference.k = sCRX.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->simulationInfo->realParameter[263] /* sCRX.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[258] /* sCRX.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
sCRX.DiffV.y = sCRX.DiffV.k1 * sCRX.VoltageReference.k + sCRX.DiffV.k2 * sCRX.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[122] /* sCRX.DiffV.y variable */ = (data->simulationInfo->realParameter[239] /* sCRX.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[263] /* sCRX.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[240] /* sCRX.DiffV.k2 PARAM */) * (data->localData[0]->realVars[124] /* sCRX.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
sCRX.V_erro.y = sCRX.V_erro.k1 * const.k + sCRX.V_erro.k2 * sCRX.DiffV.y + sCRX.V_erro.k3 * sCRX.DiffV1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[126] /* sCRX.V_erro.y variable */ = (data->simulationInfo->realParameter[259] /* sCRX.V_erro.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[260] /* sCRX.V_erro.k2 PARAM */) * (data->localData[0]->realVars[122] /* sCRX.DiffV.y variable */) + (data->simulationInfo->realParameter[261] /* sCRX.V_erro.k3 PARAM */) * (data->localData[0]->realVars[123] /* sCRX.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
sCRX.imLeadLag.y = if abs(sCRX.imLeadLag.T1 - sCRX.imLeadLag.T2) < 1e-15 then sCRX.imLeadLag.K * sCRX.V_erro.y else sCRX.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[266] /* sCRX.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[267] /* sCRX.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[265] /* sCRX.imLeadLag.K PARAM */) * (data->localData[0]->realVars[126] /* sCRX.V_erro.y variable */):data->localData[0]->realVars[128] /* sCRX.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
sCRX.product.u2 = if abs(sCRX.simpleLagLim.T) <= 1e-15 then max(min(sCRX.imLeadLag.y * sCRX.simpleLagLim.K, sCRX.simpleLagLim.outMax), sCRX.simpleLagLim.outMin) else max(min(sCRX.simpleLagLim.state, sCRX.simpleLagLim.outMax), sCRX.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[287] /* sCRX.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[132] /* sCRX.product.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */) * (data->simulationInfo->realParameter[286] /* sCRX.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[290] /* sCRX.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[291] /* sCRX.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[290] /* sCRX.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[291] /* sCRX.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
sCRX.negCurLogic.Vd = sCRX.ECOMP * sCRX.product.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[131] /* sCRX.negCurLogic.Vd variable */ = (data->localData[0]->realVars[124] /* sCRX.ECOMP variable */) * (data->localData[0]->realVars[132] /* sCRX.product.u2 variable */);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROU.delta) * gENROU.iq - cos(gENROU.delta) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[88] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[77] /* gENROU.iq variable */) - ((cos(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[76] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROU.delta) * gENROU.iq - (-sin(gENROU.delta)) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[89] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[77] /* gENROU.iq variable */) - (((-sin(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[76] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[106] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
gENROU.PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[69] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[68] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[161] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
gENROU.ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[78] /* gENROU.ud variable */ = (-data->localData[0]->realVars[69] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[143] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[76] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[67] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[68] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[66] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
gENROU.PSId = gENROU.PSIppd - gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[65] /* gENROU.PSId variable */ = data->localData[0]->realVars[67] /* gENROU.PSIppd variable */ - ((data->simulationInfo->realParameter[160] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[76] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
gENROU.uq = gENROU.PSId - gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[79] /* gENROU.uq variable */ = data->localData[0]->realVars[65] /* gENROU.PSId variable */ - ((data->simulationInfo->realParameter[143] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
gENROU.Epd = (gENROU.XaqIlq - (((gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) * gENROU.K1q + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl))) / (1.0 + gENROU.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[73] /* gENROU.XaqIlq variable */ - (((data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */) - data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[121] /* gENROU.K1q PARAM */) + (data->localData[0]->realVars[77] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[163] /* gENROU.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[66] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[146] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[147] /* gENROU.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[68] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[163] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[156] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[121] /* gENROU.K1q PARAM */,"1.0 + gENROU.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
gENROU.PSIkd = ((gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id) * gENROU.K1d + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppd - gENROU.XADIFD) / gENROU.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[4] /* gENROU.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[76] /* gENROU.id variable */)) * (data->simulationInfo->realParameter[120] /* gENROU.K1d PARAM */) + data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[76] /* gENROU.id variable */) * (data->simulationInfo->realParameter[156] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[66] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[146] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[147] /* gENROU.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[67] /* gENROU.PSIppd variable */) - data->localData[0]->realVars[72] /* gENROU.XADIFD variable */,data->simulationInfo->realParameter[120] /* gENROU.K1d PARAM */,"gENROU.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[58] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[54] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[80] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[57] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[54] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[80] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[59] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[89] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[86] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[54] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[60] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[86] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[89] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[54] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[96] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[57] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[119] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[58] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
pwLine1.is.im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[98] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[86] /* pwLine.ir.im variable */) - data->localData[0]->realVars[110] /* pwLine3.is.im variable */ - data->localData[0]->realVars[47] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[80] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[108] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[81] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[109] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[99] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[87] /* pwLine.ir.re variable */) - data->localData[0]->realVars[111] /* pwLine3.is.re variable */ - data->localData[0]->realVars[48] /* constantLoad.p.ir variable */;
  TRACE_POP
}

void residualFunc89(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,89};
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
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
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
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_boolean tmp56;
  /* iteration variables */
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[87] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[111] /* pwLine3.is.re variable */ = xloc[1];
  data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[121] /* pwLine4.is.re variable */ = xloc[3];
  data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[120] /* pwLine4.is.im variable */ = xloc[5];
  data->localData[0]->realVars[86] /* pwLine.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[110] /* pwLine3.is.im variable */ = xloc[7];
  data->localData[0]->realVars[47] /* constantLoad.p.ii variable */ = xloc[8];
  data->localData[0]->realVars[48] /* constantLoad.p.ir variable */ = xloc[9];
  data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[55] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[54] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[67] /* gENROU.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[68] /* gENROU.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[77] /* gENROU.iq variable */ = xloc[18];
  data->localData[0]->realVars[76] /* gENROU.id variable */ = xloc[19];
  data->localData[0]->realVars[90] /* pwLine.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[91] /* pwLine.vs.re variable */ = xloc[21];
  data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[124] /* sCRX.ECOMP variable */ = xloc[24];
  data->localData[0]->realVars[72] /* gENROU.XADIFD variable */ = xloc[25];
  data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ = xloc[26];
  data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ = xloc[27];
  data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ = xloc[28];
  data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_18(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_19(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_20(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_23(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_25(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_30(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_32(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_33(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_34(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_35(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_36(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_37(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_43(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_58(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[43] /* constantLoad.Q variable */;

  res[1] = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[42] /* constantLoad.P variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[193] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[191] /* pwFault.R PARAM */;
        tmp4 = data->simulationInfo->realParameter[192] /* pwFault.X PARAM */;
        tmp6 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[191] /* pwFault.R PARAM */) * (data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[192] /* pwFault.X PARAM */) * (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[2] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */);
  res[3] = ((tmp11 && tmp12)?data->localData[0]->realVars[111] /* pwLine3.is.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))))));

  tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[193] /* pwFault.t1 PARAM */);
  tmp22 = (modelica_boolean)tmp13;
  if(tmp22)
  {
    tmp23 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */);
    tmp20 = (modelica_boolean)(tmp14 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp20)
    {
      tmp21 = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[194] /* pwFault.t2 PARAM */);
      tmp18 = (modelica_boolean)tmp15;
      if(tmp18)
      {
        tmp16 = data->simulationInfo->realParameter[192] /* pwFault.X PARAM */;
        tmp17 = data->simulationInfo->realParameter[191] /* pwFault.R PARAM */;
        tmp19 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[191] /* pwFault.R PARAM */) * (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[192] /* pwFault.X PARAM */) * (data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)),(tmp16 * tmp16) + (tmp17 * tmp17),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp19 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */;
      }
      tmp21 = tmp19;
    }
    tmp23 = tmp21;
  }
  res[4] = tmp23;

  res[5] = (cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[60] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[59] /* gENCLS.vd variable */) - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;

  res[6] = (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[60] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[59] /* gENCLS.vd variable */) - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */);
  res[7] = ((tmp24 && tmp25)?data->localData[0]->realVars[119] /* pwLine4.ir.re variable */:data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp26 && tmp27)?data->localData[0]->realVars[118] /* pwLine4.ir.im variable */:data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */)))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */);
  res[9] = ((tmp28 && tmp29)?data->localData[0]->realVars[121] /* pwLine4.is.re variable */:data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[237] /* pwLine4.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[238] /* pwLine4.t2 PARAM */);
  res[10] = ((tmp30 && tmp31)?data->localData[0]->realVars[120] /* pwLine4.is.im variable */:data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[236] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[235] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[233] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[234] /* pwLine4.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp32 && tmp33)?data->localData[0]->realVars[109] /* pwLine3.ir.re variable */:data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp34 && tmp35)?data->localData[0]->realVars[108] /* pwLine3.ir.im variable */:data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[226] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[227] /* pwLine3.t2 PARAM */);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[110] /* pwLine3.is.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[225] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[224] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[222] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[223] /* pwLine3.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[99] /* pwLine1.is.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[97] /* pwLine1.ir.re variable */:data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[96] /* pwLine1.ir.im variable */:data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */)))));

  res[17] = (sin(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[79] /* gENROU.uq variable */) + ((-cos(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[78] /* gENROU.ud variable */) - data->localData[0]->realVars[90] /* pwLine.vs.im variable */;

  res[18] = (cos(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[79] /* gENROU.uq variable */) + (sin(data->localData[0]->realVars[6] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[78] /* gENROU.ud variable */) - data->localData[0]->realVars[91] /* pwLine.vs.re variable */;

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */);
  res[19] = ((tmp44 && tmp45)?data->localData[0]->realVars[89] /* pwLine.is.re variable */:data->localData[0]->realVars[91] /* pwLine.vs.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[88] /* pwLine.is.im variable */:data->localData[0]->realVars[90] /* pwLine.vs.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[215] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[216] /* pwLine1.t2 PARAM */);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[98] /* pwLine1.is.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[214] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[213] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[211] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[212] /* pwLine1.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[87] /* pwLine.ir.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[91] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[204] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[205] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[86] /* pwLine.ir.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[90] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[203] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[202] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[200] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[201] /* pwLine.Y.re PARAM */)))));

  tmp54 = data->localData[0]->realVars[91] /* pwLine.vs.re variable */;
  tmp55 = data->localData[0]->realVars[90] /* pwLine.vs.im variable */;
  res[24] = sqrt((tmp54 * tmp54) + (tmp55 * tmp55)) - data->localData[0]->realVars[124] /* sCRX.ECOMP variable */;

  tmp56 = Less(data->localData[0]->realVars[72] /* gENROU.XADIFD variable */,0.0);
  res[25] = (tmp56?data->localData[0]->realVars[130] /* sCRX.negCurLogic.Crowbar_V variable */:data->localData[0]->realVars[131] /* sCRX.negCurLogic.Vd variable */) - data->localData[0]->realVars[61] /* gENROU.EFD variable */;

  res[26] = data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[158] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[76] /* gENROU.id variable */) + (-data->localData[0]->realVars[4] /* gENROU.PSIkd STATE(1) */) - ((data->localData[0]->realVars[14] /* der(gENROU.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[150] /* gENROU.Tppd0 PARAM */));

  res[27] = (data->localData[0]->realVars[4] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[126] /* gENROU.K4d PARAM */) + (data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[124] /* gENROU.K3d PARAM */) - data->localData[0]->realVars[67] /* gENROU.PSIppd variable */;

  res[28] = data->localData[0]->realVars[68] /* gENROU.PSIppq variable */ - ((data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[125] /* gENROU.K3q PARAM */)) - ((data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[127] /* gENROU.K4q PARAM */));

  res[29] = data->localData[0]->realVars[2] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[162] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[157] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[77] /* gENROU.iq variable */) + (-data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */) - ((data->localData[0]->realVars[15] /* der(gENROU.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[151] /* gENROU.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS89(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,4,4,3,3,3,3,4,4,4,4,4,4,6,6,2,2,6,6,6,6,5,5,7,7,2,3,11,11,8,8};
  const int rowIndex[151] = {14,21,22,23,3,13,14,21,2,11,12,2,9,10,4,11,12,4,9,10,14,21,22,23,3,13,14,21,0,1,14,21,0,1,14,21,7,8,15,16,7,8,15,16,5,6,7,8,15,16,5,6,7,8,15,16,26,27,28,29,17,18,26,27,28,29,17,18,26,27,28,29,17,18,19,20,28,29,17,18,19,20,26,27,17,19,20,23,24,18,19,20,22,24,5,7,8,9,14,15,16,6,7,8,10,15,16,21,24,25,25,26,27,0,1,3,12,13,14,16,20,21,22,23,0,1,3,11,13,14,15,19,21,22,23,2,4,8,9,10,11,12,13,2,3,4,7,9,10,11,12};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(151*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 151;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 151*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[27] = 1;
  inSysData->sparsePattern->colorCols[26] = 2;
  inSysData->sparsePattern->colorCols[23] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[22] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[29] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[28] = 6;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[25] = 7;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[4] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[2] = 10;
  inSysData->sparsePattern->colorCols[5] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[24] = 10;
}
void initializeStaticDataNLS89(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* pwLine3.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[47].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[47].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[47].attribute /* constantLoad.p.ii */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* gENCLS.id */.max;
  /* static nls data for gENROU.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[3].attribute /* gENROU.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[3].attribute /* gENROU.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[3].attribute /* gENROU.Epq */.max;
  /* static nls data for gENROU.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* gENROU.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* gENROU.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* gENROU.PSIkq */.max;
  /* static nls data for gENROU.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* gENROU.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* gENROU.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* gENROU.PSIppd */.max;
  /* static nls data for gENROU.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* gENROU.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* gENROU.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* gENROU.PSIppq */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* gENROU.iq */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* gENROU.id */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im */.max;
  /* static nls data for sCRX.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* sCRX.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* sCRX.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* sCRX.ECOMP */.max;
  /* static nls data for gENROU.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[72].attribute /* gENROU.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[72].attribute /* gENROU.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[72].attribute /* gENROU.XADIFD */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS89(sysData);
}

void getIterationVarsNLS89(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[87] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[111] /* pwLine3.is.re variable */;
  array[2] = data->localData[0]->realVars[109] /* pwLine3.ir.re variable */;
  array[3] = data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  array[4] = data->localData[0]->realVars[108] /* pwLine3.ir.im variable */;
  array[5] = data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  array[6] = data->localData[0]->realVars[86] /* pwLine.ir.im variable */;
  array[7] = data->localData[0]->realVars[110] /* pwLine3.is.im variable */;
  array[8] = data->localData[0]->realVars[47] /* constantLoad.p.ii variable */;
  array[9] = data->localData[0]->realVars[48] /* constantLoad.p.ir variable */;
  array[10] = data->localData[0]->realVars[119] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[96] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[55] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[54] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[3] /* gENROU.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[5] /* gENROU.PSIkq STATE(1) */;
  array[16] = data->localData[0]->realVars[67] /* gENROU.PSIppd variable */;
  array[17] = data->localData[0]->realVars[68] /* gENROU.PSIppq variable */;
  array[18] = data->localData[0]->realVars[77] /* gENROU.iq variable */;
  array[19] = data->localData[0]->realVars[76] /* gENROU.id variable */;
  array[20] = data->localData[0]->realVars[90] /* pwLine.vs.im variable */;
  array[21] = data->localData[0]->realVars[91] /* pwLine.vs.re variable */;
  array[22] = data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[124] /* sCRX.ECOMP variable */;
  array[25] = data->localData[0]->realVars[72] /* gENROU.XADIFD variable */;
  array[26] = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  array[27] = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  array[28] = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
  array[29] = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 250;
  nonLinearSystemData[1].size = 22;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc250;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacNLSJac25_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianNLSJac25;
  nonLinearSystemData[1].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS250;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS250;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 89;
  nonLinearSystemData[0].size = 30;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc89;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS89;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS89;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

