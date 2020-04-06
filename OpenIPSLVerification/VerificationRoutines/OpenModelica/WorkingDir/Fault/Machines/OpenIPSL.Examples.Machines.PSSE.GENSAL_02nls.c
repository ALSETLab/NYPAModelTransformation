/* Non Linear Systems */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 119
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[94] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[93] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[43] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[43] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[62];
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
    tmp9 = data->simulationInfo->realParameter[62];
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
    tmp16 = (data->simulationInfo->realParameter[56]) * ((data->simulationInfo->realParameter[62]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[56])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[39] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 121
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[43] /* constantLoad.v variable */, data->simulationInfo->realParameter[35], 7, Less);
  data->localData[0]->realVars[40] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] + (data->simulationInfo->realParameter[55]) * (cos((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75]))) + (data->simulationInfo->realParameter[61]) * (sin((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75]))):1.0);
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[71], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65], 6, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38]) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] + data->simulationInfo->realParameter[64]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38]) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40]);
  }
  data->localData[0]->realVars[37] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[71], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65], 6, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[63]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41]);
  }
  data->localData[0]->realVars[36] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 124
type: SIMPLE_ASSIGN
gENSAL._PSId = gENSAL.PSIppd - gENSAL.Xppd * gENSAL.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->localData[0]->realVars[60] /* gENSAL.PSId variable */ = data->localData[0]->realVars[61] /* gENSAL.PSIppd variable */ - ((data->simulationInfo->realParameter[147]) * (data->localData[0]->realVars[67] /* gENSAL.id variable */));
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
pwLine._is._re = ($cse7 * gENSAL.iq - (-$cse6) * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[80] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[19] /* $cse7 variable */) * (data->localData[0]->realVars[68] /* gENSAL.iq variable */) - (((-data->localData[0]->realVars[18] /* $cse6 variable */)) * (data->localData[0]->realVars[67] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[102]);
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
pwLine._is._im = ($cse6 * gENSAL.iq - $cse7 * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[79] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[18] /* $cse6 variable */) * (data->localData[0]->realVars[68] /* gENSAL.iq variable */) - ((data->localData[0]->realVars[19] /* $cse7 variable */) * (data->localData[0]->realVars[67] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[102]);
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
gENSAL._uq = gENSAL.PSId - gENSAL.R_a * gENSAL.iq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[70] /* gENSAL.uq variable */ = data->localData[0]->realVars[60] /* gENSAL.PSId variable */ - ((data->simulationInfo->realParameter[132]) * (data->localData[0]->realVars[68] /* gENSAL.iq variable */));
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
gENSAL._PSIq = (-gENSAL.PSIppq) - gENSAL.Xppq * gENSAL.iq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[62] /* gENSAL.PSIq variable */ = (-data->localData[0]->realVars[4] /* gENSAL.PSIppq STATE(1) */) - ((data->simulationInfo->realParameter[148]) * (data->localData[0]->realVars[68] /* gENSAL.iq variable */));
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
gENSAL._ud = (-gENSAL.PSIq) - gENSAL.R_a * gENSAL.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[69] /* gENSAL.ud variable */ = (-data->localData[0]->realVars[62] /* gENSAL.PSIq variable */) - ((data->simulationInfo->realParameter[132]) * (data->localData[0]->realVars[67] /* gENSAL.id variable */));
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
pwLine._vs._im = $cse6 * gENSAL.uq - $cse7 * gENSAL.ud
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[81] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[18] /* $cse6 variable */) * (data->localData[0]->realVars[70] /* gENSAL.uq variable */) - ((data->localData[0]->realVars[19] /* $cse7 variable */) * (data->localData[0]->realVars[69] /* gENSAL.ud variable */));
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
pwLine._vs._re = $cse6 * gENSAL.ud + $cse7 * gENSAL.uq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[82] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[18] /* $cse6 variable */) * (data->localData[0]->realVars[69] /* gENSAL.ud variable */) + (data->localData[0]->realVars[19] /* $cse7 variable */) * (data->localData[0]->realVars[70] /* gENSAL.uq variable */);
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[52] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[14] /* $cse1 variable */)) * (data->localData[0]->realVars[48] /* gENCLS.id variable */) - ((data->localData[0]->realVars[15] /* $cse2 variable */) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76]);
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
gENCLS._p._ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[51] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[15] /* $cse2 variable */) * (data->localData[0]->realVars[48] /* gENCLS.id variable */) - ((data->localData[0]->realVars[14] /* $cse1 variable */) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76]);
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[54] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[82])) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[85]) * (data->localData[0]->realVars[48] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[53] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[85]) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[48] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[110] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[88] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[52] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[109] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[87] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[51] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[72] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[100] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[112] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[71] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[99] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[111] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
pwLine._ir._re = (-pwLine1.is.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[78] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[90] /* pwLine1.is.re variable */) - data->localData[0]->realVars[102] /* pwLine3.is.re variable */ - data->localData[0]->realVars[42] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
pwLine3._is._im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[101] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[77] /* pwLine.ir.im variable */) - data->localData[0]->realVars[89] /* pwLine1.is.im variable */ - data->localData[0]->realVars[41] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc209(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,209};
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
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[89] /* pwLine1.is.im variable */ = xloc[0];
  data->localData[0]->realVars[77] /* pwLine.ir.im variable */ = xloc[1];
  data->localData[0]->realVars[102] /* pwLine3.is.re variable */ = xloc[2];
  data->localData[0]->realVars[42] /* constantLoad.p.ir variable */ = xloc[3];
  data->localData[0]->realVars[41] /* constantLoad.p.ii variable */ = xloc[4];
  data->localData[0]->realVars[99] /* pwLine3.ir.im variable */ = xloc[5];
  data->localData[0]->realVars[111] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[90] /* pwLine1.is.re variable */ = xloc[7];
  data->localData[0]->realVars[112] /* pwLine4.is.re variable */ = xloc[8];
  data->localData[0]->realVars[100] /* pwLine3.ir.re variable */ = xloc[9];
  data->localData[0]->realVars[87] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[88] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[49] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[48] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[68] /* gENSAL.iq variable */ = xloc[16];
  data->localData[0]->realVars[67] /* gENSAL.id variable */ = xloc[17];
  data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ = xloc[18];
  data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ = xloc[19];
  data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_119(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_120(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_121(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_122(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_123(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_124(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_125(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_126(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_127(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_128(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_129(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_130(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_131(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_132(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_133(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_134(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_135(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_136(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_137(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_138(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_139(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_140(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_141(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[175], 10, Less);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[72] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[176], 11, Less);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[63]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[103] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[176], 11, Less);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[173];
        tmp4 = data->simulationInfo->realParameter[174];
        tmp6 = data->localData[0]->realVars[72] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[173]) * (data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[72] /* pwFault.p.ir variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[175], 10, Less);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[71] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[176], 11, Less);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[63]);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[176], 11, Less);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[174];
        tmp15 = data->simulationInfo->realParameter[173];
        tmp17 = data->localData[0]->realVars[71] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[173]) * (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[71] /* pwFault.p.ii variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[208], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[209], 9, Less);
  res[2] = ((tmp22 && tmp23)?data->localData[0]->realVars[99] /* pwLine3.ir.im variable */:data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[207]) * (data->localData[0]->realVars[99] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[205]))) + (data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[100] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[205])))));

  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[197], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[198], 3, Less);
  res[3] = ((tmp24 && tmp25)?data->localData[0]->realVars[90] /* pwLine1.is.re variable */:data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[90] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[194]))) - ((data->simulationInfo->realParameter[195]) * (data->localData[0]->realVars[89] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[194]))))));

  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[219], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[220], 13, Less);
  res[4] = ((tmp26 && tmp27)?data->localData[0]->realVars[109] /* pwLine4.ir.im variable */:data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[218]) * (data->localData[0]->realVars[109] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[92] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[216]))) + (data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[110] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[92] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[216])))));

  res[5] = (data->localData[0]->realVars[15] /* $cse2 variable */) * (data->localData[0]->realVars[54] /* gENCLS.vq variable */) + (data->localData[0]->realVars[14] /* $cse1 variable */) * (data->localData[0]->realVars[53] /* gENCLS.vd variable */) - data->localData[0]->realVars[92] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[219], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[220], 13, Less);
  res[6] = ((tmp28 && tmp29)?data->localData[0]->realVars[112] /* pwLine4.is.re variable */:data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[218]) * (data->localData[0]->realVars[112] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[216]))) - ((data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[111] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[216]))))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[219], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[220], 13, Less);
  res[7] = ((tmp30 && tmp31)?data->localData[0]->realVars[111] /* pwLine4.is.im variable */:data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[218]) * (data->localData[0]->realVars[111] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[216]))) + (data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[112] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[216])))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[208], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[209], 9, Less);
  res[8] = ((tmp32 && tmp33)?data->localData[0]->realVars[100] /* pwLine3.ir.re variable */:data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[207]) * (data->localData[0]->realVars[100] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[205]))) - ((data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[99] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[205]))))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[219], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[220], 13, Less);
  res[9] = ((tmp34 && tmp35)?data->localData[0]->realVars[110] /* pwLine4.ir.re variable */:data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[218]) * (data->localData[0]->realVars[110] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[92] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[216]))) - ((data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[109] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[92] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[216]))))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[197], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[198], 3, Less);
  res[10] = ((tmp36 && tmp37)?data->localData[0]->realVars[88] /* pwLine1.ir.re variable */:data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[88] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[92] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[194]))) - ((data->simulationInfo->realParameter[195]) * (data->localData[0]->realVars[87] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[92] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[194]))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[197], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[198], 3, Less);
  res[11] = ((tmp38 && tmp39)?data->localData[0]->realVars[87] /* pwLine1.ir.im variable */:data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[87] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[92] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[194]))) + (data->simulationInfo->realParameter[195]) * (data->localData[0]->realVars[88] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[92] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[194])))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[186], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[187], 1, Less);
  res[12] = ((tmp40 && tmp41)?data->localData[0]->realVars[80] /* pwLine.is.re variable */:data->localData[0]->realVars[82] /* pwLine.vs.re variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[80] /* pwLine.is.re variable */ + (data->localData[0]->realVars[81] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[82] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[183]))) - ((data->simulationInfo->realParameter[184]) * (data->localData[0]->realVars[79] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[82] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[81] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[183]))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[186], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[187], 1, Less);
  res[13] = ((tmp42 && tmp43)?data->localData[0]->realVars[79] /* pwLine.is.im variable */:data->localData[0]->realVars[81] /* pwLine.vs.im variable */ - data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[79] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[82] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[81] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[183]))) + (data->simulationInfo->realParameter[184]) * (data->localData[0]->realVars[80] /* pwLine.is.re variable */ + (data->localData[0]->realVars[81] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[82] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[183])))));

  res[14] = (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[37] /* constantLoad.Q variable */;

  res[15] = (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[36] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[186], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[187], 1, Less);
  res[16] = ((tmp44 && tmp45)?data->localData[0]->realVars[77] /* pwLine.ir.im variable */:data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[81] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[77] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[183]))) + (data->simulationInfo->realParameter[184]) * (data->localData[0]->realVars[78] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[183])))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[186], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[187], 1, Less);
  res[17] = ((tmp46 && tmp47)?data->localData[0]->realVars[78] /* pwLine.ir.re variable */:data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[82] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[78] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[183]))) - ((data->simulationInfo->realParameter[184]) * (data->localData[0]->realVars[77] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[183]))))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[208], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[209], 9, Less);
  res[18] = ((tmp48 && tmp49)?data->localData[0]->realVars[102] /* pwLine3.is.re variable */:data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[207]) * (data->localData[0]->realVars[102] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[205]))) - ((data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[101] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[205]))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[208], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[209], 9, Less);
  res[19] = ((tmp50 && tmp51)?data->localData[0]->realVars[101] /* pwLine3.is.im variable */:data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[207]) * (data->localData[0]->realVars[101] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[205]))) + (data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[102] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[205])))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[197], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[198], 3, Less);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[89] /* pwLine1.is.im variable */:data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[89] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[194]))) + (data->simulationInfo->realParameter[195]) * (data->localData[0]->realVars[90] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[194])))));

  res[21] = (data->localData[0]->realVars[14] /* $cse1 variable */) * (data->localData[0]->realVars[54] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[15] /* $cse2 variable */)) * (data->localData[0]->realVars[53] /* gENCLS.vd variable */) - data->localData[0]->realVars[91] /* pwLine1.vr.im variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS209(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,3,3,4,3,3,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {3,18,19,20,16,17,18,19,16,17,18,19,14,15,16,17,14,15,18,19,1,2,8,1,6,7,3,16,17,20,0,6,7,0,2,8,4,9,10,11,4,9,10,11,4,5,9,21,4,5,9,21,4,7,9,10,11,20,21,3,4,5,6,9,10,11,12,13,16,17,12,13,16,17,3,8,10,12,14,15,16,17,18,19,20,2,3,11,13,14,15,16,17,18,19,20,0,1,2,6,7,8,9,18,0,1,2,4,6,7,8,19};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(112*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 112;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
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
  inSysData->sparsePattern.colorCols[18] = 4;
  inSysData->sparsePattern.colorCols[15] = 5;
  inSysData->sparsePattern.colorCols[17] = 5;
  inSysData->sparsePattern.colorCols[14] = 6;
  inSysData->sparsePattern.colorCols[16] = 6;
  inSysData->sparsePattern.colorCols[4] = 7;
  inSysData->sparsePattern.colorCols[7] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[6] = 9;
  inSysData->sparsePattern.colorCols[9] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[3] = 10;
  inSysData->sparsePattern.colorCols[5] = 10;
  inSysData->sparsePattern.colorCols[8] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
}
void initializeStaticDataNLS209(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* pwLine3.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[42].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[41].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[99].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[99].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[99].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* pwLine1.vr.re */.max;
  /* static nls data for gENSAL.iq */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* gENSAL.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* gENSAL.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* gENSAL.iq */.max;
  /* static nls data for gENSAL.id */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* gENSAL.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* gENSAL.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* gENSAL.id */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[93].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[93].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[93].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS209(sysData);
}

