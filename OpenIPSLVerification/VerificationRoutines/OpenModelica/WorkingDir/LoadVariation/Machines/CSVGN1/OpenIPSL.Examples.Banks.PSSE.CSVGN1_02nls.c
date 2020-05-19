/* Non Linear Systems */
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_model.h"
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 773
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[79] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 774
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[79] /* constantLoad.v variable */, data->simulationInfo->realParameter[138] /* constantLoad.PQBRAK PARAM */, 15, Less);
  data->localData[0]->realVars[76] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[157] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[158] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[79] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[164] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[79] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 775
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[79] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[75] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 776
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */, 6, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[141] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[145] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[143] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[167] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[141] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[145] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[143] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[73] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 777
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */, 6, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[142] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[146] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[144] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[166] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[142] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[146] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[144] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[72] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
gENSAL.PSIq = (-gENSAL.PSIppq) - gENSAL.Xppq * gENSAL.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->localData[0]->realVars[98] /* gENSAL.PSIq variable */ = (-data->localData[0]->realVars[7] /* gENSAL.PSIppq STATE(1) */) - ((data->simulationInfo->realParameter[255] /* gENSAL.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */));
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse8 * gENSAL.iq - (-$cse7) * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[26] /* $cse8 variable */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */) - (((-data->localData[0]->realVars[25] /* $cse7 variable */)) * (data->localData[0]->realVars[103] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 780
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse7 * gENSAL.iq - $cse8 * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */) - ((data->localData[0]->realVars[26] /* $cse8 variable */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
gENSAL.ud = (-gENSAL.PSIq) - gENSAL.R_a * gENSAL.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->localData[0]->realVars[105] /* gENSAL.ud variable */ = (-data->localData[0]->realVars[98] /* gENSAL.PSIq variable */) - ((data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */));
  TRACE_POP
}
/*
equation index: 782
type: SIMPLE_ASSIGN
gENSAL.PSId = gENSAL.PSIppd - gENSAL.Xppd * gENSAL.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->localData[0]->realVars[96] /* gENSAL.PSId variable */ = data->localData[0]->realVars[97] /* gENSAL.PSIppd variable */ - ((data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */));
  TRACE_POP
}
/*
equation index: 783
type: SIMPLE_ASSIGN
gENSAL.uq = gENSAL.PSId - gENSAL.R_a * gENSAL.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->localData[0]->realVars[106] /* gENSAL.uq variable */ = data->localData[0]->realVars[96] /* gENSAL.PSId variable */ - ((data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */));
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse7 * gENSAL.uq - $cse8 * gENSAL.ud
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[106] /* gENSAL.uq variable */) - ((data->localData[0]->realVars[26] /* $cse8 variable */) * (data->localData[0]->realVars[105] /* gENSAL.ud variable */));
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse7 * gENSAL.ud + $cse8 * gENSAL.uq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[25] /* $cse7 variable */) * (data->localData[0]->realVars[105] /* gENSAL.ud variable */) + (data->localData[0]->realVars[26] /* $cse8 variable */) * (data->localData[0]->realVars[106] /* gENSAL.uq variable */);
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
cSVGN1.add.u2 = (cSVGN1.Y - cSVGN1.add.k1 * cSVGN1.const1.k) / cSVGN1.add.k2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->localData[0]->realVars[53] /* cSVGN1.add.u2 variable */ = DIVISION_SIM(data->localData[0]->realVars[52] /* cSVGN1.Y variable */ - ((data->simulationInfo->realParameter[66] /* cSVGN1.add.k1 PARAM */) * (data->simulationInfo->realParameter[79] /* cSVGN1.const1.k PARAM */)),data->simulationInfo->realParameter[67] /* cSVGN1.add.k2 PARAM */,"cSVGN1.add.k2",equationIndexes);
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
cSVGN1.LagLim.y = cSVGN1.add.u2 / cSVGN1.const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->localData[0]->realVars[48] /* cSVGN1.LagLim.y variable */ = DIVISION_SIM(data->localData[0]->realVars[53] /* cSVGN1.add.u2 variable */,data->simulationInfo->realParameter[77] /* cSVGN1.const.k PARAM */,"cSVGN1.const.k",equationIndexes);
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.y = (cSVGN1.leadLag.TF.bb[2] - cSVGN1.leadLag.TF.a[2] * cSVGN1.leadLag.TF.d) * cSVGN1.leadLag.TF.x[1] + cSVGN1.leadLag.TF.d * cSVGN1.add2.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->localData[0]->realVars[60] /* cSVGN1.leadLag.TF.y variable */ = (data->simulationInfo->realParameter[101] /* cSVGN1.leadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[96] /* cSVGN1.leadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[102] /* cSVGN1.leadLag.TF.d PARAM */))) * (data->localData[0]->realVars[59] /* cSVGN1.leadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[102] /* cSVGN1.leadLag.TF.d PARAM */) * (data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */);
  TRACE_POP
}
/*
equation index: 789
type: SIMPLE_ASSIGN
cSVGN1.leadLag.y = if abs(cSVGN1.leadLag.T1 - cSVGN1.leadLag.T2) < 1e-15 then cSVGN1.leadLag.K * cSVGN1.add2.y else cSVGN1.leadLag.TF.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[92] /* cSVGN1.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[93] /* cSVGN1.leadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[61] /* cSVGN1.leadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[91] /* cSVGN1.leadLag.K PARAM */) * (data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */):data->localData[0]->realVars[60] /* cSVGN1.leadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 790
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add2.y = cSVGN1.leadLagLim.add2.k1 * cSVGN1.leadLag.y + cSVGN1.leadLagLim.add2.k2 * cSVGN1.leadLagLim.add2.u2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->localData[0]->realVars[63] /* cSVGN1.leadLagLim.add2.y variable */ = (data->simulationInfo->realParameter[112] /* cSVGN1.leadLagLim.add2.k1 PARAM */) * (data->localData[0]->realVars[61] /* cSVGN1.leadLag.y variable */) + (data->simulationInfo->realParameter[113] /* cSVGN1.leadLagLim.add2.k2 PARAM */) * (data->localData[0]->realVars[62] /* cSVGN1.leadLagLim.add2.u2 variable */);
  TRACE_POP
}
/*
equation index: 791
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.gain.y = cSVGN1.leadLagLim.gain.k * cSVGN1.leadLagLim.add2.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */ = (data->simulationInfo->realParameter[116] /* cSVGN1.leadLagLim.gain.k PARAM */) * (data->localData[0]->realVars[63] /* cSVGN1.leadLagLim.add2.y variable */);
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
cSVGN1.LagLim.u = smooth(0, if cSVGN1.leadLagLim.gain.y > cSVGN1.leadLagLim.limiter.uMax then cSVGN1.leadLagLim.limiter.uMax else if cSVGN1.leadLagLim.gain.y < cSVGN1.leadLagLim.limiter.uMin then cSVGN1.leadLagLim.limiter.uMin else cSVGN1.leadLagLim.gain.y)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */,data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */,data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */:data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */);
  }
  data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
