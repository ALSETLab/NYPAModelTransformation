/* Non Linear Systems */
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 153
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[81] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[80] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[38] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[38] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 13, Less);
  data->localData[0]->realVars[35] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[38] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[38] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 155
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[38] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[34] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 156
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[34] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[35] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[34] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[35] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[32] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[34] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[35] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[34] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[35] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[31] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse5) * gENCLS.id - $cse6 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->realVars[47] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[11] /* $cse5 variable */)) * (data->localData[0]->realVars[43] /* gENCLS.id variable */) - ((data->localData[0]->realVars[12] /* $cse6 variable */) * (data->localData[0]->realVars[44] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse6 * gENCLS.id - $cse5 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->realVars[46] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[12] /* $cse6 variable */) * (data->localData[0]->realVars[43] /* gENCLS.id variable */) - ((data->localData[0]->realVars[11] /* $cse5 variable */) * (data->localData[0]->realVars[44] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->localData[0]->realVars[49] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[44] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[43] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[48] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[44] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[43] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[97] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[75] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[47] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->localData[0]->realVars[74] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[96] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[46] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse10 * gENCLS2.iq - (-$cse9) * gENCLS2.id) * gENCLS2.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->localData[0]->realVars[67] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[10] /* $cse10 variable */) * (data->localData[0]->realVars[55] /* gENCLS2.iq variable */) - (((-data->localData[0]->realVars[14] /* $cse9 variable */)) * (data->localData[0]->realVars[54] /* gENCLS2.id variable */))) * (data->simulationInfo->realParameter[102] /* gENCLS2.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse9 * gENCLS2.iq - $cse10 * gENCLS2.id) * gENCLS2.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[66] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[14] /* $cse9 variable */) * (data->localData[0]->realVars[55] /* gENCLS2.iq variable */) - ((data->localData[0]->realVars[10] /* $cse10 variable */) * (data->localData[0]->realVars[54] /* gENCLS2.id variable */))) * (data->simulationInfo->realParameter[102] /* gENCLS2.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
gENCLS2.vd = gENCLS2.X_d * gENCLS2.iq - gENCLS2.R_a * gENCLS2.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[56] /* gENCLS2.vd variable */ = (data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (data->localData[0]->realVars[55] /* gENCLS2.iq variable */) - ((data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */) * (data->localData[0]->realVars[54] /* gENCLS2.id variable */));
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
gENCLS2.vq = gENCLS2.eq + (-gENCLS2.R_a) * gENCLS2.iq - gENCLS2.X_d * gENCLS2.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[57] /* gENCLS2.vq variable */ = data->localData[0]->realVars[3] /* gENCLS2.eq STATE(1) */ + ((-data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */)) * (data->localData[0]->realVars[55] /* gENCLS2.iq variable */) - ((data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (data->localData[0]->realVars[54] /* gENCLS2.id variable */));
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse9 * gENCLS2.vd + $cse10 * gENCLS2.vq
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[69] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[14] /* $cse9 variable */) * (data->localData[0]->realVars[56] /* gENCLS2.vd variable */) + (data->localData[0]->realVars[10] /* $cse10 variable */) * (data->localData[0]->realVars[57] /* gENCLS2.vq variable */);
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse9 * gENCLS2.vq - $cse10 * gENCLS2.vd
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[68] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[14] /* $cse9 variable */) * (data->localData[0]->realVars[57] /* gENCLS2.vq variable */) - ((data->localData[0]->realVars[10] /* $cse10 variable */) * (data->localData[0]->realVars[56] /* gENCLS2.vd variable */));
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[58] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[86] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[98] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[59] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[87] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[99] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
pwLine3.is.re = (-pwLine.ir.re) - pwLine1.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[89] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[65] /* pwLine.ir.re variable */) - data->localData[0]->realVars[77] /* pwLine1.is.re variable */ - data->localData[0]->realVars[37] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[88] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[64] /* pwLine.ir.im variable */) - data->localData[0]->realVars[76] /* pwLine1.is.im variable */ - data->localData[0]->realVars[36] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc239(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,239};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
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
  data->localData[0]->realVars[76] /* pwLine1.is.im variable */ = xloc[0];
  data->localData[0]->realVars[64] /* pwLine.ir.im variable */ = xloc[1];
  data->localData[0]->realVars[77] /* pwLine1.is.re variable */ = xloc[2];
  data->localData[0]->realVars[65] /* pwLine.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[37] /* constantLoad.p.ir variable */ = xloc[4];
  data->localData[0]->realVars[36] /* constantLoad.p.ii variable */ = xloc[5];
  data->localData[0]->realVars[87] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[99] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[98] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[86] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[54] /* gENCLS2.id variable */ = xloc[10];
  data->localData[0]->realVars[55] /* gENCLS2.iq variable */ = xloc[11];
  data->localData[0]->realVars[96] /* pwLine4.ir.im variable */ = xloc[12];
  data->localData[0]->realVars[75] /* pwLine1.ir.re variable */ = xloc[13];
  data->localData[0]->realVars[43] /* gENCLS.id variable */ = xloc[14];
  data->localData[0]->realVars[44] /* gENCLS.iq variable */ = xloc[15];
  data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ = xloc[16];
  data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ = xloc[17];
  data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ = xloc[18];
  data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ = xloc[19];
  data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_153(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_154(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_155(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_156(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_157(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_158(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_159(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_160(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_161(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_162(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_163(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_164(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_165(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_166(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_167(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_168(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_169(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_170(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_171(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_172(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_173(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */, 6, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[87] /* pwLine3.ir.re variable */:data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[87] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[86] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[130] /* pwFault.t1 PARAM */, 7, Less);
  tmp11 = (modelica_boolean)tmp2;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[58] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */, 8, Less);
    tmp9 = (modelica_boolean)(tmp3 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp9)
    {
      tmp10 = data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */, 8, Less);
      tmp7 = (modelica_boolean)tmp4;
      if(tmp7)
      {
        tmp5 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp6 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp8 = data->localData[0]->realVars[58] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[128] /* pwFault.R PARAM */) * (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[129] /* pwFault.X PARAM */) * (data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)),(tmp5 * tmp5) + (tmp6 * tmp6),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp8 = data->localData[0]->realVars[58] /* pwFault.p.ii variable */;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  res[1] = tmp12;

  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */, 10, Less);
  res[2] = ((tmp13 && tmp14)?data->localData[0]->realVars[99] /* pwLine4.is.re variable */:data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[99] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[98] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */, 10, Less);
  res[3] = ((tmp15 && tmp16)?data->localData[0]->realVars[98] /* pwLine4.is.im variable */:data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[98] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[99] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */, 12, Less);
  res[4] = ((tmp17 && tmp18)?data->localData[0]->realVars[75] /* pwLine1.ir.re variable */:data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[75] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[74] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))))));

  res[5] = (data->localData[0]->realVars[12] /* $cse6 variable */) * (data->localData[0]->realVars[49] /* gENCLS.vq variable */) + (data->localData[0]->realVars[11] /* $cse5 variable */) * (data->localData[0]->realVars[48] /* gENCLS.vd variable */) - data->localData[0]->realVars[79] /* pwLine1.vr.re variable */;

  res[6] = (data->localData[0]->realVars[11] /* $cse5 variable */) * (data->localData[0]->realVars[49] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[12] /* $cse6 variable */)) * (data->localData[0]->realVars[48] /* gENCLS.vd variable */) - data->localData[0]->realVars[78] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */, 10, Less);
  res[7] = ((tmp19 && tmp20)?data->localData[0]->realVars[96] /* pwLine4.ir.im variable */:data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[96] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[97] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */, 10, Less);
  res[8] = ((tmp21 && tmp22)?data->localData[0]->realVars[97] /* pwLine4.ir.re variable */:data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[97] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[96] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[130] /* pwFault.t1 PARAM */, 7, Less);
  tmp32 = (modelica_boolean)tmp23;
  if(tmp32)
  {
    tmp33 = data->localData[0]->realVars[59] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */, 8, Less);
    tmp30 = (modelica_boolean)(tmp24 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp30)
    {
      tmp31 = data->localData[0]->realVars[90] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */, 8, Less);
      tmp28 = (modelica_boolean)tmp25;
      if(tmp28)
      {
        tmp26 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp27 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp29 = data->localData[0]->realVars[59] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[128] /* pwFault.R PARAM */) * (data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[129] /* pwFault.X PARAM */) * (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */),(tmp26 * tmp26) + (tmp27 * tmp27),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp29 = data->localData[0]->realVars[59] /* pwFault.p.ir variable */;
      }
      tmp31 = tmp29;
    }
    tmp33 = tmp31;
  }
  res[9] = tmp33;

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */, 6, Less);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[86] /* pwLine3.ir.im variable */:data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[86] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[87] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */)))));

  res[11] = (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[37] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[36] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[32] /* constantLoad.Q variable */;

  res[12] = (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[36] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[37] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[31] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */, 1, Less);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[64] /* pwLine.ir.im variable */:data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[68] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[64] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[65] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */, 1, Less);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[65] /* pwLine.ir.re variable */:data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[69] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[65] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[64] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */, 1, Less);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[66] /* pwLine.is.im variable */:data->localData[0]->realVars[68] /* pwLine.vs.im variable */ - data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[66] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[67] /* pwLine.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */, 1, Less);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[67] /* pwLine.is.re variable */:data->localData[0]->realVars[69] /* pwLine.vs.re variable */ - data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[67] /* pwLine.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[66] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */, 6, Less);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[89] /* pwLine3.is.re variable */:data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[89] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[88] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */, 6, Less);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[88] /* pwLine3.is.im variable */:data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[88] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[89] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */, 12, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[76] /* pwLine1.is.im variable */:data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[76] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[77] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */, 12, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[77] /* pwLine1.is.re variable */:data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[77] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[76] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */, 12, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[74] /* pwLine1.ir.im variable */:data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[74] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[75] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */)))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS239(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,11,11,8,8};
  const int rowIndex[116] = {17,18,19,20,13,14,17,18,17,18,19,20,13,14,17,18,11,12,17,18,11,12,17,18,0,9,10,2,3,9,1,2,3,0,1,10,13,14,15,16,13,14,15,16,4,7,8,21,4,7,8,21,4,5,6,7,8,21,4,5,6,7,8,21,2,4,5,7,8,20,21,3,4,6,7,8,19,21,0,4,11,12,13,14,16,17,18,19,20,10,11,12,13,14,15,17,18,19,20,21,0,1,2,3,8,9,10,17,0,1,2,3,7,9,10,18};
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
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[15] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[11] = 8;
  inSysData->sparsePattern->colorCols[14] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[13] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[12] = 10;
}
void initializeStaticDataNLS239(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* pwLine.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[37].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[37].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[37].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[36].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[36].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[36].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[99].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[99].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[99].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[98].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[98].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[98].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* pwLine3.ir.im */.max;
  /* static nls data for gENCLS2.id */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* gENCLS2.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* gENCLS2.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* gENCLS2.id */.max;
  /* static nls data for gENCLS2.iq */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* gENCLS2.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* gENCLS2.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* gENCLS2.iq */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[75].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[75].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[75].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[43].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[43].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[43].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[44].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[44].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[44].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[79].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[79].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[79].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[80].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[80].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[80].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS239(sysData);
}

