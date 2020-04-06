/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SCRX_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 158
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[49] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[49] /* constantLoad.v variable */, data->simulationInfo->realParameter[37], 6, Less);
  data->localData[0]->realVars[46] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] + (data->simulationInfo->realParameter[57]) * (cos((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77]))) + (data->simulationInfo->realParameter[63]) * (sin((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77]))):1.0);
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[64];
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
    tmp9 = data->simulationInfo->realParameter[64];
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
    tmp16 = (data->simulationInfo->realParameter[58]) * ((data->simulationInfo->realParameter[64]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[58])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[45] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[73], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[66]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42]);
  }
  data->localData[0]->realVars[43] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[73], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[65]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43]);
  }
  data->localData[0]->realVars[42] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->localData[0]->realVars[65] /* gENROE.PSId variable */ = data->localData[0]->realVars[67] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[155]) * (data->localData[0]->realVars[76] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
pwLine._is._im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->localData[0]->realVars[88] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[24] /* $cse6 variable */) * (data->localData[0]->realVars[77] /* gENROE.iq variable */) - ((data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[76] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[104]);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
pwLine._is._re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[89] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[77] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[24] /* $cse6 variable */)) * (data->localData[0]->realVars[76] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[104]);
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[79] /* gENROE.uq variable */ = data->localData[0]->realVars[65] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[77] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[69] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[68] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[156]) * (data->localData[0]->realVars[77] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[78] /* gENROE.ud variable */ = (-data->localData[0]->realVars[69] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[76] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
pwLine._vs._re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[91] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[24] /* $cse6 variable */) * (data->localData[0]->realVars[78] /* gENROE.ud variable */) + (data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[79] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
pwLine._vs._im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[90] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[24] /* $cse6 variable */) * (data->localData[0]->realVars[79] /* gENROE.uq variable */) - ((data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[78] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[58] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[20] /* $cse1 variable */)) * (data->localData[0]->realVars[54] /* gENCLS.id variable */) - ((data->localData[0]->realVars[21] /* $cse2 variable */) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[78]);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
gENCLS._p._ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[57] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[21] /* $cse2 variable */) * (data->localData[0]->realVars[54] /* gENCLS.id variable */) - ((data->localData[0]->realVars[20] /* $cse1 variable */) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[78]);
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[59] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[87]) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[84]) * (data->localData[0]->realVars[54] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[60] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[84])) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[87]) * (data->localData[0]->realVars[54] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
pwLine1._ir._im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[118] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[57] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[97] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[58] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[81] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[109] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[80] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[108] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
pwLine1._is._re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[99] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[87] /* pwLine.ir.re variable */) - data->localData[0]->realVars[111] /* pwLine3.is.re variable */ - data->localData[0]->realVars[48] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
constantLoad._p._ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[47] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[86] /* pwLine.ir.im variable */) - data->localData[0]->realVars[98] /* pwLine1.is.im variable */ - data->localData[0]->realVars[110] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc248(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,248};
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
  data->localData[0]->realVars[77] /* gENROE.iq variable */ = xloc[16];
  data->localData[0]->realVars[76] /* gENROE.id variable */ = xloc[17];
  data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ = xloc[18];
  data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_158(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_159(data, threadData);

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
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[221], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[222], 9, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[110] /* pwLine3.is.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[220]) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[218]))) + (data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[218])))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[221], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[222], 9, Less);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[111] /* pwLine3.is.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[220]) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[218]))) - ((data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[218]))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[188], 12, Less);
  tmp13 = (modelica_boolean)tmp4;
  if(tmp13)
  {
    tmp14 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[189], 13, Less);
    tmp11 = (modelica_boolean)(tmp5 && data->simulationInfo->booleanParameter[63]);
    if(tmp11)
    {
      tmp12 = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[189], 13, Less);
      tmp9 = (modelica_boolean)tmp6;
      if(tmp9)
      {
        tmp7 = data->simulationInfo->realParameter[186];
        tmp8 = data->simulationInfo->realParameter[187];
        tmp10 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[186]) * (data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[187]) * (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */),(tmp7 * tmp7) + (tmp8 * tmp8),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
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

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[232], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[233], 11, Less);
  res[3] = ((tmp15 && tmp16)?data->localData[0]->realVars[121] /* pwLine4.is.re variable */:data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[231]) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[229]))) - ((data->simulationInfo->realParameter[230]) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[229]))))));

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[232], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[233], 11, Less);
  res[4] = ((tmp17 && tmp18)?data->localData[0]->realVars[120] /* pwLine4.is.im variable */:data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[231]) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[229]))) + (data->simulationInfo->realParameter[230]) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[229])))));

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[188], 12, Less);
  tmp28 = (modelica_boolean)tmp19;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[189], 13, Less);
    tmp26 = (modelica_boolean)(tmp20 && data->simulationInfo->booleanParameter[63]);
    if(tmp26)
    {
      tmp27 = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[189], 13, Less);
      tmp24 = (modelica_boolean)tmp21;
      if(tmp24)
      {
        tmp22 = data->simulationInfo->realParameter[187];
        tmp23 = data->simulationInfo->realParameter[186];
        tmp25 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[186]) * (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[187]) * (data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)),(tmp22 * tmp22) + (tmp23 * tmp23),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
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

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[221], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[222], 9, Less);
  res[6] = ((tmp30 && tmp31)?data->localData[0]->realVars[108] /* pwLine3.ir.im variable */:data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[220]) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[218]))) + (data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[218])))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[221], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[222], 9, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[109] /* pwLine3.ir.re variable */:data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[220]) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[218]))) - ((data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[218]))))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[199], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[200], 1, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[86] /* pwLine.ir.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[90] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[198]) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[196]))) + (data->simulationInfo->realParameter[197]) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[196])))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[199], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[200], 1, Less);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[88] /* pwLine.is.im variable */:data->localData[0]->realVars[90] /* pwLine.vs.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[198]) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[196]))) + (data->simulationInfo->realParameter[197]) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[196])))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[199], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[200], 1, Less);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[89] /* pwLine.is.re variable */:data->localData[0]->realVars[91] /* pwLine.vs.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[198]) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[196]))) - ((data->simulationInfo->realParameter[197]) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[196]))))));

  res[11] = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[43] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[210], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[211], 3, Less);
  res[12] = ((tmp40 && tmp41)?data->localData[0]->realVars[99] /* pwLine1.is.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[207]))) - ((data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[207]))))));

  res[13] = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[42] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[199], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[200], 1, Less);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[87] /* pwLine.ir.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[91] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[198]) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[196]))) - ((data->simulationInfo->realParameter[197]) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[196]))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[210], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[211], 3, Less);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[98] /* pwLine1.is.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[207]))) + (data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[207])))));

  res[16] = (data->localData[0]->realVars[20] /* $cse1 variable */) * (data->localData[0]->realVars[60] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[21] /* $cse2 variable */)) * (data->localData[0]->realVars[59] /* gENCLS.vd variable */) - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;

  res[17] = (data->localData[0]->realVars[21] /* $cse2 variable */) * (data->localData[0]->realVars[60] /* gENCLS.vq variable */) + (data->localData[0]->realVars[20] /* $cse1 variable */) * (data->localData[0]->realVars[59] /* gENCLS.vd variable */) - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[232], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[233], 11, Less);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[119] /* pwLine4.ir.re variable */:data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[231]) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[229]))) - ((data->simulationInfo->realParameter[230]) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[229]))))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[210], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[211], 3, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[97] /* pwLine1.ir.re variable */:data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[207]))) - ((data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[207]))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[210], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[211], 3, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[96] /* pwLine1.ir.im variable */:data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[207]))) + (data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[207])))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[232], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[233], 11, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[118] /* pwLine4.ir.im variable */:data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[231]) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[229]))) + (data->simulationInfo->realParameter[230]) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[229])))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS248(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {8,11,13,14,11,12,13,15,11,12,13,15,8,12,14,15,5,6,7,3,4,5,2,3,4,2,6,7,0,1,12,15,0,1,11,13,18,19,20,21,18,19,20,21,16,17,18,19,20,21,16,17,18,19,20,21,3,12,17,18,19,20,21,4,15,16,18,19,20,21,8,9,10,14,8,9,10,14,0,1,6,8,9,11,12,13,14,15,20,0,1,7,8,10,11,12,13,14,15,19,0,2,3,4,5,6,7,21,1,2,3,4,5,6,7,18};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(116*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 116;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 116*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[21] = 1;
  inSysData->sparsePattern.colorCols[20] = 2;
  inSysData->sparsePattern.colorCols[19] = 3;
  inSysData->sparsePattern.colorCols[18] = 4;
  inSysData->sparsePattern.colorCols[15] = 5;
  inSysData->sparsePattern.colorCols[14] = 6;
  inSysData->sparsePattern.colorCols[3] = 7;
  inSysData->sparsePattern.colorCols[9] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[5] = 9;
  inSysData->sparsePattern.colorCols[7] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[4] = 10;
  inSysData->sparsePattern.colorCols[6] = 10;
  inSysData->sparsePattern.colorCols[8] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
}
void initializeStaticDataNLS248(void *inData, threadData_t *threadData, void *inSystemData)
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
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* gENROE.id */.max;
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
  initializeSparsePatternNLS248(sysData);
}

