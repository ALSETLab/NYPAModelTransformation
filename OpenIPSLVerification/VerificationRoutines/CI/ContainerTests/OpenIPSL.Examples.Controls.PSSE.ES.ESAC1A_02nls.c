/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 402
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[140] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[139] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[65] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 403
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[65] /* constantLoad.v variable */, data->simulationInfo->realParameter[38] /* constantLoad.PQBRAK PARAM */, 6, Less);
  data->localData[0]->realVars[62] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[57] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[58] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[65] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[65] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 404
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[65] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[61] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 405
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[59] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 406
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[58] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 407
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->localData[0]->realVars[107] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[106] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 408
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse5 * gENROE.iq - (-$cse4) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->localData[0]->realVars[126] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[32] /* $cse5 variable */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[31] /* $cse4 variable */)) * (data->localData[0]->realVars[113] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 409
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse4 * gENROE.iq - $cse5 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->localData[0]->realVars[125] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[31] /* $cse4 variable */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */) - ((data->localData[0]->realVars[32] /* $cse5 variable */) * (data->localData[0]->realVars[113] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 410
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->localData[0]->realVars[115] /* gENROE.ud variable */ = (-data->localData[0]->realVars[107] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 411
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->localData[0]->realVars[103] /* gENROE.PSId variable */ = data->localData[0]->realVars[105] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 412
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->localData[0]->realVars[116] /* gENROE.uq variable */ = data->localData[0]->realVars[103] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 413
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse4 * gENROE.uq - $cse5 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->localData[0]->realVars[127] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[31] /* $cse4 variable */) * (data->localData[0]->realVars[116] /* gENROE.uq variable */) - ((data->localData[0]->realVars[32] /* $cse5 variable */) * (data->localData[0]->realVars[115] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 414
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse4 * gENROE.ud + $cse5 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->localData[0]->realVars[128] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[31] /* $cse4 variable */) * (data->localData[0]->realVars[115] /* gENROE.ud variable */) + (data->localData[0]->realVars[32] /* $cse5 variable */) * (data->localData[0]->realVars[116] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 415
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->localData[0]->realVars[97] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[28] /* $cse1 variable */)) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((data->localData[0]->realVars[29] /* $cse2 variable */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 416
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->localData[0]->realVars[96] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[29] /* $cse2 variable */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((data->localData[0]->realVars[28] /* $cse1 variable */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 417
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->localData[0]->realVars[99] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 418
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->localData[0]->realVars[98] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 419
type: SIMPLE_ASSIGN
pwLine2.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->localData[0]->realVars[146] /* pwLine2.ir.re variable */ = (-data->localData[0]->realVars[164] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[97] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 420
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-gENCLS.p.ii) - pwLine2.ir.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[96] /* gENCLS.p.ii variable */) - data->localData[0]->realVars[145] /* pwLine2.ir.im variable */;
  TRACE_POP
}
/*
equation index: 421
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->localData[0]->realVars[117] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[153] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[165] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 422
type: SIMPLE_ASSIGN
pwLine.ir.im = (-pwLine3.is.im) - constantLoad.p.ii - pwLine1.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->localData[0]->realVars[123] /* pwLine.ir.im variable */ = (-data->localData[0]->realVars[155] /* pwLine3.is.im variable */) - data->localData[0]->realVars[63] /* constantLoad.p.ii variable */ - data->localData[0]->realVars[135] /* pwLine1.is.im variable */;
  TRACE_POP
}
/*
equation index: 423
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->localData[0]->realVars[136] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[124] /* pwLine.ir.re variable */) - data->localData[0]->realVars[156] /* pwLine3.is.re variable */ - data->localData[0]->realVars[64] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 424
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->localData[0]->realVars[118] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[154] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[166] /* pwLine4.is.re variable */;
  TRACE_POP
}

void residualFunc500(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,500};
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
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
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
  /* iteration variables */
  for (i=0; i<26; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<26; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[166] /* pwLine4.is.re variable */ = xloc[0];
  data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ = xloc[1];
  data->localData[0]->realVars[156] /* pwLine3.is.re variable */ = xloc[2];
  data->localData[0]->realVars[124] /* pwLine.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[155] /* pwLine3.is.im variable */ = xloc[4];
  data->localData[0]->realVars[63] /* constantLoad.p.ii variable */ = xloc[5];
  data->localData[0]->realVars[64] /* constantLoad.p.ir variable */ = xloc[6];
  data->localData[0]->realVars[165] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ = xloc[8];
  data->localData[0]->realVars[135] /* pwLine1.is.im variable */ = xloc[9];
  data->localData[0]->realVars[145] /* pwLine2.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[95] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[94] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[113] /* gENROE.id variable */ = xloc[16];
  data->localData[0]->realVars[114] /* gENROE.iq variable */ = xloc[17];
  data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ = xloc[18];
  data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ = xloc[19];
  data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ = xloc[21];
  data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ = xloc[22];
  data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ = xloc[24];
  data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ = xloc[25];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_402(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_403(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_404(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_405(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_406(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_407(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_408(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_409(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_410(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_411(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_412(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_413(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_414(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_415(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_416(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_417(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_418(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_419(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_420(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_421(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_422(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_423(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_424(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, 3, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[136] /* pwLine1.is.re variable */:data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, 9, Less);
  res[1] = ((tmp2 && tmp3)?(-data->localData[0]->realVars[134] /* pwLine1.ir.re variable */):data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[134] /* pwLine1.ir.re variable */) - ((data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[133] /* pwLine1.ir.im variable */))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, 9, Less);
  res[2] = ((tmp4 && tmp5)?(-data->localData[0]->realVars[133] /* pwLine1.ir.im variable */):data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[133] /* pwLine1.ir.im variable */) + (data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[134] /* pwLine1.ir.re variable */)));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, 9, Less);
  res[3] = ((tmp6 && tmp7)?data->localData[0]->realVars[146] /* pwLine2.ir.re variable */:data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, 9, Less);
  res[4] = ((tmp8 && tmp9)?data->localData[0]->realVars[145] /* pwLine2.ir.im variable */:data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, 3, Less);
  res[5] = ((tmp10 && tmp11)?data->localData[0]->realVars[133] /* pwLine1.ir.im variable */:data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, 3, Less);
  res[6] = ((tmp12 && tmp13)?data->localData[0]->realVars[134] /* pwLine1.ir.re variable */:data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */, 14, Less);
  tmp23 = (modelica_boolean)tmp14;
  if(tmp23)
  {
    tmp24 = data->localData[0]->realVars[117] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, 15, Less);
    tmp21 = (modelica_boolean)(tmp15 && data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */);
    if(tmp21)
    {
      tmp22 = data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, 15, Less);
      tmp19 = (modelica_boolean)tmp16;
      if(tmp19)
      {
        tmp17 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp18 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp20 = data->localData[0]->realVars[117] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[290] /* pwFault.R PARAM */) * (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[291] /* pwFault.X PARAM */) * (data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)),(tmp17 * tmp17) + (tmp18 * tmp18),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp20 = data->localData[0]->realVars[117] /* pwFault.p.ii variable */;
      }
      tmp22 = tmp20;
    }
    tmp24 = tmp22;
  }
  res[7] = tmp24;

  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */, 14, Less);
  tmp34 = (modelica_boolean)tmp25;
  if(tmp34)
  {
    tmp35 = data->localData[0]->realVars[118] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, 15, Less);
    tmp32 = (modelica_boolean)(tmp26 && data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */);
    if(tmp32)
    {
      tmp33 = data->localData[0]->realVars[157] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, 15, Less);
      tmp30 = (modelica_boolean)tmp27;
      if(tmp30)
      {
        tmp28 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp29 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp31 = data->localData[0]->realVars[118] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[290] /* pwFault.R PARAM */) * (data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[291] /* pwFault.X PARAM */) * (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */),(tmp28 * tmp28) + (tmp29 * tmp29),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp31 = data->localData[0]->realVars[118] /* pwFault.p.ir variable */;
      }
      tmp33 = tmp31;
    }
    tmp35 = tmp33;
  }
  res[8] = tmp35;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, 13, Less);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[154] /* pwLine3.ir.re variable */:data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))))));

  res[10] = (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[64] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[63] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[59] /* constantLoad.Q variable */;

  res[11] = (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[63] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[64] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[58] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, 1, Less);
  res[12] = ((tmp38 && tmp39)?data->localData[0]->realVars[123] /* pwLine.ir.im variable */:data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, 1, Less);
  res[13] = ((tmp40 && tmp41)?data->localData[0]->realVars[124] /* pwLine.ir.re variable */:data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, 1, Less);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[126] /* pwLine.is.re variable */:data->localData[0]->realVars[128] /* pwLine.vs.re variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, 1, Less);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[125] /* pwLine.is.im variable */:data->localData[0]->realVars[127] /* pwLine.vs.im variable */ - data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, 3, Less);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[135] /* pwLine1.is.im variable */:data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, 13, Less);
  res[17] = ((tmp48 && tmp49)?data->localData[0]->realVars[156] /* pwLine3.is.re variable */:data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, 13, Less);
  res[18] = ((tmp50 && tmp51)?data->localData[0]->realVars[155] /* pwLine3.is.im variable */:data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, 13, Less);
  res[19] = ((tmp52 && tmp53)?data->localData[0]->realVars[153] /* pwLine3.ir.im variable */:data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, 11, Less);
  res[20] = ((tmp54 && tmp55)?data->localData[0]->realVars[165] /* pwLine4.is.im variable */:data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[165] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[166] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, 11, Less);
  res[21] = ((tmp56 && tmp57)?data->localData[0]->realVars[166] /* pwLine4.is.re variable */:data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[166] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[165] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, 11, Less);
  res[22] = ((tmp58 && tmp59)?data->localData[0]->realVars[164] /* pwLine4.ir.re variable */:data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, 11, Less);
  res[23] = ((tmp60 && tmp61)?data->localData[0]->realVars[163] /* pwLine4.ir.im variable */:data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */)))));

  res[24] = (data->localData[0]->realVars[28] /* $cse1 variable */) * (data->localData[0]->realVars[99] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[29] /* $cse2 variable */)) * (data->localData[0]->realVars[98] /* gENCLS.vd variable */) - data->localData[0]->realVars[147] /* pwLine2.vr.im variable */;

  res[25] = (data->localData[0]->realVars[29] /* $cse2 variable */) * (data->localData[0]->realVars[99] /* gENCLS.vq variable */) + (data->localData[0]->realVars[28] /* $cse1 variable */) * (data->localData[0]->realVars[98] /* gENCLS.vd variable */) - data->localData[0]->realVars[148] /* pwLine2.vr.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS500(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+26] = {0,3,3,4,4,4,4,4,3,3,4,4,4,6,6,7,7,4,4,8,11,11,8,4,6,4,6};
  const int rowIndex[136] = {8,20,21,8,9,19,0,16,17,18,0,12,13,16,12,13,17,18,10,11,12,13,0,10,11,16,7,20,21,7,9,19,0,12,13,16,3,4,22,23,3,4,22,23,3,4,22,23,24,25,3,4,22,23,24,25,2,3,4,20,22,23,24,1,3,4,21,22,23,25,12,13,14,15,12,13,14,15,7,8,9,18,19,20,21,23,0,5,10,11,12,13,15,16,17,18,19,0,6,9,10,11,12,13,14,16,17,18,7,8,9,17,19,20,21,22,1,2,5,6,1,2,4,5,6,16,1,2,5,6,0,1,2,3,5,6};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(136*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 136;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(26*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 136*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[21] = 1;
  inSysData->sparsePattern->colorCols[25] = 1;
  inSysData->sparsePattern->colorCols[20] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[23] = 4;
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[17] = 5;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[16] = 6;
  inSysData->sparsePattern->colorCols[9] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[4] = 8;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[24] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[2] = 10;
  inSysData->sparsePattern->colorCols[5] = 10;
  inSysData->sparsePattern->colorCols[8] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[22] = 10;
}
void initializeStaticDataNLS500(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[156].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[156].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[156].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[155].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[155].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[155].attribute /* pwLine3.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[165].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[165].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[165].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine2.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine2.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine2.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine2.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[164].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[164].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[164].attribute /* pwLine4.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine2.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im */.max;
  /* static nls data for pwLine2.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS500(sysData);
}

void getIterationVarsNLS500(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[166] /* pwLine4.is.re variable */;
  array[1] = data->localData[0]->realVars[154] /* pwLine3.ir.re variable */;
  array[2] = data->localData[0]->realVars[156] /* pwLine3.is.re variable */;
  array[3] = data->localData[0]->realVars[124] /* pwLine.ir.re variable */;
  array[4] = data->localData[0]->realVars[155] /* pwLine3.is.im variable */;
  array[5] = data->localData[0]->realVars[63] /* constantLoad.p.ii variable */;
  array[6] = data->localData[0]->realVars[64] /* constantLoad.p.ir variable */;
  array[7] = data->localData[0]->realVars[165] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[153] /* pwLine3.ir.im variable */;
  array[9] = data->localData[0]->realVars[135] /* pwLine1.is.im variable */;
  array[10] = data->localData[0]->realVars[145] /* pwLine2.ir.im variable */;
  array[11] = data->localData[0]->realVars[164] /* pwLine4.ir.re variable */;
  array[12] = data->localData[0]->realVars[95] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[94] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[147] /* pwLine2.vr.im variable */;
  array[15] = data->localData[0]->realVars[148] /* pwLine2.vr.re variable */;
  array[16] = data->localData[0]->realVars[113] /* gENROE.id variable */;
  array[17] = data->localData[0]->realVars[114] /* gENROE.iq variable */;
  array[18] = data->localData[0]->realVars[157] /* pwLine3.vr.im variable */;
  array[19] = data->localData[0]->realVars[139] /* pwLine1.vs.im variable */;
  array[20] = data->localData[0]->realVars[140] /* pwLine1.vs.re variable */;
  array[21] = data->localData[0]->realVars[158] /* pwLine3.vr.re variable */;
  array[22] = data->localData[0]->realVars[134] /* pwLine1.ir.re variable */;
  array[23] = data->localData[0]->realVars[137] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[133] /* pwLine1.ir.im variable */;
  array[25] = data->localData[0]->realVars[138] /* pwLine1.vr.re variable */;
}


