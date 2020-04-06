/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 746
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[65];
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
    tmp9 = data->simulationInfo->realParameter[65];
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
    tmp16 = (data->simulationInfo->realParameter[59]) * ((data->simulationInfo->realParameter[65]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[59])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[38], 13, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[57] + (data->simulationInfo->realParameter[58]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))) + (data->simulationInfo->realParameter[64]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))):1.0);
  TRACE_POP
}
/*
equation index: 749
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[74], 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68], 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[67]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 750
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[74], 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68], 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[66]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 751
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[242]) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 752
type: SIMPLE_ASSIGN
pwLine._is._re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[191]);
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
pwLine._is._im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[191]);
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
gENROE._uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = data->localData[0]->realVars[93] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[225]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[243]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->localData[0]->realVars[105] /* gENROE.ud variable */ = (-data->localData[0]->realVars[97] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[225]) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
pwLine._vs._re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[105] /* gENROE.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
pwLine._vs._im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[106] /* gENROE.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[105] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[165]);
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
gENCLS._p._ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[165]);
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[171])) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->localData[0]->realVars[88] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
pwLine4._ir._re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[87] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[86] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 765
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[135] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[136] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
constantLoad._p._ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - data->localData[0]->realVars[126] /* pwLine1.is.re variable */ - data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
pwLine._ir._im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[125] /* pwLine1.is.im variable */) - data->localData[0]->realVars[137] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc836(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,836};
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
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
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
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = xloc[0];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[1];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = xloc[2];
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = xloc[4];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = xloc[5];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = xloc[9];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = xloc[16];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = xloc[17];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = xloc[18];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = xloc[19];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_746(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_747(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_748(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_749(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_750(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_751(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_752(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_753(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_754(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_755(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_756(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_757(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_758(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_759(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_760(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_761(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_762(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_763(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_764(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_765(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_766(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_767(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_768(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 6, Less);
  res[1] = ((tmp0 && tmp1)?data->localData[0]->realVars[137] /* pwLine3.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305])))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 6, Less);
  res[2] = ((tmp2 && tmp3)?data->localData[0]->realVars[138] /* pwLine3.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 7, Less);
  tmp13 = (modelica_boolean)tmp4;
  if(tmp13)
  {
    tmp14 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[276], 8, Less);
    tmp11 = (modelica_boolean)(tmp5 && data->simulationInfo->booleanParameter[68]);
    if(tmp11)
    {
      tmp12 = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[276], 8, Less);
      tmp9 = (modelica_boolean)tmp6;
      if(tmp9)
      {
        tmp7 = data->simulationInfo->realParameter[274];
        tmp8 = data->simulationInfo->realParameter[273];
        tmp10 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[274]) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)),(tmp7 * tmp7) + (tmp8 * tmp8),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp10 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  res[3] = tmp14;

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 10, Less);
  res[4] = ((tmp15 && tmp16)?data->localData[0]->realVars[148] /* pwLine4.is.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))))));

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 10, Less);
  res[5] = ((tmp17 && tmp18)?data->localData[0]->realVars[147] /* pwLine4.is.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316])))));

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 12, Less);
  res[6] = ((tmp19 && tmp20)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[294]))))));

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 10, Less);
  res[7] = ((tmp21 && tmp22)?data->localData[0]->realVars[146] /* pwLine4.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[316]))))));

  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 10, Less);
  res[8] = ((tmp23 && tmp24)?data->localData[0]->realVars[145] /* pwLine4.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[316])))));

  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 7, Less);
  tmp34 = (modelica_boolean)tmp25;
  if(tmp34)
  {
    tmp35 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[276], 8, Less);
    tmp32 = (modelica_boolean)(tmp26 && data->simulationInfo->booleanParameter[68]);
    if(tmp32)
    {
      tmp33 = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[276], 8, Less);
      tmp30 = (modelica_boolean)tmp27;
      if(tmp30)
      {
        tmp28 = data->simulationInfo->realParameter[273];
        tmp29 = data->simulationInfo->realParameter[274];
        tmp31 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[274]) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */),(tmp28 * tmp28) + (tmp29 * tmp29),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp31 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp33 = tmp31;
    }
    tmp35 = tmp33;
  }
  res[9] = tmp35;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 6, Less);
  res[10] = ((tmp36 && tmp37)?data->localData[0]->realVars[136] /* pwLine3.ir.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[305]))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 6, Less);
  res[11] = ((tmp38 && tmp39)?data->localData[0]->realVars[135] /* pwLine3.ir.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[305])))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 1, Less);
  res[12] = ((tmp40 && tmp41)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[283]))) + (data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[283])))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 1, Less);
  res[13] = ((tmp42 && tmp43)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[283]))) - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[283]))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 1, Less);
  res[14] = ((tmp44 && tmp45)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[283]))) - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[283]))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 1, Less);
  res[15] = ((tmp46 && tmp47)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[283]))) + (data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[283])))));

  res[16] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  res[17] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 12, Less);
  res[18] = ((tmp48 && tmp49)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294])))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 12, Less);
  res[19] = ((tmp50 && tmp51)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 12, Less);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[294])))));

  res[21] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS836(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,11,8,8,11};
  const int rowIndex[112] = {12,13,18,19,12,13,16,17,16,17,18,19,12,13,16,17,9,10,11,4,5,9,3,10,11,3,4,5,1,2,16,17,1,2,12,13,6,7,8,20,6,7,8,20,0,7,8,21,0,7,8,21,0,4,6,7,8,19,20,5,6,7,8,18,20,21,12,13,14,15,12,13,14,15,1,2,11,12,13,15,16,17,18,19,20,1,3,4,5,8,9,10,11,2,3,4,5,7,9,10,11,1,2,6,10,12,13,14,16,17,18,19};
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
  inSysData->sparsePattern.colorCols[3] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[9] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[5] = 9;
  inSysData->sparsePattern.colorCols[6] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[4] = 10;
  inSysData->sparsePattern.colorCols[7] = 10;
  inSysData->sparsePattern.colorCols[8] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
}
void initializeStaticDataNLS836(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[83].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[83].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[83].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS836(sysData);
}

void getIterationVarsNLS836(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  array[1] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[2] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  array[3] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  array[4] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  array[5] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  array[6] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  array[7] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  array[10] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  array[17] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  array[18] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  array[19] = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  array[20] = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
  array[21] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
}


/* inner equations */

/*
equation index: 612
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 613
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[65];
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
    tmp9 = data->simulationInfo->realParameter[65];
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
    tmp16 = (data->simulationInfo->realParameter[59]) * ((data->simulationInfo->realParameter[65]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[59])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[38]);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[57] + (data->simulationInfo->realParameter[58]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))) + (data->simulationInfo->realParameter[64]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))):1.0);
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[67]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 616
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[66]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 617
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[191]);
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[191]);
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[243]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 620
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->localData[0]->realVars[105] /* gENROE.ud variable */ = (-data->localData[0]->realVars[97] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[225]) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 621
type: SIMPLE_ASSIGN
pwLine._vs._im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 622
type: SIMPLE_ASSIGN
pwLine._vs._re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 623
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->localData[0]->realVars[106] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[225]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 624
type: SIMPLE_ASSIGN
gENROE._PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[93] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[242]) * (data->localData[0]->realVars[103] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 625
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[94] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 626
type: SIMPLE_ASSIGN
gENROE._PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[244] - data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[205]) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[104] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[244] - data->simulationInfo->realParameter[245]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[228], data->simulationInfo->realParameter[229], 1.0, 1.2)) * ((data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[245] - data->simulationInfo->realParameter[239],data->simulationInfo->realParameter[238] - data->simulationInfo->realParameter[239],"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[205],"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
gENROE._PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSAC1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[239] - data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[103] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[204]) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[103] /* gENROE.id variable */) * (data->simulationInfo->realParameter[238] - data->simulationInfo->realParameter[240]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[228], data->simulationInfo->realParameter[229], 1.0, 1.2)) * (data->localData[0]->realVars[95] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */,data->simulationInfo->realParameter[204],"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 628
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[165]);
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[165]);
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[171])) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->localData[0]->realVars[88] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[86] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
pwLine1._ir._re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[146] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[87] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[135] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[136] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
pwLine1._is._im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - data->localData[0]->realVars[137] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
constantLoad._p._ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - data->localData[0]->realVars[126] /* pwLine1.is.re variable */ - data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc664(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,664};
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[2];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = xloc[3];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = xloc[6];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = xloc[7];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = xloc[23];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_612(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_613(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_614(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_615(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_616(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_617(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_618(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_619(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_620(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_621(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_622(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_623(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_624(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_625(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_626(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_627(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_628(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_629(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_630(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_631(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_632(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_633(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_634(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_635(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_636(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_637(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;

  res[1] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[276]);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[68]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[276]);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[274];
        tmp4 = data->simulationInfo->realParameter[273];
        tmp6 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[274]) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[2] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[3] = ((tmp11 && tmp12)?data->localData[0]->realVars[137] /* pwLine3.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305])))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[4] = ((tmp13 && tmp14)?data->localData[0]->realVars[138] /* pwLine3.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))))));

  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[5] = ((tmp15 && tmp16)?data->localData[0]->realVars[136] /* pwLine3.ir.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[305]))))));

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[6] = ((tmp17 && tmp18)?data->localData[0]->realVars[135] /* pwLine3.ir.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[305])))));

  tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  tmp28 = (modelica_boolean)tmp19;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[276]);
    tmp26 = (modelica_boolean)(tmp20 && data->simulationInfo->booleanParameter[68]);
    if(tmp26)
    {
      tmp27 = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[276]);
      tmp24 = (modelica_boolean)tmp21;
      if(tmp24)
      {
        tmp22 = data->simulationInfo->realParameter[273];
        tmp23 = data->simulationInfo->realParameter[274];
        tmp25 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[274]) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */),(tmp22 * tmp22) + (tmp23 * tmp23),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp25 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp27 = tmp25;
    }
    tmp29 = tmp27;
  }
  res[7] = tmp29;

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[147] /* pwLine4.is.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316])))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[148] /* pwLine4.is.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[146] /* pwLine4.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[316]))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[145] /* pwLine4.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[316])))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294])))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[294])))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[294]))))));

  res[16] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[17] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[283]))) - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[283]))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[283]))) - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[283]))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[283]))) + (data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[283])))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[283]))) + (data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[283])))));

  res[22] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[210]) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[208]) - data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;

  res[23] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[239] - data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[103] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[232]));

  res[24] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[209])) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[211]));

  res[25] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[244] - data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[233]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS664(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,3,3,4,4,3,3,4,4,6,6,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[144] = {16,17,19,20,12,13,16,17,12,13,16,17,12,13,19,20,7,8,9,5,6,7,3,4,12,13,3,4,16,17,2,8,9,2,5,6,10,11,14,15,10,11,14,15,0,1,10,11,14,15,0,1,10,11,14,15,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,0,8,10,11,13,14,15,1,9,10,11,12,14,15,3,4,6,12,13,14,16,17,19,20,21,3,4,5,12,13,15,16,17,18,19,20,2,3,5,6,7,8,9,11,2,4,5,6,7,8,9,10};
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
  inSysData->sparsePattern.colorCols[7] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[5] = 9;
  inSysData->sparsePattern.colorCols[8] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[4] = 10;
  inSysData->sparsePattern.colorCols[6] = 10;
  inSysData->sparsePattern.colorCols[9] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
}
void initializeStaticDataNLS664(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[83].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[83].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[83].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS664(sysData);
}

void getIterationVarsNLS664(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[3] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  array[4] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  array[7] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  array[8] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[146] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[106] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  array[24] = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 579
type: SIMPLE_ASSIGN
eSAC1A._rectifierCommutationVoltageDrop._division._u1 = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 580
type: SIMPLE_ASSIGN
eSAC1A._EFD = eSAC1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->localData[0]->realVars[59] /* eSAC1A.EFD variable */ = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[231]);
  TRACE_POP
}
/*
equation index: 581
type: SIMPLE_ASSIGN
eSAC1A._Ifd0 = eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->simulationInfo->realParameter[85] = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 582
type: SIMPLE_ASSIGN
eSAC1A._VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC1A.K_C, eSAC1A.Efd0, eSAC1A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->simulationInfo->realParameter[99] = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[87], data->simulationInfo->realParameter[84], data->simulationInfo->realParameter[85]);
  TRACE_POP
}
/*
equation index: 583
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._Efd0 = eSAC1A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->simulationInfo->realParameter[141] = data->simulationInfo->realParameter[99];
  TRACE_POP
}
/*
equation index: 584
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._sISO._y_start = eSAC1A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->simulationInfo->realParameter[154] = data->simulationInfo->realParameter[141];
  TRACE_POP
}
/*
equation index: 585
type: SIMPLE_ASSIGN
$START._eSAC1A._rotatingExciterWithDemagnetization._sISO._y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[154];
    data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 586
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._sISO._y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[154];
  TRACE_POP
}
/*
equation index: 587
type: SIMPLE_ASSIGN
eSAC1A._rectifierCommutationVoltageDrop._division._y = eSAC1A.rectifierCommutationVoltageDrop.division.u1 / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 588
type: SIMPLE_ASSIGN
eSAC1A._rectifierCommutationVoltageDrop._fEX._y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
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
  tmp0 = LessEq(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[74] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc590(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,590};
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
  data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_579(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_580(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_581(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_582(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_583(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_584(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_585(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_586(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_587(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_588(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[74] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[59] /* eSAC1A.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS590(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS590(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS590(sysData);
}

void getIterationVarsNLS590(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */;
}


/* inner equations */

/*
equation index: 54
type: SIMPLE_ASSIGN
constantLoad._v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
constantLoad._kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[65];
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
    tmp9 = data->simulationInfo->realParameter[65];
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
    tmp16 = (data->simulationInfo->realParameter[59]) * ((data->simulationInfo->realParameter[65]) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[59])) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
constantLoad._kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[38]);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[57] + (data->simulationInfo->realParameter[58]) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))) + (data->simulationInfo->realParameter[64]) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))):1.0);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
constantLoad._Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[67]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43]);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
constantLoad._P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74]);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68]);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[66]);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42]) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44]);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
pwLine._is._re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[191]);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
pwLine._is._im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[191]);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
gENROE._PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[243]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
gENROE._ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[105] /* gENROE.ud variable */ = (-data->localData[0]->realVars[97] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[225]) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine._vs._im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
pwLine._vs._re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENROE._PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->localData[0]->realVars[106] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[225]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
gENROE._PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[93] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[242]) * (data->localData[0]->realVars[103] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
gENROE._PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[94] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
gENROE._PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[244] - data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[205]) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[104] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[244] - data->simulationInfo->realParameter[245]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[228], data->simulationInfo->realParameter[229], 1.0, 1.2)) * ((data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[245] - data->simulationInfo->realParameter[239],data->simulationInfo->realParameter[238] - data->simulationInfo->realParameter[239],"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[205],"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
gENROE._PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSAC1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[239] - data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[103] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[204]) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[103] /* gENROE.id variable */) * (data->simulationInfo->realParameter[238] - data->simulationInfo->realParameter[240]) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[228], data->simulationInfo->realParameter[229], 1.0, 1.2)) * (data->localData[0]->realVars[95] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */,data->simulationInfo->realParameter[204],"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
gENCLS._p._ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[165]);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
gENCLS._p._ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[165]);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
gENCLS._vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[171])) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
gENCLS._vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[88] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[174]) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[171]) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
pwLine4._ir._im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[86] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
pwLine1._ir._re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[146] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[87] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
pwFault._p._ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[135] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
pwFault._p._ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[136] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
pwLine1._is._im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - data->localData[0]->realVars[137] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
constantLoad._p._ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - data->localData[0]->realVars[126] /* pwLine1.is.re variable */ - data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[2];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = xloc[3];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = xloc[6];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = xloc[7];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = xloc[23];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_76(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_77(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_78(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_79(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;

  res[1] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[276]);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[68]);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[276]);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[274];
        tmp4 = data->simulationInfo->realParameter[273];
        tmp6 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[274]) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[2] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[3] = ((tmp11 && tmp12)?data->localData[0]->realVars[137] /* pwLine3.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305])))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[4] = ((tmp13 && tmp14)?data->localData[0]->realVars[138] /* pwLine3.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[305]))))));

  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[5] = ((tmp15 && tmp16)?data->localData[0]->realVars[136] /* pwLine3.ir.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[305]))))));

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[308]);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[309]);
  res[6] = ((tmp17 && tmp18)?data->localData[0]->realVars[135] /* pwLine3.ir.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[307]) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[304]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[305])))));

  tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[275]);
  tmp28 = (modelica_boolean)tmp19;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[276]);
    tmp26 = (modelica_boolean)(tmp20 && data->simulationInfo->booleanParameter[68]);
    if(tmp26)
    {
      tmp27 = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[276]);
      tmp24 = (modelica_boolean)tmp21;
      if(tmp24)
      {
        tmp22 = data->simulationInfo->realParameter[273];
        tmp23 = data->simulationInfo->realParameter[274];
        tmp25 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[273]) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[274]) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */),(tmp22 * tmp22) + (tmp23 * tmp23),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp25 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp27 = tmp25;
    }
    tmp29 = tmp27;
  }
  res[7] = tmp29;

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[147] /* pwLine4.is.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316])))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[148] /* pwLine4.is.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[316]))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[146] /* pwLine4.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[316]))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[319]);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[320]);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[145] /* pwLine4.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[318]) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[315]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[316])))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[294])))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[294])))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[297]);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[298]);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[296]) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[293]) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[294]))))));

  res[16] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[17] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[283]))) - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[283]))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[283]))) - ((data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[283]))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[283]))) + (data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[283])))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[286]);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[287]);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[285]) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[283]))) + (data->simulationInfo->realParameter[284]) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[282]) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[283])))));

  res[22] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[210]) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[208]) - data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;

  res[23] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[239] - data->simulationInfo->realParameter[240]) * (data->localData[0]->realVars[103] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[232]));

  res[24] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[209])) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[211]));

  res[25] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[244] - data->simulationInfo->realParameter[239]) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[233]));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS106(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,3,3,4,4,3,3,4,4,6,6,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[144] = {16,17,19,20,12,13,16,17,12,13,16,17,12,13,19,20,7,8,9,5,6,7,3,4,12,13,3,4,16,17,2,8,9,2,5,6,10,11,14,15,10,11,14,15,0,1,10,11,14,15,0,1,10,11,14,15,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,18,19,20,21,22,23,24,25,0,8,10,11,13,14,15,1,9,10,11,12,14,15,3,4,6,12,13,14,16,17,19,20,21,3,4,5,12,13,15,16,17,18,19,20,2,3,5,6,7,8,9,11,2,4,5,6,7,8,9,10};
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
  inSysData->sparsePattern.colorCols[7] = 7;
  inSysData->sparsePattern.colorCols[13] = 7;
  inSysData->sparsePattern.colorCols[2] = 8;
  inSysData->sparsePattern.colorCols[12] = 8;
  inSysData->sparsePattern.colorCols[17] = 8;
  inSysData->sparsePattern.colorCols[1] = 9;
  inSysData->sparsePattern.colorCols[5] = 9;
  inSysData->sparsePattern.colorCols[8] = 9;
  inSysData->sparsePattern.colorCols[11] = 9;
  inSysData->sparsePattern.colorCols[16] = 9;
  inSysData->sparsePattern.colorCols[0] = 10;
  inSysData->sparsePattern.colorCols[4] = 10;
  inSysData->sparsePattern.colorCols[6] = 10;
  inSysData->sparsePattern.colorCols[9] = 10;
  inSysData->sparsePattern.colorCols[10] = 10;
  inSysData->sparsePattern.colorCols[14] = 10;
  inSysData->sparsePattern.colorCols[15] = 10;
}
void initializeStaticDataNLS106(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[83].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[83].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[83].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS106(sysData);
}

void getIterationVarsNLS106(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[3] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  array[4] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  array[7] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  array[8] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[146] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[106] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  array[24] = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 21
type: SIMPLE_ASSIGN
eSAC1A._rectifierCommutationVoltageDrop._division._u1 = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[138]) * (data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
eSAC1A._EFD = eSAC1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[59] /* eSAC1A.EFD variable */ = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[231]);
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
eSAC1A._Ifd0 = eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->realParameter[85] = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
eSAC1A._VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC1A.K_C, eSAC1A.Efd0, eSAC1A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->simulationInfo->realParameter[99] = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[87], data->simulationInfo->realParameter[84], data->simulationInfo->realParameter[85]);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._Efd0 = eSAC1A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->simulationInfo->realParameter[141] = data->simulationInfo->realParameter[99];
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._sISO._y_start = eSAC1A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->simulationInfo->realParameter[154] = data->simulationInfo->realParameter[141];
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
$START._eSAC1A._rotatingExciterWithDemagnetization._sISO._y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[154];
    data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
eSAC1A._rotatingExciterWithDemagnetization._sISO._y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[154];
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
eSAC1A._rectifierCommutationVoltageDrop._division._y = eSAC1A.rectifierCommutationVoltageDrop.division.u1 / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
eSAC1A._rectifierCommutationVoltageDrop._fEX._y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
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
  tmp0 = LessEq(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */;
        tmp6 = 0.75 - ((tmp5 * tmp5));
        if(!(tmp6 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) was %g should be >= 0", tmp6);
        }
        tmp10 = sqrt(tmp6);
      }
      else
      {
        tmp7 = GreaterEq(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[74] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc32(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,32};
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
  data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_23(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_25(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_30(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[74] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[59] /* eSAC1A.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS32(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS32(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS32(sysData);
}

void getIterationVarsNLS32(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 836;
  nonLinearSystemData[4].size = 22;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc836;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacNLSJac46_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianNLSJac46;
  nonLinearSystemData[4].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS836;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS836;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 664;
  nonLinearSystemData[3].size = 26;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc664;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS664;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS664;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 590;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc590;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS590;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS590;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 106;
  nonLinearSystemData[1].size = 26;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc106;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS106;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS106;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 32;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc32;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS32;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS32;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