cSVGN1.add1.y = (cSVGN1.add2.y - cSVGN1.add2.k2 * const.k) / cSVGN1.add2.k1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->localData[0]->realVars[54] /* cSVGN1.add1.y variable */ = DIVISION_SIM(data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */ - ((data->simulationInfo->realParameter[73] /* cSVGN1.add2.k2 PARAM */) * (data->simulationInfo->realParameter[135] /* const.k PARAM */)),data->simulationInfo->realParameter[72] /* cSVGN1.add2.k1 PARAM */,"cSVGN1.add2.k1",equationIndexes);
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
cSVGN1.V = (cSVGN1.add1.y - cSVGN1.add1.k1 * cSVGN1.const2.k) / cSVGN1.add1.k2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->localData[0]->realVars[51] /* cSVGN1.V variable */ = DIVISION_SIM(data->localData[0]->realVars[54] /* cSVGN1.add1.y variable */ - ((data->simulationInfo->realParameter[69] /* cSVGN1.add1.k1 PARAM */) * (data->simulationInfo->realParameter[81] /* cSVGN1.const2.k PARAM */)),data->simulationInfo->realParameter[70] /* cSVGN1.add1.k2 PARAM */,"cSVGN1.add1.k2",equationIndexes);
  TRACE_POP
}
/*
equation index: 795
type: SIMPLE_ASSIGN
cSVGN1.vd = (-cSVGN1.iq) / cSVGN1.Y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  data->localData[0]->realVars[70] /* cSVGN1.vd variable */ = DIVISION_SIM((-data->localData[0]->realVars[58] /* cSVGN1.iq variable */),data->localData[0]->realVars[52] /* cSVGN1.Y variable */,"cSVGN1.Y",equationIndexes);
  TRACE_POP
}
/*
equation index: 796
type: SIMPLE_ASSIGN
cSVGN1.vq = (pwLine1.vr.re - $cse9 * cSVGN1.vd) / $cse10
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->localData[0]->realVars[71] /* cSVGN1.vq variable */ = DIVISION_SIM(data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->localData[0]->realVars[27] /* $cse9 variable */) * (data->localData[0]->realVars[70] /* cSVGN1.vd variable */)),data->localData[0]->realVars[21] /* $cse10 variable */,"$cse10",equationIndexes);
  TRACE_POP
}
/*
equation index: 797
type: SIMPLE_ASSIGN
cSVGN1.id = cSVGN1.vq * cSVGN1.Y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->localData[0]->realVars[57] /* cSVGN1.id variable */ = (data->localData[0]->realVars[71] /* cSVGN1.vq variable */) * (data->localData[0]->realVars[52] /* cSVGN1.Y variable */);
  TRACE_POP
}
/*
equation index: 798
type: SIMPLE_ASSIGN
cSVGN1.p.ii = $cse10 * cSVGN1.id - $cse9 * cSVGN1.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */ = (data->localData[0]->realVars[21] /* $cse10 variable */) * (data->localData[0]->realVars[57] /* cSVGN1.id variable */) - ((data->localData[0]->realVars[27] /* $cse9 variable */) * (data->localData[0]->realVars[58] /* cSVGN1.iq variable */));
  TRACE_POP
}
/*
equation index: 799
type: SIMPLE_ASSIGN
pwLine1.vr.im = $cse9 * cSVGN1.vq - $cse10 * cSVGN1.vd
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = (data->localData[0]->realVars[27] /* $cse9 variable */) * (data->localData[0]->realVars[71] /* cSVGN1.vq variable */) - ((data->localData[0]->realVars[21] /* $cse10 variable */) * (data->localData[0]->realVars[70] /* cSVGN1.vd variable */));
  TRACE_POP
}
/*
equation index: 800
type: SIMPLE_ASSIGN
cSVGN1.p.ir = (-$cse9) * cSVGN1.id - $cse10 * cSVGN1.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */ = ((-data->localData[0]->realVars[27] /* $cse9 variable */)) * (data->localData[0]->realVars[57] /* cSVGN1.id variable */) - ((data->localData[0]->realVars[21] /* $cse10 variable */) * (data->localData[0]->realVars[58] /* cSVGN1.iq variable */));
  TRACE_POP
}
/*
equation index: 801
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine2.is.im) - cSVGN1.p.ii
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[137] /* pwLine2.is.im variable */) - data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */;
  TRACE_POP
}
/*
equation index: 802
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine2.is.re) - cSVGN1.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[138] /* pwLine2.is.re variable */) - data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */;
  TRACE_POP
}
/*
equation index: 803
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->localData[0]->realVars[88] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[20] /* $cse1 variable */)) * (data->localData[0]->realVars[84] /* gENCLS.id variable */) - ((data->localData[0]->realVars[22] /* $cse2 variable */) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[179] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 804
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->localData[0]->realVars[87] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[22] /* $cse2 variable */) * (data->localData[0]->realVars[84] /* gENCLS.id variable */) - ((data->localData[0]->realVars[20] /* $cse1 variable */) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[179] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 805
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->localData[0]->realVars[89] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  data->localData[0]->realVars[90] /* gENCLS.vq variable */ = data->localData[0]->realVars[4] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 807
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine2.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[135] /* pwLine2.ir.im variable */) - data->localData[0]->realVars[87] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 808
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine2.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[136] /* pwLine2.ir.re variable */) - data->localData[0]->realVars[88] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->localData[0]->realVars[77] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - data->localData[0]->realVars[125] /* pwLine1.is.im variable */ - data->localData[0]->realVars[147] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
pwLine.ir.re = (-pwLine1.is.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[126] /* pwLine1.is.re variable */) - data->localData[0]->realVars[148] /* pwLine3.is.re variable */ - data->localData[0]->realVars[78] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[146] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[158] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 812
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[145] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[157] /* pwLine4.is.im variable */;
  TRACE_POP
}

