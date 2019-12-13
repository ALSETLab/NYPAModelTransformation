/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 186
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[128] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[127] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], 5, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[55] + (data->simulationInfo->realParameter[56]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))) + (data->simulationInfo->realParameter[62]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))):1.0);
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[63];
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
    tmp9 = data->simulationInfo->realParameter[63];
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
    tmp16 = (data->simulationInfo->realParameter[57]) * ((data->simulationInfo->realParameter[63]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[57])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 3, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[65]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 3, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[64]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[91] /* gENROE.PSId variable */ = data->localData[0]->realVars[93] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[101] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
pwLine._is._re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[114] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[102] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[101] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[188]);
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
pwLine._is._im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[113] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[102] /* gENROE.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[101] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[188]);
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[104] /* gENROE.uq variable */ = data->localData[0]->realVars[91] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[222]) * (data->localData[0]->realVars[102] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[95] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[94] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[102] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[103] /* gENROE.ud variable */ = (-data->localData[0]->realVars[95] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[222]) * (data->localData[0]->realVars[101] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
pwLine._vs._re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->localData[0]->realVars[116] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[103] /* gENROE.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[104] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
pwLine._vs._im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[115] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[104] /* gENROE.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[103] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->localData[0]->realVars[85] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[81] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[82] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[162]);
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
gENCLS._p._ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->localData[0]->realVars[84] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[81] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[82] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[162]);
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[87] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[168])) * (data->localData[0]->realVars[82] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[81] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[86] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[82] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[168]) * (data->localData[0]->realVars[81] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
pwLine1._ir._re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[122] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[144] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[85] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
pwLine1._ir._im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->localData[0]->realVars[121] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[143] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[84] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->localData[0]->realVars[106] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[134] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[146] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
constantLoad._p._ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[111] /* pwLine.ir.im variable */) - data->localData[0]->realVars[123] /* pwLine1.is.im variable */ - data->localData[0]->realVars[135] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
pwLine1._is._re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->localData[0]->realVars[124] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[112] /* pwLine.ir.re variable */) - data->localData[0]->realVars[136] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->localData[0]->realVars[105] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[133] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[145] /* pwLine4.is.im variable */;
  TRACE_POP
}

