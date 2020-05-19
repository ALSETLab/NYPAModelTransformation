/* Jacobians 6 */
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_model.h"
#include "OpenIPSL.Examples.Banks.PSSE.CSVGN1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 841
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac12 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac12) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,841};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_842(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,842};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[79] /* constantLoad.v variable */, data->simulationInfo->realParameter[138] /* constantLoad.PQBRAK PARAM */, 15, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[158] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[79] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[164] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[79] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[178] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_843(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,843};
  modelica_boolean tmp3;
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
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[79] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp45 = (modelica_boolean)tmp3;
  if(tmp45)
  {
    tmp4 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp5 = -1.0 + data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */;
    if(tmp4 < 0.0 && tmp5 != 0.0)
    {
      tmp7 = modf(tmp5, &tmp8);
      
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp8 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp8 -= 1.0;
      }
      
      if(fabs(tmp7) < 1e-10)
        tmp6 = pow(tmp4, tmp8);
      else
      {
        tmp10 = modf(1.0/tmp5, &tmp9);
        if(tmp10 > 0.5)
        {
          tmp10 -= 1.0;
          tmp9 += 1.0;
        }
        else if(tmp10 < -0.5)
        {
          tmp10 += 1.0;
          tmp9 -= 1.0;
        }
        if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
        {
          tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
        }
      }
    }
    else
    {
      tmp6 = pow(tmp4, tmp5);
    }
    if(isnan(tmp6) || isinf(tmp6))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
    }tmp11 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp12 = data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */;
    if(tmp11 < 0.0 && tmp12 != 0.0)
    {
      tmp14 = modf(tmp12, &tmp15);
      
      if(tmp14 > 0.5)
      {
        tmp14 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp14 < -0.5)
      {
        tmp14 += 1.0;
        tmp15 -= 1.0;
      }
      
      if(fabs(tmp14) < 1e-10)
        tmp13 = pow(tmp11, tmp15);
      else
      {
        tmp17 = modf(1.0/tmp12, &tmp16);
        if(tmp17 > 0.5)
        {
          tmp17 -= 1.0;
          tmp16 += 1.0;
        }
        else if(tmp17 < -0.5)
        {
          tmp17 += 1.0;
          tmp16 -= 1.0;
        }
        if(fabs(tmp17) < 1e-10 && ((unsigned long)tmp16 & 1))
        {
          tmp13 = -pow(-tmp11, tmp14)*pow(tmp11, tmp15);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
        }
      }
    }
    else
    {
      tmp13 = pow(tmp11, tmp12);
    }
    if(isnan(tmp13) || isinf(tmp13))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
    }tmp26 = (modelica_boolean)(data->localData[0]->realVars[79] /* constantLoad.v variable */ == 0.0);
    if(tmp26)
    {
      tmp27 = 0.0;
    }
    else
    {
      tmp19 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
      tmp20 = data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp19 < 0.0 && tmp20 != 0.0)
      {
        tmp22 = modf(tmp20, &tmp23);
        
        if(tmp22 > 0.5)
        {
          tmp22 -= 1.0;
          tmp23 += 1.0;
        }
        else if(tmp22 < -0.5)
        {
          tmp22 += 1.0;
          tmp23 -= 1.0;
        }
        
        if(fabs(tmp22) < 1e-10)
          tmp21 = pow(tmp19, tmp23);
        else
        {
          tmp25 = modf(1.0/tmp20, &tmp24);
          if(tmp25 > 0.5)
          {
            tmp25 -= 1.0;
            tmp24 += 1.0;
          }
          else if(tmp25 < -0.5)
          {
            tmp25 += 1.0;
            tmp24 -= 1.0;
          }
          if(fabs(tmp25) < 1e-10 && ((unsigned long)tmp24 & 1))
          {
            tmp21 = -pow(-tmp19, tmp22)*pow(tmp19, tmp23);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
          }
        }
      }
      else
      {
        tmp21 = pow(tmp19, tmp20);
      }
      if(isnan(tmp21) || isinf(tmp21))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
      }
      tmp27 = (tmp21) * ((data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */));
    }
    tmp36 = (modelica_boolean)(data->localData[0]->realVars[79] /* constantLoad.v variable */ == 0.0);
    if(tmp36)
    {
      tmp37 = 0.0;
    }
    else
    {
      tmp29 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
      tmp30 = -1.0 + data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp29 < 0.0 && tmp30 != 0.0)
      {
        tmp32 = modf(tmp30, &tmp33);
        
        if(tmp32 > 0.5)
        {
          tmp32 -= 1.0;
          tmp33 += 1.0;
        }
        else if(tmp32 < -0.5)
        {
          tmp32 += 1.0;
          tmp33 -= 1.0;
        }
        
        if(fabs(tmp32) < 1e-10)
          tmp31 = pow(tmp29, tmp33);
        else
        {
          tmp35 = modf(1.0/tmp30, &tmp34);
          if(tmp35 > 0.5)
          {
            tmp35 -= 1.0;
            tmp34 += 1.0;
          }
          else if(tmp35 < -0.5)
          {
            tmp35 += 1.0;
            tmp34 -= 1.0;
          }
          if(fabs(tmp35) < 1e-10 && ((unsigned long)tmp34 & 1))
          {
            tmp31 = -pow(-tmp29, tmp32)*pow(tmp29, tmp33);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp29, tmp30);
          }
        }
      }
      else
      {
        tmp31 = pow(tmp29, tmp30);
      }
      if(isnan(tmp31) || isinf(tmp31))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp29, tmp30);
      }
      tmp37 = (tmp31) * ((-1.0 + data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */));
    }
    tmp38 = data->localData[0]->realVars[79] /* constantLoad.v variable */;
    tmp39 = data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */;
    if(tmp38 < 0.0 && tmp39 != 0.0)
    {
      tmp41 = modf(tmp39, &tmp42);
      
      if(tmp41 > 0.5)
      {
        tmp41 -= 1.0;
        tmp42 += 1.0;
      }
      else if(tmp41 < -0.5)
      {
        tmp41 += 1.0;
        tmp42 -= 1.0;
      }
      
      if(fabs(tmp41) < 1e-10)
        tmp40 = pow(tmp38, tmp42);
      else
      {
        tmp44 = modf(1.0/tmp39, &tmp43);
        if(tmp44 > 0.5)
        {
          tmp44 -= 1.0;
          tmp43 += 1.0;
        }
        else if(tmp44 < -0.5)
        {
          tmp44 += 1.0;
          tmp43 -= 1.0;
        }
        if(fabs(tmp44) < 1e-10 && ((unsigned long)tmp43 & 1))
        {
          tmp40 = -pow(-tmp38, tmp41)*pow(tmp38, tmp42);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
        }
      }
    }
    else
    {
      tmp40 = pow(tmp38, tmp39);
    }
    if(isnan(tmp40) || isinf(tmp40))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
    }
    tmp46 = (data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[165] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */) * (tmp27))) + (tmp37) * (exp(((-data->simulationInfo->realParameter[159] /* constantLoad.a2 PARAM */)) * (tmp40)))));
  }
  else
  {
    tmp46 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac12.dummyVarNLSJac12 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_844(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,844};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[141] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[75] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[145] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[143] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[167] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[141] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[75] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[145] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[143] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac12.dummyVarNLSJac12 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_845(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,845};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[168] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[142] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[75] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[146] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[144] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[166] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[142] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[75] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[146] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[79] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[144] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
gENSAL.PSIq.$pDERNLSJac12.dummyVarNLSJac12 = (-gENSAL.Xppq) * gENSAL.iq.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_846(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,846};
  jacobian->tmpVars[5] /* gENSAL.PSIq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[255] /* gENSAL.Xppq PARAM */)) * (jacobian->seedVars[23] /* gENSAL.iq.SeedNLSJac12 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 = ($cse8 * gENSAL.iq.SeedNLSJac12 + $cse7 * gENSAL.id.SeedNLSJac12) * gENSAL.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_847(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,847};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[26] /* $cse8 variable */) * (jacobian->seedVars[23] /* gENSAL.iq.SeedNLSJac12 SEED_VAR */) + (data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->seedVars[22] /* gENSAL.id.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 = ($cse7 * gENSAL.iq.SeedNLSJac12 - $cse8 * gENSAL.id.SeedNLSJac12) * gENSAL.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_848(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,848};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->seedVars[23] /* gENSAL.iq.SeedNLSJac12 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse8 variable */) * (jacobian->seedVars[22] /* gENSAL.id.SeedNLSJac12 SEED_VAR */))) * (data->simulationInfo->realParameter[205] /* gENSAL.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
gENSAL.ud.$pDERNLSJac12.dummyVarNLSJac12 = (-gENSAL.PSIq.$pDERNLSJac12.dummyVarNLSJac12) - gENSAL.R_a * gENSAL.id.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_849(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,849};
  jacobian->tmpVars[8] /* gENSAL.ud.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENSAL.PSIq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * (jacobian->seedVars[22] /* gENSAL.id.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
gENSAL.PSId.$pDERNLSJac12.dummyVarNLSJac12 = (-gENSAL.Xppd) * gENSAL.id.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_850(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,850};
  jacobian->tmpVars[9] /* gENSAL.PSId.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[254] /* gENSAL.Xppd PARAM */)) * (jacobian->seedVars[22] /* gENSAL.id.SeedNLSJac12 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
gENSAL.uq.$pDERNLSJac12.dummyVarNLSJac12 = gENSAL.PSId.$pDERNLSJac12.dummyVarNLSJac12 - gENSAL.R_a * gENSAL.iq.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,851};
  jacobian->tmpVars[10] /* gENSAL.uq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENSAL.PSId.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[239] /* gENSAL.R_a PARAM */) * (jacobian->seedVars[23] /* gENSAL.iq.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 = $cse7 * gENSAL.uq.$pDERNLSJac12.dummyVarNLSJac12 - $cse8 * gENSAL.ud.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,852};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENSAL.uq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[26] /* $cse8 variable */) * (jacobian->tmpVars[8] /* gENSAL.ud.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 = $cse7 * gENSAL.ud.$pDERNLSJac12.dummyVarNLSJac12 + $cse8 * gENSAL.uq.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,853};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENSAL.ud.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse8 variable */) * (jacobian->tmpVars[10] /* gENSAL.uq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
cSVGN1.add.u2.$pDERNLSJac12.dummyVarNLSJac12 = cSVGN1.Y.SeedNLSJac12 / cSVGN1.add.k2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,854};
  jacobian->tmpVars[13] /* cSVGN1.add.u2.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[21] /* cSVGN1.Y.SeedNLSJac12 SEED_VAR */,data->simulationInfo->realParameter[67] /* cSVGN1.add.k2 PARAM */,"cSVGN1.add.k2");
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
cSVGN1.LagLim.y.$pDERNLSJac12.dummyVarNLSJac12 = cSVGN1.add.u2.$pDERNLSJac12.dummyVarNLSJac12 / cSVGN1.const.k
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,855};
  jacobian->tmpVars[14] /* cSVGN1.LagLim.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[13] /* cSVGN1.add.u2.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[77] /* cSVGN1.const.k PARAM */,"cSVGN1.const.k");
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
cSVGN1.leadLag.TF.y.$pDERNLSJac12.dummyVarNLSJac12 = cSVGN1.leadLag.TF.d * cSVGN1.add2.y.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,856};
  jacobian->tmpVars[15] /* cSVGN1.leadLag.TF.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[102] /* cSVGN1.leadLag.TF.d PARAM */) * (jacobian->seedVars[20] /* cSVGN1.add2.y.SeedNLSJac12 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
cSVGN1.leadLag.y.$pDERNLSJac12.dummyVarNLSJac12 = if abs(cSVGN1.leadLag.T1 - cSVGN1.leadLag.T2) < 1e-15 then cSVGN1.leadLag.K * cSVGN1.add2.y.SeedNLSJac12 else cSVGN1.leadLag.TF.y.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,857};
  modelica_boolean tmp51;
  tmp51 = Less(fabs(data->simulationInfo->realParameter[92] /* cSVGN1.leadLag.T1 PARAM */ - data->simulationInfo->realParameter[93] /* cSVGN1.leadLag.T2 PARAM */),1e-15);
  jacobian->tmpVars[16] /* cSVGN1.leadLag.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (tmp51?(data->simulationInfo->realParameter[91] /* cSVGN1.leadLag.K PARAM */) * (jacobian->seedVars[20] /* cSVGN1.add2.y.SeedNLSJac12 SEED_VAR */):jacobian->tmpVars[15] /* cSVGN1.leadLag.TF.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.add2.y.$pDERNLSJac12.dummyVarNLSJac12 = cSVGN1.leadLagLim.add2.k1 * cSVGN1.leadLag.y.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,858};
  jacobian->tmpVars[17] /* cSVGN1.leadLagLim.add2.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[112] /* cSVGN1.leadLagLim.add2.k1 PARAM */) * (jacobian->tmpVars[16] /* cSVGN1.leadLag.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
cSVGN1.leadLagLim.gain.y.$pDERNLSJac12.dummyVarNLSJac12 = cSVGN1.leadLagLim.gain.k * cSVGN1.leadLagLim.add2.y.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,859};
  jacobian->tmpVars[18] /* cSVGN1.leadLagLim.gain.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[116] /* cSVGN1.leadLagLim.gain.k PARAM */) * (jacobian->tmpVars[17] /* cSVGN1.leadLagLim.add2.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
cSVGN1.LagLim.u.$pDERNLSJac12.dummyVarNLSJac12 = if cSVGN1.leadLagLim.gain.y > cSVGN1.leadLagLim.limiter.uMax then 0.0 else if cSVGN1.leadLagLim.gain.y < cSVGN1.leadLagLim.limiter.uMin then 0.0 else cSVGN1.leadLagLim.gain.y.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,860};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */, data->simulationInfo->realParameter[120] /* cSVGN1.leadLagLim.limiter.uMax PARAM */, 20, Greater);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, data->localData[0]->realVars[65] /* cSVGN1.leadLagLim.gain.y variable */, data->simulationInfo->realParameter[121] /* cSVGN1.leadLagLim.limiter.uMin PARAM */, 21, Less);
    tmp55 = (tmp53?0.0:jacobian->tmpVars[18] /* cSVGN1.leadLagLim.gain.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */);
  }
  jacobian->tmpVars[19] /* cSVGN1.LagLim.u.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = tmp55;
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
cSVGN1.add1.y.$pDERNLSJac12.dummyVarNLSJac12 = cSVGN1.add2.y.SeedNLSJac12 / cSVGN1.add2.k1
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_861(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,861};
  jacobian->tmpVars[20] /* cSVGN1.add1.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[20] /* cSVGN1.add2.y.SeedNLSJac12 SEED_VAR */,data->simulationInfo->realParameter[72] /* cSVGN1.add2.k1 PARAM */,"cSVGN1.add2.k1");
  TRACE_POP
}

