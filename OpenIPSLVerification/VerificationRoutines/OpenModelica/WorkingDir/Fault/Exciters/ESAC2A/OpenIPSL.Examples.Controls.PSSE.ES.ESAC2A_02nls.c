/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 760
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[39], 7, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[58] + (data->simulationInfo->realParameter[59]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79]))) + (data->simulationInfo->realParameter[65]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79]))):1.0);
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 6, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[66];
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
    tmp9 = data->simulationInfo->realParameter[66];
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
    tmp16 = (data->simulationInfo->realParameter[60]) * ((data->simulationInfo->realParameter[66]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[60])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[75], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] + data->simulationInfo->realParameter[69], 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[68]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[75], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] + data->simulationInfo->realParameter[69], 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45] + data->simulationInfo->realParameter[67]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 765
type: SIMPLE_ASSIGN
generator._PSIq = (-generator.PSIppq) - generator.Xppq * generator.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->localData[0]->realVars[101] /* generator.PSIq variable */ = (-data->localData[0]->realVars[100] /* generator.PSIppq variable */) - ((data->simulationInfo->realParameter[254]) * (data->localData[0]->realVars[108] /* generator.iq variable */));
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
pwLine._is._im = ($cse6 * generator.iq - $cse7 * generator.id) * generator.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->localData[0]->realVars[119] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[108] /* generator.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[107] /* generator.id variable */))) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
pwLine._is._re = ($cse7 * generator.iq - (-$cse6) * generator.id) * generator.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->localData[0]->realVars[120] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[108] /* generator.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[107] /* generator.id variable */))) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
generator._ud = (-generator.PSIq) - generator.R_a * generator.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->localData[0]->realVars[109] /* generator.ud variable */ = (-data->localData[0]->realVars[101] /* generator.PSIq variable */) - ((data->simulationInfo->realParameter[236]) * (data->localData[0]->realVars[107] /* generator.id variable */));
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
generator._PSId = generator.PSIppd - generator.Xppd * generator.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->localData[0]->realVars[97] /* generator.PSId variable */ = data->localData[0]->realVars[99] /* generator.PSIppd variable */ - ((data->simulationInfo->realParameter[253]) * (data->localData[0]->realVars[107] /* generator.id variable */));
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
generator._uq = generator.PSId - generator.R_a * generator.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->localData[0]->realVars[110] /* generator.uq variable */ = data->localData[0]->realVars[97] /* generator.PSId variable */ - ((data->simulationInfo->realParameter[236]) * (data->localData[0]->realVars[108] /* generator.iq variable */));
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
pwLine._vs._re = $cse6 * generator.ud + $cse7 * generator.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->localData[0]->realVars[122] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[109] /* generator.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[110] /* generator.uq variable */);
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
pwLine._vs._im = $cse6 * generator.uq - $cse7 * generator.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->localData[0]->realVars[121] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[110] /* generator.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[109] /* generator.ud variable */));
  TRACE_POP
}
/*
equation index: 773
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->localData[0]->realVars[91] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[87] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}
/*
equation index: 774
type: SIMPLE_ASSIGN
gENCLS._p._ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->localData[0]->realVars[90] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[87] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}
/*
equation index: 775
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->localData[0]->realVars[92] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[87] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 776
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  data->localData[0]->realVars[93] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[182])) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[87] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 777
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->localData[0]->realVars[150] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[128] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[127] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[90] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->localData[0]->realVars[112] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[152] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 780
type: SIMPLE_ASSIGN
pwLine3._is._im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->localData[0]->realVars[141] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[117] /* pwLine.ir.im variable */) - data->localData[0]->realVars[129] /* pwLine1.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
constantLoad._p._ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[118] /* pwLine.ir.re variable */) - data->localData[0]->realVars[130] /* pwLine1.is.re variable */ - data->localData[0]->realVars[142] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 782
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->localData[0]->realVars[111] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[139] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[151] /* pwLine4.is.im variable */;
  TRACE_POP
}

