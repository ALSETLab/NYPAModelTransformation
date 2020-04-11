/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 799
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[137] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[136] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 800
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 801
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 802
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 803
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 804
type: SIMPLE_ASSIGN
gENROU.PSId = gENROU.PSIppd - gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->localData[0]->realVars[100] /* gENROU.PSId variable */ = data->localData[0]->realVars[102] /* gENROU.PSIppd variable */ - ((data->simulationInfo->realParameter[283] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 805
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROU.iq - (-$cse6) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->localData[0]->realVars[123] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[110] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[229] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROU.iq - $cse7 * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  data->localData[0]->realVars[122] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[110] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[229] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 807
type: SIMPLE_ASSIGN
gENROU.uq = gENROU.PSId - gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  data->localData[0]->realVars[113] /* gENROU.uq variable */ = data->localData[0]->realVars[100] /* gENROU.PSId variable */ - ((data->simulationInfo->realParameter[266] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 808
type: SIMPLE_ASSIGN
gENROU.PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  data->localData[0]->realVars[104] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[103] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[284] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
gENROU.ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->localData[0]->realVars[112] /* gENROU.ud variable */ = (-data->localData[0]->realVars[104] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[266] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROU.uq - $cse7 * gENROU.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  data->localData[0]->realVars[124] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[113] /* gENROU.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[112] /* gENROU.ud variable */));
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROU.ud + $cse7 * gENROU.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->localData[0]->realVars[125] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[112] /* gENROU.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[113] /* gENROU.uq variable */);
  TRACE_POP
}
/*
equation index: 812
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->localData[0]->realVars[94] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[90] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[203] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 813
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->localData[0]->realVars[93] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[90] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[203] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 814
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->localData[0]->realVars[95] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[212] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[209] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[90] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 815
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  data->localData[0]->realVars[96] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[209] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[212] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[90] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 816
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  data->localData[0]->realVars[130] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[152] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[93] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 817
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  data->localData[0]->realVars[153] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[131] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[94] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 818
type: SIMPLE_ASSIGN
pwLine3.is.re = (-pwLine.ir.re) - pwLine1.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  data->localData[0]->realVars[145] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[121] /* pwLine.ir.re variable */) - data->localData[0]->realVars[133] /* pwLine1.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 819
type: SIMPLE_ASSIGN
pwLine1.is.im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  data->localData[0]->realVars[132] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[120] /* pwLine.ir.im variable */) - data->localData[0]->realVars[144] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 820
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  data->localData[0]->realVars[114] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[142] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[154] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 821
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  data->localData[0]->realVars[115] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[143] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[155] /* pwLine4.is.re variable */;
  TRACE_POP
}