void residualFunc276(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,276};
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
  /* iteration variables */
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[133] /* pwLine3.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[145] /* pwLine4.is.im variable */ = xloc[1];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[2];
  data->localData[0]->realVars[136] /* pwLine3.is.re variable */ = xloc[3];
  data->localData[0]->realVars[123] /* pwLine1.is.im variable */ = xloc[4];
  data->localData[0]->realVars[135] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[112] /* pwLine.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[111] /* pwLine.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[146] /* pwLine4.is.re variable */ = xloc[8];
  data->localData[0]->realVars[134] /* pwLine3.ir.re variable */ = xloc[9];
  data->localData[0]->realVars[143] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[144] /* pwLine4.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[81] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[82] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[102] /* gENROE.iq variable */ = xloc[16];
  data->localData[0]->realVars[101] /* gENROE.id variable */ = xloc[17];
  data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ = xloc[18];
  data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ = xloc[19];
  data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_186(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_187(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_188(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_189(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_190(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_191(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_192(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_193(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_194(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_195(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_196(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_197(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_198(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_199(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_200(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_201(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_202(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_203(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_204(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_205(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_206(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_207(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_208(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[306], 7, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[134] /* pwLine3.ir.re variable */:data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[304]) * (data->localData[0]->realVars[134] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[302]))) - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[133] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302]))))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[272], 8, Less);
  tmp11 = (modelica_boolean)tmp2;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[106] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[273], 9, Less);
    tmp9 = (modelica_boolean)(tmp3 && data->simulationInfo->booleanParameter[66]);
    if(tmp9)
    {
      tmp10 = data->localData[0]->realVars[137] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[273], 9, Less);
      tmp7 = (modelica_boolean)tmp4;
      if(tmp7)
      {
        tmp5 = data->simulationInfo->realParameter[270];
        tmp6 = data->simulationInfo->realParameter[271];
        tmp8 = data->localData[0]->realVars[106] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[270]) * (data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */),(tmp5 * tmp5) + (tmp6 * tmp6),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp8 = data->localData[0]->realVars[106] /* pwFault.p.ir variable */;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  res[1] = tmp12;

  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[272], 8, Less);
  tmp22 = (modelica_boolean)tmp13;
  if(tmp22)
  {
    tmp23 = data->localData[0]->realVars[105] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[273], 9, Less);
    tmp20 = (modelica_boolean)(tmp14 && data->simulationInfo->booleanParameter[66]);
    if(tmp20)
    {
      tmp21 = data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[273], 9, Less);
      tmp18 = (modelica_boolean)tmp15;
      if(tmp18)
      {
        tmp16 = data->simulationInfo->realParameter[271];
        tmp17 = data->simulationInfo->realParameter[270];
        tmp19 = data->localData[0]->realVars[105] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[270]) * (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)),(tmp16 * tmp16) + (tmp17 * tmp17),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp19 = data->localData[0]->realVars[105] /* pwFault.p.ii variable */;
      }
      tmp21 = tmp19;
    }
    tmp23 = tmp21;
  }
  res[2] = tmp23;

  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[284], 1, Less);
  res[3] = ((tmp24 && tmp25)?data->localData[0]->realVars[114] /* pwLine.is.re variable */:data->localData[0]->realVars[116] /* pwLine.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[282]) * (data->localData[0]->realVars[114] /* pwLine.is.re variable */ + (data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[116] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[280]))) - ((data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[113] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[116] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280]))))));

  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[284], 1, Less);
  res[4] = ((tmp26 && tmp27)?data->localData[0]->realVars[113] /* pwLine.is.im variable */:data->localData[0]->realVars[115] /* pwLine.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[282]) * (data->localData[0]->realVars[113] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[116] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280]))) + (data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[114] /* pwLine.is.re variable */ + (data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[116] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[280])))));

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[284], 1, Less);
  res[5] = ((tmp28 && tmp29)?data->localData[0]->realVars[111] /* pwLine.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[115] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[282]) * (data->localData[0]->realVars[111] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280]))) + (data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[112] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[280])))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[284], 1, Less);
  res[6] = ((tmp30 && tmp31)?data->localData[0]->realVars[112] /* pwLine.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[116] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[282]) * (data->localData[0]->realVars[112] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[280]))) - ((data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[111] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280]))))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[306], 7, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[136] /* pwLine3.is.re variable */:data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[304]) * (data->localData[0]->realVars[136] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[302]))) - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[135] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302]))))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[306], 7, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[135] /* pwLine3.is.im variable */:data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[304]) * (data->localData[0]->realVars[135] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302]))) + (data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[136] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[302])))));

  res[9] = (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[10] = (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  res[11] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[87] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[86] /* gENCLS.vd variable */) - data->localData[0]->realVars[125] /* pwLine1.vr.im variable */;

  res[12] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[87] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[86] /* gENCLS.vd variable */) - data->localData[0]->realVars[126] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[295], 13, Less);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[124] /* pwLine1.is.re variable */:data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[293]) * (data->localData[0]->realVars[124] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[291]))) - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[123] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291]))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[295], 13, Less);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[123] /* pwLine1.is.im variable */:data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[293]) * (data->localData[0]->realVars[123] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291]))) + (data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[124] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[291])))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[295], 13, Less);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[122] /* pwLine1.ir.re variable */:data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[293]) * (data->localData[0]->realVars[122] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[291]))) - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[121] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291]))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[295], 13, Less);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[121] /* pwLine1.ir.im variable */:data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[293]) * (data->localData[0]->realVars[121] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291]))) + (data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[122] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[291])))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[317], 11, Less);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[144] /* pwLine4.ir.re variable */:data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[315]) * (data->localData[0]->realVars[144] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[313]))) - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[143] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313]))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[317], 11, Less);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[146] /* pwLine4.is.re variable */:data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[315]) * (data->localData[0]->realVars[146] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[313]))) - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[145] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313]))))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[317], 11, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[145] /* pwLine4.is.im variable */:data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[315]) * (data->localData[0]->realVars[145] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313]))) + (data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[146] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[313])))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[306], 7, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[133] /* pwLine3.ir.im variable */:data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[304]) * (data->localData[0]->realVars[133] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302]))) + (data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[134] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[302])))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[317], 11, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[143] /* pwLine4.ir.im variable */:data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[315]) * (data->localData[0]->realVars[143] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313]))) + (data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[144] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[313])))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS276(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,3,3,4,4,4,4,4,4,3,3,4,4,4,4,7,7,4,4,8,8,11,11};
  const int rowIndex[112] = {0,2,20,2,18,19,9,10,13,14,7,8,13,14,9,10,13,14,7,8,9,10,5,6,13,14,5,6,9,10,1,18,19,0,1,20,15,16,17,21,15,16,17,21,11,12,15,16,11,12,15,16,11,14,15,16,17,19,21,12,13,15,16,17,18,21,3,4,5,6,3,4,5,6,0,1,2,8,18,19,20,21,0,1,2,7,17,18,19,20,4,5,6,7,8,9,10,13,14,16,20,0,3,5,6,7,8,9,10,13,14,15};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(112*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 112;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern.maxColors = 9;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 112*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[21] = 1;
  inSysData->sparsePattern.colorCols[20] = 2;
  inSysData->sparsePattern.colorCols[19] = 3;
  inSysData->sparsePattern.colorCols[15] = 4;
  inSysData->sparsePattern.colorCols[14] = 5;
  inSysData->sparsePattern.colorCols[5] = 6;
  inSysData->sparsePattern.colorCols[6] = 6;
  inSysData->sparsePattern.colorCols[13] = 6;
  inSysData->sparsePattern.colorCols[4] = 7;
  inSysData->sparsePattern.colorCols[12] = 7;
  inSysData->sparsePattern.colorCols[17] = 7;
  inSysData->sparsePattern.colorCols[18] = 7;
  inSysData->sparsePattern.colorCols[1] = 8;
  inSysData->sparsePattern.colorCols[3] = 8;
  inSysData->sparsePattern.colorCols[7] = 8;
  inSysData->sparsePattern.colorCols[9] = 8;
  inSysData->sparsePattern.colorCols[11] = 8;
  inSysData->sparsePattern.colorCols[0] = 9;
  inSysData->sparsePattern.colorCols[2] = 9;
  inSysData->sparsePattern.colorCols[8] = 9;
  inSysData->sparsePattern.colorCols[10] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
}
void initializeStaticDataNLS276(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine4.is.im */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine4.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[82].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[82].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[82].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.vr.re */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* gENROE.id */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS276(sysData);
}