void residualFunc850(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,850};
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
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
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
  data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[151] /* pwLine4.is.im variable */ = xloc[1];
  data->localData[0]->realVars[118] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[130] /* pwLine1.is.re variable */ = xloc[3];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[4];
  data->localData[0]->realVars[129] /* pwLine1.is.im variable */ = xloc[5];
  data->localData[0]->realVars[152] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[142] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[117] /* pwLine.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[88] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[87] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[107] /* generator.id variable */ = xloc[16];
  data->localData[0]->realVars[108] /* generator.iq variable */ = xloc[17];
  data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ = xloc[18];
  data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ = xloc[19];
  data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_760(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_761(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_762(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_763(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_764(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_765(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_766(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_767(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_768(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_769(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_770(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_771(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_772(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_773(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_774(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_775(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_776(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_777(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_778(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_779(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_780(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_781(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_782(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 1, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[117] /* pwLine.ir.im variable */:data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[121] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[117] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[118] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294])))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 1, Less);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[120] /* pwLine.is.re variable */:data->localData[0]->realVars[122] /* pwLine.vs.re variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */ + (data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[294]))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 1, Less);
  res[2] = ((tmp4 && tmp5)?data->localData[0]->realVars[119] /* pwLine.is.im variable */:data->localData[0]->realVars[121] /* pwLine.vs.im variable */ - data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */ + (data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[294])))));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 9, Less);
  res[3] = ((tmp6 && tmp7)?data->localData[0]->realVars[142] /* pwLine3.is.re variable */:data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[142] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[141] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[316]))))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 9, Less);
  res[4] = ((tmp8 && tmp9)?data->localData[0]->realVars[139] /* pwLine3.ir.im variable */:data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316])))));

  RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 10, Less);
  tmp19 = (modelica_boolean)tmp10;
  if(tmp19)
  {
    tmp20 = data->localData[0]->realVars[111] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 11, Less);
    tmp17 = (modelica_boolean)(tmp11 && data->simulationInfo->booleanParameter[66]);
    if(tmp17)
    {
      tmp18 = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 11, Less);
      tmp15 = (modelica_boolean)tmp12;
      if(tmp15)
      {
        tmp13 = data->simulationInfo->realParameter[285];
        tmp14 = data->simulationInfo->realParameter[284];
        tmp16 = data->localData[0]->realVars[111] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)),(tmp13 * tmp13) + (tmp14 * tmp14),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp16 = data->localData[0]->realVars[111] /* pwFault.p.ii variable */;
      }
      tmp18 = tmp16;
    }
    tmp20 = tmp18;
  }
  res[5] = tmp20;

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 10, Less);
  tmp30 = (modelica_boolean)tmp21;
  if(tmp30)
  {
    tmp31 = data->localData[0]->realVars[112] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 11, Less);
    tmp28 = (modelica_boolean)(tmp22 && data->simulationInfo->booleanParameter[66]);
    if(tmp28)
    {
      tmp29 = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 11, Less);
      tmp26 = (modelica_boolean)tmp23;
      if(tmp26)
      {
        tmp24 = data->simulationInfo->realParameter[284];
        tmp25 = data->simulationInfo->realParameter[285];
        tmp27 = data->localData[0]->realVars[112] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */),(tmp24 * tmp24) + (tmp25 * tmp25),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp27 = data->localData[0]->realVars[112] /* pwFault.p.ir variable */;
      }
      tmp29 = tmp27;
    }
    tmp31 = tmp29;
  }
  res[6] = tmp31;

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[330], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[331], 13, Less);
  res[7] = ((tmp32 && tmp33)?data->localData[0]->realVars[152] /* pwLine4.is.re variable */:data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[152] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[327]))) - ((data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[151] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[327]))))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[330], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[331], 13, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[150] /* pwLine4.ir.re variable */:data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[150] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[327]))) - ((data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[327]))))));

  res[9] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[93] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[92] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;

  res[10] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[93] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[92] /* gENCLS.vd variable */) - data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[330], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[331], 13, Less);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[149] /* pwLine4.ir.im variable */:data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[327]))) + (data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[150] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[327])))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 3, Less);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[130] /* pwLine1.is.re variable */:data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[130] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[129] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 3, Less);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[129] /* pwLine1.is.im variable */:data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[129] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[130] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305])))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[330], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[331], 13, Less);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[151] /* pwLine4.is.im variable */:data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[151] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[327]))) + (data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[152] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[327])))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 9, Less);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[140] /* pwLine3.ir.re variable */:data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 9, Less);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[141] /* pwLine3.is.im variable */:data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[141] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[142] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[316])))));

  res[17] = (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[18] = (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 1, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[118] /* pwLine.ir.re variable */:data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[122] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[118] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[117] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 3, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[128] /* pwLine1.ir.re variable */:data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[305]))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 3, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[127] /* pwLine1.ir.im variable */:data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[305])))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS850(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,3,3,4,4,4,4,3,3,4,4,4,4,4,4,7,7,4,4,11,8,8,11};
  const int rowIndex[112] = {4,5,15,5,7,14,0,17,18,19,12,13,17,18,3,16,17,18,3,12,13,16,6,7,14,4,6,15,3,16,17,18,0,3,16,19,8,11,20,21,8,11,20,21,8,9,10,11,8,9,10,11,8,10,11,13,14,20,21,7,8,9,11,12,20,21,0,1,2,19,0,1,2,19,0,1,3,12,13,15,16,17,18,19,20,4,5,6,7,11,14,15,16,3,4,5,6,7,8,14,15,0,2,3,4,12,13,16,17,18,19,21};
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
  inSysData->sparsePattern.colorCols[14] = 6;
  inSysData->sparsePattern.colorCols[8] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[17] = 7;
  inSysData->sparsePattern.colorCols[4] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[16] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[3] = 9;
  inSysData->sparsePattern.colorCols[7] = 9;
  inSysData->sparsePattern.colorCols[9] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[2] = 10;
  inSysData->sparsePattern.colorCols[5] = 10;
  inSysData->sparsePattern.colorCols[6] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
}
void initializeStaticDataNLS850(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.is.re */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.re */.max;
  /* static nls data for generator.id */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* generator.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* generator.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* generator.id */.max;
  /* static nls data for generator.iq */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* generator.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* generator.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* generator.iq */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS850(sysData);
}

void getIterationVarsNLS850(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[139] /* pwLine3.ir.im variable */;
  array[1] = data->localData[0]->realVars[151] /* pwLine4.is.im variable */;
  array[2] = data->localData[0]->realVars[118] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[130] /* pwLine1.is.re variable */;
  array[4] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[5] = data->localData[0]->realVars[129] /* pwLine1.is.im variable */;
  array[6] = data->localData[0]->realVars[152] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[140] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[142] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[117] /* pwLine.ir.im variable */;
  array[10] = data->localData[0]->realVars[127] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[88] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[87] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;
  array[15] = data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;
  array[16] = data->localData[0]->realVars[107] /* generator.id variable */;
  array[17] = data->localData[0]->realVars[108] /* generator.iq variable */;
  array[18] = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  array[19] = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
  array[20] = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */;
  array[21] = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 626
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[39]);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[58] + (data->simulationInfo->realParameter[59]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79]))) + (data->simulationInfo->realParameter[65]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79]))):1.0);
  TRACE_POP
}
/*
equation index: 628
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[66];
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
    tmp9 = data->simulationInfo->realParameter[66];
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
    tmp16 = (data->simulationInfo->realParameter[60]) * ((data->simulationInfo->realParameter[66]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[60])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75] + data->simulationInfo->realParameter[69]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[68]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75] + data->simulationInfo->realParameter[69]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45] + data->simulationInfo->realParameter[67]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(generator.delta) * generator.iq - (-sin(generator.delta)) * generator.id) * generator.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->localData[0]->realVars[120] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* generator.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* generator.delta STATE(1) */))) * (data->localData[0]->realVars[107] /* generator.id variable */))) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(generator.delta) * generator.iq - cos(generator.delta) * generator.id) * generator.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->localData[0]->realVars[119] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* generator.iq variable */) - ((cos(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[107] /* generator.id variable */))) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