void residualFunc889(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,889};
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
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[155] /* pwLine4.is.re variable */ = xloc[1];
  data->localData[0]->realVars[154] /* pwLine4.is.im variable */ = xloc[2];
  data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ = xloc[3];
  data->localData[0]->realVars[120] /* pwLine.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[144] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[133] /* pwLine1.is.re variable */ = xloc[6];
  data->localData[0]->realVars[121] /* pwLine.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[90] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[91] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[111] /* gENROU.iq variable */ = xloc[16];
  data->localData[0]->realVars[110] /* gENROU.id variable */ = xloc[17];
  data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ = xloc[18];
  data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_799(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_800(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_801(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_802(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_803(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_804(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_805(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_806(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_807(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_808(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_809(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_810(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_811(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_812(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_813(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_814(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_815(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_816(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_817(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_818(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_819(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_820(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_821(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  res[1] = (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, 6, Less);
  res[2] = ((tmp0 && tmp1)?data->localData[0]->realVars[144] /* pwLine3.is.im variable */:data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, 6, Less);
  res[3] = ((tmp2 && tmp3)?data->localData[0]->realVars[145] /* pwLine3.is.re variable */:data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */, 9, Less);
  tmp13 = (modelica_boolean)tmp4;
  if(tmp13)
  {
    tmp14 = data->localData[0]->realVars[114] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, 10, Less);
    tmp11 = (modelica_boolean)(tmp5 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp11)
    {
      tmp12 = data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, 10, Less);
      tmp9 = (modelica_boolean)tmp6;
      if(tmp9)
      {
        tmp7 = data->simulationInfo->realParameter[315] /* pwFault.X PARAM */;
        tmp8 = data->simulationInfo->realParameter[314] /* pwFault.R PARAM */;
        tmp10 = data->localData[0]->realVars[114] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[314] /* pwFault.R PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[315] /* pwFault.X PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)),(tmp7 * tmp7) + (tmp8 * tmp8),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp10 = data->localData[0]->realVars[114] /* pwFault.p.ii variable */;
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  res[4] = tmp14;

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */, 9, Less);
  tmp24 = (modelica_boolean)tmp15;
  if(tmp24)
  {
    tmp25 = data->localData[0]->realVars[115] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, 10, Less);
    tmp22 = (modelica_boolean)(tmp16 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp22)
    {
      tmp23 = data->localData[0]->realVars[146] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */, 10, Less);
      tmp20 = (modelica_boolean)tmp17;
      if(tmp20)
      {
        tmp18 = data->simulationInfo->realParameter[314] /* pwFault.R PARAM */;
        tmp19 = data->simulationInfo->realParameter[315] /* pwFault.X PARAM */;
        tmp21 = data->localData[0]->realVars[115] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[314] /* pwFault.R PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[315] /* pwFault.X PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */),(tmp18 * tmp18) + (tmp19 * tmp19),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp21 = data->localData[0]->realVars[115] /* pwFault.p.ir variable */;
      }
      tmp23 = tmp21;
    }
    tmp25 = tmp23;
  }
  res[5] = tmp25;

  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, 8, Less);
  res[6] = ((tmp26 && tmp27)?data->localData[0]->realVars[155] /* pwLine4.is.re variable */:data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, 8, Less);
  res[7] = ((tmp28 && tmp29)?data->localData[0]->realVars[154] /* pwLine4.is.im variable */:data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, 8, Less);
  res[8] = ((tmp30 && tmp31)?data->localData[0]->realVars[152] /* pwLine4.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, 6, Less);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[142] /* pwLine3.ir.im variable */:data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */, 6, Less);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[143] /* pwLine3.ir.re variable */:data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, 12, Less);
  res[11] = ((tmp36 && tmp37)?data->localData[0]->realVars[131] /* pwLine1.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, 1, Less);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[120] /* pwLine.ir.im variable */:data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[124] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, 1, Less);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[121] /* pwLine.ir.re variable */:data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[125] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, 1, Less);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[123] /* pwLine.is.re variable */:data->localData[0]->realVars[125] /* pwLine.vs.re variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */ + (data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[125] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */, 1, Less);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[122] /* pwLine.is.im variable */:data->localData[0]->realVars[124] /* pwLine.vs.im variable */ - data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[125] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */ + (data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, 12, Less);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[130] /* pwLine1.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */, 8, Less);
  res[17] = ((tmp48 && tmp49)?data->localData[0]->realVars[153] /* pwLine4.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, 12, Less);
  res[18] = ((tmp50 && tmp51)?data->localData[0]->realVars[132] /* pwLine1.is.im variable */:data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */, 12, Less);
  res[19] = ((tmp52 && tmp53)?data->localData[0]->realVars[133] /* pwLine1.is.re variable */:data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))))));

  res[20] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[96] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[95] /* gENCLS.vd variable */) - data->localData[0]->realVars[135] /* pwLine1.vr.re variable */;

  res[21] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[96] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[95] /* gENCLS.vd variable */) - data->localData[0]->realVars[134] /* pwLine1.vr.im variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS889(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {5,9,10,5,6,7,4,6,7,4,9,10,12,13,18,19,2,3,18,19,2,3,18,19,2,3,12,13,0,1,2,3,0,1,18,19,8,11,16,17,8,11,16,17,8,11,16,17,20,21,8,11,16,17,20,21,6,8,11,16,17,19,20,7,8,11,16,17,18,21,12,13,14,15,12,13,14,15,0,1,2,3,9,12,13,15,16,18,19,0,1,2,3,10,11,12,13,14,18,19,2,4,5,6,7,8,9,10,3,4,5,6,7,9,10,17};
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
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[9] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[2] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS889(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[155].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[155].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[155].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.ir.im */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* gENROU.iq */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* gENROU.id */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS889(sysData);
}

void getIterationVarsNLS889(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[143] /* pwLine3.ir.re variable */;
  array[1] = data->localData[0]->realVars[155] /* pwLine4.is.re variable */;
  array[2] = data->localData[0]->realVars[154] /* pwLine4.is.im variable */;
  array[3] = data->localData[0]->realVars[142] /* pwLine3.ir.im variable */;
  array[4] = data->localData[0]->realVars[120] /* pwLine.ir.im variable */;
  array[5] = data->localData[0]->realVars[144] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[133] /* pwLine1.is.re variable */;
  array[7] = data->localData[0]->realVars[121] /* pwLine.ir.re variable */;
  array[8] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[131] /* pwLine1.ir.re variable */;
  array[11] = data->localData[0]->realVars[152] /* pwLine4.ir.im variable */;
  array[12] = data->localData[0]->realVars[90] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[91] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[135] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[134] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[111] /* gENROU.iq variable */;
  array[17] = data->localData[0]->realVars[110] /* gENROU.id variable */;
  array[18] = data->localData[0]->realVars[136] /* pwLine1.vs.im variable */;
  array[19] = data->localData[0]->realVars[137] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[146] /* pwLine3.vr.im variable */;
  array[21] = data->localData[0]->realVars[147] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 661
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[137] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[136] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROU.delta) * gENROU.iq - (-sin(gENROU.delta)) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->localData[0]->realVars[123] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[110] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[229] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROU.delta) * gENROU.iq - cos(gENROU.delta) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[122] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[229] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
gENROU.PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->localData[0]->realVars[104] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[103] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[284] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
gENROU.ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->localData[0]->realVars[112] /* gENROU.ud variable */ = (-data->localData[0]->realVars[104] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[266] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROU.delta) * gENROU.ud + cos(gENROU.delta) * gENROU.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->localData[0]->realVars[125] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENROU.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROU.uq variable */);
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROU.delta) * gENROU.uq - cos(gENROU.delta) * gENROU.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->localData[0]->realVars[124] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROU.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENROU.ud variable */));
  TRACE_POP
}
/*
equation index: 672
type: SIMPLE_ASSIGN
gENROU.PSId = gENROU.uq + gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->localData[0]->realVars[100] /* gENROU.PSId variable */ = data->localData[0]->realVars[113] /* gENROU.uq variable */ + (data->simulationInfo->realParameter[266] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */);
  TRACE_POP
}
/*
equation index: 673
type: SIMPLE_ASSIGN
gENROU.PSIppd = gENROU.PSId + gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->localData[0]->realVars[102] /* gENROU.PSIppd variable */ = data->localData[0]->realVars[100] /* gENROU.PSId variable */ + (data->simulationInfo->realParameter[283] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */);
  TRACE_POP
}
/*
equation index: 674
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[102] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[103] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[101] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 675
type: SIMPLE_ASSIGN
gENROU.Epd = (gENROU.XaqIlq - (((gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) * gENROU.K1q + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl))) / (1.0 + gENROU.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[107] /* gENROU.XaqIlq variable */ - (((data->simulationInfo->realParameter[285] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[244] /* gENROU.K1q PARAM */) + (data->localData[0]->realVars[111] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[285] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[286] /* gENROU.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[101] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[269] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[270] /* gENROU.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[103] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[286] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[279] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[244] /* gENROU.K1q PARAM */,"1.0 + gENROU.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 676
type: SIMPLE_ASSIGN
gENROU.PSIkd = ((gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id) * gENROU.K1d + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppd - eSAC2A.XADIFD) / gENROU.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */)) * (data->simulationInfo->realParameter[243] /* gENROU.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[110] /* gENROU.id variable */) * (data->simulationInfo->realParameter[279] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[101] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[269] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[270] /* gENROU.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[102] /* gENROU.PSIppd variable */) - data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */,data->simulationInfo->realParameter[243] /* gENROU.K1d PARAM */,"gENROU.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 677
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->localData[0]->realVars[93] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[90] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[203] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 678
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->localData[0]->realVars[94] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[90] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[203] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 679
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->localData[0]->realVars[96] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[209] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[212] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[90] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 680
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->localData[0]->realVars[95] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[212] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[209] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[90] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 681
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->localData[0]->realVars[153] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[131] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[94] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 682
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[130] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[93] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 683
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->localData[0]->realVars[115] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[143] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[155] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 684
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->localData[0]->realVars[114] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[142] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[154] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 685
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->localData[0]->realVars[120] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[132] /* pwLine1.is.im variable */) - data->localData[0]->realVars[144] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 686
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->localData[0]->realVars[133] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[121] /* pwLine.ir.re variable */) - data->localData[0]->realVars[145] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}