void getIterationVarsNLS248(struct DATA *inData, double *array)
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
  array[16] = data->localData[0]->realVars[77] /* gENROE.iq variable */;
  array[17] = data->localData[0]->realVars[76] /* gENROE.id variable */;
  array[18] = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  array[19] = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
  array[21] = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 18
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
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
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[49] /* constantLoad.v variable */,data->simulationInfo->realParameter[37]);
  data->localData[0]->realVars[46] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[56] + (data->simulationInfo->realParameter[57]) * (cos((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77]))) + (data->simulationInfo->realParameter[63]) * (sin((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77]))):1.0);
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[64];
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
    tmp9 = data->simulationInfo->realParameter[64];
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
    tmp16 = (data->simulationInfo->realParameter[58]) * ((data->simulationInfo->realParameter[64]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[58])) * (tmp10)))));
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
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
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
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[66]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[40]) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[42]);
  }
  data->localData[0]->realVars[43] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
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
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[65]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[45] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[46] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43]);
  }
  data->localData[0]->realVars[42] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
sCRX._negCurLogic._Crowbar_V = if sCRX.negCurLogic.RC_rfd == 0.0 then 0.0 else (-sCRX.negCurLogic.RC_rfd) * gENROE.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[130] /* sCRX.negCurLogic.Crowbar_V variable */ = ((data->simulationInfo->realParameter[268] == 0.0)?0.0:((-data->simulationInfo->realParameter[268])) * (data->localData[0]->realVars[72] /* gENROE.XADIFD variable */));
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
gENROE._EFD = gENROE.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[61] /* gENROE.EFD variable */ = data->localData[0]->realVars[72] /* gENROE.XADIFD variable */ + (data->localData[0]->realVars[13] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[144]);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
sCRX._VR0 = sCRX.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->simulationInfo->realParameter[246] = data->simulationInfo->realParameter[276];
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
sCRX._imLeadLag._y_start = sCRX.VR0 / sCRX.K
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->simulationInfo->realParameter[267] = DIVISION_SIM(data->simulationInfo->realParameter[246],data->simulationInfo->realParameter[242],"sCRX.K",equationIndexes);
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
sCRX._imLeadLag._TF._y_start = sCRX.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->simulationInfo->realParameter[265] = data->simulationInfo->realParameter[267];
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
sCRX._imLeadLag._TF._y = sCRX.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[128] /* sCRX.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[265];
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
$START._sCRX._product._u2 = sCRX.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->modelData->realVarsData[132].attribute /* sCRX.product.u2 variable */.start = data->simulationInfo->realParameter[276];
    data->localData[0]->realVars[132] /* sCRX.product.u2 variable */ = data->modelData->realVarsData[132].attribute /* sCRX.product.u2 variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[132].info /* sCRX.product.u2 */.name, (modelica_real) data->localData[0]->realVars[132] /* sCRX.product.u2 variable */);
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
sCRX._simpleLagLim._state = sCRX.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[276];
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
sCRX._V_REF = sCRX.VR0 / sCRX.K + sCRX.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[247] = DIVISION_SIM(data->simulationInfo->realParameter[246],data->simulationInfo->realParameter[242],"sCRX.K",equationIndexes) + data->simulationInfo->realParameter[238];
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
sCRX._VoltageReference._k = sCRX.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->realParameter[251] = data->simulationInfo->realParameter[247];
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
sCRX._ECOMP = sCRX.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[124] /* sCRX.ECOMP variable */ = data->simulationInfo->realParameter[238];
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
sCRX._DiffV._y = sCRX.DiffV.k1 * sCRX.VoltageReference.k + sCRX.DiffV.k2 * sCRX.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[122] /* sCRX.DiffV.y variable */ = (data->simulationInfo->realParameter[234]) * (data->simulationInfo->realParameter[251]) + (data->simulationInfo->realParameter[235]) * (data->localData[0]->realVars[124] /* sCRX.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
sCRX._V_erro._y = sCRX.V_erro.k1 * const.k + sCRX.V_erro.k2 * sCRX.DiffV.y + sCRX.V_erro.k3 * sCRX.DiffV1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[126] /* sCRX.V_erro.y variable */ = (data->simulationInfo->realParameter[248]) * (data->simulationInfo->realParameter[34]) + (data->simulationInfo->realParameter[249]) * (data->localData[0]->realVars[122] /* sCRX.DiffV.y variable */) + (data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[123] /* sCRX.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
sCRX._imLeadLag._y = if abs(sCRX.imLeadLag.T1 - sCRX.imLeadLag.T2) < 1e-15 then sCRX.imLeadLag.K * sCRX.V_erro.y else sCRX.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[253] - data->simulationInfo->realParameter[254]),1e-15);
  data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[252]) * (data->localData[0]->realVars[126] /* sCRX.V_erro.y variable */):data->localData[0]->realVars[128] /* sCRX.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
sCRX._product._u2 = if abs(sCRX.simpleLagLim.T) <= 1e-15 then max(min(sCRX.imLeadLag.y * sCRX.simpleLagLim.K, sCRX.simpleLagLim.outMax), sCRX.simpleLagLim.outMin) else max(min(sCRX.simpleLagLim.state, sCRX.simpleLagLim.outMax), sCRX.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[272]),1e-15);
  data->localData[0]->realVars[132] /* sCRX.product.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[129] /* sCRX.imLeadLag.y variable */) * (data->simulationInfo->realParameter[271]),data->simulationInfo->realParameter[274]),data->simulationInfo->realParameter[275]):fmax(fmin(data->localData[0]->realVars[9] /* sCRX.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[274]),data->simulationInfo->realParameter[275]));
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
sCRX._negCurLogic._Vd = sCRX.ECOMP * sCRX.product.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[131] /* sCRX.negCurLogic.Vd variable */ = (data->localData[0]->realVars[124] /* sCRX.ECOMP variable */) * (data->localData[0]->realVars[132] /* sCRX.product.u2 variable */);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[88] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[77] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[76] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[104]);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[89] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[77] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[76] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[104]);
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[69] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[68] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[156]) * (data->localData[0]->realVars[77] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[78] /* gENROE.ud variable */ = (-data->localData[0]->realVars[69] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[76] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[67] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[68] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[66] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[65] /* gENROE.PSId variable */ = data->localData[0]->realVars[67] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[155]) * (data->localData[0]->realVars[76] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[79] /* gENROE.uq variable */ = data->localData[0]->realVars[65] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[77] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
gENROE._Epq = (gENROE.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[72] /* gENROE.XADIFD variable */ - (((data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[153]) * (data->localData[0]->realVars[76] /* gENROE.id variable */) - data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[117]) + (data->localData[0]->realVars[76] /* gENROE.id variable */) * (data->simulationInfo->realParameter[151] - data->simulationInfo->realParameter[153]) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[66] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[141], data->simulationInfo->realParameter[142], 1.0, 1.2)) * (data->localData[0]->realVars[67] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[117],"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
gENROE._PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[157] - data->simulationInfo->realParameter[152]) * (data->localData[0]->realVars[77] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[118]) + data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[77] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[157] - data->simulationInfo->realParameter[158]) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[66] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[141], data->simulationInfo->realParameter[142], 1.0, 1.2)) * ((data->localData[0]->realVars[68] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[158] - data->simulationInfo->realParameter[152],data->simulationInfo->realParameter[151] - data->simulationInfo->realParameter[152],"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[73] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[118],"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[58] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[54] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[78]);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[57] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[54] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[78]);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[59] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[87]) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[84]) * (data->localData[0]->realVars[54] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[60] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[84])) * (data->localData[0]->realVars[55] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[87]) * (data->localData[0]->realVars[54] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[97] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[58] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
pwLine1._ir._im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[118] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[57] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[80] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[108] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[81] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[109] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
pwLine3._is._re = (-pwLine.ir.re) - pwLine1.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[111] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[87] /* pwLine.ir.re variable */) - data->localData[0]->realVars[99] /* pwLine1.is.re variable */ - data->localData[0]->realVars[48] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
pwLine._ir._im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[86] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[98] /* pwLine1.is.im variable */) - data->localData[0]->realVars[110] /* pwLine3.is.im variable */ - data->localData[0]->realVars[47] /* constantLoad.p.ii variable */;
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
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_boolean tmp56;
  /* iteration variables */
  for (i=0; i<31; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<31; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[98] /* pwLine1.is.im variable */ = xloc[0];
  data->localData[0]->realVars[110] /* pwLine3.is.im variable */ = xloc[1];
  data->localData[0]->realVars[87] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[99] /* pwLine1.is.re variable */ = xloc[3];
  data->localData[0]->realVars[121] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[120] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[48] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[47] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[54] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[55] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[67] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[68] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[76] /* gENROE.id variable */ = xloc[18];
  data->localData[0]->realVars[77] /* gENROE.iq variable */ = xloc[19];
  data->localData[0]->realVars[91] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[90] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ = xloc[23];
  data->simulationInfo->realParameter[238] = xloc[24];
  data->simulationInfo->realParameter[276] = xloc[25];
  data->localData[0]->realVars[72] /* gENROE.XADIFD variable */ = xloc[26];
  data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ = xloc[27];
  data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ = xloc[28];
  data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ = xloc[29];
  data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ = xloc[30];
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
  /* body */
  res[0] = (cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[79] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[78] /* gENROE.ud variable */) - data->localData[0]->realVars[91] /* pwLine.vs.re variable */;

  res[1] = (sin(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[79] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[6] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[78] /* gENROE.ud variable */) - data->localData[0]->realVars[90] /* pwLine.vs.im variable */;

  res[2] = data->localData[0]->realVars[68] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[122])) - ((data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[124]));

  res[3] = data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[157] - data->simulationInfo->realParameter[152]) * (data->localData[0]->realVars[77] /* gENROE.iq variable */) + (-data->localData[0]->realVars[5] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[15] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[146]));

  res[4] = (cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[60] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[59] /* gENCLS.vd variable */) - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;

  res[5] = (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[60] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[59] /* gENCLS.vd variable */) - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;

  res[6] = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[43] /* constantLoad.Q variable */;

  res[7] = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[42] /* constantLoad.P variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[188]);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[189]);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[63]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[189]);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[187];
        tmp4 = data->simulationInfo->realParameter[186];
        tmp6 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[186]) * (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[187]) * (data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[80] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[8] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[188]);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[189]);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[63]);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[189]);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[186];
        tmp15 = data->simulationInfo->realParameter[187];
        tmp17 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[186]) * (data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[187]) * (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[81] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[9] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[232]);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[233]);
  res[10] = ((tmp22 && tmp23)?data->localData[0]->realVars[121] /* pwLine4.is.re variable */:data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[231]) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[229]))) - ((data->simulationInfo->realParameter[230]) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[229]))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[232]);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[233]);
  res[11] = ((tmp24 && tmp25)?data->localData[0]->realVars[120] /* pwLine4.is.im variable */:data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[231]) * (data->localData[0]->realVars[120] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[229]))) + (data->simulationInfo->realParameter[230]) * (data->localData[0]->realVars[121] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[229])))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[221]);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[222]);
  res[12] = ((tmp26 && tmp27)?data->localData[0]->realVars[110] /* pwLine3.is.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[220]) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[218]))) + (data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[218])))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[221]);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[222]);
  res[13] = ((tmp28 && tmp29)?data->localData[0]->realVars[111] /* pwLine3.is.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[220]) * (data->localData[0]->realVars[111] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[218]))) - ((data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[110] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[218]))))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[221]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[222]);
  res[14] = ((tmp30 && tmp31)?data->localData[0]->realVars[109] /* pwLine3.ir.re variable */:data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[220]) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[218]))) - ((data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[218]))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[221]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[222]);
  res[15] = ((tmp32 && tmp33)?data->localData[0]->realVars[108] /* pwLine3.ir.im variable */:data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[220]) * (data->localData[0]->realVars[108] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[113] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[218]))) + (data->simulationInfo->realParameter[219]) * (data->localData[0]->realVars[109] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[112] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[217]) - ((data->localData[0]->realVars[113] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[218])))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[210]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[211]);
  res[16] = ((tmp34 && tmp35)?data->localData[0]->realVars[99] /* pwLine1.is.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[207]))) - ((data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[207]))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[210]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[211]);
  res[17] = ((tmp36 && tmp37)?data->localData[0]->realVars[98] /* pwLine1.is.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[98] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[207]))) + (data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[99] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[207])))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[232]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[233]);
  res[18] = ((tmp38 && tmp39)?data->localData[0]->realVars[119] /* pwLine4.ir.re variable */:data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[113] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[231]) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[229]))) - ((data->simulationInfo->realParameter[230]) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[229]))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[232]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[233]);
  res[19] = ((tmp40 && tmp41)?data->localData[0]->realVars[118] /* pwLine4.ir.im variable */:data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[112] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[231]) * (data->localData[0]->realVars[118] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[229]))) + (data->simulationInfo->realParameter[230]) * (data->localData[0]->realVars[119] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[228]) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[229])))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[210]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[211]);
  res[20] = ((tmp42 && tmp43)?data->localData[0]->realVars[96] /* pwLine1.ir.im variable */:data->localData[0]->realVars[100] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[207]))) + (data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[207])))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[210]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[211]);
  res[21] = ((tmp44 && tmp45)?data->localData[0]->realVars[97] /* pwLine1.ir.re variable */:data->localData[0]->realVars[101] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[209]) * (data->localData[0]->realVars[97] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[101] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[207]))) - ((data->simulationInfo->realParameter[208]) * (data->localData[0]->realVars[96] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[101] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[206]) - ((data->localData[0]->realVars[100] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[207]))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[199]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[200]);
  res[22] = ((tmp46 && tmp47)?data->localData[0]->realVars[89] /* pwLine.is.re variable */:data->localData[0]->realVars[91] /* pwLine.vs.re variable */ - data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[198]) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[196]))) - ((data->simulationInfo->realParameter[197]) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[196]))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[199]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[200]);
  res[23] = ((tmp48 && tmp49)?data->localData[0]->realVars[88] /* pwLine.is.im variable */:data->localData[0]->realVars[90] /* pwLine.vs.im variable */ - data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[198]) * (data->localData[0]->realVars[88] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[91] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[196]))) + (data->simulationInfo->realParameter[197]) * (data->localData[0]->realVars[89] /* pwLine.is.re variable */ + (data->localData[0]->realVars[90] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[91] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[196])))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[199]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[200]);
  res[24] = ((tmp50 && tmp51)?data->localData[0]->realVars[86] /* pwLine.ir.im variable */:data->localData[0]->realVars[102] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[90] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[198]) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[196]))) + (data->simulationInfo->realParameter[197]) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[196])))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[199]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[200]);
  res[25] = ((tmp52 && tmp53)?data->localData[0]->realVars[87] /* pwLine.ir.re variable */:data->localData[0]->realVars[103] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[91] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[198]) * (data->localData[0]->realVars[87] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[196]))) - ((data->simulationInfo->realParameter[197]) * (data->localData[0]->realVars[86] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[103] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[195]) - ((data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[196]))))));

  tmp54 = data->localData[0]->realVars[91] /* pwLine.vs.re variable */;
  tmp55 = data->localData[0]->realVars[90] /* pwLine.vs.im variable */;
  res[26] = sqrt((tmp54 * tmp54) + (tmp55 * tmp55)) - data->localData[0]->realVars[124] /* sCRX.ECOMP variable */;

  res[27] = data->simulationInfo->realParameter[241] - ((data->simulationInfo->realParameter[246]) * (data->simulationInfo->realParameter[238]));

  tmp56 = Less(data->localData[0]->realVars[72] /* gENROE.XADIFD variable */,0.0);
  res[28] = (tmp56?data->localData[0]->realVars[130] /* sCRX.negCurLogic.Crowbar_V variable */:data->localData[0]->realVars[131] /* sCRX.negCurLogic.Vd variable */) - data->localData[0]->realVars[61] /* gENROE.EFD variable */;

  res[29] = (data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[123]) + (data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[121]) - data->localData[0]->realVars[67] /* gENROE.PSIppd variable */;

  res[30] = data->localData[0]->realVars[3] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[152] - data->simulationInfo->realParameter[153]) * (data->localData[0]->realVars[76] /* gENROE.id variable */) + (-data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[14] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[145]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS89(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+31] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,2,2,6,6,6,6,5,5,7,7,3,2,3,11,11,8,8};
  const int rowIndex[154] = {16,17,24,25,12,13,24,25,12,13,24,25,12,13,16,17,9,10,11,9,14,15,8,14,15,8,10,11,6,7,12,13,6,7,24,25,18,19,20,21,18,19,20,21,4,5,18,19,20,21,4,5,18,19,20,21,2,3,29,30,0,1,2,3,29,30,0,1,2,3,29,30,0,1,22,23,29,30,0,1,2,3,22,23,0,22,23,25,26,1,22,23,24,26,4,10,16,18,19,20,21,5,11,17,18,19,20,21,26,27,28,27,28,28,29,30,6,7,12,13,14,16,17,21,22,24,25,6,7,12,13,15,16,17,20,23,24,25,8,9,10,11,13,14,15,18,8,9,10,11,12,14,15,19};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((31+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(154*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 154;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(31*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (31+1)*sizeof(int));
  
  for(i=2;i<31+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 154*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[30] = 1;
  inSysData->sparsePattern.colorCols[28] = 2;
  inSysData->sparsePattern.colorCols[27] = 3;
  inSysData->sparsePattern.colorCols[21] = 4;
  inSysData->sparsePattern.colorCols[29] = 4;
  inSysData->sparsePattern.colorCols[20] = 5;
  inSysData->sparsePattern.colorCols[23] = 5;
  inSysData->sparsePattern.colorCols[19] = 6;
  inSysData->sparsePattern.colorCols[22] = 6;
  inSysData->sparsePattern.colorCols[26] = 6;
  inSysData->sparsePattern.colorCols[3] = 7;
  inSysData->sparsePattern.colorCols[9] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[18] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[5] = 9;
  inSysData->sparsePattern.colorCols[7] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[25] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[4] = 10;
  inSysData->sparsePattern.colorCols[6] = 10;
  inSysData->sparsePattern.colorCols[8] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
  inSysData->sparsePattern.colorCols[24] = 10;
}
void initializeStaticDataNLS89(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[98].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[98].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[98].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[99].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[99].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[99].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine4.is.im */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[47].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[47].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[47].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* gENCLS.iq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[2].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[4].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[4].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[4].attribute /* gENROE.PSIkd */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* pwLine1.vr.im */.max;
  /* static nls data for sCRX.ECOMP0 */
  sysData->nominal[i] = data->modelData->realParameterData[238].attribute /* sCRX.ECOMP0 */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[238].attribute /* sCRX.ECOMP0 */.min;
  sysData->max[i++]   = data->modelData->realParameterData[238].attribute /* sCRX.ECOMP0 */.max;
  /* static nls data for sCRX.simpleLagLim.y_start */
  sysData->nominal[i] = data->modelData->realParameterData[276].attribute /* sCRX.simpleLagLim.y_start */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[276].attribute /* sCRX.simpleLagLim.y_start */.min;
  sysData->max[i++]   = data->modelData->realParameterData[276].attribute /* sCRX.simpleLagLim.y_start */.max;
  /* static nls data for gENROE.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[72].attribute /* gENROE.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[72].attribute /* gENROE.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[72].attribute /* gENROE.XADIFD */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS89(sysData);
}

void getIterationVarsNLS89(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[98] /* pwLine1.is.im variable */;
  array[1] = data->localData[0]->realVars[110] /* pwLine3.is.im variable */;
  array[2] = data->localData[0]->realVars[87] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[99] /* pwLine1.is.re variable */;
  array[4] = data->localData[0]->realVars[121] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[109] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[108] /* pwLine3.ir.im variable */;
  array[7] = data->localData[0]->realVars[120] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[48] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[47] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[118] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[97] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[54] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[55] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[2] /* gENROE.Epd STATE(1) */;
  array[15] = data->localData[0]->realVars[4] /* gENROE.PSIkd STATE(1) */;
  array[16] = data->localData[0]->realVars[67] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[68] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[76] /* gENROE.id variable */;
  array[19] = data->localData[0]->realVars[77] /* gENROE.iq variable */;
  array[20] = data->localData[0]->realVars[91] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[90] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[101] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[100] /* pwLine1.vr.im variable */;
  array[24] = data->simulationInfo->realParameter[238];
  array[25] = data->simulationInfo->realParameter[276];
  array[26] = data->localData[0]->realVars[72] /* gENROE.XADIFD variable */;
  array[27] = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  array[28] = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  array[29] = data->localData[0]->realVars[113] /* pwLine3.vr.re variable */;
  array[30] = data->localData[0]->realVars[112] /* pwLine3.vr.im variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 248;
  nonLinearSystemData[1].size = 22;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc248;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_SCRX_functionJacNLSJac81_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_SCRX_initialAnalyticJacobianNLSJac81;
  nonLinearSystemData[1].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS248;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS248;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 89;
  nonLinearSystemData[0].size = 31;
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