/*
equation index: 862
type: SIMPLE_ASSIGN
cSVGN1.V.$pDERNLSJac12.dummyVarNLSJac12 = cSVGN1.add1.y.$pDERNLSJac12.dummyVarNLSJac12 / cSVGN1.add1.k2
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_862(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,862};
  jacobian->tmpVars[21] /* cSVGN1.V.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[20] /* cSVGN1.add1.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[70] /* cSVGN1.add1.k2 PARAM */,"cSVGN1.add1.k2");
  TRACE_POP
}

/*
equation index: 863
type: SIMPLE_ASSIGN
cSVGN1.vd.$pDERNLSJac12.dummyVarNLSJac12 = (cSVGN1.iq * cSVGN1.Y.SeedNLSJac12 - cSVGN1.iq.SeedNLSJac12 * cSVGN1.Y) / cSVGN1.Y ^ 2.0
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_863(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,863};
  modelica_real tmp56;
  tmp56 = data->localData[0]->realVars[52] /* cSVGN1.Y variable */;
  jacobian->tmpVars[22] /* cSVGN1.vd.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[58] /* cSVGN1.iq variable */) * (jacobian->seedVars[21] /* cSVGN1.Y.SeedNLSJac12 SEED_VAR */) - ((jacobian->seedVars[19] /* cSVGN1.iq.SeedNLSJac12 SEED_VAR */) * (data->localData[0]->realVars[52] /* cSVGN1.Y variable */)),(tmp56 * tmp56),"cSVGN1.Y ^ 2.0");
  TRACE_POP
}