void residualFunc713(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,713};
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[121] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[145] /* pwLine3.is.re variable */ = xloc[1];
  data->localData[0]->realVars[132] /* pwLine1.is.im variable */ = xloc[2];
  data->localData[0]->realVars[144] /* pwLine3.is.im variable */ = xloc[3];
  data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[154] /* pwLine4.is.im variable */ = xloc[5];
  data->localData[0]->realVars[155] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[130] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[91] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[90] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[113] /* gENROU.uq variable */ = xloc[16];
  data->localData[0]->realVars[103] /* gENROU.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[111] /* gENROU.iq variable */ = xloc[18];
  data->localData[0]->realVars[110] /* gENROU.id variable */ = xloc[19];
  data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ = xloc[21];
  data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ = xloc[23];
  data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_661(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_662(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_663(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_664(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_665(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_666(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_667(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_668(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_669(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_670(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_671(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_672(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_673(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_674(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_675(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_676(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_677(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_678(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_679(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_680(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_681(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_682(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_683(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_684(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_685(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_686(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[95] /* gENCLS.vd variable */) - data->localData[0]->realVars[134] /* pwLine1.vr.im variable */;

  res[1] = (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[2] = (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[115] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[146] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[314] /* pwFault.R PARAM */;
        tmp4 = data->simulationInfo->realParameter[315] /* pwFault.X PARAM */;
        tmp6 = data->localData[0]->realVars[115] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[314] /* pwFault.R PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[315] /* pwFault.X PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[115] /* pwFault.p.ir variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[3] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp11 && tmp12)?data->localData[0]->realVars[155] /* pwLine4.is.re variable */:data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
  res[5] = ((tmp13 && tmp14)?data->localData[0]->realVars[154] /* pwLine4.is.im variable */:data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */)))));

  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp15 && tmp16)?data->localData[0]->realVars[153] /* pwLine4.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))))));

  tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */);
  tmp26 = (modelica_boolean)tmp17;
  if(tmp26)
  {
    tmp27 = data->localData[0]->realVars[114] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
    tmp24 = (modelica_boolean)(tmp18 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp24)
    {
      tmp25 = data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
      tmp22 = (modelica_boolean)tmp19;
      if(tmp22)
      {
        tmp20 = data->simulationInfo->realParameter[315] /* pwFault.X PARAM */;
        tmp21 = data->simulationInfo->realParameter[314] /* pwFault.R PARAM */;
        tmp23 = data->localData[0]->realVars[114] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[314] /* pwFault.R PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[315] /* pwFault.X PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)),(tmp20 * tmp20) + (tmp21 * tmp21),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp23 = data->localData[0]->realVars[114] /* pwFault.p.ii variable */;
      }
      tmp25 = tmp23;
    }
    tmp27 = tmp25;
  }
  res[7] = tmp27;

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp28 && tmp29)?data->localData[0]->realVars[142] /* pwLine3.ir.im variable */:data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp30 && tmp31)?data->localData[0]->realVars[143] /* pwLine3.ir.re variable */:data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
  res[10] = ((tmp32 && tmp33)?data->localData[0]->realVars[123] /* pwLine.is.re variable */:data->localData[0]->realVars[125] /* pwLine.vs.re variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */ + (data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[125] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp34 && tmp35)?data->localData[0]->realVars[145] /* pwLine3.is.re variable */:data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[144] /* pwLine3.is.im variable */:data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[132] /* pwLine1.is.im variable */:data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[133] /* pwLine1.is.re variable */:data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[152] /* pwLine4.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */)))));

  res[16] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.vd variable */) - data->localData[0]->realVars[135] /* pwLine1.vr.re variable */;

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[131] /* pwLine1.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[130] /* pwLine1.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[121] /* pwLine.ir.re variable */:data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[125] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[120] /* pwLine.ir.im variable */:data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[124] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[122] /* pwLine.is.im variable */:data->localData[0]->realVars[124] /* pwLine.vs.im variable */ - data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[125] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */ + (data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */)))));

  res[22] = (data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[249] /* gENROU.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[247] /* gENROU.K3d PARAM */) - data->localData[0]->realVars[102] /* gENROU.PSIppd variable */;

  res[23] = data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */) + (-data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROU.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[273] /* gENROU.Tppd0 PARAM */));

  res[24] = data->localData[0]->realVars[103] /* gENROU.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[248] /* gENROU.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[250] /* gENROU.K4q PARAM */));

  res[25] = data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[285] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) + (-data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROU.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[274] /* gENROU.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS713(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[140] = {13,14,19,20,11,12,13,14,13,14,19,20,11,12,19,20,7,8,9,4,5,7,3,4,5,3,8,9,1,2,13,14,1,2,19,20,6,15,17,18,6,15,17,18,0,6,15,16,0,6,15,16,22,23,24,25,10,19,20,21,22,23,24,25,10,19,20,21,22,23,24,25,10,19,20,21,22,23,24,25,10,19,20,21,22,23,24,25,4,6,14,15,16,17,18,0,5,6,13,15,17,18,1,2,8,11,12,13,14,18,19,20,21,1,2,9,10,11,12,13,14,17,19,20,3,4,5,7,8,9,12,15,3,4,5,6,7,8,9,11};
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
  inSysData->sparsePattern->colorCols[8] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS713(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[155].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[155].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[155].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* gENCLS.id */.max;
  /* static nls data for gENROU.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.max;
  /* static nls data for gENROU.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* gENROU.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* gENROU.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* gENROU.PSIkq */.max;
  /* static nls data for gENROU.uq */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* gENROU.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* gENROU.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* gENROU.uq */.max;
  /* static nls data for gENROU.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENROU.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENROU.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENROU.PSIppq */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* gENROU.iq */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* gENROU.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS713(sysData);
}

void getIterationVarsNLS713(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[121] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[145] /* pwLine3.is.re variable */;
  array[2] = data->localData[0]->realVars[132] /* pwLine1.is.im variable */;
  array[3] = data->localData[0]->realVars[144] /* pwLine3.is.im variable */;
  array[4] = data->localData[0]->realVars[142] /* pwLine3.ir.im variable */;
  array[5] = data->localData[0]->realVars[154] /* pwLine4.is.im variable */;
  array[6] = data->localData[0]->realVars[155] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[143] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[130] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[131] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[91] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[90] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */;
  array[16] = data->localData[0]->realVars[113] /* gENROU.uq variable */;
  array[17] = data->localData[0]->realVars[103] /* gENROU.PSIppq variable */;
  array[18] = data->localData[0]->realVars[111] /* gENROU.iq variable */;
  array[19] = data->localData[0]->realVars[110] /* gENROU.id variable */;
  array[20] = data->localData[0]->realVars[135] /* pwLine1.vr.re variable */;
  array[21] = data->localData[0]->realVars[134] /* pwLine1.vr.im variable */;
  array[22] = data->localData[0]->realVars[136] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[137] /* pwLine1.vs.re variable */;
  array[24] = data->localData[0]->realVars[146] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[147] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 624
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.division.u1 = eSAC2A.rectifierCommutationVoltageDrop.gain2.k * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[171] /* eSAC2A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 625
type: SIMPLE_ASSIGN
eSAC2A.EFD = eSAC2A.XADIFD + $DER.gENROU.Epq * gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->localData[0]->realVars[65] /* eSAC2A.EFD variable */ = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[272] /* gENROU.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 626
type: SIMPLE_ASSIGN
eSAC2A.Ifd0 = eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */ = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
eSAC2A.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC2A.K_C, eSAC2A.Efd0, eSAC2A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[102] /* eSAC2A.K_C PARAM */, data->simulationInfo->realParameter[96] /* eSAC2A.Efd0 PARAM */, data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 628
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.Efd0 = eSAC2A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->simulationInfo->realParameter[174] /* eSAC2A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start = eSAC2A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->simulationInfo->realParameter[187] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[174] /* eSAC2A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.sISO.y = eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[187] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.division.y = eSAC2A.rectifierCommutationVoltageDrop.division.u1 / eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC2A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.fEX.y = if eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC2A.rectifierCommutationVoltageDrop.division.y else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC2A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
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
  tmp0 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */;
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
        tmp7 = GreaterEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc634(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,634};
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
  data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_624(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_625(data, threadData);

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
  /* body */
  res[0] = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[65] /* eSAC2A.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS634(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS634(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC2A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS634(sysData);
}

void getIterationVarsNLS634(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */;
}


/* inner equations */

/*
equation index: 58
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[137] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[136] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
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
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
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
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROU.delta) * gENROU.iq - (-sin(gENROU.delta)) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[123] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */))) * (data->localData[0]->realVars[110] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[229] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROU.delta) * gENROU.iq - cos(gENROU.delta) * gENROU.id) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[122] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROU.id variable */))) * (data->simulationInfo->realParameter[229] /* gENROU.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENROU.PSIq = (-gENROU.PSIppq) - gENROU.Xppq * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[104] /* gENROU.PSIq variable */ = (-data->localData[0]->realVars[103] /* gENROU.PSIppq variable */) - ((data->simulationInfo->realParameter[284] /* gENROU.Xppq PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */));
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
gENROU.ud = (-gENROU.PSIq) - gENROU.R_a * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[112] /* gENROU.ud variable */ = (-data->localData[0]->realVars[104] /* gENROU.PSIq variable */) - ((data->simulationInfo->realParameter[266] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROU.delta) * gENROU.ud + cos(gENROU.delta) * gENROU.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[125] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENROU.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROU.uq variable */);
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROU.delta) * gENROU.uq - cos(gENROU.delta) * gENROU.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[124] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROU.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROU.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENROU.ud variable */));
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
gENROU.PSId = gENROU.uq + gENROU.R_a * gENROU.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[100] /* gENROU.PSId variable */ = data->localData[0]->realVars[113] /* gENROU.uq variable */ + (data->simulationInfo->realParameter[266] /* gENROU.R_a PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
gENROU.PSIppd = gENROU.PSId + gENROU.Xppd * gENROU.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[102] /* gENROU.PSIppd variable */ = data->localData[0]->realVars[100] /* gENROU.PSId variable */ + (data->simulationInfo->realParameter[283] /* gENROU.Xppd PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
gENROU.PSIpp = sqrt(gENROU.PSIppd ^ 2.0 + gENROU.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[102] /* gENROU.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[103] /* gENROU.PSIppq variable */;
  data->localData[0]->realVars[101] /* gENROU.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
gENROU.Epd = (gENROU.XaqIlq - (((gENROU.Xpq - gENROU.Xl) * gENROU.iq - gENROU.PSIkq) * gENROU.K1q + gENROU.iq * (gENROU.Xpq - gENROU.Xq) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppq * (gENROU.Xq - gENROU.Xl) / (gENROU.Xd - gENROU.Xl))) / (1.0 + gENROU.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[107] /* gENROU.XaqIlq variable */ - (((data->simulationInfo->realParameter[285] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) - data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[244] /* gENROU.K1q PARAM */) + (data->localData[0]->realVars[111] /* gENROU.iq variable */) * (data->simulationInfo->realParameter[285] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[286] /* gENROU.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[101] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[269] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[270] /* gENROU.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[103] /* gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[286] /* gENROU.Xq PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */,data->simulationInfo->realParameter[279] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */,"gENROU.Xd - gENROU.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[244] /* gENROU.K1q PARAM */,"1.0 + gENROU.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
gENROU.PSIkd = ((gENROU.Epq + (gENROU.Xl - gENROU.Xpd) * gENROU.id) * gENROU.K1d + gENROU.Epq + gENROU.id * (gENROU.Xd - gENROU.Xpd) + OpenIPSL.NonElectrical.Functions.SE(gENROU.PSIpp, gENROU.S10, gENROU.S12, 1.0, 1.2) * gENROU.PSIppd - eSAC2A.XADIFD) / gENROU.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */)) * (data->simulationInfo->realParameter[243] /* gENROU.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[110] /* gENROU.id variable */) * (data->simulationInfo->realParameter[279] /* gENROU.Xd PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[101] /* gENROU.PSIpp variable */, data->simulationInfo->realParameter[269] /* gENROU.S10 PARAM */, data->simulationInfo->realParameter[270] /* gENROU.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[102] /* gENROU.PSIppd variable */) - data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */,data->simulationInfo->realParameter[243] /* gENROU.K1d PARAM */,"gENROU.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[93] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[90] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[203] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[94] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[90] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[203] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[96] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[209] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[212] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[90] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[95] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[212] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[91] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[209] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[90] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[153] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[131] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[94] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[130] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[93] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[115] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[143] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[155] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[114] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[142] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[154] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 82
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->realVars[120] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[132] /* pwLine1.is.im variable */) - data->localData[0]->realVars[144] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 83
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->localData[0]->realVars[133] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[121] /* pwLine.ir.re variable */) - data->localData[0]->realVars[145] /* pwLine3.is.re variable */ - data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  TRACE_POP
}