void getIterationVarsNLS276(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[133] /* pwLine3.ir.im variable */;
  array[1] = data->localData[0]->realVars[145] /* pwLine4.is.im variable */;
  array[2] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[3] = data->localData[0]->realVars[136] /* pwLine3.is.re variable */;
  array[4] = data->localData[0]->realVars[123] /* pwLine1.is.im variable */;
  array[5] = data->localData[0]->realVars[135] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[112] /* pwLine.ir.re variable */;
  array[7] = data->localData[0]->realVars[111] /* pwLine.ir.im variable */;
  array[8] = data->localData[0]->realVars[146] /* pwLine4.is.re variable */;
  array[9] = data->localData[0]->realVars[134] /* pwLine3.ir.re variable */;
  array[10] = data->localData[0]->realVars[143] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[144] /* pwLine4.ir.re variable */;
  array[12] = data->localData[0]->realVars[81] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[82] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[125] /* pwLine1.vr.im variable */;
  array[15] = data->localData[0]->realVars[126] /* pwLine1.vr.re variable */;
  array[16] = data->localData[0]->realVars[102] /* gENROE.iq variable */;
  array[17] = data->localData[0]->realVars[101] /* gENROE.id variable */;
  array[18] = data->localData[0]->realVars[137] /* pwLine3.vr.im variable */;
  array[19] = data->localData[0]->realVars[138] /* pwLine3.vr.re variable */;
  array[20] = data->localData[0]->realVars[127] /* pwLine1.vs.im variable */;
  array[21] = data->localData[0]->realVars[128] /* pwLine1.vs.re variable */;
}