void getIterationVarsNLS239(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[76] /* pwLine1.is.im variable */;
  array[1] = data->localData[0]->realVars[64] /* pwLine.ir.im variable */;
  array[2] = data->localData[0]->realVars[77] /* pwLine1.is.re variable */;
  array[3] = data->localData[0]->realVars[65] /* pwLine.ir.re variable */;
  array[4] = data->localData[0]->realVars[37] /* constantLoad.p.ir variable */;
  array[5] = data->localData[0]->realVars[36] /* constantLoad.p.ii variable */;
  array[6] = data->localData[0]->realVars[87] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[99] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[98] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[86] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[54] /* gENCLS2.id variable */;
  array[11] = data->localData[0]->realVars[55] /* gENCLS2.iq variable */;
  array[12] = data->localData[0]->realVars[96] /* pwLine4.ir.im variable */;
  array[13] = data->localData[0]->realVars[75] /* pwLine1.ir.re variable */;
  array[14] = data->localData[0]->realVars[43] /* gENCLS.id variable */;
  array[15] = data->localData[0]->realVars[44] /* gENCLS.iq variable */;
  array[16] = data->localData[0]->realVars[79] /* pwLine1.vr.re variable */;
  array[17] = data->localData[0]->realVars[78] /* pwLine1.vr.im variable */;
  array[18] = data->localData[0]->realVars[81] /* pwLine1.vs.re variable */;
  array[19] = data->localData[0]->realVars[80] /* pwLine1.vs.im variable */;
  array[20] = data->localData[0]->realVars[91] /* pwLine3.vr.re variable */;
  array[21] = data->localData[0]->realVars[90] /* pwLine3.vr.im variable */;
}