void getIterationVarsNLS209(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[89] /* pwLine1.is.im variable */;
  array[1] = data->localData[0]->realVars[77] /* pwLine.ir.im variable */;
  array[2] = data->localData[0]->realVars[102] /* pwLine3.is.re variable */;
  array[3] = data->localData[0]->realVars[42] /* constantLoad.p.ir variable */;
  array[4] = data->localData[0]->realVars[41] /* constantLoad.p.ii variable */;
  array[5] = data->localData[0]->realVars[99] /* pwLine3.ir.im variable */;
  array[6] = data->localData[0]->realVars[111] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[90] /* pwLine1.is.re variable */;
  array[8] = data->localData[0]->realVars[112] /* pwLine4.is.re variable */;
  array[9] = data->localData[0]->realVars[100] /* pwLine3.ir.re variable */;
  array[10] = data->localData[0]->realVars[87] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[88] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[49] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[48] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[91] /* pwLine1.vr.im variable */;
  array[15] = data->localData[0]->realVars[92] /* pwLine1.vr.re variable */;
  array[16] = data->localData[0]->realVars[68] /* gENSAL.iq variable */;
  array[17] = data->localData[0]->realVars[67] /* gENSAL.id variable */;
  array[18] = data->localData[0]->realVars[94] /* pwLine1.vs.re variable */;
  array[19] = data->localData[0]->realVars[93] /* pwLine1.vs.im variable */;
  array[20] = data->localData[0]->realVars[104] /* pwLine3.vr.re variable */;
  array[21] = data->localData[0]->realVars[103] /* pwLine3.vr.im variable */;
}