/* inner equations */

/*
equation index: 47
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[128] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[127] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[36]);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[55] + (data->simulationInfo->realParameter[56]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))) + (data->simulationInfo->realParameter[62]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))):1.0);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[63];
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
    tmp9 = data->simulationInfo->realParameter[63];
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
    tmp16 = (data->simulationInfo->realParameter[57]) * ((data->simulationInfo->realParameter[63]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[57])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[65]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[64]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[114] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[102] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[101] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[188]);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[113] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[102] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[101] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[188]);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[95] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[94] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[102] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[103] /* gENROE.ud variable */ = (-data->localData[0]->realVars[95] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[222]) * (data->localData[0]->realVars[101] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
pwLine._vs._im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[115] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
pwLine._vs._re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[116] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[91] /* gENROE.PSId variable */ = data->localData[0]->realVars[104] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[222]) * (data->localData[0]->realVars[102] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
gENROE._PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[93] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[91] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[101] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[93] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[94] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[92] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
gENROE._PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[236]) * (data->localData[0]->realVars[102] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[202]) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[102] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[242]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[92] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[225], data->simulationInfo->realParameter[226], 1.0, 1.2)) * ((data->localData[0]->realVars[94] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[242] - data->simulationInfo->realParameter[236],data->simulationInfo->realParameter[235] - data->simulationInfo->realParameter[236],"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[98] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[202],"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
gENROE._PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eXAC1_1.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[236] - data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[101] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[201]) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[101] /* gENROE.id variable */) * (data->simulationInfo->realParameter[235] - data->simulationInfo->realParameter[237]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[92] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[225], data->simulationInfo->realParameter[226], 1.0, 1.2)) * (data->localData[0]->realVars[93] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[61] /* eXAC1_1.XADIFD variable */,data->simulationInfo->realParameter[201],"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[85] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[81] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[162]);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[84] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[81] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[82] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[162]);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[87] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[168])) * (data->localData[0]->realVars[82] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[81] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[86] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[82] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[168]) * (data->localData[0]->realVars[81] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[144] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[122] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[85] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[143] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[121] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[84] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[105] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[133] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[145] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
constantLoad._p._ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[112] /* pwLine.ir.re variable */) - data->localData[0]->realVars[124] /* pwLine1.is.re variable */ - data->localData[0]->realVars[136] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
constantLoad._p._ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[111] /* pwLine.ir.im variable */) - data->localData[0]->realVars[123] /* pwLine1.is.im variable */ - data->localData[0]->realVars[135] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[106] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[134] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[146] /* pwLine4.is.re variable */;
  TRACE_POP
}