/* inner equations */

/*
equation index: 16
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[81] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[80] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[38] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
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
  tmp0 = Less(data->localData[0]->realVars[38] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[34] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[38] /* constantLoad.v variable */,data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[35] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[38] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[38] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
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
    tmp2 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[34] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[35] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[34] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[35] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[32] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
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
    tmp2 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[34] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[35] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[34] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[35] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[31] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[47] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[43] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[44] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[46] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[43] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[44] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[48] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[44] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[43] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[49] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[44] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[43] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[96] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[74] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[46] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[97] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[75] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[47] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENCLS2.delta) * gENCLS2.iq - (-sin(gENCLS2.delta)) * gENCLS2.id) * gENCLS2.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[67] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */)) * (data->localData[0]->realVars[55] /* gENCLS2.iq variable */) - (((-sin(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */))) * (data->localData[0]->realVars[54] /* gENCLS2.id variable */))) * (data->simulationInfo->realParameter[102] /* gENCLS2.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENCLS2.delta) * gENCLS2.iq - cos(gENCLS2.delta) * gENCLS2.id) * gENCLS2.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[66] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */)) * (data->localData[0]->realVars[55] /* gENCLS2.iq variable */) - ((cos(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */)) * (data->localData[0]->realVars[54] /* gENCLS2.id variable */))) * (data->simulationInfo->realParameter[102] /* gENCLS2.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
gENCLS2.vq = gENCLS2.eq + (-gENCLS2.R_a) * gENCLS2.iq - gENCLS2.X_d * gENCLS2.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[57] /* gENCLS2.vq variable */ = data->localData[0]->realVars[3] /* gENCLS2.eq STATE(1) */ + ((-data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */)) * (data->localData[0]->realVars[55] /* gENCLS2.iq variable */) - ((data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (data->localData[0]->realVars[54] /* gENCLS2.id variable */));
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
gENCLS2.vd = gENCLS2.X_d * gENCLS2.iq - gENCLS2.R_a * gENCLS2.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[56] /* gENCLS2.vd variable */ = (data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (data->localData[0]->realVars[55] /* gENCLS2.iq variable */) - ((data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */) * (data->localData[0]->realVars[54] /* gENCLS2.id variable */));
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[58] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[86] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[98] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[59] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[87] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[99] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[37] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[65] /* pwLine.ir.re variable */) - data->localData[0]->realVars[77] /* pwLine1.is.re variable */ - data->localData[0]->realVars[89] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[64] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[76] /* pwLine1.is.im variable */) - data->localData[0]->realVars[88] /* pwLine3.is.im variable */ - data->localData[0]->realVars[36] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc106(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,106};
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
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  /* iteration variables */
  for (i=0; i<24; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<24; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[36] /* constantLoad.p.ii variable */ = xloc[0];
  data->localData[0]->realVars[76] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[65] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[77] /* pwLine1.is.re variable */ = xloc[3];
  data->localData[0]->realVars[99] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[87] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[98] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[86] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[88] /* pwLine3.is.im variable */ = xloc[8];
  data->localData[0]->realVars[89] /* pwLine3.is.re variable */ = xloc[9];
  data->localData[0]->realVars[54] /* gENCLS2.id variable */ = xloc[10];
  data->localData[0]->realVars[55] /* gENCLS2.iq variable */ = xloc[11];
  data->localData[0]->realVars[69] /* pwLine.vs.re variable */ = xloc[12];
  data->localData[0]->realVars[75] /* pwLine1.ir.re variable */ = xloc[13];
  data->localData[0]->realVars[74] /* pwLine1.ir.im variable */ = xloc[14];
  data->localData[0]->realVars[44] /* gENCLS.iq variable */ = xloc[15];
  data->localData[0]->realVars[43] /* gENCLS.id variable */ = xloc[16];
  data->localData[0]->realVars[68] /* pwLine.vs.im variable */ = xloc[17];
  data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ = xloc[18];
  data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ = xloc[19];
  data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ = xloc[21];
  data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ = xloc[23];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_16(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_17(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_18(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_19(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_20(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_23(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_25(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_30(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_32(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_33(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_34(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */)) * (data->localData[0]->realVars[57] /* gENCLS2.vq variable */) + ((-cos(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */))) * (data->localData[0]->realVars[56] /* gENCLS2.vd variable */) - data->localData[0]->realVars[68] /* pwLine.vs.im variable */;

  res[1] = (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[49] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[48] /* gENCLS.vd variable */) - data->localData[0]->realVars[78] /* pwLine1.vr.im variable */;

  res[2] = (cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[49] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[48] /* gENCLS.vd variable */) - data->localData[0]->realVars[79] /* pwLine1.vr.re variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[59] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[90] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp4 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp6 = data->localData[0]->realVars[59] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[128] /* pwFault.R PARAM */) * (data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[129] /* pwFault.X PARAM */) * (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[59] /* pwFault.p.ir variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[3] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */);
  res[4] = ((tmp11 && tmp12)?data->localData[0]->realVars[89] /* pwLine3.is.re variable */:data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[89] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[88] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */);
  res[5] = ((tmp13 && tmp14)?data->localData[0]->realVars[88] /* pwLine3.is.im variable */:data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[88] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[89] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */)))));

  tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130] /* pwFault.t1 PARAM */);
  tmp24 = (modelica_boolean)tmp15;
  if(tmp24)
  {
    tmp25 = data->localData[0]->realVars[58] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */);
    tmp22 = (modelica_boolean)(tmp16 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp22)
    {
      tmp23 = data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */);
      tmp20 = (modelica_boolean)tmp17;
      if(tmp20)
      {
        tmp18 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp19 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp21 = data->localData[0]->realVars[58] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[128] /* pwFault.R PARAM */) * (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[129] /* pwFault.X PARAM */) * (data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)),(tmp18 * tmp18) + (tmp19 * tmp19),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp21 = data->localData[0]->realVars[58] /* pwFault.p.ii variable */;
      }
      tmp23 = tmp21;
    }
    tmp25 = tmp23;
  }
  res[6] = tmp25;

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */);
  res[7] = ((tmp26 && tmp27)?data->localData[0]->realVars[87] /* pwLine3.ir.re variable */:data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[87] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[86] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp28 && tmp29)?data->localData[0]->realVars[86] /* pwLine3.ir.im variable */:data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[86] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[87] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */);
  res[9] = ((tmp30 && tmp31)?data->localData[0]->realVars[98] /* pwLine4.is.im variable */:data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[98] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[99] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */);
  res[10] = ((tmp32 && tmp33)?data->localData[0]->realVars[99] /* pwLine4.is.re variable */:data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[99] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[91] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[98] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[90] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */);
  res[11] = ((tmp34 && tmp35)?data->localData[0]->realVars[76] /* pwLine1.is.im variable */:data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[76] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[77] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[77] /* pwLine1.is.re variable */:data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[77] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[76] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[97] /* pwLine4.ir.re variable */:data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[91] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[97] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[96] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[96] /* pwLine4.ir.im variable */:data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[90] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[96] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[97] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[74] /* pwLine1.ir.im variable */:data->localData[0]->realVars[78] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[74] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[75] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */)))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[75] /* pwLine1.ir.re variable */:data->localData[0]->realVars[79] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[75] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[79] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[74] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[79] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[78] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))))));

  res[17] = (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[37] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[36] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[32] /* constantLoad.Q variable */;

  res[18] = (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[36] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[37] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[31] /* constantLoad.P variable */;

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */);
  res[19] = ((tmp46 && tmp47)?data->localData[0]->realVars[67] /* pwLine.is.re variable */:data->localData[0]->realVars[69] /* pwLine.vs.re variable */ - data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[67] /* pwLine.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[66] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */);
  res[20] = ((tmp48 && tmp49)?data->localData[0]->realVars[65] /* pwLine.ir.re variable */:data->localData[0]->realVars[81] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[69] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[65] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[64] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */);
  res[21] = ((tmp50 && tmp51)?data->localData[0]->realVars[64] /* pwLine.ir.im variable */:data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[68] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[64] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[81] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[65] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */);
  res[22] = ((tmp52 && tmp53)?data->localData[0]->realVars[66] /* pwLine.is.im variable */:data->localData[0]->realVars[68] /* pwLine.vs.im variable */ - data->localData[0]->realVars[80] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[66] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[69] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[67] /* pwLine.is.re variable */ + (data->localData[0]->realVars[68] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[69] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */)))));

  res[23] = (cos(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */)) * (data->localData[0]->realVars[57] /* gENCLS2.vq variable */) + (sin(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */)) * (data->localData[0]->realVars[56] /* gENCLS2.vd variable */) - data->localData[0]->realVars[69] /* pwLine.vs.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS106(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+24] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,11,11,8,8};
  const int rowIndex[120] = {17,18,20,21,11,12,20,21,17,18,20,21,11,12,17,18,3,9,10,3,7,8,6,9,10,6,7,8,4,5,20,21,4,5,17,18,0,19,22,23,0,19,22,23,19,20,22,23,13,14,15,16,13,14,15,16,1,2,13,14,1,2,13,14,0,19,21,22,2,10,12,13,14,15,16,1,9,11,13,14,15,16,4,5,8,11,12,15,17,18,20,21,22,4,5,7,11,12,16,17,18,19,20,21,3,4,6,7,8,9,10,13,3,5,6,7,8,9,10,14};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((24+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(120*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 120;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(24*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (24+1)*sizeof(int));
  
  for(i=2;i<24+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 120*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[23] = 1;
  inSysData->sparsePattern->colorCols[22] = 2;
  inSysData->sparsePattern->colorCols[21] = 3;
  inSysData->sparsePattern->colorCols[20] = 4;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[19] = 5;
  inSysData->sparsePattern->colorCols[12] = 6;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[8] = 7;
  inSysData->sparsePattern->colorCols[16] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[15] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[14] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[7] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[13] = 10;
}
void initializeStaticDataNLS106(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[36].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[36].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[36].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[99].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[99].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[99].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[98].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[98].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[98].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* pwLine3.is.re */.max;
  /* static nls data for gENCLS2.id */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* gENCLS2.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* gENCLS2.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* gENCLS2.id */.max;
  /* static nls data for gENCLS2.iq */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* gENCLS2.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* gENCLS2.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* gENCLS2.iq */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[75].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[75].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[75].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[74].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[74].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[74].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[44].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[44].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[44].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[43].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[43].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[43].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[79].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[79].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[79].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[80].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[80].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[80].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS106(sysData);
}