/*
equation index: 864
type: SIMPLE_ASSIGN
cSVGN1.vq.$pDERNLSJac12.dummyVarNLSJac12 = (pwLine1.vr.re.SeedNLSJac12 - $cse9 * cSVGN1.vd.$pDERNLSJac12.dummyVarNLSJac12) / $cse10
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_864(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,864};
  jacobian->tmpVars[23] /* cSVGN1.vq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->localData[0]->realVars[27] /* $cse9 variable */) * (jacobian->tmpVars[22] /* cSVGN1.vd.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)),data->localData[0]->realVars[21] /* $cse10 variable */,"$cse10");
  TRACE_POP
}

/*
equation index: 865
type: SIMPLE_ASSIGN
cSVGN1.id.$pDERNLSJac12.dummyVarNLSJac12 = (cSVGN1.Y ^ (-2.0) * cSVGN1.Y.SeedNLSJac12 * cSVGN1.id + cSVGN1.vq.$pDERNLSJac12.dummyVarNLSJac12) * cSVGN1.Y
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_865(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,865};
  jacobian->tmpVars[24] /* cSVGN1.id.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((real_int_pow(threadData, data->localData[0]->realVars[52] /* cSVGN1.Y variable */, -2)) * ((jacobian->seedVars[21] /* cSVGN1.Y.SeedNLSJac12 SEED_VAR */) * (data->localData[0]->realVars[57] /* cSVGN1.id variable */)) + jacobian->tmpVars[23] /* cSVGN1.vq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[52] /* cSVGN1.Y variable */);
  TRACE_POP
}