/* inner equations */

/*
equation index: 19
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[94] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[93] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[43] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[43] /* constantLoad.v variable */,data->simulationInfo->realParameter[35]);
  data->localData[0]->realVars[40] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[54] + (data->simulationInfo->realParameter[55]) * (cos((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75]))) + (data->simulationInfo->realParameter[61]) * (sin((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75]))):1.0);
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_21(DATA *data, threadData_t *threadData)
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[62];
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
    tmp9 = data->simulationInfo->realParameter[62];
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
    tmp16 = (data->simulationInfo->realParameter[56]) * ((data->simulationInfo->realParameter[62]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[56])) * (tmp10)))));
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
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38]) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40] + data->simulationInfo->realParameter[64]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[38]) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[40]);
  }
  data->localData[0]->realVars[37] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[63]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[39] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[39]) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[40] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[41]);
  }
  data->localData[0]->realVars[36] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
gENSAL._PSIppq = (-$DER.gENSAL.PSIppq) * gENSAL.Tppq0 - gENSAL.iq * (gENSAL.Xppq - gENSAL.Xq)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[4] /* gENSAL.PSIppq STATE(1) */ = ((-data->localData[0]->realVars[11] /* der(gENSAL.PSIppq) STATE_DER */)) * (data->simulationInfo->realParameter[140]) - ((data->localData[0]->realVars[68] /* gENSAL.iq variable */) * (data->simulationInfo->realParameter[148] - data->simulationInfo->realParameter[149]));
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
gENSAL._PSIq = (-gENSAL.PSIppq) - gENSAL.Xppq * gENSAL.iq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[62] /* gENSAL.PSIq variable */ = (-data->localData[0]->realVars[4] /* gENSAL.PSIppq STATE(1) */) - ((data->simulationInfo->realParameter[148]) * (data->localData[0]->realVars[68] /* gENSAL.iq variable */));
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENSAL.delta) * gENSAL.iq - cos(gENSAL.delta) * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[79] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[68] /* gENSAL.iq variable */) - ((cos(data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[67] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[102]);
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENSAL.delta) * gENSAL.iq - (-sin(gENSAL.delta)) * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[80] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[68] /* gENSAL.iq variable */) - (((-sin(data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */))) * (data->localData[0]->realVars[67] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[102]);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
gENSAL._ud = (-gENSAL.PSIq) - gENSAL.R_a * gENSAL.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[69] /* gENSAL.ud variable */ = (-data->localData[0]->realVars[62] /* gENSAL.PSIq variable */) - ((data->simulationInfo->realParameter[132]) * (data->localData[0]->realVars[67] /* gENSAL.id variable */));
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
pwLine._vs._re = sin(gENSAL.delta) * gENSAL.ud + cos(gENSAL.delta) * gENSAL.uq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[82] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[69] /* gENSAL.ud variable */) + (cos(data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[70] /* gENSAL.uq variable */);
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
pwLine._vs._im = sin(gENSAL.delta) * gENSAL.uq - cos(gENSAL.delta) * gENSAL.ud
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[81] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[70] /* gENSAL.uq variable */) - ((cos(data->localData[0]->realVars[5] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[69] /* gENSAL.ud variable */));
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
gENSAL._PSId = gENSAL.uq + gENSAL.R_a * gENSAL.iq
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[60] /* gENSAL.PSId variable */ = data->localData[0]->realVars[70] /* gENSAL.uq variable */ + (data->simulationInfo->realParameter[132]) * (data->localData[0]->realVars[68] /* gENSAL.iq variable */);
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
gENSAL._PSIppd = gENSAL.PSId + gENSAL.Xppd * gENSAL.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[61] /* gENSAL.PSIppd variable */ = data->localData[0]->realVars[60] /* gENSAL.PSId variable */ + (data->simulationInfo->realParameter[147]) * (data->localData[0]->realVars[67] /* gENSAL.id variable */);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
gENSAL._PSIkd = ((gENSAL.Epq + (gENSAL.Xl - gENSAL.Xpd) * gENSAL.id) * gENSAL.K1d + (gENSAL.Xd - gENSAL.Xpd) * gENSAL.id + (1.0 + OpenIPSL.NonElectrical.Functions.SE(gENSAL.Epq, gENSAL.S10, gENSAL.S12, 1.0, 1.2)) * gENSAL.Epq - gENSAL.ISORCE) / gENSAL.K1d
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[3] /* gENSAL.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */ + (data->simulationInfo->realParameter[145] - data->simulationInfo->realParameter[146]) * (data->localData[0]->realVars[67] /* gENSAL.id variable */)) * (data->simulationInfo->realParameter[116]) + (data->simulationInfo->realParameter[144] - data->simulationInfo->realParameter[146]) * (data->localData[0]->realVars[67] /* gENSAL.id variable */) + (1.0 + omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */, data->simulationInfo->realParameter[135], data->simulationInfo->realParameter[136], 1.0, 1.2)) * (data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */) - data->localData[0]->realVars[57] /* gENSAL.ISORCE variable */,data->simulationInfo->realParameter[116],"gENSAL.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[51] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[48] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76]);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[52] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[48] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[76]);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[54] /* gENCLS.vq variable */ = data->localData[0]->realVars[1] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[82])) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[85]) * (data->localData[0]->realVars[48] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[53] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[85]) * (data->localData[0]->realVars[49] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[82]) * (data->localData[0]->realVars[48] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[109] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[87] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[51] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
pwLine1._ir._re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[88] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[110] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[52] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[71] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[99] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[111] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[72] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[100] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[112] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
constantLoad._p._ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[41] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[77] /* pwLine.ir.im variable */) - data->localData[0]->realVars[89] /* pwLine1.is.im variable */ - data->localData[0]->realVars[101] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
constantLoad._p._ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[42] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[78] /* pwLine.ir.re variable */) - data->localData[0]->realVars[90] /* pwLine1.is.re variable */ - data->localData[0]->realVars[102] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc68(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,68};
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
  for (i=0; i<24; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<24; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[78] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[90] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[77] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[89] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[101] /* pwLine3.is.im variable */ = xloc[4];
  data->localData[0]->realVars[102] /* pwLine3.is.re variable */ = xloc[5];
  data->localData[0]->realVars[112] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[100] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[111] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[99] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[110] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[87] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[48] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[49] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */ = xloc[16];
  data->localData[0]->realVars[70] /* gENSAL.uq variable */ = xloc[17];
  data->localData[0]->realVars[67] /* gENSAL.id variable */ = xloc[18];
  data->localData[0]->realVars[68] /* gENSAL.iq variable */ = xloc[19];
  data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ = xloc[23];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_19(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_20(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_23(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_25(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_30(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_32(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_33(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_34(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_35(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_36(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_37(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_43(data, threadData);
  /* body */
  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175]);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[71] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[176]);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[63]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[176]);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[174];
        tmp4 = data->simulationInfo->realParameter[173];
        tmp6 = data->localData[0]->realVars[71] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[173]) * (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[71] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175]);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[72] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[176]);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[63]);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[103] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[176]);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[173];
        tmp15 = data->simulationInfo->realParameter[174];
        tmp17 = data->localData[0]->realVars[72] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[173]) * (data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[72] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[219]);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[220]);
  res[2] = ((tmp22 && tmp23)?data->localData[0]->realVars[112] /* pwLine4.is.re variable */:data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[218]) * (data->localData[0]->realVars[112] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[216]))) - ((data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[111] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[216]))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[219]);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[220]);
  res[3] = ((tmp24 && tmp25)?data->localData[0]->realVars[111] /* pwLine4.is.im variable */:data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[218]) * (data->localData[0]->realVars[111] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[216]))) + (data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[112] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[216])))));

  res[4] = (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[54] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[53] /* gENCLS.vd variable */) - data->localData[0]->realVars[91] /* pwLine1.vr.im variable */;

  res[5] = (cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[54] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[53] /* gENCLS.vd variable */) - data->localData[0]->realVars[92] /* pwLine1.vr.re variable */;

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[219]);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[220]);
  res[6] = ((tmp26 && tmp27)?data->localData[0]->realVars[109] /* pwLine4.ir.im variable */:data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[218]) * (data->localData[0]->realVars[109] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[92] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[216]))) + (data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[110] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[92] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[216])))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[219]);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[220]);
  res[7] = ((tmp28 && tmp29)?data->localData[0]->realVars[110] /* pwLine4.ir.re variable */:data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[218]) * (data->localData[0]->realVars[110] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[92] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[216]))) - ((data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[109] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[92] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[215]) - ((data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[216]))))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[208]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[209]);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[102] /* pwLine3.is.re variable */:data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[207]) * (data->localData[0]->realVars[102] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[205]))) - ((data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[101] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[205]))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[208]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[209]);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[100] /* pwLine3.ir.re variable */:data->localData[0]->realVars[104] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[207]) * (data->localData[0]->realVars[100] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[205]))) - ((data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[99] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[205]))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[208]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[209]);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[99] /* pwLine3.ir.im variable */:data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[207]) * (data->localData[0]->realVars[99] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[104] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[205]))) + (data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[100] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[103] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[104] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[205])))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[208]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[209]);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[101] /* pwLine3.is.im variable */:data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[103] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[207]) * (data->localData[0]->realVars[101] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[205]))) + (data->simulationInfo->realParameter[206]) * (data->localData[0]->realVars[102] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[204]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[205])))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[197]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[198]);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[89] /* pwLine1.is.im variable */:data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[89] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[194]))) + (data->simulationInfo->realParameter[195]) * (data->localData[0]->realVars[90] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[194])))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[197]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[198]);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[90] /* pwLine1.is.re variable */:data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[90] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[194]))) - ((data->simulationInfo->realParameter[195]) * (data->localData[0]->realVars[89] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[194]))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[197]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[198]);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[87] /* pwLine1.ir.im variable */:data->localData[0]->realVars[91] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[87] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[92] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[194]))) + (data->simulationInfo->realParameter[195]) * (data->localData[0]->realVars[88] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[92] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[194])))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[197]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[198]);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[88] /* pwLine1.ir.re variable */:data->localData[0]->realVars[92] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[88] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[92] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[194]))) - ((data->simulationInfo->realParameter[195]) * (data->localData[0]->realVars[87] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[92] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[193]) - ((data->localData[0]->realVars[91] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[194]))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[186]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[187]);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[79] /* pwLine.is.im variable */:data->localData[0]->realVars[81] /* pwLine.vs.im variable */ - data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[79] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[82] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[81] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[183]))) + (data->simulationInfo->realParameter[184]) * (data->localData[0]->realVars[80] /* pwLine.is.re variable */ + (data->localData[0]->realVars[81] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[82] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[183])))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[186]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[187]);
  res[17] = ((tmp48 && tmp49)?data->localData[0]->realVars[80] /* pwLine.is.re variable */:data->localData[0]->realVars[82] /* pwLine.vs.re variable */ - data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[80] /* pwLine.is.re variable */ + (data->localData[0]->realVars[81] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[82] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[183]))) - ((data->simulationInfo->realParameter[184]) * (data->localData[0]->realVars[79] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[82] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[81] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[183]))))));

  res[18] = (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[37] /* constantLoad.Q variable */;

  res[19] = (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[36] /* constantLoad.P variable */;

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[186]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[187]);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[77] /* pwLine.ir.im variable */:data->localData[0]->realVars[93] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[81] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[77] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[183]))) + (data->simulationInfo->realParameter[184]) * (data->localData[0]->realVars[78] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[183])))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[186]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[187]);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[78] /* pwLine.ir.re variable */:data->localData[0]->realVars[94] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[82] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[78] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[183]))) - ((data->simulationInfo->realParameter[184]) * (data->localData[0]->realVars[77] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[94] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[182]) - ((data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[183]))))));

  res[22] = (data->localData[0]->realVars[3] /* gENSAL.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[119]) + (data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */) * (data->simulationInfo->realParameter[118]) - data->localData[0]->realVars[61] /* gENSAL.PSIppd variable */;

  res[23] = data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */ + (data->simulationInfo->realParameter[145] - data->simulationInfo->realParameter[146]) * (data->localData[0]->realVars[67] /* gENSAL.id variable */) + (-data->localData[0]->realVars[3] /* gENSAL.PSIkd STATE(1) */) - ((data->localData[0]->realVars[10] /* der(gENSAL.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[139]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS68(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+24] = {0,4,4,4,4,4,4,3,3,3,3,4,4,6,6,7,7,2,5,6,5,11,11,8,8};
  const int rowIndex[126] = {18,19,20,21,12,13,18,19,18,19,20,21,12,13,18,19,8,11,18,19,8,11,18,19,1,2,3,1,9,10,0,2,3,0,9,10,6,7,14,15,6,7,14,15,4,5,6,7,14,15,4,5,6,7,14,15,2,5,6,7,13,14,15,3,4,6,7,12,14,15,22,23,16,17,20,21,22,16,17,20,21,22,23,16,17,20,21,22,8,9,11,12,13,15,17,18,19,20,21,8,10,11,12,13,14,16,18,19,20,21,0,1,2,3,6,9,10,11,0,1,2,3,7,8,9,10};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((24+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(126*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 126;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(24*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (24+1)*sizeof(int));
  
  for(i=2;i<24+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 126*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[23] = 1;
  inSysData->sparsePattern.colorCols[22] = 2;
  inSysData->sparsePattern.colorCols[21] = 3;
  inSysData->sparsePattern.colorCols[20] = 4;
  inSysData->sparsePattern.colorCols[5] = 5;
  inSysData->sparsePattern.colorCols[15] = 5;
  inSysData->sparsePattern.colorCols[4] = 6;
  inSysData->sparsePattern.colorCols[14] = 6;
  inSysData->sparsePattern.colorCols[19] = 6;
  inSysData->sparsePattern.colorCols[3] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[18] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[7] = 9;
  inSysData->sparsePattern.colorCols[8] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[17] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[6] = 10;
  inSysData->sparsePattern.colorCols[9] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[16] = 10;
}
void initializeStaticDataNLS68(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[77].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[77].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[77].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[99].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[99].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[99].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[49].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENSAL.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[2].attribute /* gENSAL.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2].attribute /* gENSAL.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2].attribute /* gENSAL.Epq */.max;
  /* static nls data for gENSAL.uq */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* gENSAL.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* gENSAL.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* gENSAL.uq */.max;
  /* static nls data for gENSAL.id */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* gENSAL.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* gENSAL.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* gENSAL.id */.max;
  /* static nls data for gENSAL.iq */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* gENSAL.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* gENSAL.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* gENSAL.iq */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[93].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[93].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[93].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS68(sysData);
}

void getIterationVarsNLS68(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[78] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[90] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[77] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[89] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[101] /* pwLine3.is.im variable */;
  array[5] = data->localData[0]->realVars[102] /* pwLine3.is.re variable */;
  array[6] = data->localData[0]->realVars[112] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[100] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[111] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[99] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[110] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[87] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[48] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[49] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[92] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[91] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[2] /* gENSAL.Epq STATE(1) */;
  array[17] = data->localData[0]->realVars[70] /* gENSAL.uq variable */;
  array[18] = data->localData[0]->realVars[67] /* gENSAL.id variable */;
  array[19] = data->localData[0]->realVars[68] /* gENSAL.iq variable */;
  array[20] = data->localData[0]->realVars[94] /* pwLine1.vs.re variable */;
  array[21] = data->localData[0]->realVars[93] /* pwLine1.vs.im variable */;
  array[22] = data->localData[0]->realVars[103] /* pwLine3.vr.im variable */;
  array[23] = data->localData[0]->realVars[104] /* pwLine3.vr.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Machines_PSSE_GENSAL_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 209;
  nonLinearSystemData[1].size = 22;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc209;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacNLSJac8_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianNLSJac8;
  nonLinearSystemData[1].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS209;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS209;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 68;
  nonLinearSystemData[0].size = 24;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc68;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS68;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS68;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