void residualFunc99(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,99};
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
  data->localData[0]->realVars[134] /* pwLine3.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[146] /* pwLine4.is.re variable */ = xloc[1];
  data->localData[0]->realVars[111] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[135] /* pwLine3.is.im variable */ = xloc[3];
  data->localData[0]->realVars[112] /* pwLine.ir.re variable */ = xloc[4];
  data->localData[0]->realVars[136] /* pwLine3.is.re variable */ = xloc[5];
  data->localData[0]->realVars[124] /* pwLine1.is.re variable */ = xloc[6];
  data->localData[0]->realVars[123] /* pwLine1.is.im variable */ = xloc[7];
  data->localData[0]->realVars[133] /* pwLine3.ir.im variable */ = xloc[8];
  data->localData[0]->realVars[145] /* pwLine4.is.im variable */ = xloc[9];
  data->localData[0]->realVars[121] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[122] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[81] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[82] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[104] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[94] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[102] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[101] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ = xloc[21];
  data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ = xloc[22];
  data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_72(data, threadData);
  /* body */
  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[272]);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[105] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[273]);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[66]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[273]);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[271];
        tmp4 = data->simulationInfo->realParameter[270];
        tmp6 = data->localData[0]->realVars[105] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[270]) * (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[105] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[272]);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[106] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[273]);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[66]);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[137] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[273]);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[270];
        tmp15 = data->simulationInfo->realParameter[271];
        tmp17 = data->localData[0]->realVars[106] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[270]) * (data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[271]) * (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[106] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  res[2] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[87] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[86] /* gENCLS.vd variable */) - data->localData[0]->realVars[125] /* pwLine1.vr.im variable */;

  res[3] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[87] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[86] /* gENCLS.vd variable */) - data->localData[0]->realVars[126] /* pwLine1.vr.re variable */;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317]);
  res[4] = ((tmp22 && tmp23)?data->localData[0]->realVars[146] /* pwLine4.is.re variable */:data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[315]) * (data->localData[0]->realVars[146] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[313]))) - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[145] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313]))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[295]);
  res[5] = ((tmp24 && tmp25)?data->localData[0]->realVars[124] /* pwLine1.is.re variable */:data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[293]) * (data->localData[0]->realVars[124] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[291]))) - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[123] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291]))))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[295]);
  res[6] = ((tmp26 && tmp27)?data->localData[0]->realVars[123] /* pwLine1.is.im variable */:data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[293]) * (data->localData[0]->realVars[123] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[291]))) + (data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[124] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[291])))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[306]);
  res[7] = ((tmp28 && tmp29)?data->localData[0]->realVars[136] /* pwLine3.is.re variable */:data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[304]) * (data->localData[0]->realVars[136] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[302]))) - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[135] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302]))))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[306]);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[135] /* pwLine3.is.im variable */:data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[304]) * (data->localData[0]->realVars[135] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[302]))) + (data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[136] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[302])))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317]);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[145] /* pwLine4.is.im variable */:data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[315]) * (data->localData[0]->realVars[145] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[313]))) + (data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[146] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[313])))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[306]);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[134] /* pwLine3.ir.re variable */:data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[304]) * (data->localData[0]->realVars[134] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[302]))) - ((data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[133] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302]))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[305]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[306]);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[133] /* pwLine3.ir.im variable */:data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[304]) * (data->localData[0]->realVars[133] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[302]))) + (data->simulationInfo->realParameter[303]) * (data->localData[0]->realVars[134] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[301]) - ((data->localData[0]->realVars[138] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[302])))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317]);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[144] /* pwLine4.ir.re variable */:data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[315]) * (data->localData[0]->realVars[144] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[313]))) - ((data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[143] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313]))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[316]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317]);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[143] /* pwLine4.ir.im variable */:data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[315]) * (data->localData[0]->realVars[143] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[313]))) + (data->simulationInfo->realParameter[314]) * (data->localData[0]->realVars[144] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312]) - ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[313])))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[295]);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[121] /* pwLine1.ir.im variable */:data->localData[0]->realVars[125] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[293]) * (data->localData[0]->realVars[121] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291]))) + (data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[122] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[291])))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[294]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[295]);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[122] /* pwLine1.ir.re variable */:data->localData[0]->realVars[126] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[293]) * (data->localData[0]->realVars[122] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[126] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[291]))) - ((data->simulationInfo->realParameter[292]) * (data->localData[0]->realVars[121] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[126] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[290]) - ((data->localData[0]->realVars[125] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[291]))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[284]);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[114] /* pwLine.is.re variable */:data->localData[0]->realVars[116] /* pwLine.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[282]) * (data->localData[0]->realVars[114] /* pwLine.is.re variable */ + (data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[116] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[280]))) - ((data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[113] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[116] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280]))))));

  res[17] = (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[18] = (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[284]);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[111] /* pwLine.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[115] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[282]) * (data->localData[0]->realVars[111] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280]))) + (data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[112] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[280])))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[284]);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[112] /* pwLine.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[116] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[282]) * (data->localData[0]->realVars[112] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[128] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[280]))) - ((data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[111] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[127] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[280]))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[283]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[284]);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[113] /* pwLine.is.im variable */:data->localData[0]->realVars[115] /* pwLine.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[282]) * (data->localData[0]->realVars[113] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[116] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[280]))) + (data->simulationInfo->realParameter[281]) * (data->localData[0]->realVars[114] /* pwLine.is.re variable */ + (data->localData[0]->realVars[115] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[279]) - ((data->localData[0]->realVars[116] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[280])))));

  res[22] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[236] - data->simulationInfo->realParameter[237]) * (data->localData[0]->realVars[101] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[229]));

  res[23] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[207]) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[205]) - data->localData[0]->realVars[93] /* gENROE.PSIppd variable */;

  res[24] = data->localData[0]->realVars[94] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[206])) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[208]));

  res[25] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[241] - data->simulationInfo->realParameter[236]) * (data->localData[0]->realVars[102] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[230]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS99(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,3,3,4,4,4,4,4,4,3,3,4,4,4,4,2,2,8,8,8,8,7,7,11,8,8,11};
  const int rowIndex[140] = {1,10,11,1,4,9,17,18,19,20,7,8,17,18,17,18,19,20,7,8,17,18,5,6,17,18,5,6,17,18,0,10,11,0,4,9,12,13,14,15,12,13,14,15,2,3,12,13,2,3,12,13,22,23,24,25,16,19,20,21,22,23,24,25,16,19,20,21,22,23,24,25,16,19,20,21,22,23,24,25,16,19,20,21,22,23,24,25,3,4,5,12,13,14,15,2,6,9,12,13,14,15,5,6,7,8,10,15,16,17,18,19,20,0,1,4,7,9,10,11,12,0,1,4,8,9,10,11,13,5,6,7,8,11,14,17,18,19,20,21};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(140*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 140;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 140*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[25] = 1;
  inSysData->sparsePattern.colorCols[22] = 2;
  inSysData->sparsePattern.colorCols[21] = 3;
  inSysData->sparsePattern.colorCols[20] = 4;
  inSysData->sparsePattern.colorCols[7] = 5;
  inSysData->sparsePattern.colorCols[19] = 5;
  inSysData->sparsePattern.colorCols[24] = 5;
  inSysData->sparsePattern.colorCols[6] = 6;
  inSysData->sparsePattern.colorCols[18] = 6;
  inSysData->sparsePattern.colorCols[23] = 6;
  inSysData->sparsePattern.colorCols[5] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[17] = 7;
  inSysData->sparsePattern.colorCols[4] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[3] = 9;
  inSysData->sparsePattern.colorCols[8] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[2] = 10;
  inSysData->sparsePattern.colorCols[9] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
}
void initializeStaticDataNLS99(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[82].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[82].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[82].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS99(sysData);
}

void getIterationVarsNLS99(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[134] /* pwLine3.ir.re variable */;
  array[1] = data->localData[0]->realVars[146] /* pwLine4.is.re variable */;
  array[2] = data->localData[0]->realVars[111] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[135] /* pwLine3.is.im variable */;
  array[4] = data->localData[0]->realVars[112] /* pwLine.ir.re variable */;
  array[5] = data->localData[0]->realVars[136] /* pwLine3.is.re variable */;
  array[6] = data->localData[0]->realVars[124] /* pwLine1.is.re variable */;
  array[7] = data->localData[0]->realVars[123] /* pwLine1.is.im variable */;
  array[8] = data->localData[0]->realVars[133] /* pwLine3.ir.im variable */;
  array[9] = data->localData[0]->realVars[145] /* pwLine4.is.im variable */;
  array[10] = data->localData[0]->realVars[121] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[122] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[81] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[82] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[104] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[94] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[102] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[101] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[126] /* pwLine1.vr.re variable */;
  array[21] = data->localData[0]->realVars[125] /* pwLine1.vr.im variable */;
  array[22] = data->localData[0]->realVars[128] /* pwLine1.vs.re variable */;
  array[23] = data->localData[0]->realVars[138] /* pwLine3.vr.re variable */;
  array[24] = data->localData[0]->realVars[137] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[127] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 14
type: SIMPLE_ASSIGN
eXAC1_1._rectifierCommutationVoltageDrop._division._u1 = eXAC1_1.rectifierCommutationVoltageDrop.gain2.k * eXAC1_1.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[70] /* eXAC1_1.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[141]) * (data->localData[0]->realVars[61] /* eXAC1_1.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 15
type: SIMPLE_ASSIGN
eXAC1_1._EFD = eXAC1_1.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[59] /* eXAC1_1.EFD variable */ = data->localData[0]->realVars[61] /* eXAC1_1.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[228]);
  TRACE_POP
}
/*
equation index: 16
type: SIMPLE_ASSIGN
eXAC1_1._Ifd0 = eXAC1_1.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->simulationInfo->realParameter[83] = data->localData[0]->realVars[61] /* eXAC1_1.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
eXAC1_1._VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eXAC1_1.K_C, eXAC1_1.Efd0, eXAC1_1.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->simulationInfo->realParameter[101] = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[85], data->simulationInfo->realParameter[82], data->simulationInfo->realParameter[83]);
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._Efd0 = eXAC1_1.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->simulationInfo->realParameter[144] = data->simulationInfo->realParameter[101];
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._sISO._y_start = eXAC1_1.rotatingExciterWithDemagnetizationLimited.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->simulationInfo->realParameter[157] = data->simulationInfo->realParameter[144];
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
$START._eXAC1_1._rotatingExciterWithDemagnetizationLimited._sISO._y = eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->modelData->realVarsData[4].attribute /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[157];
    data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->modelData->realVarsData[4].attribute /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y */.name, (modelica_real) data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
eXAC1_1._rotatingExciterWithDemagnetizationLimited._sISO._y = eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */ = data->simulationInfo->realParameter[157];
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
eXAC1_1._rectifierCommutationVoltageDrop._division._y = eXAC1_1.rectifierCommutationVoltageDrop.division.u1 / eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[70] /* eXAC1_1.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */,"eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
eXAC1_1._rectifierCommutationVoltageDrop._fEX._y = if eXAC1_1.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eXAC1_1.rectifierCommutationVoltageDrop.division.y > 0.0 and eXAC1_1.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eXAC1_1.rectifierCommutationVoltageDrop.division.y else if eXAC1_1.rectifierCommutationVoltageDrop.division.y > 0.433 and eXAC1_1.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eXAC1_1.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eXAC1_1.rectifierCommutationVoltageDrop.division.y >= 0.75 and eXAC1_1.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eXAC1_1.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_23(DATA *data, threadData_t *threadData)
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
  tmp0 = LessEq(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eXAC1_1.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[71] /* eXAC1_1.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[72] /* eXAC1_1.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
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
  data->localData[0]->realVars[61] /* eXAC1_1.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_14(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_15(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_16(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_17(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_18(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_19(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_20(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_23(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[4] /* eXAC1_1.rotatingExciterWithDemagnetizationLimited.sISO.y STATE(1) */) * (data->localData[0]->realVars[72] /* eXAC1_1.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[59] /* eXAC1_1.EFD variable */;
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
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS25(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eXAC1_1.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[61].attribute /* eXAC1_1.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[61].attribute /* eXAC1_1.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[61].attribute /* eXAC1_1.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS25(sysData);
}

void getIterationVarsNLS25(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[61] /* eXAC1_1.XADIFD variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[2].equationIndex = 276;
  nonLinearSystemData[2].size = 22;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc276;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS276;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS276;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 99;
  nonLinearSystemData[1].size = 26;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc99;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS99;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS99;
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