generator._PSIq = (-generator.PSIppq) - generator.Xppq * generator.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->localData[0]->realVars[101] /* generator.PSIq variable */ = (-data->localData[0]->realVars[100] /* generator.PSIppq variable */) - ((data->simulationInfo->realParameter[254]) * (data->localData[0]->realVars[108] /* generator.iq variable */));
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
generator._ud = (-generator.PSIq) - generator.R_a * generator.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->localData[0]->realVars[109] /* generator.ud variable */ = (-data->localData[0]->realVars[101] /* generator.PSIq variable */) - ((data->simulationInfo->realParameter[236]) * (data->localData[0]->realVars[107] /* generator.id variable */));
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
pwLine._vs._re = sin(generator.delta) * generator.ud + cos(generator.delta) * generator.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->localData[0]->realVars[122] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* generator.ud variable */) + (cos(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* generator.uq variable */);
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
pwLine._vs._im = sin(generator.delta) * generator.uq - cos(generator.delta) * generator.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->localData[0]->realVars[121] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* generator.uq variable */) - ((cos(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* generator.ud variable */));
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
generator._PSId = generator.uq + generator.R_a * generator.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->localData[0]->realVars[97] /* generator.PSId variable */ = data->localData[0]->realVars[110] /* generator.uq variable */ + (data->simulationInfo->realParameter[236]) * (data->localData[0]->realVars[108] /* generator.iq variable */);
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
generator._PSIppd = generator.PSId + generator.Xppd * generator.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->localData[0]->realVars[99] /* generator.PSIppd variable */ = data->localData[0]->realVars[97] /* generator.PSId variable */ + (data->simulationInfo->realParameter[253]) * (data->localData[0]->realVars[107] /* generator.id variable */);
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
generator._PSIpp = sqrt(generator.PSIppd ^ 2.0 + generator.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[99] /* generator.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[100] /* generator.PSIppq variable */;
  data->localData[0]->realVars[98] /* generator.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 640
type: SIMPLE_ASSIGN
generator._PSIkd = ((generator.Epq + (generator.Xl - generator.Xpd) * generator.id) * generator.K1d + generator.Epq + generator.id * (generator.Xd - generator.Xpd) + OpenIPSL.NonElectrical.Functions.SE(generator.PSIpp, generator.S10, generator.S12, 1.0, 1.2) * generator.PSIppd - eSAC2A.XADIFD) / generator.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->localData[0]->realVars[9] /* generator.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ + (data->simulationInfo->realParameter[250] - data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[107] /* generator.id variable */)) * (data->simulationInfo->realParameter[215]) + data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ + (data->localData[0]->realVars[107] /* generator.id variable */) * (data->simulationInfo->realParameter[249] - data->simulationInfo->realParameter[251]) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[98] /* generator.PSIpp variable */, data->simulationInfo->realParameter[239], data->simulationInfo->realParameter[240], 1.0, 1.2)) * (data->localData[0]->realVars[99] /* generator.PSIppd variable */) - data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */,data->simulationInfo->realParameter[215],"generator.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
generator._PSIkq = ((generator.Epd + (generator.Xpq - generator.Xl) * generator.iq) * generator.K1q + generator.Epd + generator.iq * (generator.Xpq - generator.Xq) + OpenIPSL.NonElectrical.Functions.SE(generator.PSIpp, generator.S10, generator.S12, 1.0, 1.2) * generator.PSIppq * (generator.Xq - generator.Xl) / (generator.Xd - generator.Xl) - generator.XaqIlq) / generator.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->localData[0]->realVars[10] /* generator.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ + (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[108] /* generator.iq variable */)) * (data->simulationInfo->realParameter[216]) + data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ + (data->localData[0]->realVars[108] /* generator.iq variable */) * (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[256]) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[98] /* generator.PSIpp variable */, data->simulationInfo->realParameter[239], data->simulationInfo->realParameter[240], 1.0, 1.2)) * ((data->localData[0]->realVars[100] /* generator.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[256] - data->simulationInfo->realParameter[250],data->simulationInfo->realParameter[249] - data->simulationInfo->realParameter[250],"generator.Xd - generator.Xl",equationIndexes))) - data->localData[0]->realVars[104] /* generator.XaqIlq variable */,data->simulationInfo->realParameter[216],"generator.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 642
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->localData[0]->realVars[91] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[87] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->localData[0]->realVars[90] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[87] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->localData[0]->realVars[93] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[182])) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[87] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->localData[0]->realVars[92] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[87] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->localData[0]->realVars[150] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[128] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
pwLine1._ir._im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[149] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[90] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->localData[0]->realVars[111] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[139] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[151] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->localData[0]->realVars[112] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[152] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
pwLine1._is._re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->localData[0]->realVars[130] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[118] /* pwLine.ir.re variable */) - data->localData[0]->realVars[142] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
constantLoad._p._ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[117] /* pwLine.ir.im variable */) - data->localData[0]->realVars[129] /* pwLine1.is.im variable */ - data->localData[0]->realVars[141] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc678(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,678};
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[117] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[129] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[2];
  data->localData[0]->realVars[118] /* pwLine.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[142] /* pwLine3.is.re variable */ = xloc[4];
  data->localData[0]->realVars[141] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[152] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[151] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[87] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[88] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[110] /* generator.uq variable */ = xloc[16];
  data->localData[0]->realVars[100] /* generator.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[107] /* generator.id variable */ = xloc[18];
  data->localData[0]->realVars[108] /* generator.iq variable */ = xloc[19];
  data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ = xloc[22];
  data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ = xloc[23];
  data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ = xloc[24];
  data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_626(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_627(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_628(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_629(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_630(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_631(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_632(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_633(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_634(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_635(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_636(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_637(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_638(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_639(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_640(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_641(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_642(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_643(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_644(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_645(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_646(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_647(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_648(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_649(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_650(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_651(data, threadData);
  /* body */
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[120] /* pwLine.is.re variable */:data->localData[0]->realVars[122] /* pwLine.vs.re variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */ + (data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[294]))))));

  res[1] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[92] /* gENCLS.vd variable */) - data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;

  res[2] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[92] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;

  tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp11 = (modelica_boolean)tmp2;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[111] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
    tmp9 = (modelica_boolean)(tmp3 && data->simulationInfo->booleanParameter[66]);
    if(tmp9)
    {
      tmp10 = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp4 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
      tmp7 = (modelica_boolean)tmp4;
      if(tmp7)
      {
        tmp5 = data->simulationInfo->realParameter[285];
        tmp6 = data->simulationInfo->realParameter[284];
        tmp8 = data->localData[0]->realVars[111] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)),(tmp5 * tmp5) + (tmp6 * tmp6),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp8 = data->localData[0]->realVars[111] /* pwFault.p.ii variable */;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  res[3] = tmp12;

  tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp22 = (modelica_boolean)tmp13;
  if(tmp22)
  {
    tmp23 = data->localData[0]->realVars[112] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
    tmp20 = (modelica_boolean)(tmp14 && data->simulationInfo->booleanParameter[66]);
    if(tmp20)
    {
      tmp21 = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
      tmp18 = (modelica_boolean)tmp15;
      if(tmp18)
      {
        tmp16 = data->simulationInfo->realParameter[284];
        tmp17 = data->simulationInfo->realParameter[285];
        tmp19 = data->localData[0]->realVars[112] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */),(tmp16 * tmp16) + (tmp17 * tmp17),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp19 = data->localData[0]->realVars[112] /* pwFault.p.ir variable */;
      }
      tmp21 = tmp19;
    }
    tmp23 = tmp21;
  }
  res[4] = tmp23;

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[5] = ((tmp24 && tmp25)?data->localData[0]->realVars[142] /* pwLine3.is.re variable */:data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[142] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[141] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[316]))))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[6] = ((tmp26 && tmp27)?data->localData[0]->realVars[141] /* pwLine3.is.im variable */:data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[141] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[142] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[316])))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[7] = ((tmp28 && tmp29)?data->localData[0]->realVars[140] /* pwLine3.ir.re variable */:data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[139] /* pwLine3.ir.im variable */:data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316])))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[330]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[331]);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[151] /* pwLine4.is.im variable */:data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[151] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[327]))) + (data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[152] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[327])))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[330]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[331]);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[152] /* pwLine4.is.re variable */:data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[152] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[327]))) - ((data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[151] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[327]))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[330]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[331]);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[150] /* pwLine4.ir.re variable */:data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[150] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[327]))) - ((data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[327]))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[129] /* pwLine1.is.im variable */:data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[129] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[130] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305])))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[130] /* pwLine1.is.re variable */:data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[130] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[129] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[330]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[331]);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[149] /* pwLine4.ir.im variable */:data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[327]))) + (data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[150] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[327])))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[128] /* pwLine1.ir.re variable */:data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[305]))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[127] /* pwLine1.ir.im variable */:data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[305])))));

  res[17] = (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[18] = (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[118] /* pwLine.ir.re variable */:data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[122] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[118] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[117] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[117] /* pwLine.ir.im variable */:data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[121] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[117] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[118] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294])))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[119] /* pwLine.is.im variable */:data->localData[0]->realVars[121] /* pwLine.vs.im variable */ - data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */ + (data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[294])))));

  res[22] = data->localData[0]->realVars[100] /* generator.PSIppq variable */ - ((data->localData[0]->realVars[7] /* generator.Epd STATE(1) */) * (data->simulationInfo->realParameter[220])) - ((data->localData[0]->realVars[10] /* generator.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[222]));

  res[23] = data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ + (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[108] /* generator.iq variable */) + (-data->localData[0]->realVars[10] /* generator.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(generator.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[244]));

  res[24] = (data->localData[0]->realVars[9] /* generator.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[221]) + (data->localData[0]->realVars[8] /* generator.Epq STATE(1) */) * (data->simulationInfo->realParameter[219]) - data->localData[0]->realVars[99] /* generator.PSIppd variable */;

  res[25] = data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ + (data->simulationInfo->realParameter[250] - data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[107] /* generator.id variable */) + (-data->localData[0]->realVars[9] /* generator.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(generator.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[243]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS678(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,4,4,3,3,3,3,4,4,6,6,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[144] = {17,18,19,20,12,13,17,18,12,13,17,18,12,13,19,20,5,6,12,13,5,6,17,18,4,7,8,4,9,10,3,9,10,3,7,8,11,14,15,16,11,14,15,16,1,2,11,14,15,16,1,2,11,14,15,16,22,23,24,25,0,19,20,21,22,23,24,25,0,19,20,21,22,23,24,25,0,19,20,21,22,23,24,25,0,19,20,21,22,23,24,25,1,9,11,12,14,15,16,2,10,11,13,14,15,16,0,5,6,7,12,13,15,17,18,19,20,5,6,8,12,13,16,17,18,19,20,21,3,4,5,7,8,9,10,11,3,4,6,7,8,9,10,14};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(144*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 144;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 144*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[25] = 1;
  inSysData->sparsePattern.colorCols[24] = 2;
  inSysData->sparsePattern.colorCols[23] = 3;
  inSysData->sparsePattern.colorCols[22] = 4;
  inSysData->sparsePattern.colorCols[19] = 5;
  inSysData->sparsePattern.colorCols[21] = 5;
  inSysData->sparsePattern.colorCols[18] = 6;
  inSysData->sparsePattern.colorCols[20] = 6;
  inSysData->sparsePattern.colorCols[3] = 7;
  inSysData->sparsePattern.colorCols[5] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[7] = 9;
  inSysData->sparsePattern.colorCols[9] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[4] = 10;
  inSysData->sparsePattern.colorCols[6] = 10;
  inSysData->sparsePattern.colorCols[8] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
}
void initializeStaticDataNLS678(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.iq */.max;
  /* static nls data for generator.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* generator.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* generator.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* generator.Epd */.max;
  /* static nls data for generator.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* generator.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* generator.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* generator.Epq */.max;
  /* static nls data for generator.uq */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* generator.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* generator.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* generator.uq */.max;
  /* static nls data for generator.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* generator.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* generator.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* generator.PSIppq */.max;
  /* static nls data for generator.id */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* generator.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* generator.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* generator.id */.max;
  /* static nls data for generator.iq */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* generator.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* generator.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* generator.iq */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS678(sysData);
}

void getIterationVarsNLS678(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[117] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[129] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[3] = data->localData[0]->realVars[118] /* pwLine.ir.re variable */;
  array[4] = data->localData[0]->realVars[142] /* pwLine3.is.re variable */;
  array[5] = data->localData[0]->realVars[141] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[140] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[152] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[151] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[139] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[149] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[87] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[88] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[7] /* generator.Epd STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* generator.Epq STATE(1) */;
  array[16] = data->localData[0]->realVars[110] /* generator.uq variable */;
  array[17] = data->localData[0]->realVars[100] /* generator.PSIppq variable */;
  array[18] = data->localData[0]->realVars[107] /* generator.id variable */;
  array[19] = data->localData[0]->realVars[108] /* generator.iq variable */;
  array[20] = data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  array[23] = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
  array[24] = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */;
  array[25] = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
}


/* inner equations */

/*
equation index: 590
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._y_start = eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->simulationInfo->realParameter[161] = data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */;
  TRACE_POP
}
/*
equation index: 591
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Efd0 = eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->simulationInfo->realParameter[150] = data->simulationInfo->realParameter[161];
  TRACE_POP
}
/*
equation index: 592
type: SIMPLE_ASSIGN
eSAC2A._VE0 = eSAC2A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->simulationInfo->realParameter[105] = data->simulationInfo->realParameter[150];
  TRACE_POP
}
/*
equation index: 593
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._u1 = eSAC2A.rectifierCommutationVoltageDrop.gain2.k * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->localData[0]->realVars[76] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[147]) * (data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 594
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._y = eSAC2A.rectifierCommutationVoltageDrop.division.u1 / eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[76] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC2A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 595
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._fEX._y = if eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC2A.rectifierCommutationVoltageDrop.division.y else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC2A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
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
  tmp0 = LessEq(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 596
type: SIMPLE_ASSIGN
eSAC2A._EFD = eSAC2A.rotatingExciterWithDemagnetization.sISO.y * eSAC2A.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->localData[0]->realVars[62] /* eSAC2A.EFD variable */ = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 597
type: SIMPLE_ASSIGN
eSAC2A._Ifd0 = eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->simulationInfo->realParameter[91] = data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */;
  TRACE_POP
}