void residualFunc909(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,909};
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
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
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
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  /* iteration variables */
  for (i=0; i<28; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<28; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[157] /* pwLine4.is.im variable */ = xloc[1];
  data->localData[0]->realVars[158] /* pwLine4.is.re variable */ = xloc[2];
  data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[148] /* pwLine3.is.re variable */ = xloc[4];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = xloc[5];
  data->localData[0]->realVars[147] /* pwLine3.is.im variable */ = xloc[6];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[78] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = xloc[9];
  data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[85] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[84] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[138] /* pwLine2.is.re variable */ = xloc[16];
  data->localData[0]->realVars[137] /* pwLine2.is.im variable */ = xloc[17];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = xloc[18];
  data->localData[0]->realVars[58] /* cSVGN1.iq variable */ = xloc[19];
  data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */ = xloc[20];
  data->localData[0]->realVars[52] /* cSVGN1.Y variable */ = xloc[21];
  data->localData[0]->realVars[103] /* gENSAL.id variable */ = xloc[22];
  data->localData[0]->realVars[104] /* gENSAL.iq variable */ = xloc[23];
  data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ = xloc[24];
  data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ = xloc[25];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = xloc[26];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = xloc[27];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_773(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_774(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_775(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_776(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_777(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_778(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_779(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_780(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_781(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_782(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_783(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_784(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_785(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_786(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_787(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_788(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_789(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_790(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_791(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_792(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_793(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_794(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_795(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_796(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_797(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_798(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_799(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_800(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_801(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_802(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_803(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_804(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_805(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_806(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_807(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_808(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_809(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_810(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_811(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_812(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, 3, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))))));

  res[1] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[77] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[78] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[72] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, 1, Less);
  res[2] = ((tmp2 && tmp3)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, 1, Less);
  res[3] = ((tmp4 && tmp5)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, 1, Less);
  res[4] = ((tmp6 && tmp7)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, 3, Less);
  res[5] = ((tmp8 && tmp9)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, 1, Less);
  res[6] = ((tmp10 && tmp11)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))))));

  res[7] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[78] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[77] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[73] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  res[8] = ((tmp12 && tmp13)?data->localData[0]->realVars[148] /* pwLine3.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  res[9] = ((tmp14 && tmp15)?data->localData[0]->realVars[147] /* pwLine3.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  res[10] = ((tmp16 && tmp17)?data->localData[0]->realVars[146] /* pwLine3.ir.re variable */:data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */, 9, Less);
  tmp27 = (modelica_boolean)tmp18;
  if(tmp27)
  {
    tmp28 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, 10, Less);
    tmp25 = (modelica_boolean)(tmp19 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp25)
    {
      tmp26 = data->localData[0]->realVars[149] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, 10, Less);
      tmp23 = (modelica_boolean)tmp20;
      if(tmp23)
      {
        tmp21 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp22 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp24 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280] /* pwFault.R PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[281] /* pwFault.X PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */),(tmp21 * tmp21) + (tmp22 * tmp22),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp24 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp26 = tmp24;
    }
    tmp28 = tmp26;
  }
  res[11] = tmp28;

  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */, 9, Less);
  tmp38 = (modelica_boolean)tmp29;
  if(tmp38)
  {
    tmp39 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, 10, Less);
    tmp36 = (modelica_boolean)(tmp30 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp36)
    {
      tmp37 = data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, 10, Less);
      tmp34 = (modelica_boolean)tmp31;
      if(tmp34)
      {
        tmp32 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp33 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp35 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280] /* pwFault.R PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[281] /* pwFault.X PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)),(tmp32 * tmp32) + (tmp33 * tmp33),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp35 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp37 = tmp35;
    }
    tmp39 = tmp37;
  }
  res[12] = tmp39;

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[158] /* pwLine4.is.re variable */:data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[155] /* pwLine4.ir.im variable */:data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[157] /* pwLine4.is.im variable */:data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[145] /* pwLine3.ir.im variable */:data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  res[17] = ((tmp48 && tmp49)?data->localData[0]->realVars[156] /* pwLine4.ir.re variable */:data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, 14, Less);
  res[18] = ((tmp50 && tmp51)?data->localData[0]->realVars[136] /* pwLine2.ir.re variable */:data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, 14, Less);
  res[19] = ((tmp52 && tmp53)?data->localData[0]->realVars[135] /* pwLine2.ir.im variable */:data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, 3, Less);
  res[20] = ((tmp54 && tmp55)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, 3, Less);
  res[21] = ((tmp56 && tmp57)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, 14, Less);
  res[22] = ((tmp58 && tmp59)?data->localData[0]->realVars[138] /* pwLine2.is.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))))));

  tmp60 = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  tmp61 = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  res[23] = sqrt((tmp60 * tmp60) + (tmp61 * tmp61)) - data->localData[0]->realVars[51] /* cSVGN1.V variable */;

  tmp62 = LessEq(fabs(data->simulationInfo->realParameter[45] /* cSVGN1.LagLim.T PARAM */),1e-15);
  res[24] = (tmp62?fmax(fmin((data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) * (data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */),data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */),data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */,data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */),data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */)) - data->localData[0]->realVars[48] /* cSVGN1.LagLim.y variable */;

  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, 14, Less);
  res[25] = ((tmp63 && tmp64)?data->localData[0]->realVars[137] /* pwLine2.is.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */)))));

  res[26] = (data->localData[0]->realVars[20] /* $cse1 variable */) * (data->localData[0]->realVars[90] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[22] /* $cse2 variable */)) * (data->localData[0]->realVars[89] /* gENCLS.vd variable */) - data->localData[0]->realVars[139] /* pwLine2.vr.im variable */;

  res[27] = (data->localData[0]->realVars[22] /* $cse2 variable */) * (data->localData[0]->realVars[90] /* gENCLS.vq variable */) + (data->localData[0]->realVars[20] /* $cse1 variable */) * (data->localData[0]->realVars[89] /* gENCLS.vd variable */) - data->localData[0]->realVars[140] /* pwLine2.vr.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS909(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+28] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,9,7,2,8,4,4,8,8,11,11};
  const int rowIndex[146] = {10,12,16,12,13,15,11,13,15,10,11,16,2,6,8,9,0,2,5,6,1,7,8,9,1,2,6,7,1,2,6,7,0,1,5,7,14,17,18,19,14,17,18,19,14,17,26,27,14,17,26,27,14,15,17,18,19,25,26,13,14,17,18,19,22,27,20,21,22,25,20,21,22,25,0,5,18,19,20,21,22,23,25,5,19,20,21,22,23,25,23,24,5,19,20,21,22,23,24,25,2,3,4,6,2,3,4,6,8,10,11,12,13,15,16,17,9,10,11,12,13,14,15,16,0,1,2,3,5,6,7,8,9,16,21,0,1,2,4,5,6,7,8,9,10,20};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((28+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(146*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 146;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(28*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (28+1)*sizeof(int));
  
  for(i=2;i<28+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 146*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[27] = 1;
  inSysData->sparsePattern->colorCols[26] = 2;
  inSysData->sparsePattern->colorCols[25] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[24] = 4;
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[8] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[19] = 7;
  inSysData->sparsePattern->colorCols[7] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[18] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[17] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[2] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[9] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[16] = 10;
  inSysData->sparsePattern->colorCols[20] = 10;
}
void initializeStaticDataNLS909(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[157].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[157].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[157].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[158].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[158].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[158].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine2.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine2.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine2.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine2.ir.re */.max;
  /* static nls data for pwLine2.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine2.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine2.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine2.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine2.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im */.max;
  /* static nls data for pwLine2.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re */.max;
  /* static nls data for pwLine2.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine2.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine2.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine2.is.re */.max;
  /* static nls data for pwLine2.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine2.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine2.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine2.is.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.vr.re */.max;
  /* static nls data for cSVGN1.iq */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* cSVGN1.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* cSVGN1.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* cSVGN1.iq */.max;
  /* static nls data for cSVGN1.add2.y */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* cSVGN1.add2.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* cSVGN1.add2.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* cSVGN1.add2.y */.max;
  /* static nls data for cSVGN1.Y */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* cSVGN1.Y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* cSVGN1.Y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* cSVGN1.Y */.max;
  /* static nls data for gENSAL.id */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENSAL.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENSAL.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENSAL.id */.max;
  /* static nls data for gENSAL.iq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENSAL.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENSAL.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENSAL.iq */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS909(sysData);
}

void getIterationVarsNLS909(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[145] /* pwLine3.ir.im variable */;
  array[1] = data->localData[0]->realVars[157] /* pwLine4.is.im variable */;
  array[2] = data->localData[0]->realVars[158] /* pwLine4.is.re variable */;
  array[3] = data->localData[0]->realVars[146] /* pwLine3.ir.re variable */;
  array[4] = data->localData[0]->realVars[148] /* pwLine3.is.re variable */;
  array[5] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  array[6] = data->localData[0]->realVars[147] /* pwLine3.is.im variable */;
  array[7] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  array[8] = data->localData[0]->realVars[78] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  array[10] = data->localData[0]->realVars[136] /* pwLine2.ir.re variable */;
  array[11] = data->localData[0]->realVars[135] /* pwLine2.ir.im variable */;
  array[12] = data->localData[0]->realVars[85] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[84] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[139] /* pwLine2.vr.im variable */;
  array[15] = data->localData[0]->realVars[140] /* pwLine2.vr.re variable */;
  array[16] = data->localData[0]->realVars[138] /* pwLine2.is.re variable */;
  array[17] = data->localData[0]->realVars[137] /* pwLine2.is.im variable */;
  array[18] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  array[19] = data->localData[0]->realVars[58] /* cSVGN1.iq variable */;
  array[20] = data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */;
  array[21] = data->localData[0]->realVars[52] /* cSVGN1.Y variable */;
  array[22] = data->localData[0]->realVars[103] /* gENSAL.id variable */;
  array[23] = data->localData[0]->realVars[104] /* gENSAL.iq variable */;
  array[24] = data->localData[0]->realVars[150] /* pwLine3.vr.re variable */;
  array[25] = data->localData[0]->realVars[149] /* pwLine3.vr.im variable */;
  array[26] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  array[27] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
}


/* inner equations */

/*
equation index: 628
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[79] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[79] /* constantLoad.v variable */,data->simulationInfo->realParameter[138] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[76] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[157] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[158] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[79] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[164] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[79] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
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
  tmp0 = Less(data->localData[0]->realVars[79] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[75] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[141] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[145] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[143] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[167] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[141] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[145] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[143] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[73] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[142] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[146] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[144] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[166] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[142] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[146] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[144] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[72] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
gENSAL.PSIppq = (-$DER.gENSAL.PSIppq) * gENSAL.Tppq0 - gENSAL.iq * (gENSAL.Xppq - gENSAL.Xq)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->localData[0]->realVars[7] /* gENSAL.PSIppq STATE(1) */ = ((-data->localData[0]->realVars[17] /* der(gENSAL.PSIppq) STATE_DER */)) * (data->simulationInfo->realParameter[247] /* gENSAL.Tppq0 PARAM */) - ((data->localData[0]->realVars[104] /* gENSAL.iq variable */) * (data->simulationInfo->realParameter[255] /* gENSAL.Xppq PARAM */ - data->simulationInfo->realParameter[256] /* gENSAL.Xq PARAM */));
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
gENSAL.PSIq = (-gENSAL.PSIppq) - gENSAL.Xppq * gENSAL.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->localData[0]->realVars[98] /* gENSAL.PSIq variable */ = (-data->localData[0]->realVars[7] /* gENSAL.PSIppq STATE(1) */) - ((data->simulationInfo->realParameter[255] /* gENSAL.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */));
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENSAL.delta) * gENSAL.iq - (-sin(gENSAL.delta)) * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */) - (((-sin(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */))) * (data->localData[0]->realVars[103] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENSAL.delta) * gENSAL.iq - cos(gENSAL.delta) * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */) - ((cos(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
gENSAL.ud = (-gENSAL.PSIq) - gENSAL.R_a * gENSAL.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->localData[0]->realVars[105] /* gENSAL.ud variable */ = (-data->localData[0]->realVars[98] /* gENSAL.PSIq variable */) - ((data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */));
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENSAL.delta) * gENSAL.ud + cos(gENSAL.delta) * gENSAL.uq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENSAL.ud variable */) + (cos(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENSAL.uq variable */);
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENSAL.delta) * gENSAL.uq - cos(gENSAL.delta) * gENSAL.ud
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENSAL.uq variable */) - ((cos(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENSAL.ud variable */));
  TRACE_POP
}
/*
equation index: 640
type: SIMPLE_ASSIGN
gENSAL.PSId = gENSAL.uq + gENSAL.R_a * gENSAL.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->localData[0]->realVars[96] /* gENSAL.PSId variable */ = data->localData[0]->realVars[106] /* gENSAL.uq variable */ + (data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */);
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
gENSAL.PSIppd = gENSAL.PSId + gENSAL.Xppd * gENSAL.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->localData[0]->realVars[97] /* gENSAL.PSIppd variable */ = data->localData[0]->realVars[96] /* gENSAL.PSId variable */ + (data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */);
  TRACE_POP
}
/*
equation index: 642
type: SIMPLE_ASSIGN
gENSAL.PSIkd = ((gENSAL.Epq + (gENSAL.Xl - gENSAL.Xpd) * gENSAL.id) * gENSAL.K1d + (gENSAL.Xd - gENSAL.Xpd) * gENSAL.id + (1.0 + OpenIPSL.NonElectrical.Functions.SE(gENSAL.Epq, gENSAL.S10, gENSAL.S12, 1.0, 1.2)) * gENSAL.Epq - gENSAL.ISORCE) / gENSAL.K1d
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */)) * (data->simulationInfo->realParameter[221] /* gENSAL.K1d PARAM */) + (data->simulationInfo->realParameter[251] /* gENSAL.Xd PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */) + (1.0 + omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */, data->simulationInfo->realParameter[242] /* gENSAL.S10 PARAM */, data->simulationInfo->realParameter[243] /* gENSAL.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */) - data->localData[0]->realVars[93] /* gENSAL.ISORCE variable */,data->simulationInfo->realParameter[221] /* gENSAL.K1d PARAM */,"gENSAL.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
cSVGN1.add.u2 = (cSVGN1.Y - cSVGN1.add.k1 * cSVGN1.const1.k) / cSVGN1.add.k2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->localData[0]->realVars[53] /* cSVGN1.add.u2 variable */ = DIVISION_SIM(data->localData[0]->realVars[52] /* cSVGN1.Y variable */ - ((data->simulationInfo->realParameter[66] /* cSVGN1.add.k1 PARAM */) * (data->simulationInfo->realParameter[79] /* cSVGN1.const1.k PARAM */)),data->simulationInfo->realParameter[67] /* cSVGN1.add.k2 PARAM */,"cSVGN1.add.k2",equationIndexes);
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
cSVGN1.LagLim.y = cSVGN1.add.u2 / cSVGN1.const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->localData[0]->realVars[48] /* cSVGN1.LagLim.y variable */ = DIVISION_SIM(data->localData[0]->realVars[53] /* cSVGN1.add.u2 variable */,data->simulationInfo->realParameter[77] /* cSVGN1.const.k PARAM */,"cSVGN1.const.k",equationIndexes);
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add2.u2 = cSVGN1.leadLagLim.gain1.k * cSVGN1.leadLagLim.integrator.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->localData[0]->realVars[62] /* cSVGN1.leadLagLim.add2.u2 variable */ = (data->simulationInfo->realParameter[117] /* cSVGN1.leadLagLim.gain1.k PARAM */) * (data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
cSVGN1.LagLim.u = (cSVGN1.leadLagLim.add3.y - cSVGN1.leadLagLim.add3.k2 * cSVGN1.leadLagLim.integrator.y) / cSVGN1.leadLagLim.add3.k1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */ = DIVISION_SIM(data->localData[0]->realVars[64] /* cSVGN1.leadLagLim.add3.y variable */ - ((data->simulationInfo->realParameter[115] /* cSVGN1.leadLagLim.add3.k2 PARAM */) * (data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */)),data->simulationInfo->realParameter[114] /* cSVGN1.leadLagLim.add3.k1 PARAM */,"cSVGN1.leadLagLim.add3.k1",equationIndexes);
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.gain.y = cSVGN1.LagLim.u
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */ = data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */;
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add2.y = cSVGN1.leadLagLim.gain.y / cSVGN1.leadLagLim.gain.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->localData[0]->realVars[63] /* cSVGN1.leadLagLim.add2.y variable */ = DIVISION_SIM(data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */,data->simulationInfo->realParameter[116] /* cSVGN1.leadLagLim.gain.k PARAM */,"cSVGN1.leadLagLim.gain.k",equationIndexes);
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
cSVGN1.leadLag.y = (cSVGN1.leadLagLim.add2.y - cSVGN1.leadLagLim.add2.k2 * cSVGN1.leadLagLim.add2.u2) / cSVGN1.leadLagLim.add2.k1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->localData[0]->realVars[61] /* cSVGN1.leadLag.y variable */ = DIVISION_SIM(data->localData[0]->realVars[63] /* cSVGN1.leadLagLim.add2.y variable */ - ((data->simulationInfo->realParameter[113] /* cSVGN1.leadLagLim.add2.k2 PARAM */) * (data->localData[0]->realVars[62] /* cSVGN1.leadLagLim.add2.u2 variable */)),data->simulationInfo->realParameter[112] /* cSVGN1.leadLagLim.add2.k1 PARAM */,"cSVGN1.leadLagLim.add2.k1",equationIndexes);
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
cSVGN1.Vref = cSVGN1.V - cSVGN1.k0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[64] /* cSVGN1.Vref PARAM */ = data->localData[0]->realVars[51] /* cSVGN1.V variable */ - data->simulationInfo->realParameter[88] /* cSVGN1.k0 PARAM */;
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
cSVGN1.const2.k = cSVGN1.Vref
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[81] /* cSVGN1.const2.k PARAM */ = data->simulationInfo->realParameter[64] /* cSVGN1.Vref PARAM */;
  TRACE_POP
}
/*
equation index: 652
type: SIMPLE_ASSIGN
cSVGN1.add1.y = cSVGN1.add1.k1 * cSVGN1.const2.k + cSVGN1.add1.k2 * cSVGN1.V
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->localData[0]->realVars[54] /* cSVGN1.add1.y variable */ = (data->simulationInfo->realParameter[69] /* cSVGN1.add1.k1 PARAM */) * (data->simulationInfo->realParameter[81] /* cSVGN1.const2.k PARAM */) + (data->simulationInfo->realParameter[70] /* cSVGN1.add1.k2 PARAM */) * (data->localData[0]->realVars[51] /* cSVGN1.V variable */);
  TRACE_POP
}
/*
equation index: 653
type: SIMPLE_ASSIGN
cSVGN1.add2.y = cSVGN1.add2.k1 * cSVGN1.add1.y + cSVGN1.add2.k2 * const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */ = (data->simulationInfo->realParameter[72] /* cSVGN1.add2.k1 PARAM */) * (data->localData[0]->realVars[54] /* cSVGN1.add1.y variable */) + (data->simulationInfo->realParameter[73] /* cSVGN1.add2.k2 PARAM */) * (data->simulationInfo->realParameter[135] /* const.k PARAM */);
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
cSVGN1.id = cSVGN1.vq * cSVGN1.Y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->localData[0]->realVars[57] /* cSVGN1.id variable */ = (data->localData[0]->realVars[71] /* cSVGN1.vq variable */) * (data->localData[0]->realVars[52] /* cSVGN1.Y variable */);
  TRACE_POP
}
/*
equation index: 655
type: SIMPLE_ASSIGN
cSVGN1.vd = (sin(cSVGN1.delta0) * cSVGN1.vq - pwLine1.vr.im) / cos(cSVGN1.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->localData[0]->realVars[70] /* cSVGN1.vd variable */ = DIVISION_SIM((sin(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[71] /* cSVGN1.vq variable */) - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */,cos(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */),"cos(cSVGN1.delta0)",equationIndexes);
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
cSVGN1.iq = (-cSVGN1.vd) * cSVGN1.Y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->localData[0]->realVars[58] /* cSVGN1.iq variable */ = ((-data->localData[0]->realVars[70] /* cSVGN1.vd variable */)) * (data->localData[0]->realVars[52] /* cSVGN1.Y variable */);
  TRACE_POP
}
/*
equation index: 657
type: SIMPLE_ASSIGN
pwLine1.vr.re = sin(cSVGN1.delta0) * cSVGN1.vd + cos(cSVGN1.delta0) * cSVGN1.vq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = (sin(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[70] /* cSVGN1.vd variable */) + (cos(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[71] /* cSVGN1.vq variable */);
  TRACE_POP
}
/*
equation index: 658
type: SIMPLE_ASSIGN
cSVGN1.p.ir = (-sin(cSVGN1.delta0)) * cSVGN1.id - cos(cSVGN1.delta0) * cSVGN1.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */ = ((-sin(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */))) * (data->localData[0]->realVars[57] /* cSVGN1.id variable */) - ((cos(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[58] /* cSVGN1.iq variable */));
  TRACE_POP
}
/*
equation index: 659
type: SIMPLE_ASSIGN
cSVGN1.p.ii = cos(cSVGN1.delta0) * cSVGN1.id - sin(cSVGN1.delta0) * cSVGN1.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */ = (cos(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[57] /* cSVGN1.id variable */) - ((sin(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[58] /* cSVGN1.iq variable */));
  TRACE_POP
}
/*
equation index: 660
type: SIMPLE_ASSIGN
pwLine2.is.im = (-pwLine1.ir.im) - cSVGN1.p.ii
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->localData[0]->realVars[137] /* pwLine2.is.im variable */ = (-data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */;
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
pwLine2.is.re = (-pwLine1.ir.re) - cSVGN1.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[138] /* pwLine2.is.re variable */ = (-data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */;
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->localData[0]->realVars[87] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[179] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->localData[0]->realVars[88] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[84] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[179] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->localData[0]->realVars[90] /* gENCLS.vq variable */ = data->localData[0]->realVars[4] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->localData[0]->realVars[89] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
pwLine2.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ = (-data->localData[0]->realVars[155] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[87] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
pwLine2.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ = (-data->localData[0]->realVars[156] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[88] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[146] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[158] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[145] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[157] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - data->localData[0]->realVars[148] /* pwLine3.is.re variable */ - data->localData[0]->realVars[78] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->localData[0]->realVars[77] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - data->localData[0]->realVars[125] /* pwLine1.is.im variable */ - data->localData[0]->realVars[147] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc703(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,703};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
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
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  /* iteration variables */
  for (i=0; i<31; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<31; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[148] /* pwLine3.is.re variable */ = xloc[3];
  data->localData[0]->realVars[147] /* pwLine3.is.im variable */ = xloc[4];
  data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ = xloc[5];
  data->localData[0]->realVars[157] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[158] /* pwLine4.is.re variable */ = xloc[8];
  data->localData[0]->realVars[78] /* constantLoad.p.ir variable */ = xloc[9];
  data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[85] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[84] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = xloc[16];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[17];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = xloc[18];
  data->localData[0]->realVars[71] /* cSVGN1.vq variable */ = xloc[19];
  data->localData[0]->realVars[51] /* cSVGN1.V variable */ = xloc[20];
  data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */ = xloc[21];
  data->localData[0]->realVars[52] /* cSVGN1.Y variable */ = xloc[22];
  data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ = xloc[23];
  data->localData[0]->realVars[106] /* gENSAL.uq variable */ = xloc[24];
  data->localData[0]->realVars[103] /* gENSAL.id variable */ = xloc[25];
  data->localData[0]->realVars[104] /* gENSAL.iq variable */ = xloc[26];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = xloc[27];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = xloc[28];
  data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ = xloc[29];
  data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ = xloc[30];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_628(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_629(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_630(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_631(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_632(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_633(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_634(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_635(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_636(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_637(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_638(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_639(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_640(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_641(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_642(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_643(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_644(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_645(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_646(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_647(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_648(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_649(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_650(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_651(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_652(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_653(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_654(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_655(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_656(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_657(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_658(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_659(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_660(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_661(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_662(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_663(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_664(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_665(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_666(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_667(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_668(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_669(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_670(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_671(data, threadData);
  /* body */
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[45] /* cSVGN1.LagLim.T PARAM */),1e-15);
  res[0] = (tmp0?fmax(fmin((data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) * (data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */),data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */),data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */,data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */),data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */)) - data->localData[0]->realVars[48] /* cSVGN1.LagLim.y variable */;

  tmp1 = Less(fabs(data->simulationInfo->realParameter[92] /* cSVGN1.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[93] /* cSVGN1.leadLag.T2 PARAM */),1e-15);
  res[1] = (tmp1?(data->simulationInfo->realParameter[91] /* cSVGN1.leadLag.K PARAM */) * (data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */):data->localData[0]->realVars[60] /* cSVGN1.leadLag.TF.y variable */) - data->localData[0]->realVars[61] /* cSVGN1.leadLag.y variable */;

  tmp2 = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  tmp3 = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  res[2] = sqrt((tmp2 * tmp2) + (tmp3 * tmp3)) - data->localData[0]->realVars[51] /* cSVGN1.V variable */;

  res[3] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[78] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[77] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[73] /* constantLoad.Q variable */;

  tmp4 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */);
  tmp13 = (modelica_boolean)tmp4;
  if(tmp13)
  {
    tmp14 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */);
    tmp11 = (modelica_boolean)(tmp5 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp11)
    {
      tmp12 = data->localData[0]->realVars[149] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp6 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */);
      tmp9 = (modelica_boolean)tmp6;
      if(tmp9)
      {
        tmp7 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp8 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp10 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280] /* pwFault.R PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[281] /* pwFault.X PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */),(tmp7 * tmp7) + (tmp8 * tmp8),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp10 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  res[4] = tmp14;

  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[5] = ((tmp15 && tmp16)?data->localData[0]->realVars[158] /* pwLine4.is.re variable */:data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp17 && tmp18)?data->localData[0]->realVars[157] /* pwLine4.is.im variable */:data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  res[7] = (sin(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[90] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[89] /* gENCLS.vd variable */) - data->localData[0]->realVars[139] /* pwLine2.vr.im variable */;

  res[8] = (cos(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[90] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vd variable */) - data->localData[0]->realVars[140] /* pwLine2.vr.re variable */;

  tmp19 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */);
  tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */);
  res[9] = ((tmp19 && tmp20)?data->localData[0]->realVars[136] /* pwLine2.ir.re variable */:data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))))));

  tmp21 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp22 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[10] = ((tmp21 && tmp22)?data->localData[0]->realVars[156] /* pwLine4.ir.re variable */:data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp23 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp24 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp23 && tmp24)?data->localData[0]->realVars[155] /* pwLine4.ir.im variable */:data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */);
  tmp34 = (modelica_boolean)tmp25;
  if(tmp34)
  {
    tmp35 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp26 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */);
    tmp32 = (modelica_boolean)(tmp26 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp32)
    {
      tmp33 = data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */);
      tmp30 = (modelica_boolean)tmp27;
      if(tmp30)
      {
        tmp28 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp29 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp31 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280] /* pwFault.R PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[281] /* pwFault.X PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)),(tmp28 * tmp28) + (tmp29 * tmp29),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp31 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp33 = tmp31;
    }
    tmp35 = tmp33;
  }
  res[12] = tmp35;

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[145] /* pwLine3.ir.im variable */:data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[146] /* pwLine3.ir.re variable */:data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[148] /* pwLine3.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[147] /* pwLine3.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[135] /* pwLine2.ir.im variable */:data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[138] /* pwLine2.is.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */);
  res[22] = ((tmp54 && tmp55)?data->localData[0]->realVars[137] /* pwLine2.is.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */)))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */);
  res[23] = ((tmp56 && tmp57)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))))));

  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */);
  res[24] = ((tmp58 && tmp59)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */)))));

  res[25] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[77] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[78] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[72] /* constantLoad.P variable */;

  tmp60 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */);
  tmp61 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */);
  res[26] = ((tmp60 && tmp61)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */)))));

  tmp62 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */);
  tmp63 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */);
  res[27] = ((tmp62 && tmp63)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))))));

  tmp64 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */);
  tmp65 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */);
  res[28] = ((tmp64 && tmp65)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */)))));

  res[29] = (data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[224] /* gENSAL.K4d PARAM */) + (data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */) * (data->simulationInfo->realParameter[223] /* gENSAL.K3d PARAM */) - data->localData[0]->realVars[97] /* gENSAL.PSIppd variable */;

  res[30] = data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */) + (-data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */) - ((data->localData[0]->realVars[16] /* der(gENSAL.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[246] /* gENSAL.Tppd0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS703(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+31] = {0,4,4,4,4,4,3,3,3,3,4,4,4,4,4,7,7,4,4,9,7,2,2,3,2,5,6,5,11,11,8,8};
  const int rowIndex[153] = {3,25,26,27,3,18,19,25,18,19,26,27,16,17,18,19,3,16,17,25,12,13,14,5,6,12,4,13,14,4,5,6,3,18,19,25,9,10,11,20,9,10,11,20,7,8,9,20,7,8,9,20,5,8,9,10,11,20,21,6,7,9,10,11,20,22,21,22,23,24,21,22,23,24,2,9,18,19,20,21,22,23,24,2,9,18,21,22,23,24,1,2,0,1,0,21,22,29,30,15,26,27,28,29,15,26,27,28,29,30,15,26,27,28,29,3,13,16,17,18,19,24,25,26,27,28,3,14,15,16,17,18,19,23,25,26,27,4,5,6,11,12,13,14,17,4,5,6,10,12,13,14,16};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((31+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(153*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 153;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(31*sizeof(int));
  inSysData->sparsePattern->maxColors = 9;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (31+1)*sizeof(int));
  
  for(i=2;i<31+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 153*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[28] = 1;
  inSysData->sparsePattern->colorCols[19] = 2;
  inSysData->sparsePattern->colorCols[18] = 3;
  inSysData->sparsePattern->colorCols[30] = 3;
  inSysData->sparsePattern->colorCols[15] = 4;
  inSysData->sparsePattern->colorCols[27] = 4;
  inSysData->sparsePattern->colorCols[14] = 5;
  inSysData->sparsePattern->colorCols[26] = 5;
  inSysData->sparsePattern->colorCols[9] = 6;
  inSysData->sparsePattern->colorCols[13] = 6;
  inSysData->sparsePattern->colorCols[25] = 6;
  inSysData->sparsePattern->colorCols[29] = 6;
  inSysData->sparsePattern->colorCols[2] = 7;
  inSysData->sparsePattern->colorCols[4] = 7;
  inSysData->sparsePattern->colorCols[12] = 7;
  inSysData->sparsePattern->colorCols[22] = 7;
  inSysData->sparsePattern->colorCols[1] = 8;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[7] = 8;
  inSysData->sparsePattern->colorCols[11] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[21] = 8;
  inSysData->sparsePattern->colorCols[24] = 8;
  inSysData->sparsePattern->colorCols[0] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[10] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[20] = 9;
  inSysData->sparsePattern->colorCols[23] = 9;
}
void initializeStaticDataNLS703(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[157].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[157].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[157].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[158].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[158].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[158].attribute /* pwLine4.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[156].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[156].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[156].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[155].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[155].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[155].attribute /* pwLine4.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine2.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re */.max;
  /* static nls data for pwLine2.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.max;
  /* static nls data for cSVGN1.vq */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* cSVGN1.vq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* cSVGN1.vq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* cSVGN1.vq */.max;
  /* static nls data for cSVGN1.V */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* cSVGN1.V */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* cSVGN1.V */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* cSVGN1.V */.max;
  /* static nls data for cSVGN1.leadLagLim.integrator.y */
  sysData->nominal[i] = data->modelData->realVarsData[2].attribute /* cSVGN1.leadLagLim.integrator.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2].attribute /* cSVGN1.leadLagLim.integrator.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2].attribute /* cSVGN1.leadLagLim.integrator.y */.max;
  /* static nls data for cSVGN1.Y */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* cSVGN1.Y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* cSVGN1.Y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* cSVGN1.Y */.max;
  /* static nls data for gENSAL.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* gENSAL.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* gENSAL.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* gENSAL.Epq */.max;
  /* static nls data for gENSAL.uq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENSAL.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENSAL.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENSAL.uq */.max;
  /* static nls data for gENSAL.id */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENSAL.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENSAL.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENSAL.id */.max;
  /* static nls data for gENSAL.iq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENSAL.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENSAL.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENSAL.iq */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS703(sysData);
}

void getIterationVarsNLS703(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[148] /* pwLine3.is.re variable */;
  array[4] = data->localData[0]->realVars[147] /* pwLine3.is.im variable */;
  array[5] = data->localData[0]->realVars[145] /* pwLine3.ir.im variable */;
  array[6] = data->localData[0]->realVars[157] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[146] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[158] /* pwLine4.is.re variable */;
  array[9] = data->localData[0]->realVars[78] /* constantLoad.p.ir variable */;
  array[10] = data->localData[0]->realVars[156] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[155] /* pwLine4.ir.im variable */;
  array[12] = data->localData[0]->realVars[85] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[84] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[140] /* pwLine2.vr.re variable */;
  array[15] = data->localData[0]->realVars[139] /* pwLine2.vr.im variable */;
  array[16] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  array[17] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[18] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  array[19] = data->localData[0]->realVars[71] /* cSVGN1.vq variable */;
  array[20] = data->localData[0]->realVars[51] /* cSVGN1.V variable */;
  array[21] = data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */;
  array[22] = data->localData[0]->realVars[52] /* cSVGN1.Y variable */;
  array[23] = data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */;
  array[24] = data->localData[0]->realVars[106] /* gENSAL.uq variable */;
  array[25] = data->localData[0]->realVars[103] /* gENSAL.id variable */;
  array[26] = data->localData[0]->realVars[104] /* gENSAL.iq variable */;
  array[27] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  array[28] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  array[29] = data->localData[0]->realVars[149] /* pwLine3.vr.im variable */;
  array[30] = data->localData[0]->realVars[150] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 37
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[79] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[79] /* constantLoad.v variable */,data->simulationInfo->realParameter[138] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[76] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[157] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[158] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[79] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[164] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[79] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
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
  tmp0 = Less(data->localData[0]->realVars[79] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[75] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[141] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[145] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[143] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[167] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[141] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[145] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[143] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[73] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[142] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[146] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[144] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[166] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[75] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[142] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[146] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[76] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[144] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[72] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
gENSAL.PSIppq = (-$DER.gENSAL.PSIppq) * gENSAL.Tppq0 - gENSAL.iq * (gENSAL.Xppq - gENSAL.Xq)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[7] /* gENSAL.PSIppq STATE(1) */ = ((-data->localData[0]->realVars[17] /* der(gENSAL.PSIppq) STATE_DER */)) * (data->simulationInfo->realParameter[247] /* gENSAL.Tppq0 PARAM */) - ((data->localData[0]->realVars[104] /* gENSAL.iq variable */) * (data->simulationInfo->realParameter[255] /* gENSAL.Xppq PARAM */ - data->simulationInfo->realParameter[256] /* gENSAL.Xq PARAM */));
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
gENSAL.PSIq = (-gENSAL.PSIppq) - gENSAL.Xppq * gENSAL.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[98] /* gENSAL.PSIq variable */ = (-data->localData[0]->realVars[7] /* gENSAL.PSIppq STATE(1) */) - ((data->simulationInfo->realParameter[255] /* gENSAL.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */));
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENSAL.delta) * gENSAL.iq - (-sin(gENSAL.delta)) * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */) - (((-sin(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */))) * (data->localData[0]->realVars[103] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENSAL.delta) * gENSAL.iq - cos(gENSAL.delta) * gENSAL.id) * gENSAL.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */) - ((cos(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENSAL.id variable */))) * (data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
gENSAL.ud = (-gENSAL.PSIq) - gENSAL.R_a * gENSAL.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[105] /* gENSAL.ud variable */ = (-data->localData[0]->realVars[98] /* gENSAL.PSIq variable */) - ((data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */));
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENSAL.delta) * gENSAL.ud + cos(gENSAL.delta) * gENSAL.uq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENSAL.ud variable */) + (cos(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENSAL.uq variable */);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENSAL.delta) * gENSAL.uq - cos(gENSAL.delta) * gENSAL.ud
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENSAL.uq variable */) - ((cos(data->localData[0]->realVars[8] /* gENSAL.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENSAL.ud variable */));
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
gENSAL.PSId = gENSAL.uq + gENSAL.R_a * gENSAL.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[96] /* gENSAL.PSId variable */ = data->localData[0]->realVars[106] /* gENSAL.uq variable */ + (data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * (data->localData[0]->realVars[104] /* gENSAL.iq variable */);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
gENSAL.PSIppd = gENSAL.PSId + gENSAL.Xppd * gENSAL.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[97] /* gENSAL.PSIppd variable */ = data->localData[0]->realVars[96] /* gENSAL.PSId variable */ + (data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
gENSAL.PSIkd = ((gENSAL.Epq + (gENSAL.Xl - gENSAL.Xpd) * gENSAL.id) * gENSAL.K1d + (gENSAL.Xd - gENSAL.Xpd) * gENSAL.id + (1.0 + OpenIPSL.NonElectrical.Functions.SE(gENSAL.Epq, gENSAL.S10, gENSAL.S12, 1.0, 1.2)) * gENSAL.Epq - gENSAL.ISORCE) / gENSAL.K1d
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */)) * (data->simulationInfo->realParameter[221] /* gENSAL.K1d PARAM */) + (data->simulationInfo->realParameter[251] /* gENSAL.Xd PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */) + (1.0 + omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */, data->simulationInfo->realParameter[242] /* gENSAL.S10 PARAM */, data->simulationInfo->realParameter[243] /* gENSAL.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */) - data->localData[0]->realVars[93] /* gENSAL.ISORCE variable */,data->simulationInfo->realParameter[221] /* gENSAL.K1d PARAM */,"gENSAL.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
cSVGN1.add.u2 = (cSVGN1.Y - cSVGN1.add.k1 * cSVGN1.const1.k) / cSVGN1.add.k2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[53] /* cSVGN1.add.u2 variable */ = DIVISION_SIM(data->localData[0]->realVars[52] /* cSVGN1.Y variable */ - ((data->simulationInfo->realParameter[66] /* cSVGN1.add.k1 PARAM */) * (data->simulationInfo->realParameter[79] /* cSVGN1.const1.k PARAM */)),data->simulationInfo->realParameter[67] /* cSVGN1.add.k2 PARAM */,"cSVGN1.add.k2",equationIndexes);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
cSVGN1.LagLim.y = cSVGN1.add.u2 / cSVGN1.const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[48] /* cSVGN1.LagLim.y variable */ = DIVISION_SIM(data->localData[0]->realVars[53] /* cSVGN1.add.u2 variable */,data->simulationInfo->realParameter[77] /* cSVGN1.const.k PARAM */,"cSVGN1.const.k",equationIndexes);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add2.u2 = cSVGN1.leadLagLim.gain1.k * cSVGN1.leadLagLim.integrator.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[62] /* cSVGN1.leadLagLim.add2.u2 variable */ = (data->simulationInfo->realParameter[117] /* cSVGN1.leadLagLim.gain1.k PARAM */) * (data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
cSVGN1.LagLim.u = (cSVGN1.leadLagLim.add3.y - cSVGN1.leadLagLim.add3.k2 * cSVGN1.leadLagLim.integrator.y) / cSVGN1.leadLagLim.add3.k1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */ = DIVISION_SIM(data->localData[0]->realVars[64] /* cSVGN1.leadLagLim.add3.y variable */ - ((data->simulationInfo->realParameter[115] /* cSVGN1.leadLagLim.add3.k2 PARAM */) * (data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */)),data->simulationInfo->realParameter[114] /* cSVGN1.leadLagLim.add3.k1 PARAM */,"cSVGN1.leadLagLim.add3.k1",equationIndexes);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
cSVGN1.Vref = cSVGN1.V - cSVGN1.k0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->simulationInfo->realParameter[64] /* cSVGN1.Vref PARAM */ = data->localData[0]->realVars[51] /* cSVGN1.V variable */ - data->simulationInfo->realParameter[88] /* cSVGN1.k0 PARAM */;
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
cSVGN1.const2.k = cSVGN1.Vref
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->simulationInfo->realParameter[81] /* cSVGN1.const2.k PARAM */ = data->simulationInfo->realParameter[64] /* cSVGN1.Vref PARAM */;
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
cSVGN1.add1.y = cSVGN1.add1.k1 * cSVGN1.const2.k + cSVGN1.add1.k2 * cSVGN1.V
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[54] /* cSVGN1.add1.y variable */ = (data->simulationInfo->realParameter[69] /* cSVGN1.add1.k1 PARAM */) * (data->simulationInfo->realParameter[81] /* cSVGN1.const2.k PARAM */) + (data->simulationInfo->realParameter[70] /* cSVGN1.add1.k2 PARAM */) * (data->localData[0]->realVars[51] /* cSVGN1.V variable */);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
cSVGN1.add2.y = cSVGN1.add2.k1 * cSVGN1.add1.y + cSVGN1.add2.k2 * const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */ = (data->simulationInfo->realParameter[72] /* cSVGN1.add2.k1 PARAM */) * (data->localData[0]->realVars[54] /* cSVGN1.add1.y variable */) + (data->simulationInfo->realParameter[73] /* cSVGN1.add2.k2 PARAM */) * (data->simulationInfo->realParameter[135] /* const.k PARAM */);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
cSVGN1.leadLag.y = if abs(cSVGN1.leadLag.T1 - cSVGN1.leadLag.T2) < 1e-15 then cSVGN1.leadLag.K * cSVGN1.add2.y else cSVGN1.leadLag.TF.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[92] /* cSVGN1.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[93] /* cSVGN1.leadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[61] /* cSVGN1.leadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[91] /* cSVGN1.leadLag.K PARAM */) * (data->localData[0]->realVars[55] /* cSVGN1.add2.y variable */):data->localData[0]->realVars[60] /* cSVGN1.leadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add2.y = cSVGN1.leadLagLim.add2.k1 * cSVGN1.leadLag.y + cSVGN1.leadLagLim.add2.k2 * cSVGN1.leadLagLim.add2.u2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[63] /* cSVGN1.leadLagLim.add2.y variable */ = (data->simulationInfo->realParameter[112] /* cSVGN1.leadLagLim.add2.k1 PARAM */) * (data->localData[0]->realVars[61] /* cSVGN1.leadLag.y variable */) + (data->simulationInfo->realParameter[113] /* cSVGN1.leadLagLim.add2.k2 PARAM */) * (data->localData[0]->realVars[62] /* cSVGN1.leadLagLim.add2.u2 variable */);
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.gain.y = cSVGN1.leadLagLim.gain.k * cSVGN1.leadLagLim.add2.y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */ = (data->simulationInfo->realParameter[116] /* cSVGN1.leadLagLim.gain.k PARAM */) * (data->localData[0]->realVars[63] /* cSVGN1.leadLagLim.add2.y variable */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
cSVGN1.id = cSVGN1.vq * cSVGN1.Y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[57] /* cSVGN1.id variable */ = (data->localData[0]->realVars[71] /* cSVGN1.vq variable */) * (data->localData[0]->realVars[52] /* cSVGN1.Y variable */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
cSVGN1.vd = (sin(cSVGN1.delta0) * cSVGN1.vq - pwLine1.vr.im) / cos(cSVGN1.delta0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[70] /* cSVGN1.vd variable */ = DIVISION_SIM((sin(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[71] /* cSVGN1.vq variable */) - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */,cos(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */),"cos(cSVGN1.delta0)",equationIndexes);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
cSVGN1.iq = (-cSVGN1.vd) * cSVGN1.Y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[58] /* cSVGN1.iq variable */ = ((-data->localData[0]->realVars[70] /* cSVGN1.vd variable */)) * (data->localData[0]->realVars[52] /* cSVGN1.Y variable */);
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
pwLine1.vr.re = sin(cSVGN1.delta0) * cSVGN1.vd + cos(cSVGN1.delta0) * cSVGN1.vq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = (sin(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[70] /* cSVGN1.vd variable */) + (cos(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[71] /* cSVGN1.vq variable */);
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
cSVGN1.p.ir = (-sin(cSVGN1.delta0)) * cSVGN1.id - cos(cSVGN1.delta0) * cSVGN1.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */ = ((-sin(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */))) * (data->localData[0]->realVars[57] /* cSVGN1.id variable */) - ((cos(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[58] /* cSVGN1.iq variable */));
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
cSVGN1.p.ii = cos(cSVGN1.delta0) * cSVGN1.id - sin(cSVGN1.delta0) * cSVGN1.iq
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */ = (cos(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[57] /* cSVGN1.id variable */) - ((sin(data->simulationInfo->realParameter[83] /* cSVGN1.delta0 PARAM */)) * (data->localData[0]->realVars[58] /* cSVGN1.iq variable */));
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
pwLine2.is.im = (-pwLine1.ir.im) - cSVGN1.p.ii
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[137] /* pwLine2.is.im variable */ = (-data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[67] /* cSVGN1.p.ii variable */;
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
pwLine2.is.re = (-pwLine1.ir.re) - cSVGN1.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[138] /* pwLine2.is.re variable */ = (-data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[68] /* cSVGN1.p.ir variable */;
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[87] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[179] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[88] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[84] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[179] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[90] /* gENCLS.vq variable */ = data->localData[0]->realVars[4] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[89] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[85] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
pwLine2.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ = (-data->localData[0]->realVars[155] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[87] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
pwLine2.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ = (-data->localData[0]->realVars[156] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[88] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[146] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[158] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[145] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[157] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - data->localData[0]->realVars[148] /* pwLine3.is.re variable */ - data->localData[0]->realVars[78] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[77] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - data->localData[0]->realVars[125] /* pwLine1.is.im variable */ - data->localData[0]->realVars[147] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc112(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,112};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
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
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  modelica_boolean tmp35;
  modelica_real tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
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
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  /* iteration variables */
  for (i=0; i<31; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<31; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[148] /* pwLine3.is.re variable */ = xloc[3];
  data->localData[0]->realVars[147] /* pwLine3.is.im variable */ = xloc[4];
  data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ = xloc[5];
  data->localData[0]->realVars[157] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[158] /* pwLine4.is.re variable */ = xloc[8];
  data->localData[0]->realVars[78] /* constantLoad.p.ir variable */ = xloc[9];
  data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[85] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[84] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = xloc[16];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[17];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = xloc[18];
  data->localData[0]->realVars[71] /* cSVGN1.vq variable */ = xloc[19];
  data->localData[0]->realVars[51] /* cSVGN1.V variable */ = xloc[20];
  data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */ = xloc[21];
  data->localData[0]->realVars[52] /* cSVGN1.Y variable */ = xloc[22];
  data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ = xloc[23];
  data->localData[0]->realVars[106] /* gENSAL.uq variable */ = xloc[24];
  data->localData[0]->realVars[103] /* gENSAL.id variable */ = xloc[25];
  data->localData[0]->realVars[104] /* gENSAL.iq variable */ = xloc[26];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = xloc[27];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = xloc[28];
  data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ = xloc[29];
  data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ = xloc[30];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_37(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_43(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_76(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_77(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_78(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_79(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_80(data, threadData);
  /* body */
  tmp0 = Greater(data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */,data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */,data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */:data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */);
  }
  res[0] = homotopy(tmp3, data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */) - data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */;

  tmp4 = LessEq(fabs(data->simulationInfo->realParameter[45] /* cSVGN1.LagLim.T PARAM */),1e-15);
  res[1] = (tmp4?fmax(fmin((data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) * (data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */),data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */),data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[0] /* cSVGN1.LagLim.state STATE(1) */,data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */),data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */)) - data->localData[0]->realVars[48] /* cSVGN1.LagLim.y variable */;

  tmp5 = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  tmp6 = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  res[2] = sqrt((tmp5 * tmp5) + (tmp6 * tmp6)) - data->localData[0]->realVars[51] /* cSVGN1.V variable */;

  res[3] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[78] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[77] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[73] /* constantLoad.Q variable */;

  tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */);
  tmp16 = (modelica_boolean)tmp7;
  if(tmp16)
  {
    tmp17 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp8 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */);
    tmp14 = (modelica_boolean)(tmp8 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp14)
    {
      tmp15 = data->localData[0]->realVars[149] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp9 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */);
      tmp12 = (modelica_boolean)tmp9;
      if(tmp12)
      {
        tmp10 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp11 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp13 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280] /* pwFault.R PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[281] /* pwFault.X PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */),(tmp10 * tmp10) + (tmp11 * tmp11),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp13 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp15 = tmp13;
    }
    tmp17 = tmp15;
  }
  res[4] = tmp17;

  tmp18 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[5] = ((tmp18 && tmp19)?data->localData[0]->realVars[158] /* pwLine4.is.re variable */:data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp20 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp20 && tmp21)?data->localData[0]->realVars[157] /* pwLine4.is.im variable */:data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[157] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[158] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  res[7] = (sin(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[90] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[89] /* gENCLS.vd variable */) - data->localData[0]->realVars[139] /* pwLine2.vr.im variable */;

  res[8] = (cos(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[90] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[3] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vd variable */) - data->localData[0]->realVars[140] /* pwLine2.vr.re variable */;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */);
  res[9] = ((tmp22 && tmp23)?data->localData[0]->realVars[136] /* pwLine2.ir.re variable */:data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[10] = ((tmp24 && tmp25)?data->localData[0]->realVars[156] /* pwLine4.ir.re variable */:data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp26 && tmp27)?data->localData[0]->realVars[155] /* pwLine4.ir.im variable */:data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp28 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */);
  tmp37 = (modelica_boolean)tmp28;
  if(tmp37)
  {
    tmp38 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */);
    tmp35 = (modelica_boolean)(tmp29 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp35)
    {
      tmp36 = data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp30 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */);
      tmp33 = (modelica_boolean)tmp30;
      if(tmp33)
      {
        tmp31 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp32 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp34 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[280] /* pwFault.R PARAM */) * (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[281] /* pwFault.X PARAM */) * (data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)),(tmp31 * tmp31) + (tmp32 * tmp32),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp34 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp36 = tmp34;
    }
    tmp38 = tmp36;
  }
  res[12] = tmp38;

  tmp39 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp40 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[13] = ((tmp39 && tmp40)?data->localData[0]->realVars[145] /* pwLine3.ir.im variable */:data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp41 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp42 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[14] = ((tmp41 && tmp42)?data->localData[0]->realVars[146] /* pwLine3.ir.re variable */:data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[150] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[150] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[149] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp43 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */);
  tmp44 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */);
  res[15] = ((tmp43 && tmp44)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))))));

  tmp45 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp46 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[16] = ((tmp45 && tmp46)?data->localData[0]->realVars[148] /* pwLine3.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[150] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp47 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp48 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[17] = ((tmp47 && tmp48)?data->localData[0]->realVars[147] /* pwLine3.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[149] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp49 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */);
  tmp50 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp49 && tmp50)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))))));

  tmp51 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */);
  tmp52 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp51 && tmp52)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */)))));

  tmp53 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */);
  tmp54 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */);
  res[20] = ((tmp53 && tmp54)?data->localData[0]->realVars[135] /* pwLine2.ir.im variable */:data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */)))));

  tmp55 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */);
  tmp56 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */);
  res[21] = ((tmp55 && tmp56)?data->localData[0]->realVars[138] /* pwLine2.is.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))))));

  tmp57 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */);
  tmp58 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */);
  res[22] = ((tmp57 && tmp58)?data->localData[0]->realVars[137] /* pwLine2.is.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine2.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine2.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */)))));

  tmp59 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */);
  tmp60 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */);
  res[23] = ((tmp59 && tmp60)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))))));

  tmp61 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */);
  tmp62 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */);
  res[24] = ((tmp61 && tmp62)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */)))));

  res[25] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[77] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[78] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[72] /* constantLoad.P variable */;

  tmp63 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */);
  tmp64 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */);
  res[26] = ((tmp63 && tmp64)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */)))));

  tmp65 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */);
  tmp66 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */);
  res[27] = ((tmp65 && tmp66)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))))));

  tmp67 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */);
  tmp68 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */);
  res[28] = ((tmp67 && tmp68)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */)))));

  res[29] = (data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[224] /* gENSAL.K4d PARAM */) + (data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */) * (data->simulationInfo->realParameter[223] /* gENSAL.K3d PARAM */) - data->localData[0]->realVars[97] /* gENSAL.PSIppd variable */;

  res[30] = data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENSAL.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENSAL.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENSAL.id variable */) + (-data->localData[0]->realVars[6] /* gENSAL.PSIkd STATE(1) */) - ((data->localData[0]->realVars[16] /* der(gENSAL.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[246] /* gENSAL.Tppd0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS112(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+31] = {0,4,4,4,4,4,3,3,3,3,4,4,4,4,4,7,7,4,4,9,7,2,2,3,2,5,6,5,11,11,8,8};
  const int rowIndex[153] = {3,25,26,27,3,18,19,25,18,19,26,27,16,17,18,19,3,16,17,25,12,13,14,5,6,12,4,13,14,4,5,6,3,18,19,25,9,10,11,20,9,10,11,20,7,8,9,20,7,8,9,20,5,8,9,10,11,20,21,6,7,9,10,11,20,22,21,22,23,24,21,22,23,24,2,9,18,19,20,21,22,23,24,2,9,18,21,22,23,24,0,2,0,1,1,21,22,29,30,15,26,27,28,29,15,26,27,28,29,30,15,26,27,28,29,3,13,16,17,18,19,24,25,26,27,28,3,14,15,16,17,18,19,23,25,26,27,4,5,6,11,12,13,14,17,4,5,6,10,12,13,14,16};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((31+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(153*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 153;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(31*sizeof(int));
  inSysData->sparsePattern->maxColors = 9;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (31+1)*sizeof(int));
  
  for(i=2;i<31+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 153*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[28] = 1;
  inSysData->sparsePattern->colorCols[19] = 2;
  inSysData->sparsePattern->colorCols[18] = 3;
  inSysData->sparsePattern->colorCols[30] = 3;
  inSysData->sparsePattern->colorCols[15] = 4;
  inSysData->sparsePattern->colorCols[27] = 4;
  inSysData->sparsePattern->colorCols[14] = 5;
  inSysData->sparsePattern->colorCols[26] = 5;
  inSysData->sparsePattern->colorCols[9] = 6;
  inSysData->sparsePattern->colorCols[13] = 6;
  inSysData->sparsePattern->colorCols[25] = 6;
  inSysData->sparsePattern->colorCols[29] = 6;
  inSysData->sparsePattern->colorCols[2] = 7;
  inSysData->sparsePattern->colorCols[4] = 7;
  inSysData->sparsePattern->colorCols[12] = 7;
  inSysData->sparsePattern->colorCols[22] = 7;
  inSysData->sparsePattern->colorCols[1] = 8;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[7] = 8;
  inSysData->sparsePattern->colorCols[11] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[21] = 8;
  inSysData->sparsePattern->colorCols[24] = 8;
  inSysData->sparsePattern->colorCols[0] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[10] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[20] = 9;
  inSysData->sparsePattern->colorCols[23] = 9;
}
void initializeStaticDataNLS112(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[157].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[157].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[157].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[158].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[158].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[158].attribute /* pwLine4.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[156].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[156].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[156].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[155].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[155].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[155].attribute /* pwLine4.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine2.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine2.vr.re */.max;
  /* static nls data for pwLine2.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine2.vr.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* pwLine1.vr.im */.max;
  /* static nls data for cSVGN1.vq */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* cSVGN1.vq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* cSVGN1.vq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* cSVGN1.vq */.max;
  /* static nls data for cSVGN1.V */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* cSVGN1.V */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* cSVGN1.V */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* cSVGN1.V */.max;
  /* static nls data for cSVGN1.leadLagLim.integrator.y */
  sysData->nominal[i] = data->modelData->realVarsData[2].attribute /* cSVGN1.leadLagLim.integrator.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2].attribute /* cSVGN1.leadLagLim.integrator.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2].attribute /* cSVGN1.leadLagLim.integrator.y */.max;
  /* static nls data for cSVGN1.Y */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* cSVGN1.Y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* cSVGN1.Y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* cSVGN1.Y */.max;
  /* static nls data for gENSAL.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* gENSAL.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* gENSAL.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* gENSAL.Epq */.max;
  /* static nls data for gENSAL.uq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENSAL.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENSAL.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENSAL.uq */.max;
  /* static nls data for gENSAL.id */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENSAL.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENSAL.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENSAL.id */.max;
  /* static nls data for gENSAL.iq */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* gENSAL.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* gENSAL.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* gENSAL.iq */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS112(sysData);
}

void getIterationVarsNLS112(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[148] /* pwLine3.is.re variable */;
  array[4] = data->localData[0]->realVars[147] /* pwLine3.is.im variable */;
  array[5] = data->localData[0]->realVars[145] /* pwLine3.ir.im variable */;
  array[6] = data->localData[0]->realVars[157] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[146] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[158] /* pwLine4.is.re variable */;
  array[9] = data->localData[0]->realVars[78] /* constantLoad.p.ir variable */;
  array[10] = data->localData[0]->realVars[156] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[155] /* pwLine4.ir.im variable */;
  array[12] = data->localData[0]->realVars[85] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[84] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[140] /* pwLine2.vr.re variable */;
  array[15] = data->localData[0]->realVars[139] /* pwLine2.vr.im variable */;
  array[16] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  array[17] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[18] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  array[19] = data->localData[0]->realVars[71] /* cSVGN1.vq variable */;
  array[20] = data->localData[0]->realVars[51] /* cSVGN1.V variable */;
  array[21] = data->localData[0]->realVars[2] /* cSVGN1.leadLagLim.integrator.y STATE(1) */;
  array[22] = data->localData[0]->realVars[52] /* cSVGN1.Y variable */;
  array[23] = data->localData[0]->realVars[5] /* gENSAL.Epq STATE(1) */;
  array[24] = data->localData[0]->realVars[106] /* gENSAL.uq variable */;
  array[25] = data->localData[0]->realVars[103] /* gENSAL.id variable */;
  array[26] = data->localData[0]->realVars[104] /* gENSAL.iq variable */;
  array[27] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  array[28] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  array[29] = data->localData[0]->realVars[149] /* pwLine3.vr.im variable */;
  array[30] = data->localData[0]->realVars[150] /* pwLine3.vr.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[2].equationIndex = 909;
  nonLinearSystemData[2].size = 28;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc909;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacNLSJac12_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianNLSJac12;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS909;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS909;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 703;
  nonLinearSystemData[1].size = 31;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc703;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS703;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS703;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 112;
  nonLinearSystemData[0].size = 31;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc112;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS112;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS112;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

