/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 363
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 364
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
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
equation index: 365
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 366
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
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
equation index: 367
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
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
equation index: 368
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 369
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 370
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 371
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = data->localData[0]->realVars[93] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 372
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->localData[0]->realVars[105] /* gENROE.ud variable */ = (-data->localData[0]->realVars[97] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[105] /* gENROE.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[106] /* gENROE.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[105] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 376
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 377
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 378
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 379
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->localData[0]->realVars[88] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 380
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[87] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 381
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[86] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 382
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[135] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 383
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[136] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 384
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - data->localData[0]->realVars[126] /* pwLine1.is.re variable */ - data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 385
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine1.is.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[125] /* pwLine1.is.im variable */) - data->localData[0]->realVars[137] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc453(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,453};
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_363(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_364(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_365(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_366(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_367(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_368(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_369(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_370(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_371(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_372(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_373(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_374(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_375(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_376(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_377(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_378(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_379(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_380(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_381(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_382(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_383(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_384(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_385(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 6, Less);
  res[1] = ((tmp0 && tmp1)?data->localData[0]->realVars[137] /* pwLine3.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 6, Less);
  res[2] = ((tmp2 && tmp3)?data->localData[0]->realVars[138] /* pwLine3.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, 7, Less);
  tmp13 = (modelica_boolean)tmp4;
  if(tmp13)
  {
    tmp14 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 8, Less);
    tmp11 = (modelica_boolean)(tmp5 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp11)
    {
      tmp12 = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 8, Less);
      tmp9 = (modelica_boolean)tmp6;
      if(tmp9)
      {
        tmp7 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp8 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp10 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)),(tmp7 * tmp7) + (tmp8 * tmp8),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
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

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 10, Less);
  res[4] = ((tmp15 && tmp16)?data->localData[0]->realVars[148] /* pwLine4.is.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 10, Less);
  res[5] = ((tmp17 && tmp18)?data->localData[0]->realVars[147] /* pwLine4.is.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 12, Less);
  res[6] = ((tmp19 && tmp20)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 10, Less);
  res[7] = ((tmp21 && tmp22)?data->localData[0]->realVars[146] /* pwLine4.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 10, Less);
  res[8] = ((tmp23 && tmp24)?data->localData[0]->realVars[145] /* pwLine4.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */, 7, Less);
  tmp34 = (modelica_boolean)tmp25;
  if(tmp34)
  {
    tmp35 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 8, Less);
    tmp32 = (modelica_boolean)(tmp26 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp32)
    {
      tmp33 = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */, 8, Less);
      tmp30 = (modelica_boolean)tmp27;
      if(tmp30)
      {
        tmp28 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp29 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp31 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */),(tmp28 * tmp28) + (tmp29 * tmp29),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
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

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 6, Less);
  res[10] = ((tmp36 && tmp37)?data->localData[0]->realVars[136] /* pwLine3.ir.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 6, Less);
  res[11] = ((tmp38 && tmp39)?data->localData[0]->realVars[135] /* pwLine3.ir.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 1, Less);
  res[12] = ((tmp40 && tmp41)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 1, Less);
  res[13] = ((tmp42 && tmp43)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 1, Less);
  res[14] = ((tmp44 && tmp45)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */, 1, Less);
  res[15] = ((tmp46 && tmp47)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  res[16] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  res[17] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 12, Less);
  res[18] = ((tmp48 && tmp49)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 12, Less);
  res[19] = ((tmp50 && tmp51)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */, 12, Less);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  res[21] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS453(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,11,8,8,11};
  const int rowIndex[112] = {12,13,18,19,12,13,16,17,16,17,18,19,12,13,16,17,9,10,11,4,5,9,3,10,11,3,4,5,1,2,16,17,1,2,12,13,6,7,8,20,6,7,8,20,0,7,8,21,0,7,8,21,0,4,6,7,8,19,20,5,6,7,8,18,20,21,12,13,14,15,12,13,14,15,1,2,11,12,13,15,16,17,18,19,20,1,3,4,5,8,9,10,11,2,3,4,5,7,9,10,11,1,2,6,10,12,13,14,16,17,18,19};
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
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[9] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[7] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS453(void *inData, threadData_t *threadData, void *inSystemData)
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
  initializeSparsePatternNLS453(sysData);
}

void getIterationVarsNLS453(struct DATA *inData, double *array)
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
equation index: 227
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
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
equation index: 229
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
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
equation index: 231
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
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
equation index: 232
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 233
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 234
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 235
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->localData[0]->realVars[105] /* gENROE.ud variable */ = (-data->localData[0]->realVars[97] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 236
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 237
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 238
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->localData[0]->realVars[106] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 239
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[93] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[94] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[104] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSAC1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[103] /* gENROE.id variable */) * (data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[95] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */,data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[88] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[87] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[86] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[136] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[135] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - data->localData[0]->realVars[125] /* pwLine1.is.im variable */ - data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[114] /* pwLine.ir.re variable */) - data->localData[0]->realVars[126] /* pwLine1.is.re variable */ - data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc279(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,279};
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
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = xloc[4];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = xloc[8];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = xloc[9];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = xloc[24];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_227(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_228(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_229(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_230(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_231(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_232(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_233(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_234(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_235(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_236(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_237(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_238(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_239(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_240(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_241(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_242(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_243(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_244(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_245(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_246(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_247(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_248(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_249(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_250(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_251(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_252(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[2] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[3] = ((tmp22 && tmp23)?data->localData[0]->realVars[148] /* pwLine4.is.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp24 && tmp25)?data->localData[0]->realVars[147] /* pwLine4.is.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[5] = ((tmp26 && tmp27)?data->localData[0]->realVars[138] /* pwLine3.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[6] = ((tmp28 && tmp29)?data->localData[0]->realVars[137] /* pwLine3.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  res[7] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[226] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;

  res[8] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[250] /* gENROE.Tppd0 PARAM */));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[9] = ((tmp30 && tmp31)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[10] = ((tmp32 && tmp33)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp34 && tmp35)?data->localData[0]->realVars[136] /* pwLine3.ir.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[135] /* pwLine3.ir.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[146] /* pwLine4.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[145] /* pwLine4.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  res[16] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  res[20] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[21] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  res[24] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[227] /* gENROE.K4q PARAM */));

  res[25] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[251] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS279(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,2,2,8,8,8,8,7,7,8,8,11,11};
  const int rowIndex[140] = {20,21,22,23,15,19,20,21,20,21,22,23,15,19,20,21,5,6,20,21,5,6,20,21,1,3,4,1,11,12,2,3,4,2,11,12,13,14,17,18,13,14,17,18,0,13,14,16,0,13,14,16,7,8,24,25,7,8,9,10,22,23,24,25,7,8,9,10,22,23,24,25,7,8,9,10,22,23,24,25,7,8,9,10,22,23,24,25,0,4,13,14,17,18,19,3,13,14,15,16,17,18,1,2,3,4,5,11,12,13,1,2,3,4,6,11,12,14,5,6,10,11,15,17,19,20,21,22,23,5,6,9,12,15,18,19,20,21,22,23};
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
  inSysData->sparsePattern->colorCols[25] = 1;
  inSysData->sparsePattern->colorCols[24] = 2;
  inSysData->sparsePattern->colorCols[23] = 3;
  inSysData->sparsePattern->colorCols[22] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[19] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[17] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[9] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
}
void initializeStaticDataNLS279(void *inData, threadData_t *threadData, void *inSystemData)
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
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[83].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[83].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[83].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.max;
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
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS279(sysData);
}

void getIterationVarsNLS279(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  array[5] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  array[9] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  array[10] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[106] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
  array[23] = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  array[24] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  array[25] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 194
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.u1 = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[152] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
eSAC1A.EFD = eSAC1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[59] /* eSAC1A.EFD variable */ = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[249] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
eSAC1A.Ifd0 = eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->simulationInfo->realParameter[89] /* eSAC1A.Ifd0 PARAM */ = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
eSAC1A.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC1A.K_C, eSAC1A.Efd0, eSAC1A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[91] /* eSAC1A.K_C PARAM */, data->simulationInfo->realParameter[88] /* eSAC1A.Efd0 PARAM */, data->simulationInfo->realParameter[89] /* eSAC1A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Efd0 = eSAC1A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start = eSAC1A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
$START.eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
    data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.y = eSAC1A.rectifierCommutationVoltageDrop.division.u1 / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[73] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.fEX.y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
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

void residualFunc205(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,205};
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_194(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_195(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_196(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_197(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_198(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_199(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_200(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_201(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_202(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_203(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[74] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[59] /* eSAC1A.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS205(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS205(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[61].attribute /* eSAC1A.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS205(sysData);
}

void getIterationVarsNLS205(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */;
}


/* inner equations */

/*
equation index: 54
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
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
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
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
equation index: 56
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
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
equation index: 58
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
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
equation index: 59
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[115] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[116] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[103] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[206] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[97] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[261] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[105] /* gENROE.ud variable */ = (-data->localData[0]->realVars[97] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[118] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[117] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[106] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[105] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[93] /* gENROE.PSId variable */ = data->localData[0]->realVars[106] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[243] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[95] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[93] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[260] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
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
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[104] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[96] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[263] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[100] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[221] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSAC1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[103] /* gENROE.id variable */) * (data->simulationInfo->realParameter[256] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[94] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[246] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[247] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[95] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */,data->simulationInfo->realParameter[220] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[86] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[87] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[83] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[180] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[89] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[88] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[189] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[84] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[186] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[83] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[124] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[87] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[123] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[86] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[108] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[136] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[107] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[135] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[113] /* pwLine.ir.im variable */) - data->localData[0]->realVars[125] /* pwLine1.is.im variable */ - data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
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
  data->localData[0]->realVars[114] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[126] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[113] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[125] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[138] /* pwLine3.is.re variable */ = xloc[4];
  data->localData[0]->realVars[137] /* pwLine3.is.im variable */ = xloc[5];
  data->localData[0]->realVars[147] /* pwLine4.is.im variable */ = xloc[6];
  data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ = xloc[7];
  data->localData[0]->realVars[148] /* pwLine4.is.re variable */ = xloc[8];
  data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ = xloc[9];
  data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[83] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[84] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[106] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[104] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[103] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ = xloc[24];
  data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ = xloc[25];
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

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[107] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[1] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[294] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[291] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[292] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[291] /* pwFault.R PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[292] /* pwFault.X PARAM */) * (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[108] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[2] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[3] = ((tmp22 && tmp23)?data->localData[0]->realVars[148] /* pwLine4.is.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp24 && tmp25)?data->localData[0]->realVars[147] /* pwLine4.is.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[147] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[148] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[5] = ((tmp26 && tmp27)?data->localData[0]->realVars[138] /* pwLine3.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[6] = ((tmp28 && tmp29)?data->localData[0]->realVars[137] /* pwLine3.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[137] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[138] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  res[7] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[226] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[224] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[95] /* gENROE.PSIppd variable */;

  res[8] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[103] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[250] /* gENROE.Tppd0 PARAM */));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[9] = ((tmp30 && tmp31)?data->localData[0]->realVars[115] /* pwLine.is.im variable */:data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[10] = ((tmp32 && tmp33)?data->localData[0]->realVars[116] /* pwLine.is.re variable */:data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[116] /* pwLine.is.re variable */ + (data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[118] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[115] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[118] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[117] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp34 && tmp35)?data->localData[0]->realVars[136] /* pwLine3.ir.re variable */:data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp36 && tmp37)?data->localData[0]->realVars[135] /* pwLine3.ir.im variable */:data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[13] = ((tmp38 && tmp39)?data->localData[0]->realVars[146] /* pwLine4.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */);
  res[14] = ((tmp40 && tmp41)?data->localData[0]->realVars[145] /* pwLine4.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp42 && tmp43)?data->localData[0]->realVars[126] /* pwLine1.is.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  res[16] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.vd variable */) - data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[124] /* pwLine1.ir.re variable */:data->localData[0]->realVars[128] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[123] /* pwLine1.ir.im variable */:data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[316] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[125] /* pwLine1.is.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[314] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[312] /* pwLine1.Y.re PARAM */)))));

  res[20] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[21] = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[114] /* pwLine.ir.re variable */:data->localData[0]->realVars[130] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[118] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[305] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[113] /* pwLine.ir.im variable */:data->localData[0]->realVars[129] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[117] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[303] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[113] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[130] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[114] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[301] /* pwLine.Y.re PARAM */)))));

  res[24] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[225] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[227] /* gENROE.K4q PARAM */));

  res[25] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[262] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[257] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[104] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[251] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS106(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,2,2,8,8,8,8,7,7,8,8,11,11};
  const int rowIndex[140] = {20,21,22,23,15,19,20,21,20,21,22,23,15,19,20,21,5,6,20,21,5,6,20,21,1,3,4,1,11,12,2,3,4,2,11,12,13,14,17,18,13,14,17,18,0,13,14,16,0,13,14,16,7,8,24,25,7,8,9,10,22,23,24,25,7,8,9,10,22,23,24,25,7,8,9,10,22,23,24,25,7,8,9,10,22,23,24,25,0,4,13,14,17,18,19,3,13,14,15,16,17,18,1,2,3,4,5,11,12,13,1,2,3,4,6,11,12,14,5,6,10,11,15,17,19,20,21,22,23,5,6,9,12,15,18,19,20,21,22,23};
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
  inSysData->sparsePattern->colorCols[25] = 1;
  inSysData->sparsePattern->colorCols[24] = 2;
  inSysData->sparsePattern->colorCols[23] = 3;
  inSysData->sparsePattern->colorCols[22] = 4;
  inSysData->sparsePattern->colorCols[5] = 5;
  inSysData->sparsePattern->colorCols[19] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[4] = 6;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[17] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[9] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
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
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[125].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[83].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[83].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[83].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[84].attribute /* gENCLS.iq */.max;
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
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS106(sysData);
}

void getIterationVarsNLS106(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[114] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[126] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[113] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[125] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[138] /* pwLine3.is.re variable */;
  array[5] = data->localData[0]->realVars[137] /* pwLine3.is.im variable */;
  array[6] = data->localData[0]->realVars[147] /* pwLine4.is.im variable */;
  array[7] = data->localData[0]->realVars[135] /* pwLine3.ir.im variable */;
  array[8] = data->localData[0]->realVars[148] /* pwLine4.is.re variable */;
  array[9] = data->localData[0]->realVars[136] /* pwLine3.ir.re variable */;
  array[10] = data->localData[0]->realVars[123] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[124] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[83] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[84] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[106] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[96] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[104] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[103] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  array[21] = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  array[22] = data->localData[0]->realVars[140] /* pwLine3.vr.re variable */;
  array[23] = data->localData[0]->realVars[139] /* pwLine3.vr.im variable */;
  array[24] = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  array[25] = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 21
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.u1 = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[72] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[152] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
eSAC1A.EFD = eSAC1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[59] /* eSAC1A.EFD variable */ = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[249] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
eSAC1A.Ifd0 = eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->realParameter[89] /* eSAC1A.Ifd0 PARAM */ = data->localData[0]->realVars[61] /* eSAC1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
eSAC1A.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC1A.K_C, eSAC1A.Efd0, eSAC1A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[91] /* eSAC1A.K_C PARAM */, data->simulationInfo->realParameter[88] /* eSAC1A.Efd0 PARAM */, data->simulationInfo->realParameter[89] /* eSAC1A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Efd0 = eSAC1A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[103] /* eSAC1A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start = eSAC1A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[155] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
$START.eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
    data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[168] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.y = eSAC1A.rectifierCommutationVoltageDrop.division.u1 / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
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
eSAC1A.rectifierCommutationVoltageDrop.fEX.y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
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
  
  nonLinearSystemData[4].equationIndex = 453;
  nonLinearSystemData[4].size = 22;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc453;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS453;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS453;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 279;
  nonLinearSystemData[3].size = 26;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc279;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS279;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS279;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 205;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc205;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS205;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS205;
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