void residualFunc600(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,600};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */ = xloc[0];
  data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_590(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_591(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_592(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_593(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_594(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_595(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_596(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_597(data, threadData);
  /* body */
  res[0] = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[93], data->simulationInfo->realParameter[89], data->simulationInfo->realParameter[91]) - data->simulationInfo->realParameter[105];

  res[1] = data->localData[0]->realVars[62] /* eSAC2A.EFD variable */ + (-data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */) - ((data->localData[0]->realVars[21] /* der(generator.Epq) STATE_DER */) * (data->simulationInfo->realParameter[242]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS600(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS600(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC2A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* eSAC2A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* eSAC2A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* eSAC2A.XADIFD */.max;
  /* static nls data for eSAC2A.rotatingExciterWithDemagnetization.sISO.y */
  sysData->nominal[i] = data->modelData->realVarsData[3].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[3].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[3].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS600(sysData);
}

void getIterationVarsNLS600(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */;
  array[1] = data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */;
}


/* inner equations */

/*
equation index: 57
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[39]);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[58] + (data->simulationInfo->realParameter[59]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79]))) + (data->simulationInfo->realParameter[65]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79]))):1.0);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[66];
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
    tmp9 = data->simulationInfo->realParameter[66];
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
    tmp16 = (data->simulationInfo->realParameter[60]) * ((data->simulationInfo->realParameter[66]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[60])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75] + data->simulationInfo->realParameter[69]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[68]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[75] + data->simulationInfo->realParameter[69]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45] + data->simulationInfo->realParameter[67]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[43]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[45]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(generator.delta) * generator.iq - (-sin(generator.delta)) * generator.id) * generator.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[120] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* generator.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* generator.delta STATE(1) */))) * (data->localData[0]->realVars[107] /* generator.id variable */))) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(generator.delta) * generator.iq - cos(generator.delta) * generator.id) * generator.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[119] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* generator.iq variable */) - ((cos(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[107] /* generator.id variable */))) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
generator._PSIq = (-generator.PSIppq) - generator.Xppq * generator.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[101] /* generator.PSIq variable */ = (-data->localData[0]->realVars[100] /* generator.PSIppq variable */) - ((data->simulationInfo->realParameter[254]) * (data->localData[0]->realVars[108] /* generator.iq variable */));
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
generator._ud = (-generator.PSIq) - generator.R_a * generator.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[109] /* generator.ud variable */ = (-data->localData[0]->realVars[101] /* generator.PSIq variable */) - ((data->simulationInfo->realParameter[236]) * (data->localData[0]->realVars[107] /* generator.id variable */));
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
pwLine._vs._re = sin(generator.delta) * generator.ud + cos(generator.delta) * generator.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[122] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* generator.ud variable */) + (cos(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* generator.uq variable */);
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
pwLine._vs._im = sin(generator.delta) * generator.uq - cos(generator.delta) * generator.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[121] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* generator.uq variable */) - ((cos(data->localData[0]->realVars[11] /* generator.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* generator.ud variable */));
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
generator._PSId = generator.uq + generator.R_a * generator.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[97] /* generator.PSId variable */ = data->localData[0]->realVars[110] /* generator.uq variable */ + (data->simulationInfo->realParameter[236]) * (data->localData[0]->realVars[108] /* generator.iq variable */);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
generator._PSIppd = generator.PSId + generator.Xppd * generator.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[99] /* generator.PSIppd variable */ = data->localData[0]->realVars[97] /* generator.PSId variable */ + (data->simulationInfo->realParameter[253]) * (data->localData[0]->realVars[107] /* generator.id variable */);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
generator._PSIpp = sqrt(generator.PSIppd ^ 2.0 + generator.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[99] /* generator.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[100] /* generator.PSIppq variable */;
  data->localData[0]->realVars[98] /* generator.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
generator._PSIkd = ((generator.Epq + (generator.Xl - generator.Xpd) * generator.id) * generator.K1d + generator.Epq + generator.id * (generator.Xd - generator.Xpd) + OpenIPSL.NonElectrical.Functions.SE(generator.PSIpp, generator.S10, generator.S12, 1.0, 1.2) * generator.PSIppd - eSAC2A.XADIFD) / generator.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[9] /* generator.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ + (data->simulationInfo->realParameter[250] - data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[107] /* generator.id variable */)) * (data->simulationInfo->realParameter[215]) + data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ + (data->localData[0]->realVars[107] /* generator.id variable */) * (data->simulationInfo->realParameter[249] - data->simulationInfo->realParameter[251]) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[98] /* generator.PSIpp variable */, data->simulationInfo->realParameter[239], data->simulationInfo->realParameter[240], 1.0, 1.2)) * (data->localData[0]->realVars[99] /* generator.PSIppd variable */) - data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */,data->simulationInfo->realParameter[215],"generator.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
generator._PSIkq = ((generator.Epd + (generator.Xpq - generator.Xl) * generator.iq) * generator.K1q + generator.Epd + generator.iq * (generator.Xpq - generator.Xq) + OpenIPSL.NonElectrical.Functions.SE(generator.PSIpp, generator.S10, generator.S12, 1.0, 1.2) * generator.PSIppq * (generator.Xq - generator.Xl) / (generator.Xd - generator.Xl) - generator.XaqIlq) / generator.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[10] /* generator.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ + (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[108] /* generator.iq variable */)) * (data->simulationInfo->realParameter[216]) + data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ + (data->localData[0]->realVars[108] /* generator.iq variable */) * (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[256]) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[98] /* generator.PSIpp variable */, data->simulationInfo->realParameter[239], data->simulationInfo->realParameter[240], 1.0, 1.2)) * ((data->localData[0]->realVars[100] /* generator.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[256] - data->simulationInfo->realParameter[250],data->simulationInfo->realParameter[249] - data->simulationInfo->realParameter[250],"generator.Xd - generator.Xl",equationIndexes))) - data->localData[0]->realVars[104] /* generator.XaqIlq variable */,data->simulationInfo->realParameter[216],"generator.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[91] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[87] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[90] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[87] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[93] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[182])) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[87] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[92] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[185]) * (data->localData[0]->realVars[88] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[182]) * (data->localData[0]->realVars[87] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[150] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[128] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
pwLine1._ir._im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[149] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[90] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[111] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[139] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[151] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[112] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[152] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
pwLine1._is._re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[130] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[118] /* pwLine.ir.re variable */) - data->localData[0]->realVars[142] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 82
type: SIMPLE_ASSIGN
constantLoad._p._ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[117] /* pwLine.ir.im variable */) - data->localData[0]->realVars[129] /* pwLine1.is.im variable */ - data->localData[0]->realVars[141] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc109(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,109};
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[117] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[129] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[2];
  data->localData[0]->realVars[118] /* pwLine.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[142] /* pwLine3.is.re variable */ = xloc[4];
  data->localData[0]->realVars[141] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[152] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[151] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[87] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[88] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[110] /* generator.uq variable */ = xloc[16];
  data->localData[0]->realVars[100] /* generator.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[107] /* generator.id variable */ = xloc[18];
  data->localData[0]->realVars[108] /* generator.iq variable */ = xloc[19];
  data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ = xloc[22];
  data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ = xloc[23];
  data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ = xloc[24];
  data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_76(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_77(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_78(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_79(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_80(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_81(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_82(data, threadData);
  /* body */
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[120] /* pwLine.is.re variable */:data->localData[0]->realVars[122] /* pwLine.vs.re variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */ + (data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[294]))))));

  res[1] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[92] /* gENCLS.vd variable */) - data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;

  res[2] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[92] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;

  tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp11 = (modelica_boolean)tmp2;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[111] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
    tmp9 = (modelica_boolean)(tmp3 && data->simulationInfo->booleanParameter[66]);
    if(tmp9)
    {
      tmp10 = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp4 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
      tmp7 = (modelica_boolean)tmp4;
      if(tmp7)
      {
        tmp5 = data->simulationInfo->realParameter[285];
        tmp6 = data->simulationInfo->realParameter[284];
        tmp8 = data->localData[0]->realVars[111] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)),(tmp5 * tmp5) + (tmp6 * tmp6),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp8 = data->localData[0]->realVars[111] /* pwFault.p.ii variable */;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  res[3] = tmp12;

  tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp22 = (modelica_boolean)tmp13;
  if(tmp22)
  {
    tmp23 = data->localData[0]->realVars[112] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
    tmp20 = (modelica_boolean)(tmp14 && data->simulationInfo->booleanParameter[66]);
    if(tmp20)
    {
      tmp21 = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
      tmp18 = (modelica_boolean)tmp15;
      if(tmp18)
      {
        tmp16 = data->simulationInfo->realParameter[284];
        tmp17 = data->simulationInfo->realParameter[285];
        tmp19 = data->localData[0]->realVars[112] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */),(tmp16 * tmp16) + (tmp17 * tmp17),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp19 = data->localData[0]->realVars[112] /* pwFault.p.ir variable */;
      }
      tmp21 = tmp19;
    }
    tmp23 = tmp21;
  }
  res[4] = tmp23;

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[5] = ((tmp24 && tmp25)?data->localData[0]->realVars[142] /* pwLine3.is.re variable */:data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[142] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[141] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[316]))))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[6] = ((tmp26 && tmp27)?data->localData[0]->realVars[141] /* pwLine3.is.im variable */:data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[141] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[142] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[316])))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[7] = ((tmp28 && tmp29)?data->localData[0]->realVars[140] /* pwLine3.ir.re variable */:data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[139] /* pwLine3.ir.im variable */:data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[139] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[140] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316])))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[330]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[331]);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[151] /* pwLine4.is.im variable */:data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[151] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[327]))) + (data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[152] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[327])))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[330]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[331]);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[152] /* pwLine4.is.re variable */:data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[152] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[144] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[327]))) - ((data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[151] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[144] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[143] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[327]))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[330]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[331]);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[150] /* pwLine4.ir.re variable */:data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[150] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[327]))) - ((data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[327]))))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[129] /* pwLine1.is.im variable */:data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[129] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[130] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305])))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[130] /* pwLine1.is.re variable */:data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[130] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[129] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[330]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[331]);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[149] /* pwLine4.ir.im variable */:data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[143] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[329]) * (data->localData[0]->realVars[149] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[327]))) + (data->simulationInfo->realParameter[328]) * (data->localData[0]->realVars[150] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[326]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[327])))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[128] /* pwLine1.ir.re variable */:data->localData[0]->realVars[132] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[305]))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[127] /* pwLine1.ir.im variable */:data->localData[0]->realVars[131] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[127] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[132] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[128] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[131] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[132] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[305])))));

  res[17] = (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[18] = (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[118] /* pwLine.ir.re variable */:data->localData[0]->realVars[134] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[122] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[118] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[117] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[117] /* pwLine.ir.im variable */:data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[121] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[117] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[134] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[118] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294])))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[119] /* pwLine.is.im variable */:data->localData[0]->realVars[121] /* pwLine.vs.im variable */ - data->localData[0]->realVars[133] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[119] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[122] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[120] /* pwLine.is.re variable */ + (data->localData[0]->realVars[121] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[122] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[294])))));

  res[22] = data->localData[0]->realVars[100] /* generator.PSIppq variable */ - ((data->localData[0]->realVars[7] /* generator.Epd STATE(1) */) * (data->simulationInfo->realParameter[220])) - ((data->localData[0]->realVars[10] /* generator.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[222]));

  res[23] = data->localData[0]->realVars[7] /* generator.Epd STATE(1) */ + (data->simulationInfo->realParameter[255] - data->simulationInfo->realParameter[250]) * (data->localData[0]->realVars[108] /* generator.iq variable */) + (-data->localData[0]->realVars[10] /* generator.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(generator.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[244]));

  res[24] = (data->localData[0]->realVars[9] /* generator.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[221]) + (data->localData[0]->realVars[8] /* generator.Epq STATE(1) */) * (data->simulationInfo->realParameter[219]) - data->localData[0]->realVars[99] /* generator.PSIppd variable */;

  res[25] = data->localData[0]->realVars[8] /* generator.Epq STATE(1) */ + (data->simulationInfo->realParameter[250] - data->simulationInfo->realParameter[251]) * (data->localData[0]->realVars[107] /* generator.id variable */) + (-data->localData[0]->realVars[9] /* generator.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(generator.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[243]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS109(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,4,4,3,3,3,3,4,4,6,6,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[144] = {17,18,19,20,12,13,17,18,12,13,17,18,12,13,19,20,5,6,12,13,5,6,17,18,4,7,8,4,9,10,3,9,10,3,7,8,11,14,15,16,11,14,15,16,1,2,11,14,15,16,1,2,11,14,15,16,22,23,24,25,0,19,20,21,22,23,24,25,0,19,20,21,22,23,24,25,0,19,20,21,22,23,24,25,0,19,20,21,22,23,24,25,1,9,11,12,14,15,16,2,10,11,13,14,15,16,0,5,6,7,12,13,15,17,18,19,20,5,6,8,12,13,16,17,18,19,20,21,3,4,5,7,8,9,10,11,3,4,6,7,8,9,10,14};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(144*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 144;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 144*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[25] = 1;
  inSysData->sparsePattern.colorCols[24] = 2;
  inSysData->sparsePattern.colorCols[23] = 3;
  inSysData->sparsePattern.colorCols[22] = 4;
  inSysData->sparsePattern.colorCols[19] = 5;
  inSysData->sparsePattern.colorCols[21] = 5;
  inSysData->sparsePattern.colorCols[18] = 6;
  inSysData->sparsePattern.colorCols[20] = 6;
  inSysData->sparsePattern.colorCols[3] = 7;
  inSysData->sparsePattern.colorCols[5] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[7] = 9;
  inSysData->sparsePattern.colorCols[9] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[4] = 10;
  inSysData->sparsePattern.colorCols[6] = 10;
  inSysData->sparsePattern.colorCols[8] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
}
void initializeStaticDataNLS109(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.iq */.max;
  /* static nls data for generator.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* generator.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* generator.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* generator.Epd */.max;
  /* static nls data for generator.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* generator.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* generator.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* generator.Epq */.max;
  /* static nls data for generator.uq */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* generator.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* generator.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* generator.uq */.max;
  /* static nls data for generator.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* generator.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* generator.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* generator.PSIppq */.max;
  /* static nls data for generator.id */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* generator.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* generator.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* generator.id */.max;
  /* static nls data for generator.iq */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* generator.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* generator.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* generator.iq */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS109(sysData);
}

void getIterationVarsNLS109(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[117] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[129] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[3] = data->localData[0]->realVars[118] /* pwLine.ir.re variable */;
  array[4] = data->localData[0]->realVars[142] /* pwLine3.is.re variable */;
  array[5] = data->localData[0]->realVars[141] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[140] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[152] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[151] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[139] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[149] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[87] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[88] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[7] /* generator.Epd STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* generator.Epq STATE(1) */;
  array[16] = data->localData[0]->realVars[110] /* generator.uq variable */;
  array[17] = data->localData[0]->realVars[100] /* generator.PSIppq variable */;
  array[18] = data->localData[0]->realVars[107] /* generator.id variable */;
  array[19] = data->localData[0]->realVars[108] /* generator.iq variable */;
  array[20] = data->localData[0]->realVars[131] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[132] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  array[23] = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
  array[24] = data->localData[0]->realVars[144] /* pwLine3.vr.re variable */;
  array[25] = data->localData[0]->realVars[143] /* pwLine3.vr.im variable */;
}


/* inner equations */

/*
equation index: 21
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._sISO._y_start = eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->simulationInfo->realParameter[161] = data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
eSAC2A._rotatingExciterWithDemagnetization._Efd0 = eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->simulationInfo->realParameter[150] = data->simulationInfo->realParameter[161];
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
eSAC2A._VE0 = eSAC2A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->realParameter[105] = data->simulationInfo->realParameter[150];
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._u1 = eSAC2A.rectifierCommutationVoltageDrop.gain2.k * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[76] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[147]) * (data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._division._y = eSAC2A.rectifierCommutationVoltageDrop.division.u1 / eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[76] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC2A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
eSAC2A._rectifierCommutationVoltageDrop._fEX._y = if eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC2A.rectifierCommutationVoltageDrop.division.y else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC2A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
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
  tmp0 = LessEq(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[77] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
eSAC2A._EFD = eSAC2A.rotatingExciterWithDemagnetization.sISO.y * eSAC2A.rectifierCommutationVoltageDrop.fEX.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[62] /* eSAC2A.EFD variable */ = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[78] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
eSAC2A._Ifd0 = eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->simulationInfo->realParameter[91] = data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */;
  TRACE_POP
}

void residualFunc31(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,31};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */ = xloc[0];
  data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_23(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_25(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_28(data, threadData);
  /* body */
  res[0] = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[93], data->simulationInfo->realParameter[89], data->simulationInfo->realParameter[91]) - data->simulationInfo->realParameter[105];

  res[1] = data->localData[0]->realVars[62] /* eSAC2A.EFD variable */ + (-data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */) - ((data->localData[0]->realVars[21] /* der(generator.Epq) STATE_DER */) * (data->simulationInfo->realParameter[242]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS31(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS31(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC2A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* eSAC2A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* eSAC2A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* eSAC2A.XADIFD */.max;
  /* static nls data for eSAC2A.rotatingExciterWithDemagnetization.sISO.y */
  sysData->nominal[i] = data->modelData->realVarsData[3].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[3].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[3].attribute /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS31(sysData);
}

void getIterationVarsNLS31(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[64] /* eSAC2A.XADIFD variable */;
  array[1] = data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 850;
  nonLinearSystemData[4].size = 22;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc850;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacNLSJac51_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianNLSJac51;
  nonLinearSystemData[4].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS850;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS850;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 678;
  nonLinearSystemData[3].size = 26;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc678;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS678;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS678;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 600;
  nonLinearSystemData[2].size = 2;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc600;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS600;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS600;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 109;
  nonLinearSystemData[1].size = 26;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc109;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS109;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS109;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 31;
  nonLinearSystemData[0].size = 2;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc31;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS31;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS31;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