/*
equation index: 866
type: SIMPLE_ASSIGN
cSVGN1.p.ii.$pDERNLSJac12.dummyVarNLSJac12 = $cse10 * cSVGN1.id.$pDERNLSJac12.dummyVarNLSJac12 - $cse9 * cSVGN1.iq.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_866(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,866};
  jacobian->tmpVars[25] /* cSVGN1.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[21] /* $cse10 variable */) * (jacobian->tmpVars[24] /* cSVGN1.id.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[27] /* $cse9 variable */) * (jacobian->seedVars[19] /* cSVGN1.iq.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 867
type: SIMPLE_ASSIGN
pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 = $cse9 * cSVGN1.vq.$pDERNLSJac12.dummyVarNLSJac12 - $cse10 * cSVGN1.vd.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_867(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,867};
  jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[27] /* $cse9 variable */) * (jacobian->tmpVars[23] /* cSVGN1.vq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[21] /* $cse10 variable */) * (jacobian->tmpVars[22] /* cSVGN1.vd.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 868
type: SIMPLE_ASSIGN
cSVGN1.p.ir.$pDERNLSJac12.dummyVarNLSJac12 = (-$cse9) * cSVGN1.id.$pDERNLSJac12.dummyVarNLSJac12 - $cse10 * cSVGN1.iq.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_868(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,868};
  jacobian->tmpVars[27] /* cSVGN1.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[27] /* $cse9 variable */)) * (jacobian->tmpVars[24] /* cSVGN1.id.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[21] /* $cse10 variable */) * (jacobian->seedVars[19] /* cSVGN1.iq.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 869
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine2.is.im.SeedNLSJac12) - cSVGN1.p.ii.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_869(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,869};
  jacobian->tmpVars[28] /* pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[17] /* pwLine2.is.im.SeedNLSJac12 SEED_VAR */) - jacobian->tmpVars[25] /* cSVGN1.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine2.is.re.SeedNLSJac12) - cSVGN1.p.ir.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_870(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,870};
  jacobian->tmpVars[29] /* pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[16] /* pwLine2.is.re.SeedNLSJac12 SEED_VAR */) - jacobian->tmpVars[27] /* cSVGN1.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac12.dummyVarNLSJac12 = ((-$cse1) * gENCLS.id.SeedNLSJac12 - $cse2 * gENCLS.iq.SeedNLSJac12) * gENCLS.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_871(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,871};
  jacobian->tmpVars[30] /* gENCLS.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[20] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac12 SEED_VAR */) - ((data->localData[0]->realVars[22] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac12 SEED_VAR */))) * (data->simulationInfo->realParameter[179] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac12.dummyVarNLSJac12 = ($cse2 * gENCLS.id.SeedNLSJac12 - $cse1 * gENCLS.iq.SeedNLSJac12) * gENCLS.CoB
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_872(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,872};
  jacobian->tmpVars[31] /* gENCLS.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[22] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac12 SEED_VAR */) - ((data->localData[0]->realVars[20] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac12 SEED_VAR */))) * (data->simulationInfo->realParameter[179] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 = gENCLS.X_d * gENCLS.iq.SeedNLSJac12 - gENCLS.R_a * gENCLS.id.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_873(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,873};
  jacobian->tmpVars[32] /* gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac12 SEED_VAR */) - ((data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac12 - gENCLS.X_d * gENCLS.id.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_874(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,874};
  jacobian->tmpVars[33] /* gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[185] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac12 SEED_VAR */) - ((data->simulationInfo->realParameter[188] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine2.ir.im.SeedNLSJac12) - gENCLS.p.ii.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_875(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,875};
  jacobian->tmpVars[34] /* pwLine4.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine2.ir.im.SeedNLSJac12 SEED_VAR */) - jacobian->tmpVars[31] /* gENCLS.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine2.ir.re.SeedNLSJac12) - gENCLS.p.ir.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_876(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,876};
  jacobian->tmpVars[35] /* pwLine4.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine2.ir.re.SeedNLSJac12 SEED_VAR */) - jacobian->tmpVars[30] /* gENCLS.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine.ir.im.SeedNLSJac12) - pwLine1.is.im.SeedNLSJac12 - pwLine3.is.im.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_877(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,877};
  jacobian->tmpVars[36] /* constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac12 SEED_VAR */) - jacobian->seedVars[9] /* pwLine1.is.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 878
type: SIMPLE_ASSIGN
pwLine.ir.re.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine1.is.re.SeedNLSJac12) - pwLine3.is.re.SeedNLSJac12 - constantLoad.p.ir.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_878(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,878};
  jacobian->tmpVars[37] /* pwLine.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac12 SEED_VAR */) - jacobian->seedVars[4] /* pwLine3.is.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine3.ir.re.SeedNLSJac12) - pwLine4.is.re.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_879(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,879};
  jacobian->tmpVars[38] /* pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac12 SEED_VAR */) - jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 880
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine3.ir.im.SeedNLSJac12) - pwLine4.is.im.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_880(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,880};
  jacobian->tmpVars[39] /* pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac12 SEED_VAR */) - jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac12 else pwLine1.vs.re.SeedNLSJac12 - pwLine1.vr.re.SeedNLSJac12 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_881(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 882
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac12.dummyVarNLSJac12 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac12 + pwLine1.vs.re.SeedNLSJac12 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_882(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,882};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[36] /* constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->localData[0]->realVars[77] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac12 SEED_VAR */) + (jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->localData[0]->realVars[78] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 883
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac12 else pwLine1.vs.im.SeedNLSJac12 - pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_883(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,883};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp59 && tmp60)?jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[37] /* pwLine.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 884
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 else pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 - pwLine1.vs.im.SeedNLSJac12 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_884(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp61 && tmp62)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 885
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 else pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 - pwLine1.vs.re.SeedNLSJac12 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_885(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp63 && tmp64)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 886
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac12 else pwLine1.vs.im.SeedNLSJac12 - pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_886(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp65 && tmp66)?jacobian->seedVars[9] /* pwLine1.is.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 887
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac12.dummyVarNLSJac12 else pwLine1.vs.re.SeedNLSJac12 - pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_887(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,887};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[294] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp67 && tmp68)?jacobian->tmpVars[37] /* pwLine.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[292] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[37] /* pwLine.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[291] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[289] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[290] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 888
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac12.dummyVarNLSJac12 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac12) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac12.dummyVarNLSJac12 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_888(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,888};
  jacobian->resultVars[7] /* $res8.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac12 SEED_VAR */) + (jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->localData[0]->realVars[78] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->localData[0]->realVars[77] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[36] /* constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 889
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac12 else pwLine1.vs.re.SeedNLSJac12 - pwLine3.vr.re.SeedNLSJac12 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_889(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp69 && tmp70)?jacobian->seedVars[4] /* pwLine3.is.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine3.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 890
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac12 else pwLine1.vs.im.SeedNLSJac12 - pwLine3.vr.im.SeedNLSJac12 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_890(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp71 && tmp72)?jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine3.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 891
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac12 else pwLine3.vr.re.SeedNLSJac12 - pwLine1.vs.re.SeedNLSJac12 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac12 + pwLine3.vr.im.SeedNLSJac12 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac12 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac12 + (-pwLine3.vr.re.SeedNLSJac12) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac12 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_891(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,891};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp73 && tmp74)?jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 892
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac12.dummyVarNLSJac12 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac12 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 - (pwFault.R * pwLine3.vr.re.SeedNLSJac12 + pwFault.X * pwLine3.vr.im.SeedNLSJac12) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_892(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,892};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  modelica_real tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */, 9, Less);
  tmp87 = (modelica_boolean)tmp75;
  if(tmp87)
  {
    tmp88 = jacobian->tmpVars[38] /* pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, 10, Less);
    tmp85 = (modelica_boolean)(tmp76 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp85)
    {
      tmp86 = jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, 10, Less);
      tmp83 = (modelica_boolean)tmp77;
      if(tmp83)
      {
        tmp78 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp79 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp80 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp81 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp82 = (tmp80 * tmp80) + (tmp81 * tmp81);
        tmp84 = jacobian->tmpVars[38] /* pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[280] /* pwFault.R PARAM */) * (jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) + (data->simulationInfo->realParameter[281] /* pwFault.X PARAM */) * (jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */)) * ((tmp78 * tmp78) + (tmp79 * tmp79)),(tmp82 * tmp82),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp84 = jacobian->tmpVars[38] /* pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
      }
      tmp86 = tmp84;
    }
    tmp88 = tmp86;
  }
  jacobian->resultVars[11] /* $res12.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = tmp88;
  TRACE_POP
}

/*
equation index: 893
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac12.dummyVarNLSJac12 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac12 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 - (pwFault.R * pwLine3.vr.im.SeedNLSJac12 - pwFault.X * pwLine3.vr.re.SeedNLSJac12) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_893(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,893};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_boolean tmp97;
  modelica_real tmp98;
  modelica_boolean tmp99;
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[282] /* pwFault.t1 PARAM */, 9, Less);
  tmp101 = (modelica_boolean)tmp89;
  if(tmp101)
  {
    tmp102 = jacobian->tmpVars[39] /* pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, 10, Less);
    tmp99 = (modelica_boolean)(tmp90 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp99)
    {
      tmp100 = jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[283] /* pwFault.t2 PARAM */, 10, Less);
      tmp97 = (modelica_boolean)tmp91;
      if(tmp97)
      {
        tmp92 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp93 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp94 = data->simulationInfo->realParameter[281] /* pwFault.X PARAM */;
        tmp95 = data->simulationInfo->realParameter[280] /* pwFault.R PARAM */;
        tmp96 = (tmp94 * tmp94) + (tmp95 * tmp95);
        tmp98 = jacobian->tmpVars[39] /* pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[280] /* pwFault.R PARAM */) * (jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) - ((data->simulationInfo->realParameter[281] /* pwFault.X PARAM */) * (jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */))) * ((tmp92 * tmp92) + (tmp93 * tmp93)),(tmp96 * tmp96),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp98 = jacobian->tmpVars[39] /* pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
      }
      tmp100 = tmp98;
    }
    tmp102 = tmp100;
  }
  jacobian->resultVars[12] /* $res13.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = tmp102;
  TRACE_POP
}

/*
equation index: 894
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac12 else pwLine3.vr.re.SeedNLSJac12 - pwLine2.vr.re.SeedNLSJac12 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac12 + pwLine3.vr.im.SeedNLSJac12 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac12 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac12 + (-pwLine3.vr.re.SeedNLSJac12) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac12 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_894(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,894};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 895
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac12.dummyVarNLSJac12 else pwLine2.vr.im.SeedNLSJac12 - pwLine3.vr.im.SeedNLSJac12 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine2.vr.re.SeedNLSJac12) * pwLine4.Y.im - pwLine2.vr.im.SeedNLSJac12 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine2.vr.im.SeedNLSJac12 * pwLine4.Y.im - pwLine2.vr.re.SeedNLSJac12 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_895(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,895};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->tmpVars[34] /* pwLine4.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[34] /* pwLine4.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[35] /* pwLine4.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 896
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac12 else pwLine3.vr.im.SeedNLSJac12 - pwLine2.vr.im.SeedNLSJac12 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac12 + (-pwLine3.vr.re.SeedNLSJac12) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac12 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac12 + pwLine3.vr.im.SeedNLSJac12 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac12 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_896(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,896};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 897
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac12 else pwLine3.vr.im.SeedNLSJac12 - pwLine1.vs.im.SeedNLSJac12 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac12 + (-pwLine3.vr.re.SeedNLSJac12) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac12 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac12 + pwLine3.vr.im.SeedNLSJac12 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac12 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_897(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,897};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[25] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 898
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac12.dummyVarNLSJac12 else pwLine2.vr.re.SeedNLSJac12 - pwLine3.vr.re.SeedNLSJac12 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine2.vr.im.SeedNLSJac12 * pwLine4.Y.im - pwLine2.vr.re.SeedNLSJac12 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine2.vr.re.SeedNLSJac12) * pwLine4.Y.im - pwLine2.vr.im.SeedNLSJac12 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_898(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,898};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp111 && tmp112)?jacobian->tmpVars[35] /* pwLine4.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[24] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[35] /* pwLine4.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[34] /* pwLine4.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 899
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.re.SeedNLSJac12 else pwLine2.vr.re.SeedNLSJac12 - pwLine1.vr.re.SeedNLSJac12 - (pwLine2.Z.re * (pwLine2.ir.re.SeedNLSJac12 + pwLine2.vr.im.SeedNLSJac12 * pwLine2.Y.im - pwLine2.vr.re.SeedNLSJac12 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.ir.im.SeedNLSJac12 + (-pwLine2.vr.re.SeedNLSJac12) * pwLine2.Y.im - pwLine2.vr.im.SeedNLSJac12 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_899(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,899};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, 14, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp113 && tmp114)?jacobian->seedVars[10] /* pwLine2.ir.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine2.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine2.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 900
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.im.SeedNLSJac12 else pwLine2.vr.im.SeedNLSJac12 - pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 - (pwLine2.Z.re * (pwLine2.ir.im.SeedNLSJac12 + (-pwLine2.vr.re.SeedNLSJac12) * pwLine2.Y.im - pwLine2.vr.im.SeedNLSJac12 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.ir.re.SeedNLSJac12 + pwLine2.vr.im.SeedNLSJac12 * pwLine2.Y.im - pwLine2.vr.re.SeedNLSJac12 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_900(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,900};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp116, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, 14, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp115 && tmp116)?jacobian->seedVars[11] /* pwLine2.ir.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */ - jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine2.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine2.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 901
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 else pwLine1.vr.re.SeedNLSJac12 - pwLine1.vs.re.SeedNLSJac12 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac12 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine1.vr.re.SeedNLSJac12) * pwLine1.Y.im - pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_901(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,901};
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  RELATIONHYSTERESIS(tmp117, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp118, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp117 && tmp118)?jacobian->tmpVars[29] /* pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[27] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[29] /* pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[28] /* pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 902
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 else pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 - pwLine1.vs.im.SeedNLSJac12 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine1.vr.re.SeedNLSJac12) * pwLine1.Y.im - pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac12 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_902(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,902};
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  RELATIONHYSTERESIS(tmp119, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp120, data->localData[0]->timeValue, data->simulationInfo->realParameter[305] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp119 && tmp120)?jacobian->tmpVars[28] /* pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[26] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[303] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[28] /* pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[302] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[29] /* pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[301] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 903
type: SIMPLE_ASSIGN
$res23.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.re.SeedNLSJac12 else pwLine1.vr.re.SeedNLSJac12 - pwLine2.vr.re.SeedNLSJac12 - (pwLine2.Z.re * (pwLine2.is.re.SeedNLSJac12 + pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine2.Y.im - pwLine1.vr.re.SeedNLSJac12 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.is.im.SeedNLSJac12 + (-pwLine1.vr.re.SeedNLSJac12) * pwLine2.Y.im - pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_903(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  RELATIONHYSTERESIS(tmp121, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp122, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, 14, Less);
  jacobian->resultVars[22] /* $res23.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp121 && tmp122)?jacobian->seedVars[16] /* pwLine2.is.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[16] /* pwLine2.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[17] /* pwLine2.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 904
type: SIMPLE_ASSIGN
$res24.$pDERNLSJac12.dummyVarNLSJac12 = (pwLine1.vr.re * pwLine1.vr.re.SeedNLSJac12 + pwLine1.vr.im * pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12) / sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0) - cSVGN1.V.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_904(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,904};
  modelica_real tmp123;
  modelica_real tmp124;
  tmp123 = data->localData[0]->realVars[128] /* pwLine1.vr.re variable */;
  tmp124 = data->localData[0]->realVars[127] /* pwLine1.vr.im variable */;
  jacobian->resultVars[23] /* $res24.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[128] /* pwLine1.vr.re variable */) * (jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */) + (data->localData[0]->realVars[127] /* pwLine1.vr.im variable */) * (jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */),sqrt((tmp123 * tmp123) + (tmp124 * tmp124)),"sqrt(pwLine1.vr.re ^ 2.0 + pwLine1.vr.im ^ 2.0)") - jacobian->tmpVars[21] /* cSVGN1.V.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 905
type: SIMPLE_ASSIGN
$res25.$pDERNLSJac12.dummyVarNLSJac12 = (if abs(cSVGN1.LagLim.T) <= 1e-15 then if noEvent(min(cSVGN1.LagLim.u * cSVGN1.LagLim.K, cSVGN1.LagLim.outMax) > cSVGN1.LagLim.outMin) then if noEvent(cSVGN1.LagLim.u * cSVGN1.LagLim.K < cSVGN1.LagLim.outMax) then cSVGN1.LagLim.u.$pDERNLSJac12.dummyVarNLSJac12 * cSVGN1.LagLim.K else 0.0 else 0.0 else 0.0) - cSVGN1.LagLim.y.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_905(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,905};
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  modelica_real tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  tmp125 = LessEq(fabs(data->simulationInfo->realParameter[45] /* cSVGN1.LagLim.T PARAM */),1e-15);
  tmp130 = (modelica_boolean)tmp125;
  if(tmp130)
  {
    tmp126 = Greater(fmin((data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) * (data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */),data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */),data->simulationInfo->realParameter[49] /* cSVGN1.LagLim.outMin PARAM */);
    tmp128 = (modelica_boolean)tmp126;
    if(tmp128)
    {
      tmp127 = Less((data->localData[0]->realVars[47] /* cSVGN1.LagLim.u variable */) * (data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */),data->simulationInfo->realParameter[48] /* cSVGN1.LagLim.outMax PARAM */);
      tmp129 = (tmp127?(jacobian->tmpVars[19] /* cSVGN1.LagLim.u.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[44] /* cSVGN1.LagLim.K PARAM */):0.0);
    }
    else
    {
      tmp129 = 0.0;
    }
    tmp131 = tmp129;
  }
  else
  {
    tmp131 = 0.0;
  }
  jacobian->resultVars[24] /* $res25.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = tmp131 - jacobian->tmpVars[14] /* cSVGN1.LagLim.y.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 906
type: SIMPLE_ASSIGN
$res26.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.im.SeedNLSJac12 else pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 - pwLine2.vr.im.SeedNLSJac12 - (pwLine2.Z.re * (pwLine2.is.im.SeedNLSJac12 + (-pwLine1.vr.re.SeedNLSJac12) * pwLine2.Y.im - pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.is.re.SeedNLSJac12 + pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine2.Y.im - pwLine1.vr.re.SeedNLSJac12 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_906(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,906};
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  RELATIONHYSTERESIS(tmp132, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine2.t1 PARAM */, 13, GreaterEq);
  RELATIONHYSTERESIS(tmp133, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwLine2.t2 PARAM */, 14, Less);
  jacobian->resultVars[25] /* $res26.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp132 && tmp133)?jacobian->seedVars[17] /* pwLine2.is.im.SeedNLSJac12 SEED_VAR */:jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[314] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[17] /* pwLine2.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[313] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[16] /* pwLine2.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->tmpVars[26] /* pwLine1.vr.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[312] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 907
type: SIMPLE_ASSIGN
$res27.$pDERNLSJac12.dummyVarNLSJac12 = $cse1 * gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 + (-$cse2) * gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 - pwLine2.vr.im.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_907(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,907};
  jacobian->resultVars[26] /* $res27.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = (data->localData[0]->realVars[20] /* $cse1 variable */) * (jacobian->tmpVars[33] /* gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[22] /* $cse2 variable */)) * (jacobian->tmpVars[32] /* gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 908
type: SIMPLE_ASSIGN
$res28.$pDERNLSJac12.dummyVarNLSJac12 = $cse2 * gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 + $cse1 * gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 - pwLine2.vr.re.SeedNLSJac12
*/
void OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_908(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,908};
  jacobian->resultVars[27] /* $res28.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = (data->localData[0]->realVars[22] /* $cse2 variable */) * (jacobian->tmpVars[33] /* gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[20] /* $cse1 variable */) * (jacobian->tmpVars[32] /* gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacNLSJac12_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Banks_PSSE_CSVGN1_INDEX_JAC_NLSJac12;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacNLSJac12_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Banks_PSSE_CSVGN1_INDEX_JAC_NLSJac12;
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_841(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_842(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_843(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_844(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_845(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_846(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_847(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_848(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_849(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_850(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_851(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_852(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_853(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_854(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_855(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_856(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_857(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_858(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_859(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_860(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_861(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_862(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_863(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_864(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_865(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_866(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_867(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_868(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_869(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_870(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_871(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_872(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_873(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_874(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_875(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_876(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_877(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_878(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_879(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_880(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_881(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_882(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_883(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_884(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_885(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_886(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_887(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_888(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_889(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_890(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_891(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_892(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_893(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_894(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_895(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_896(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_897(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_898(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_899(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_900(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_901(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_902(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_903(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_904(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_905(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_906(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_907(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Banks_PSSE_CSVGN1_eqFunction_908(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Banks_PSSE_CSVGN1_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Banks_PSSE_CSVGN1_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Banks_PSSE_CSVGN1_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianNLSJac12(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+28] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,9,7,2,8,4,4,8,8,11,11};
  const int rowIndex[146] = {10,12,16,12,13,15,11,13,15,10,11,16,2,6,8,9,0,2,5,6,1,7,8,9,1,2,6,7,1,2,6,7,0,1,5,7,14,17,18,19,14,17,18,19,14,17,26,27,14,17,26,27,14,15,17,18,19,25,26,13,14,17,18,19,22,27,20,21,22,25,20,21,22,25,0,5,18,19,20,21,22,23,25,5,19,20,21,22,23,25,23,24,5,19,20,21,22,23,24,25,2,3,4,6,2,3,4,6,8,10,11,12,13,15,16,17,9,10,11,12,13,14,15,16,0,1,2,3,5,6,7,8,9,16,21,0,1,2,4,5,6,7,8,9,10,20};
  int i = 0;
  
  jacobian->sizeCols = 28;
  jacobian->sizeRows = 28;
  jacobian->sizeTmpVars = 68;
  jacobian->seedVars = (modelica_real*) calloc(28,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(28,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(68,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((28+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(146*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 146;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(28*sizeof(int));
  jacobian->sparsePattern->maxColors = 10;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (28+1)*sizeof(int));
  
  for(i=2;i<28+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 146*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[27] = 1;
  jacobian->sparsePattern->colorCols[26] = 2;
  jacobian->sparsePattern->colorCols[25] = 3;
  jacobian->sparsePattern->colorCols[21] = 4;
  jacobian->sparsePattern->colorCols[24] = 4;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[23] = 5;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[22] = 6;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[19] = 7;
  jacobian->sparsePattern->colorCols[7] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[18] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[3] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[6] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[17] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[2] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[9] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  jacobian->sparsePattern->colorCols[16] = 10;
  jacobian->sparsePattern->colorCols[20] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Banks_PSSE_CSVGN1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+10] = {0,7,7,7,7,7,7,7,7,7,2};
  const int rowIndex[65] = {0,1,2,5,6,7,9,0,1,2,5,6,7,9,0,1,2,5,6,7,9,0,1,2,5,6,7,9,0,1,2,5,6,7,9,0,1,2,5,6,7,9,0,1,2,5,6,7,9,0,1,2,5,6,7,9,0,1,2,5,6,7,9,8,9};
  int i = 0;
  
  jacobian->sizeCols = 10;
  jacobian->sizeRows = 10;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(10,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(10,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((10+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(65*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 65;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(10*sizeof(int));
  jacobian->sparsePattern->maxColors = 10;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (10+1)*sizeof(int));
  
  for(i=2;i<10+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 65*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[2] = 1;
  jacobian->sparsePattern->colorCols[1] = 2;
  jacobian->sparsePattern->colorCols[0] = 3;
  jacobian->sparsePattern->colorCols[7] = 4;
  jacobian->sparsePattern->colorCols[6] = 5;
  jacobian->sparsePattern->colorCols[5] = 6;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[9] = 8;
  jacobian->sparsePattern->colorCols[4] = 9;
  jacobian->sparsePattern->colorCols[3] = 10;
  TRACE_POP
  return 0;
}