void getIterationVarsNLS106(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[36] /* constantLoad.p.ii variable */;
  array[1] = data->localData[0]->realVars[76] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[65] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[77] /* pwLine1.is.re variable */;
  array[4] = data->localData[0]->realVars[99] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[87] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[98] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[86] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[88] /* pwLine3.is.im variable */;
  array[9] = data->localData[0]->realVars[89] /* pwLine3.is.re variable */;
  array[10] = data->localData[0]->realVars[54] /* gENCLS2.id variable */;
  array[11] = data->localData[0]->realVars[55] /* gENCLS2.iq variable */;
  array[12] = data->localData[0]->realVars[69] /* pwLine.vs.re variable */;
  array[13] = data->localData[0]->realVars[75] /* pwLine1.ir.re variable */;
  array[14] = data->localData[0]->realVars[74] /* pwLine1.ir.im variable */;
  array[15] = data->localData[0]->realVars[44] /* gENCLS.iq variable */;
  array[16] = data->localData[0]->realVars[43] /* gENCLS.id variable */;
  array[17] = data->localData[0]->realVars[68] /* pwLine.vs.im variable */;
  array[18] = data->localData[0]->realVars[79] /* pwLine1.vr.re variable */;
  array[19] = data->localData[0]->realVars[78] /* pwLine1.vr.im variable */;
  array[20] = data->localData[0]->realVars[80] /* pwLine1.vs.im variable */;
  array[21] = data->localData[0]->realVars[81] /* pwLine1.vs.re variable */;
  array[22] = data->localData[0]->realVars[91] /* pwLine3.vr.re variable */;
  array[23] = data->localData[0]->realVars[90] /* pwLine3.vr.im variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Machines_PSSE_GENCLS_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 239;
  nonLinearSystemData[1].size = 22;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc239;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacNLSJac5_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS239;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS239;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 106;
  nonLinearSystemData[0].size = 24;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc106;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacNLSJac4_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS106;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS106;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