/* inner equations */

/*
equation index: 250
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[140] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[139] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[65] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[65] /* constantLoad.v variable */,data->simulationInfo->realParameter[38] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[62] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[57] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[58] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[65] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[65] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
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
  tmp0 = Less(data->localData[0]->realVars[65] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[61] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[59] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[58] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[126] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[113] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[125] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[107] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[106] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[115] /* gENROE.ud variable */ = (-data->localData[0]->realVars[107] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[128] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[115] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[116] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[127] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[116] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[115] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[103] /* gENROE.PSId variable */ = data->localData[0]->realVars[116] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[105] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[103] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[105] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[106] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[104] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[11] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[216] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[114] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[104] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[241] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[242] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[106] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[258] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[251] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[110] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[216] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSAC1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[10] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[215] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[113] /* gENROE.id variable */) * (data->simulationInfo->realParameter[251] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[104] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[241] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[242] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[105] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */,data->simulationInfo->realParameter[215] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[96] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[97] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[99] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[98] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
pwLine2.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[145] /* pwLine2.ir.im variable */ = (-data->localData[0]->realVars[163] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[96] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
pwLine2.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[146] /* pwLine2.ir.re variable */ = (-data->localData[0]->realVars[164] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[97] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
pwLine3.is.re = (-pwLine.ir.re) - constantLoad.p.ir - pwLine1.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[156] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[124] /* pwLine.ir.re variable */) - data->localData[0]->realVars[64] /* constantLoad.p.ir variable */ - data->localData[0]->realVars[136] /* pwLine1.is.re variable */;
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - constantLoad.p.ii - pwLine1.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->localData[0]->realVars[155] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[123] /* pwLine.ir.im variable */) - data->localData[0]->realVars[63] /* constantLoad.p.ii variable */ - data->localData[0]->realVars[135] /* pwLine1.is.im variable */;
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[118] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[154] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[166] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 275
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->localData[0]->realVars[117] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[153] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[165] /* pwLine4.is.im variable */;
  TRACE_POP
}

void residualFunc306(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,306};
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
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
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
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_boolean tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
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
  /* iteration variables */
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[165] /* pwLine4.is.im variable */ = xloc[1];
  data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[166] /* pwLine4.is.re variable */ = xloc[3];
  data->localData[0]->realVars[123] /* pwLine.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[135] /* pwLine1.is.im variable */ = xloc[5];
  data->localData[0]->realVars[63] /* constantLoad.p.ii variable */ = xloc[6];
  data->localData[0]->realVars[124] /* pwLine.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[64] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[136] /* pwLine1.is.re variable */ = xloc[9];
  data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[95] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[94] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[116] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[106] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[114] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[113] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ = xloc[21];
  data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ = xloc[24];
  data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ = xloc[25];
  data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ = xloc[26];
  data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ = xloc[28];
  data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_250(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_251(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_252(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_253(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_254(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_255(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_256(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_257(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_258(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_259(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_260(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_261(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_262(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_263(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_264(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_265(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_266(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_267(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_268(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_269(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_270(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_271(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_272(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_273(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_274(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_275(data, threadData);
  /* body */
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */);
  res[0] = ((tmp0 && tmp1)?(-data->localData[0]->realVars[134] /* pwLine1.ir.re variable */):data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[134] /* pwLine1.ir.re variable */) - ((data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[133] /* pwLine1.ir.im variable */))));

  res[1] = (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[64] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[63] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[59] /* constantLoad.Q variable */;

  res[2] = (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[63] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[64] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[58] /* constantLoad.P variable */;

  tmp2 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */);
  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */);
  res[3] = ((tmp2 && tmp3)?data->localData[0]->realVars[136] /* pwLine1.is.re variable */:data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))))));

  tmp4 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */);
  tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */);
  res[4] = ((tmp4 && tmp5)?data->localData[0]->realVars[135] /* pwLine1.is.im variable */:data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */)))));

  tmp6 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */);
  tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */);
  res[5] = ((tmp6 && tmp7)?data->localData[0]->realVars[134] /* pwLine1.ir.re variable */:data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))))));

  tmp8 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */);
  tmp9 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */);
  res[6] = ((tmp8 && tmp9)?data->localData[0]->realVars[133] /* pwLine1.ir.im variable */:data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */)))));

  tmp10 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */);
  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */);
  res[7] = ((tmp10 && tmp11)?(-data->localData[0]->realVars[133] /* pwLine1.ir.im variable */):data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[133] /* pwLine1.ir.im variable */) + (data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[134] /* pwLine1.ir.re variable */)));

  tmp12 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */);
  tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */);
  res[8] = ((tmp12 && tmp13)?data->localData[0]->realVars[146] /* pwLine2.ir.re variable */:data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))))));

  tmp14 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */);
  tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */);
  res[9] = ((tmp14 && tmp15)?data->localData[0]->realVars[145] /* pwLine2.ir.im variable */:data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)))));

  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */);
  tmp25 = (modelica_boolean)tmp16;
  if(tmp25)
  {
    tmp26 = data->localData[0]->realVars[118] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */);
    tmp23 = (modelica_boolean)(tmp17 && data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */);
    if(tmp23)
    {
      tmp24 = data->localData[0]->realVars[157] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */);
      tmp21 = (modelica_boolean)tmp18;
      if(tmp21)
      {
        tmp19 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp20 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp22 = data->localData[0]->realVars[118] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[290] /* pwFault.R PARAM */) * (data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[291] /* pwFault.X PARAM */) * (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */),(tmp19 * tmp19) + (tmp20 * tmp20),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp22 = data->localData[0]->realVars[118] /* pwFault.p.ir variable */;
      }
      tmp24 = tmp22;
    }
    tmp26 = tmp24;
  }
  res[10] = tmp26;

  tmp27 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */);
  tmp28 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp27 && tmp28)?data->localData[0]->realVars[166] /* pwLine4.is.re variable */:data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[166] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[165] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))))));

  tmp29 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */);
  tmp30 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */);
  res[12] = ((tmp29 && tmp30)?data->localData[0]->realVars[165] /* pwLine4.is.im variable */:data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[165] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[166] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */)))));

  res[13] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[98] /* gENCLS.vd variable */) - data->localData[0]->realVars[147] /* pwLine2.vr.im variable */;

  res[14] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[98] /* gENCLS.vd variable */) - data->localData[0]->realVars[148] /* pwLine2.vr.re variable */;

  tmp31 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */);
  tmp32 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp31 && tmp32)?data->localData[0]->realVars[164] /* pwLine4.ir.re variable */:data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))))));

  tmp33 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */);
  tmp34 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */);
  res[16] = ((tmp33 && tmp34)?data->localData[0]->realVars[163] /* pwLine4.ir.im variable */:data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */)))));

  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */);
  tmp44 = (modelica_boolean)tmp35;
  if(tmp44)
  {
    tmp45 = data->localData[0]->realVars[117] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp36 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */);
    tmp42 = (modelica_boolean)(tmp36 && data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */);
    if(tmp42)
    {
      tmp43 = data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */);
      tmp40 = (modelica_boolean)tmp37;
      if(tmp40)
      {
        tmp38 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp39 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp41 = data->localData[0]->realVars[117] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[290] /* pwFault.R PARAM */) * (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[291] /* pwFault.X PARAM */) * (data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)),(tmp38 * tmp38) + (tmp39 * tmp39),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp41 = data->localData[0]->realVars[117] /* pwFault.p.ii variable */;
      }
      tmp43 = tmp41;
    }
    tmp45 = tmp43;
  }
  res[17] = tmp45;

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[154] /* pwLine3.ir.re variable */:data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[153] /* pwLine3.ir.im variable */:data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */)))));

  res[20] = (data->localData[0]->realVars[10] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[221] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[219] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[105] /* gENROE.PSIppd variable */;

  res[21] = data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[24] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[245] /* gENROE.Tppd0 PARAM */));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[126] /* pwLine.is.re variable */:data->localData[0]->realVars[128] /* pwLine.vs.re variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[125] /* pwLine.is.im variable */:data->localData[0]->realVars[127] /* pwLine.vs.im variable */ - data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */)))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */);
  res[24] = ((tmp54 && tmp55)?data->localData[0]->realVars[156] /* pwLine3.is.re variable */:data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */);
  res[25] = ((tmp56 && tmp57)?data->localData[0]->realVars[155] /* pwLine3.is.im variable */:data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */)))));

  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */);
  res[26] = ((tmp58 && tmp59)?data->localData[0]->realVars[123] /* pwLine.ir.im variable */:data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */)))));

  tmp60 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */);
  tmp61 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */);
  res[27] = ((tmp60 && tmp61)?data->localData[0]->realVars[124] /* pwLine.ir.re variable */:data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))))));

  res[28] = data->localData[0]->realVars[106] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[220] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[11] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[222] /* gENROE.K4q PARAM */));

  res[29] = data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */) + (-data->localData[0]->realVars[11] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[25] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[246] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS306(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,2,2,8,8,8,8,7,7,11,8,8,6,4,6,11,4};
  const int rowIndex[160] = {17,18,19,11,12,17,10,18,19,10,11,12,24,25,26,27,3,4,24,25,1,2,24,25,24,25,26,27,1,2,24,25,3,4,24,25,8,9,15,16,8,9,15,16,8,9,13,14,8,9,13,14,20,21,28,29,20,21,22,23,26,27,28,29,20,21,22,23,26,27,28,29,20,21,22,23,26,27,28,29,20,21,22,23,26,27,28,29,0,8,9,11,14,15,16,7,8,9,12,13,15,16,1,2,3,4,6,19,23,24,25,26,27,10,11,12,16,17,18,19,25,10,11,12,15,17,18,19,24,0,3,5,6,7,8,0,5,6,7,0,4,5,6,7,9,1,2,3,4,5,18,22,24,25,26,27,0,5,6,7};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(160*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 160;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 160*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[28] = 1;
  inSysData->sparsePattern->colorCols[24] = 2;
  inSysData->sparsePattern->colorCols[27] = 2;
  inSysData->sparsePattern->colorCols[23] = 3;
  inSysData->sparsePattern->colorCols[25] = 3;
  inSysData->sparsePattern->colorCols[22] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[19] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[2] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[29] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[3] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[26] = 10;
}
void initializeStaticDataNLS306(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[165].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[165].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[165].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[164].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[164].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[164].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[163].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[163].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[163].attribute /* pwLine4.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* gENROE.id */.max;
  /* static nls data for pwLine2.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re */.max;
  /* static nls data for pwLine2.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.ir.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS306(sysData);
}

void getIterationVarsNLS306(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[153] /* pwLine3.ir.im variable */;
  array[1] = data->localData[0]->realVars[165] /* pwLine4.is.im variable */;
  array[2] = data->localData[0]->realVars[154] /* pwLine3.ir.re variable */;
  array[3] = data->localData[0]->realVars[166] /* pwLine4.is.re variable */;
  array[4] = data->localData[0]->realVars[123] /* pwLine.ir.im variable */;
  array[5] = data->localData[0]->realVars[135] /* pwLine1.is.im variable */;
  array[6] = data->localData[0]->realVars[63] /* constantLoad.p.ii variable */;
  array[7] = data->localData[0]->realVars[124] /* pwLine.ir.re variable */;
  array[8] = data->localData[0]->realVars[64] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[136] /* pwLine1.is.re variable */;
  array[10] = data->localData[0]->realVars[164] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[163] /* pwLine4.ir.im variable */;
  array[12] = data->localData[0]->realVars[95] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[94] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[116] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[106] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[114] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[113] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[148] /* pwLine2.vr.re variable */;
  array[21] = data->localData[0]->realVars[147] /* pwLine2.vr.im variable */;
  array[22] = data->localData[0]->realVars[139] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[157] /* pwLine3.vr.im variable */;
  array[24] = data->localData[0]->realVars[158] /* pwLine3.vr.re variable */;
  array[25] = data->localData[0]->realVars[138] /* pwLine1.vr.re variable */;
  array[26] = data->localData[0]->realVars[134] /* pwLine1.ir.re variable */;
  array[27] = data->localData[0]->realVars[137] /* pwLine1.vr.im variable */;
  array[28] = data->localData[0]->realVars[140] /* pwLine1.vs.re variable */;
  array[29] = data->localData[0]->realVars[133] /* pwLine1.ir.im variable */;
}


/* inner equations */

/*
equation index: 217
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.u1 = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->localData[0]->realVars[82] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[148] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 218
type: SIMPLE_ASSIGN
eSAC1A.EFD = eSAC1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[69] /* eSAC1A.EFD variable */ = data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */ + (data->localData[0]->realVars[23] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[244] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
eSAC1A.Ifd0 = eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->realParameter[85] /* eSAC1A.Ifd0 PARAM */ = data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 220
type: SIMPLE_ASSIGN
eSAC1A.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC1A.K_C, eSAC1A.Efd0, eSAC1A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->realParameter[99] /* eSAC1A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[87] /* eSAC1A.K_C PARAM */, data->simulationInfo->realParameter[84] /* eSAC1A.Efd0 PARAM */, data->simulationInfo->realParameter[85] /* eSAC1A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 221
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Efd0 = eSAC1A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->realParameter[151] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[99] /* eSAC1A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 222
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start = eSAC1A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[151] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 223
type: SIMPLE_ASSIGN
$START.eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
    data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 224
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 225
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.y = eSAC1A.rectifierCommutationVoltageDrop.division.u1 / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[82] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 226
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.fEX.y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
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
  tmp0 = LessEq(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */;
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
        tmp7 = GreaterEq(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[84] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc228(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,228};
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
  data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_217(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_218(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_219(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_220(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_221(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_222(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_223(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_224(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_225(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_226(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[84] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[69] /* eSAC1A.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS228(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS228(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* eSAC1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* eSAC1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* eSAC1A.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS228(sysData);
}

void getIterationVarsNLS228(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */;
}


/* inner equations */

/*
equation index: 57
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[140] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[139] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[65] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[65] /* constantLoad.v variable */,data->simulationInfo->realParameter[38] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[62] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[57] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[58] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[65] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[65] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_59(DATA *data, threadData_t *threadData)
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
  tmp0 = Less(data->localData[0]->realVars[65] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    }tmp8 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp16 = (data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[61] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[41] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[59] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[61] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[42] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[62] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[58] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[126] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[113] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[125] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[114] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[107] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[106] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[115] /* gENROE.ud variable */ = (-data->localData[0]->realVars[107] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
pwLine.vs.re = sin(gENROE.delta) * gENROE.ud + cos(gENROE.delta) * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[128] /* pwLine.vs.re variable */ = (sin(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[115] /* gENROE.ud variable */) + (cos(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[116] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
pwLine.vs.im = sin(gENROE.delta) * gENROE.uq - cos(gENROE.delta) * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[127] /* pwLine.vs.im variable */ = (sin(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[116] /* gENROE.uq variable */) - ((cos(data->localData[0]->realVars[12] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[115] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.uq + gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[103] /* gENROE.PSId variable */ = data->localData[0]->realVars[116] /* gENROE.uq variable */ + (data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
gENROE.PSIppd = gENROE.PSId + gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[105] /* gENROE.PSIppd variable */ = data->localData[0]->realVars[103] /* gENROE.PSId variable */ + (data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[105] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[106] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[104] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[11] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[216] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[114] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[258] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[104] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[241] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[242] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[106] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[258] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[251] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[110] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[216] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSAC1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[10] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[215] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[113] /* gENROE.id variable */) * (data->simulationInfo->realParameter[251] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[104] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[241] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[242] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[105] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */,data->simulationInfo->realParameter[215] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[96] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[97] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[94] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[176] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[99] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[98] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[95] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[94] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
pwLine2.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[145] /* pwLine2.ir.im variable */ = (-data->localData[0]->realVars[163] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[96] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
pwLine2.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[146] /* pwLine2.ir.re variable */ = (-data->localData[0]->realVars[164] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[97] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
pwLine3.is.re = (-pwLine.ir.re) - constantLoad.p.ir - pwLine1.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[156] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[124] /* pwLine.ir.re variable */) - data->localData[0]->realVars[64] /* constantLoad.p.ir variable */ - data->localData[0]->realVars[136] /* pwLine1.is.re variable */;
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - constantLoad.p.ii - pwLine1.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[155] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[123] /* pwLine.ir.im variable */) - data->localData[0]->realVars[63] /* constantLoad.p.ii variable */ - data->localData[0]->realVars[135] /* pwLine1.is.im variable */;
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[118] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[154] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[166] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 82
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->realVars[117] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[153] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[165] /* pwLine4.is.im variable */;
  TRACE_POP
}

void residualFunc113(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,113};
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
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
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
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_boolean tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
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
  /* iteration variables */
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[165] /* pwLine4.is.im variable */ = xloc[1];
  data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[166] /* pwLine4.is.re variable */ = xloc[3];
  data->localData[0]->realVars[123] /* pwLine.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[135] /* pwLine1.is.im variable */ = xloc[5];
  data->localData[0]->realVars[63] /* constantLoad.p.ii variable */ = xloc[6];
  data->localData[0]->realVars[124] /* pwLine.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[64] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[136] /* pwLine1.is.re variable */ = xloc[9];
  data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[95] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[94] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[116] /* gENROE.uq variable */ = xloc[16];
  data->localData[0]->realVars[106] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[114] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[113] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ = xloc[21];
  data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ = xloc[22];
  data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ = xloc[24];
  data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ = xloc[25];
  data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ = xloc[26];
  data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ = xloc[28];
  data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
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

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_80(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_81(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_82(data, threadData);
  /* body */
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */);
  tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */);
  res[0] = ((tmp0 && tmp1)?(-data->localData[0]->realVars[134] /* pwLine1.ir.re variable */):data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[134] /* pwLine1.ir.re variable */) - ((data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[133] /* pwLine1.ir.im variable */))));

  res[1] = (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[64] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[63] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[59] /* constantLoad.Q variable */;

  res[2] = (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[63] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[64] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[58] /* constantLoad.P variable */;

  tmp2 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */);
  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */);
  res[3] = ((tmp2 && tmp3)?data->localData[0]->realVars[136] /* pwLine1.is.re variable */:data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))))));

  tmp4 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */);
  tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */);
  res[4] = ((tmp4 && tmp5)?data->localData[0]->realVars[135] /* pwLine1.is.im variable */:data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[135] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[136] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */)))));

  tmp6 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */);
  tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */);
  res[5] = ((tmp6 && tmp7)?data->localData[0]->realVars[134] /* pwLine1.ir.re variable */:data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))))));

  tmp8 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */);
  tmp9 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */);
  res[6] = ((tmp8 && tmp9)?data->localData[0]->realVars[133] /* pwLine1.ir.im variable */:data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[133] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[134] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */)))));

  tmp10 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */);
  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */);
  res[7] = ((tmp10 && tmp11)?(-data->localData[0]->realVars[133] /* pwLine1.ir.im variable */):data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (((-data->localData[0]->realVars[138] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[133] /* pwLine1.ir.im variable */) + (data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * ((data->localData[0]->realVars[137] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[138] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - data->localData[0]->realVars[134] /* pwLine1.ir.re variable */)));

  tmp12 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */);
  tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */);
  res[8] = ((tmp12 && tmp13)?data->localData[0]->realVars[146] /* pwLine2.ir.re variable */:data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[138] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[146] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[145] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))))));

  tmp14 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */);
  tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */);
  res[9] = ((tmp14 && tmp15)?data->localData[0]->realVars[145] /* pwLine2.ir.im variable */:data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[137] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (data->localData[0]->realVars[145] /* pwLine2.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (data->localData[0]->realVars[146] /* pwLine2.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)))));

  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */);
  tmp25 = (modelica_boolean)tmp16;
  if(tmp25)
  {
    tmp26 = data->localData[0]->realVars[118] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */);
    tmp23 = (modelica_boolean)(tmp17 && data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */);
    if(tmp23)
    {
      tmp24 = data->localData[0]->realVars[157] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */);
      tmp21 = (modelica_boolean)tmp18;
      if(tmp21)
      {
        tmp19 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp20 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp22 = data->localData[0]->realVars[118] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[290] /* pwFault.R PARAM */) * (data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[291] /* pwFault.X PARAM */) * (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */),(tmp19 * tmp19) + (tmp20 * tmp20),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp22 = data->localData[0]->realVars[118] /* pwFault.p.ir variable */;
      }
      tmp24 = tmp22;
    }
    tmp26 = tmp24;
  }
  res[10] = tmp26;

  tmp27 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */);
  tmp28 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp27 && tmp28)?data->localData[0]->realVars[166] /* pwLine4.is.re variable */:data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[166] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[165] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))))));

  tmp29 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */);
  tmp30 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */);
  res[12] = ((tmp29 && tmp30)?data->localData[0]->realVars[165] /* pwLine4.is.im variable */:data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[165] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[166] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */)))));

  res[13] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[98] /* gENCLS.vd variable */) - data->localData[0]->realVars[147] /* pwLine2.vr.im variable */;

  res[14] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[99] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[98] /* gENCLS.vd variable */) - data->localData[0]->realVars[148] /* pwLine2.vr.re variable */;

  tmp31 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */);
  tmp32 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp31 && tmp32)?data->localData[0]->realVars[164] /* pwLine4.ir.re variable */:data->localData[0]->realVars[148] /* pwLine2.vr.re variable */ - data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))))));

  tmp33 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */);
  tmp34 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */);
  res[16] = ((tmp33 && tmp34)?data->localData[0]->realVars[163] /* pwLine4.ir.im variable */:data->localData[0]->realVars[147] /* pwLine2.vr.im variable */ - data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[163] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[148] /* pwLine2.vr.re variable */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[164] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[147] /* pwLine2.vr.im variable */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[148] /* pwLine2.vr.re variable */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */)))));

  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */);
  tmp44 = (modelica_boolean)tmp35;
  if(tmp44)
  {
    tmp45 = data->localData[0]->realVars[117] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp36 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */);
    tmp42 = (modelica_boolean)(tmp36 && data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */);
    if(tmp42)
    {
      tmp43 = data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */);
      tmp40 = (modelica_boolean)tmp37;
      if(tmp40)
      {
        tmp38 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp39 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp41 = data->localData[0]->realVars[117] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[290] /* pwFault.R PARAM */) * (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[291] /* pwFault.X PARAM */) * (data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)),(tmp38 * tmp38) + (tmp39 * tmp39),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp41 = data->localData[0]->realVars[117] /* pwFault.p.ii variable */;
      }
      tmp43 = tmp41;
    }
    tmp45 = tmp43;
  }
  res[17] = tmp45;

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[154] /* pwLine3.ir.re variable */:data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[153] /* pwLine3.ir.im variable */:data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[158] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[154] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[157] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[158] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */)))));

  res[20] = (data->localData[0]->realVars[10] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[221] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[219] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[105] /* gENROE.PSIppd variable */;

  res[21] = data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[253] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[113] /* gENROE.id variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[24] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[245] /* gENROE.Tppd0 PARAM */));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[126] /* pwLine.is.re variable */:data->localData[0]->realVars[128] /* pwLine.vs.re variable */ - data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[125] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[125] /* pwLine.is.im variable */:data->localData[0]->realVars[127] /* pwLine.vs.im variable */ - data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[125] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[128] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[126] /* pwLine.is.re variable */ + (data->localData[0]->realVars[127] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[128] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */)))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */);
  res[24] = ((tmp54 && tmp55)?data->localData[0]->realVars[156] /* pwLine3.is.re variable */:data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[158] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[156] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[155] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */);
  res[25] = ((tmp56 && tmp57)?data->localData[0]->realVars[155] /* pwLine3.is.im variable */:data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[157] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[155] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[156] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */)))));

  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */);
  res[26] = ((tmp58 && tmp59)?data->localData[0]->realVars[123] /* pwLine.ir.im variable */:data->localData[0]->realVars[139] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[127] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[123] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */)))));

  tmp60 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */);
  tmp61 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */);
  res[27] = ((tmp60 && tmp61)?data->localData[0]->realVars[124] /* pwLine.ir.re variable */:data->localData[0]->realVars[140] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[128] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[124] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[123] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[140] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))))));

  res[28] = data->localData[0]->realVars[106] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[220] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[11] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[222] /* gENROE.K4q PARAM */));

  res[29] = data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[257] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[252] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[114] /* gENROE.iq variable */) + (-data->localData[0]->realVars[11] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[25] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[246] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS113(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,2,2,8,8,8,8,7,7,11,8,8,6,4,6,11,4};
  const int rowIndex[160] = {17,18,19,11,12,17,10,18,19,10,11,12,24,25,26,27,3,4,24,25,1,2,24,25,24,25,26,27,1,2,24,25,3,4,24,25,8,9,15,16,8,9,15,16,8,9,13,14,8,9,13,14,20,21,28,29,20,21,22,23,26,27,28,29,20,21,22,23,26,27,28,29,20,21,22,23,26,27,28,29,20,21,22,23,26,27,28,29,0,8,9,11,14,15,16,7,8,9,12,13,15,16,1,2,3,4,6,19,23,24,25,26,27,10,11,12,16,17,18,19,25,10,11,12,15,17,18,19,24,0,3,5,6,7,8,0,5,6,7,0,4,5,6,7,9,1,2,3,4,5,18,22,24,25,26,27,0,5,6,7};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(160*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 160;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 160*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[28] = 1;
  inSysData->sparsePattern->colorCols[24] = 2;
  inSysData->sparsePattern->colorCols[27] = 2;
  inSysData->sparsePattern->colorCols[23] = 3;
  inSysData->sparsePattern->colorCols[25] = 3;
  inSysData->sparsePattern->colorCols[22] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[19] = 5;
  inSysData->sparsePattern->colorCols[21] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[20] = 6;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[6] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[2] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[29] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[3] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[26] = 10;
}
void initializeStaticDataNLS113(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[165].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[165].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[165].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[154].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[154].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[154].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[63].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[124].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[124].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[124].attribute /* pwLine.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[64].attribute /* constantLoad.p.ir */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[136].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[136].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[136].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[164].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[164].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[164].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[163].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[163].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[163].attribute /* pwLine4.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.uq */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* gENROE.uq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* gENROE.uq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* gENROE.uq */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[114].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[114].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[114].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[113].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[113].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[113].attribute /* gENROE.id */.max;
  /* static nls data for pwLine2.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* pwLine2.vr.re */.max;
  /* static nls data for pwLine2.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pwLine2.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[157].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[158].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.ir.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.ir.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS113(sysData);
}

void getIterationVarsNLS113(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[153] /* pwLine3.ir.im variable */;
  array[1] = data->localData[0]->realVars[165] /* pwLine4.is.im variable */;
  array[2] = data->localData[0]->realVars[154] /* pwLine3.ir.re variable */;
  array[3] = data->localData[0]->realVars[166] /* pwLine4.is.re variable */;
  array[4] = data->localData[0]->realVars[123] /* pwLine.ir.im variable */;
  array[5] = data->localData[0]->realVars[135] /* pwLine1.is.im variable */;
  array[6] = data->localData[0]->realVars[63] /* constantLoad.p.ii variable */;
  array[7] = data->localData[0]->realVars[124] /* pwLine.ir.re variable */;
  array[8] = data->localData[0]->realVars[64] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[136] /* pwLine1.is.re variable */;
  array[10] = data->localData[0]->realVars[164] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[163] /* pwLine4.ir.im variable */;
  array[12] = data->localData[0]->realVars[95] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[94] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[9] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* gENROE.Epd STATE(1) */;
  array[16] = data->localData[0]->realVars[116] /* gENROE.uq variable */;
  array[17] = data->localData[0]->realVars[106] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[114] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[113] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[148] /* pwLine2.vr.re variable */;
  array[21] = data->localData[0]->realVars[147] /* pwLine2.vr.im variable */;
  array[22] = data->localData[0]->realVars[139] /* pwLine1.vs.im variable */;
  array[23] = data->localData[0]->realVars[157] /* pwLine3.vr.im variable */;
  array[24] = data->localData[0]->realVars[158] /* pwLine3.vr.re variable */;
  array[25] = data->localData[0]->realVars[138] /* pwLine1.vr.re variable */;
  array[26] = data->localData[0]->realVars[134] /* pwLine1.ir.re variable */;
  array[27] = data->localData[0]->realVars[137] /* pwLine1.vr.im variable */;
  array[28] = data->localData[0]->realVars[140] /* pwLine1.vs.re variable */;
  array[29] = data->localData[0]->realVars[133] /* pwLine1.ir.im variable */;
}


/* inner equations */

/*
equation index: 24
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.u1 = eSAC1A.rectifierCommutationVoltageDrop.gain2.k * eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[82] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */ = (data->simulationInfo->realParameter[148] /* eSAC1A.rectifierCommutationVoltageDrop.gain2.k PARAM */) * (data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
eSAC1A.EFD = eSAC1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[69] /* eSAC1A.EFD variable */ = data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */ + (data->localData[0]->realVars[23] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[244] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
eSAC1A.Ifd0 = eSAC1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->simulationInfo->realParameter[85] /* eSAC1A.Ifd0 PARAM */ = data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
eSAC1A.VE0 = OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.invFEX(eSAC1A.K_C, eSAC1A.Efd0, eSAC1A.Ifd0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->simulationInfo->realParameter[99] /* eSAC1A.VE0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_invFEX(threadData, data->simulationInfo->realParameter[87] /* eSAC1A.K_C PARAM */, data->simulationInfo->realParameter[84] /* eSAC1A.Efd0 PARAM */, data->simulationInfo->realParameter[85] /* eSAC1A.Ifd0 PARAM */);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.Efd0 = eSAC1A.VE0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->simulationInfo->realParameter[151] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */ = data->simulationInfo->realParameter[99] /* eSAC1A.VE0 PARAM */;
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start = eSAC1A.rotatingExciterWithDemagnetization.Efd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */ = data->simulationInfo->realParameter[151] /* eSAC1A.rotatingExciterWithDemagnetization.Efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
$START.eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
    data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
eSAC1A.rotatingExciterWithDemagnetization.sISO.y = eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */ = data->simulationInfo->realParameter[164] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.division.y = eSAC1A.rectifierCommutationVoltageDrop.division.u1 / eSAC1A.rotatingExciterWithDemagnetization.sISO.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */ = DIVISION_SIM(data->localData[0]->realVars[82] /* eSAC1A.rectifierCommutationVoltageDrop.division.u1 variable */,data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */,"eSAC1A.rotatingExciterWithDemagnetization.sISO.y",equationIndexes);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
eSAC1A.rectifierCommutationVoltageDrop.fEX.y = if eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.0 then 1.0 else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.0 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 0.433 then 1.0 + (-0.577) * eSAC1A.rectifierCommutationVoltageDrop.division.y else if eSAC1A.rectifierCommutationVoltageDrop.division.y > 0.433 and eSAC1A.rectifierCommutationVoltageDrop.division.y < 0.75 then sqrt(0.75 - eSAC1A.rectifierCommutationVoltageDrop.division.y ^ 2.0) else if eSAC1A.rectifierCommutationVoltageDrop.division.y >= 0.75 and eSAC1A.rectifierCommutationVoltageDrop.division.y <= 1.0 then 1.732 * (1.0 - eSAC1A.rectifierCommutationVoltageDrop.division.y) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
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
  tmp0 = LessEq(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
  tmp13 = (modelica_boolean)tmp0;
  if(tmp13)
  {
    tmp14 = 1.0;
  }
  else
  {
    tmp1 = Greater(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.0);
    tmp2 = LessEq(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
    tmp11 = (modelica_boolean)(tmp1 && tmp2);
    if(tmp11)
    {
      tmp12 = 1.0 + (-0.577) * (data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */);
    }
    else
    {
      tmp3 = Greater(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.433);
      tmp4 = Less(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
      tmp9 = (modelica_boolean)(tmp3 && tmp4);
      if(tmp9)
      {
        tmp5 = data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */;
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
        tmp7 = GreaterEq(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,0.75);
        tmp8 = LessEq(data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */,1.0);
        tmp10 = ((tmp7 && tmp8)?(1.732) * (1.0 - data->localData[0]->realVars[83] /* eSAC1A.rectifierCommutationVoltageDrop.division.y variable */):0.0);
      }
      tmp12 = tmp10;
    }
    tmp14 = tmp12;
  }
  data->localData[0]->realVars[84] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */ = tmp14;
  TRACE_POP
}

void residualFunc35(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,35};
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
  data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
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

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_32(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_33(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[3] /* eSAC1A.rotatingExciterWithDemagnetization.sISO.y STATE(1) */) * (data->localData[0]->realVars[84] /* eSAC1A.rectifierCommutationVoltageDrop.fEX.y variable */) - data->localData[0]->realVars[69] /* eSAC1A.EFD variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS35(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS35(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSAC1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* eSAC1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* eSAC1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* eSAC1A.XADIFD */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS35(sysData);
}

void getIterationVarsNLS35(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[71] /* eSAC1A.XADIFD variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[4].equationIndex = 500;
  nonLinearSystemData[4].size = 26;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc500;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS500;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS500;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 306;
  nonLinearSystemData[3].size = 30;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc306;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS306;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS306;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 228;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc228;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS228;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS228;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 113;
  nonLinearSystemData[1].size = 30;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc113;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS113;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS113;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 35;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc35;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS35;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS35;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