void residualFunc110(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,110};
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
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[121] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[145] /* pwLine3.is.re variable */ = xloc[1];
  data->localData[0]->realVars[132] /* pwLine1.is.im variable */ = xloc[2];
  data->localData[0]->realVars[144] /* pwLine3.is.im variable */ = xloc[3];
  data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[154] /* pwLine4.is.im variable */ = xloc[5];
  data->localData[0]->realVars[155] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[130] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[91] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[90] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[113] /* gENROU.uq variable */ = xloc[16];
  data->localData[0]->realVars[103] /* gENROU.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[111] /* gENROU.iq variable */ = xloc[18];
  data->localData[0]->realVars[110] /* gENROU.id variable */ = xloc[19];
  data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ = xloc[21];
  data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ = xloc[23];
  data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ = xloc[24];
  data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
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

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_83(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[95] /* gENCLS.vd variable */) - data->localData[0]->realVars[134] /* pwLine1.vr.im variable */;

  res[1] = (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[2] = (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[115] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[146] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[314] /* pwFault.R PARAM */;
        tmp4 = data->simulationInfo->realParameter[315] /* pwFault.X PARAM */;
        tmp6 = data->localData[0]->realVars[115] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[314] /* pwFault.R PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[315] /* pwFault.X PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[115] /* pwFault.p.ir variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[3] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp11 && tmp12)?data->localData[0]->realVars[155] /* pwLine4.is.re variable */:data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
  res[5] = ((tmp13 && tmp14)?data->localData[0]->realVars[154] /* pwLine4.is.im variable */:data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[154] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */)))));

  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp15 && tmp16)?data->localData[0]->realVars[153] /* pwLine4.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))))));

  tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwFault.t1 PARAM */);
  tmp26 = (modelica_boolean)tmp17;
  if(tmp26)
  {
    tmp27 = data->localData[0]->realVars[114] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
    tmp24 = (modelica_boolean)(tmp18 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp24)
    {
      tmp25 = data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[317] /* pwFault.t2 PARAM */);
      tmp22 = (modelica_boolean)tmp19;
      if(tmp22)
      {
        tmp20 = data->simulationInfo->realParameter[315] /* pwFault.X PARAM */;
        tmp21 = data->simulationInfo->realParameter[314] /* pwFault.R PARAM */;
        tmp23 = data->localData[0]->realVars[114] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[314] /* pwFault.R PARAM */) * (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[315] /* pwFault.X PARAM */) * (data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)),(tmp20 * tmp20) + (tmp21 * tmp21),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp23 = data->localData[0]->realVars[114] /* pwFault.p.ii variable */;
      }
      tmp25 = tmp23;
    }
    tmp27 = tmp25;
  }
  res[7] = tmp27;

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp28 && tmp29)?data->localData[0]->realVars[142] /* pwLine3.ir.im variable */:data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp30 && tmp31)?data->localData[0]->realVars[143] /* pwLine3.ir.re variable */:data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[147] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[146] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
  res[10] = ((tmp32 && tmp33)?data->localData[0]->realVars[123] /* pwLine.is.re variable */:data->localData[0]->realVars[125] /* pwLine.vs.re variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */ + (data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[125] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp34 && tmp35)?data->localData[0]->realVars[145] /* pwLine3.is.re variable */:data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[147] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[349] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[350] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[144] /* pwLine3.is.im variable */:data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[348] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[347] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[346] /* pwLine3.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[132] /* pwLine1.is.im variable */:data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[133] /* pwLine1.is.re variable */:data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[132] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[360] /* pwLine4.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[361] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[152] /* pwLine4.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[146] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[359] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[358] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[357] /* pwLine4.Y.re PARAM */)))));

  res[16] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[96] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.vd variable */) - data->localData[0]->realVars[135] /* pwLine1.vr.re variable */;

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[131] /* pwLine1.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[339] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[130] /* pwLine1.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[337] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[336] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[335] /* pwLine1.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[121] /* pwLine.ir.re variable */:data->localData[0]->realVars[137] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[125] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[120] /* pwLine.ir.im variable */:data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[124] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[137] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[136] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[328] /* pwLine.t2 PARAM */);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[122] /* pwLine.is.im variable */:data->localData[0]->realVars[124] /* pwLine.vs.im variable */ - data->localData[0]->realVars[136] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[326] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[122] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[125] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[325] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine.is.re variable */ + (data->localData[0]->realVars[124] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[125] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[324] /* pwLine.Y.re PARAM */)))));

  res[22] = (data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[249] /* gENROU.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[247] /* gENROU.K3d PARAM */) - data->localData[0]->realVars[102] /* gENROU.PSIppd variable */;

  res[23] = data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */ - data->simulationInfo->realParameter[281] /* gENROU.Xpd PARAM */) * (data->localData[0]->realVars[110] /* gENROU.id variable */) + (-data->localData[0]->realVars[9] /* gENROU.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROU.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[273] /* gENROU.Tppd0 PARAM */));

  res[24] = data->localData[0]->realVars[103] /* gENROU.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[248] /* gENROU.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[250] /* gENROU.K4q PARAM */));

  res[25] = data->localData[0]->realVars[7] /* gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[285] /* gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROU.Xl PARAM */) * (data->localData[0]->realVars[111] /* gENROU.iq variable */) + (-data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROU.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[274] /* gENROU.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS110(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,2,2,8,8,8,8,7,7,11,11,8,8};
  const int rowIndex[140] = {13,14,19,20,11,12,13,14,13,14,19,20,11,12,19,20,7,8,9,4,5,7,3,4,5,3,8,9,1,2,13,14,1,2,19,20,6,15,17,18,6,15,17,18,0,6,15,16,0,6,15,16,22,23,24,25,10,19,20,21,22,23,24,25,10,19,20,21,22,23,24,25,10,19,20,21,22,23,24,25,10,19,20,21,22,23,24,25,4,6,14,15,16,17,18,0,5,6,13,15,17,18,1,2,8,11,12,13,14,18,19,20,21,1,2,9,10,11,12,13,14,17,19,20,3,4,5,7,8,9,12,15,3,4,5,6,7,8,9,11};
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
  inSysData->sparsePattern->colorCols[8] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[9] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS110(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[121].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[121].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[121].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[155].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[155].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[155].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* gENCLS.id */.max;
  /* static nls data for gENROU.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROU.Epq */.max;
  /* static nls data for gENROU.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* gENROU.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* gENROU.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* gENROU.PSIkq */.max;
  /* static nls data for gENROU.uq */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* gENROU.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* gENROU.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* gENROU.uq */.max;
  /* static nls data for gENROU.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* gENROU.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* gENROU.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* gENROU.PSIppq */.max;
  /* static nls data for gENROU.iq */
  sysData->nominal[i] = data->modelData->realVarsData[111].attribute /* gENROU.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[111].attribute /* gENROU.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[111].attribute /* gENROU.iq */.max;
  /* static nls data for gENROU.id */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* gENROU.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* gENROU.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* gENROU.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS110(sysData);
}

void getIterationVarsNLS110(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[121] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[145] /* pwLine3.is.re variable */;
  array[2] = data->localData[0]->realVars[132] /* pwLine1.is.im variable */;
  array[3] = data->localData[0]->realVars[144] /* pwLine3.is.im variable */;
  array[4] = data->localData[0]->realVars[142] /* pwLine3.ir.im variable */;
  array[5] = data->localData[0]->realVars[154] /* pwLine4.is.im variable */;
  array[6] = data->localData[0]->realVars[155] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[143] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[54] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[130] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[131] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[91] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[90] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROU.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[10] /* gENROU.PSIkq STATE(1) */;
  array[16] = data->localData[0]->realVars[113] /* gENROU.uq variable */;
  array[17] = data->localData[0]->realVars[103] /* gENROU.PSIppq variable */;
  array[18] = data->localData[0]->realVars[111] /* gENROU.iq variable */;
  array[19] = data->localData[0]->realVars[110] /* gENROU.id variable */;
  array[20] = data->localData[0]->realVars[135] /* pwLine1.vr.re variable */;
  array[21] = data->localData[0]->realVars[134] /* pwLine1.vr.im variable */;
  array[22] = data->localData[0]->realVars[136] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[137] /* pwLine1.vs.re variable */;
  array[24] = data->localData[0]->realVars[146] /* pwLine3.vr.im variable */;
  array[25] = data->localData[0]->realVars[147] /* pwLine3.vr.re variable */;
}


/* inner equations */

/*
equation index: 21
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.division.u1 = eSAC2A.rectifierCommutationVoltageDrop.gain2.k * eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[171] /* eSAC2A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
eSAC2A.EFD = eSAC2A.XADIFD + $DER.gENROU.Epq * gENROU.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[65] /* eSAC2A.EFD variable */ = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[272] /* gENROU.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
eSAC2A.Ifd0 = eSAC2A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */ = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
eSAC2A.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC2A.K_C, eSAC2A.Efd0, eSAC2A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[102] /* eSAC2A.K_C PARAM */, data->simulationInfo->realParameter[96] /* eSAC2A.Efd0 PARAM */, data->simulationInfo->realParameter[99] /* eSAC2A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.Efd0 = eSAC2A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->simulationInfo->realParameter[174] /* eSAC2A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[115] /* eSAC2A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start = eSAC2A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->simulationInfo->realParameter[187] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[174] /* eSAC2A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
eSAC2A.rotatingExciterWithDemagnetization.sISO.y = eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[187] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.division.y = eSAC2A.rectifierCommutationVoltageDrop.division.u1 / eSAC2A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[79] /* eSAC2A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC2A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
eSAC2A.rectifierCommutationVoltageDrop.fEX.y = if eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC2A.rectifierCommutationVoltageDrop.division.y else if eSAC2A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC2A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC2A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC2A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC2A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC2A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
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
  tmp0 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */;
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
        tmp7 = GreaterEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[80] /* eSAC2A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
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
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */ = xloc[0];
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

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_29(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[3] /* eSAC2A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[81] /* eSAC2A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[65] /* eSAC2A.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS31(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS31(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC2A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* eSAC2A.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS31(sysData);
}

void getIterationVarsNLS31(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[67] /* eSAC2A.XADIFD variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 889;
  nonLinearSystemData[4].size = 22;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc889;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS889;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS889;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 713;
  nonLinearSystemData[3].size = 26;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc713;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS713;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS713;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 634;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc634;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS634;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS634;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 110;
  nonLinearSystemData[1].size = 26;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc110;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS110;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS110;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 31;
  nonLinearSystemData[0].size = 1;
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

