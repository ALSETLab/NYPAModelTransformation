/* Jacobians 6 */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENSAE_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 166
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac9 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac9) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_166(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,166};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[95] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[94] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) + (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_167(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,167};
  modelica_boolean tmp2;
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
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_boolean tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[43] /* constantLoad.v variable */, 0.5, 13, Less);
  tmp44 = (modelica_boolean)tmp2;
  if(tmp44)
  {
    tmp3 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp4 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp3 < 0.0 && tmp4 != 0.0)
    {
      tmp6 = modf(tmp4, &tmp7);
      
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp7 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp7 -= 1.0;
      }
      
      if(fabs(tmp6) < 1e-10)
        tmp5 = pow(tmp3, tmp7);
      else
      {
        tmp9 = modf(1.0/tmp4, &tmp8);
        if(tmp9 > 0.5)
        {
          tmp9 -= 1.0;
          tmp8 += 1.0;
        }
        else if(tmp9 < -0.5)
        {
          tmp9 += 1.0;
          tmp8 -= 1.0;
        }
        if(fabs(tmp9) < 1e-10 && ((unsigned long)tmp8 & 1))
        {
          tmp5 = -pow(-tmp3, tmp6)*pow(tmp3, tmp7);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
        }
      }
    }
    else
    {
      tmp5 = pow(tmp3, tmp4);
    }
    if(isnan(tmp5) || isinf(tmp5))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
    }tmp10 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp11 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp10 < 0.0 && tmp11 != 0.0)
    {
      tmp13 = modf(tmp11, &tmp14);
      
      if(tmp13 > 0.5)
      {
        tmp13 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp13 < -0.5)
      {
        tmp13 += 1.0;
        tmp14 -= 1.0;
      }
      
      if(fabs(tmp13) < 1e-10)
        tmp12 = pow(tmp10, tmp14);
      else
      {
        tmp16 = modf(1.0/tmp11, &tmp15);
        if(tmp16 > 0.5)
        {
          tmp16 -= 1.0;
          tmp15 += 1.0;
        }
        else if(tmp16 < -0.5)
        {
          tmp16 += 1.0;
          tmp15 -= 1.0;
        }
        if(fabs(tmp16) < 1e-10 && ((unsigned long)tmp15 & 1))
        {
          tmp12 = -pow(-tmp10, tmp13)*pow(tmp10, tmp14);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
        }
      }
    }
    else
    {
      tmp12 = pow(tmp10, tmp11);
    }
    if(isnan(tmp12) || isinf(tmp12))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
    }tmp25 = (modelica_boolean)(data->localData[0]->realVars[43] /* constantLoad.v variable */ == 0.0);
    if(tmp25)
    {
      tmp26 = 0.0;
    }
    else
    {
      tmp18 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
      tmp19 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp18 < 0.0 && tmp19 != 0.0)
      {
        tmp21 = modf(tmp19, &tmp22);
        
        if(tmp21 > 0.5)
        {
          tmp21 -= 1.0;
          tmp22 += 1.0;
        }
        else if(tmp21 < -0.5)
        {
          tmp21 += 1.0;
          tmp22 -= 1.0;
        }
        
        if(fabs(tmp21) < 1e-10)
          tmp20 = pow(tmp18, tmp22);
        else
        {
          tmp24 = modf(1.0/tmp19, &tmp23);
          if(tmp24 > 0.5)
          {
            tmp24 -= 1.0;
            tmp23 += 1.0;
          }
          else if(tmp24 < -0.5)
          {
            tmp24 += 1.0;
            tmp23 -= 1.0;
          }
          if(fabs(tmp24) < 1e-10 && ((unsigned long)tmp23 & 1))
          {
            tmp20 = -pow(-tmp18, tmp21)*pow(tmp18, tmp22);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
          }
        }
      }
      else
      {
        tmp20 = pow(tmp18, tmp19);
      }
      if(isnan(tmp20) || isinf(tmp20))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
      }
      tmp26 = (tmp20) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = (modelica_boolean)(data->localData[0]->realVars[43] /* constantLoad.v variable */ == 0.0);
    if(tmp35)
    {
      tmp36 = 0.0;
    }
    else
    {
      tmp28 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
      tmp29 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp28 < 0.0 && tmp29 != 0.0)
      {
        tmp31 = modf(tmp29, &tmp32);
        
        if(tmp31 > 0.5)
        {
          tmp31 -= 1.0;
          tmp32 += 1.0;
        }
        else if(tmp31 < -0.5)
        {
          tmp31 += 1.0;
          tmp32 -= 1.0;
        }
        
        if(fabs(tmp31) < 1e-10)
          tmp30 = pow(tmp28, tmp32);
        else
        {
          tmp34 = modf(1.0/tmp29, &tmp33);
          if(tmp34 > 0.5)
          {
            tmp34 -= 1.0;
            tmp33 += 1.0;
          }
          else if(tmp34 < -0.5)
          {
            tmp34 += 1.0;
            tmp33 -= 1.0;
          }
          if(fabs(tmp34) < 1e-10 && ((unsigned long)tmp33 & 1))
          {
            tmp30 = -pow(-tmp28, tmp31)*pow(tmp28, tmp32);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp28, tmp29);
          }
        }
      }
      else
      {
        tmp30 = pow(tmp28, tmp29);
      }
      if(isnan(tmp30) || isinf(tmp30))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp28, tmp29);
      }
      tmp36 = (tmp30) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */));
    }
    tmp37 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp38 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp37 < 0.0 && tmp38 != 0.0)
    {
      tmp40 = modf(tmp38, &tmp41);
      
      if(tmp40 > 0.5)
      {
        tmp40 -= 1.0;
        tmp41 += 1.0;
      }
      else if(tmp40 < -0.5)
      {
        tmp40 += 1.0;
        tmp41 -= 1.0;
      }
      
      if(fabs(tmp40) < 1e-10)
        tmp39 = pow(tmp37, tmp41);
      else
      {
        tmp43 = modf(1.0/tmp38, &tmp42);
        if(tmp43 > 0.5)
        {
          tmp43 -= 1.0;
          tmp42 += 1.0;
        }
        else if(tmp43 < -0.5)
        {
          tmp43 += 1.0;
          tmp42 -= 1.0;
        }
        if(fabs(tmp43) < 1e-10 && ((unsigned long)tmp42 & 1))
        {
          tmp39 = -pow(-tmp37, tmp40)*pow(tmp37, tmp41);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp37, tmp38);
        }
      }
    }
    else
    {
      tmp39 = pow(tmp37, tmp38);
    }
    if(isnan(tmp39) || isinf(tmp39))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp37, tmp38);
    }
    tmp45 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp12)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (tmp26))) + (tmp36) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp39)))));
  }
  else
  {
    tmp45 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = tmp45;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_168(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,168};
  modelica_boolean tmp46;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->realVars[43] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 12, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (tmp46?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac9.dummyVarNLSJac9 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_169(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,169};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 11, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[39] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[39] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac9.dummyVarNLSJac9 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_170(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,170};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 11, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[39] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[39] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
gENSAE.PSId.$pDERNLSJac9.dummyVarNLSJac9 = (-gENSAE.Xppd) * gENSAE.id.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_171(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,171};
  jacobian->tmpVars[5] /* gENSAE.PSId.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[149] /* gENSAE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENSAE.id.SeedNLSJac9 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 = ($cse6 * gENSAE.iq.SeedNLSJac9 - $cse7 * gENSAE.id.SeedNLSJac9) * gENSAE.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_172(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,172};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[18] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENSAE.iq.SeedNLSJac9 SEED_VAR */) - ((data->localData[0]->realVars[19] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENSAE.id.SeedNLSJac9 SEED_VAR */))) * (data->simulationInfo->realParameter[102] /* gENSAE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 = ($cse7 * gENSAE.iq.SeedNLSJac9 + $cse6 * gENSAE.id.SeedNLSJac9) * gENSAE.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_173(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,173};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[19] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENSAE.iq.SeedNLSJac9 SEED_VAR */) + (data->localData[0]->realVars[18] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENSAE.id.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[102] /* gENSAE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
gENSAE.uq.$pDERNLSJac9.dummyVarNLSJac9 = gENSAE.PSId.$pDERNLSJac9.dummyVarNLSJac9 - gENSAE.R_a * gENSAE.iq.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_174(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,174};
  jacobian->tmpVars[8] /* gENSAE.uq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENSAE.PSId.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[134] /* gENSAE.R_a PARAM */) * (jacobian->seedVars[16] /* gENSAE.iq.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
gENSAE.PSIq.$pDERNLSJac9.dummyVarNLSJac9 = (-gENSAE.Xppq) * gENSAE.iq.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_175(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,175};
  jacobian->tmpVars[9] /* gENSAE.PSIq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[150] /* gENSAE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENSAE.iq.SeedNLSJac9 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
gENSAE.ud.$pDERNLSJac9.dummyVarNLSJac9 = (-gENSAE.PSIq.$pDERNLSJac9.dummyVarNLSJac9) - gENSAE.R_a * gENSAE.id.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_176(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,176};
  jacobian->tmpVars[10] /* gENSAE.ud.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENSAE.PSIq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[134] /* gENSAE.R_a PARAM */) * (jacobian->seedVars[17] /* gENSAE.id.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 = $cse6 * gENSAE.uq.$pDERNLSJac9.dummyVarNLSJac9 - $cse7 * gENSAE.ud.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_177(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,177};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[18] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENSAE.uq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[19] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENSAE.ud.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 = $cse6 * gENSAE.ud.$pDERNLSJac9.dummyVarNLSJac9 + $cse7 * gENSAE.uq.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_178(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,178};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[18] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENSAE.ud.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[19] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENSAE.uq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac9.dummyVarNLSJac9 = ((-$cse1) * gENCLS.id.SeedNLSJac9 - $cse2 * gENCLS.iq.SeedNLSJac9) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_179(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,179};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[14] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac9 SEED_VAR */) - ((data->localData[0]->realVars[15] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac9 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac9.dummyVarNLSJac9 = ($cse2 * gENCLS.id.SeedNLSJac9 - $cse1 * gENCLS.iq.SeedNLSJac9) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_180(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,180};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[15] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac9 SEED_VAR */) - ((data->localData[0]->realVars[14] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac9 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac9 - gENCLS.X_d * gENCLS.id.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_181(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,181};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac9 SEED_VAR */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 = gENCLS.X_d * gENCLS.iq.SeedNLSJac9 - gENCLS.R_a * gENCLS.id.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_182(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,182};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac9 SEED_VAR */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine4.ir.re.SeedNLSJac9) - gENCLS.p.ir.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_183(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,183};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac9 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine4.ir.im.SeedNLSJac9) - gENCLS.p.ii.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_184(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,184};
  jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac9 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
pwLine3.is.im.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine.ir.im.SeedNLSJac9) - pwLine1.is.im.SeedNLSJac9 - constantLoad.p.ii.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_185(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,185};
  jacobian->tmpVars[19] /* pwLine3.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine.ir.im.SeedNLSJac9 SEED_VAR */) - jacobian->seedVars[8] /* pwLine1.is.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
pwLine.ir.re.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine1.is.re.SeedNLSJac9) - pwLine3.is.re.SeedNLSJac9 - constantLoad.p.ir.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_186(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,186};
  jacobian->tmpVars[20] /* pwLine.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac9 SEED_VAR */) - jacobian->seedVars[4] /* pwLine3.is.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[5] /* constantLoad.p.ir.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine3.ir.im.SeedNLSJac9) - pwLine4.is.im.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_187(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,187};
  jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac9 SEED_VAR */) - jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine3.ir.re.SeedNLSJac9) - pwLine4.is.re.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_188(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,188};
  jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac9 SEED_VAR */) - jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac9.dummyVarNLSJac9 = $cse1 * gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 + (-$cse2) * gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vr.im.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_189(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,189};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (data->localData[0]->realVars[14] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[15] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac9 else pwLine1.vs.re.SeedNLSJac9 - pwLine1.vr.re.SeedNLSJac9 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_190(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,190};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine1.is.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac9 else pwLine1.vs.im.SeedNLSJac9 - pwLine1.vr.im.SeedNLSJac9 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_191(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,191};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp53 && tmp54)?jacobian->seedVars[8] /* pwLine1.is.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine1.is.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac9.dummyVarNLSJac9 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac9) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_192(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,192};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (jacobian->seedVars[5] /* constantLoad.p.ir.SeedNLSJac9 SEED_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac9.dummyVarNLSJac9 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac9 + pwLine1.vs.re.SeedNLSJac9 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_193(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,193};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (data->localData[0]->realVars[94] /* pwLine1.vs.im variable */) * (jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac9 SEED_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[95] /* pwLine1.vs.re variable */) * (jacobian->seedVars[5] /* constantLoad.p.ir.SeedNLSJac9 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 else pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vs.re.SeedNLSJac9 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_194(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,194};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp55 && tmp56)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 else pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vs.im.SeedNLSJac9 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_195(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,195};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac9 else pwLine1.vs.im.SeedNLSJac9 - pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,196};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp59 && tmp60)?jacobian->seedVars[6] /* pwLine.ir.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[20] /* pwLine.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.$pDERNLSJac9.dummyVarNLSJac9 else pwLine1.vs.im.SeedNLSJac9 - pwLine3.vr.im.SeedNLSJac9 - (pwLine3.Z.re * (pwLine3.is.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,197};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp61 && tmp62)?jacobian->tmpVars[19] /* pwLine3.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (jacobian->tmpVars[19] /* pwLine3.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine3.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac9.dummyVarNLSJac9 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac9 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 - (pwFault.R * pwLine3.vr.im.SeedNLSJac9 - pwFault.X * pwLine3.vr.re.SeedNLSJac9) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,198};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  modelica_boolean tmp73;
  modelica_real tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[181] /* pwFault.t1 PARAM */, 8, Less);
  tmp75 = (modelica_boolean)tmp63;
  if(tmp75)
  {
    tmp76 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, 9, Less);
    tmp73 = (modelica_boolean)(tmp64 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp73)
    {
      tmp74 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, 9, Less);
      tmp71 = (modelica_boolean)tmp65;
      if(tmp71)
      {
        tmp66 = data->simulationInfo->realParameter[180] /* pwFault.X PARAM */;
        tmp67 = data->simulationInfo->realParameter[179] /* pwFault.R PARAM */;
        tmp68 = data->simulationInfo->realParameter[180] /* pwFault.X PARAM */;
        tmp69 = data->simulationInfo->realParameter[179] /* pwFault.R PARAM */;
        tmp70 = (tmp68 * tmp68) + (tmp69 * tmp69);
        tmp72 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[179] /* pwFault.R PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) - ((data->simulationInfo->realParameter[180] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */))) * ((tmp66 * tmp66) + (tmp67 * tmp67)),(tmp70 * tmp70),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp72 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
      }
      tmp74 = tmp72;
    }
    tmp76 = tmp74;
  }
  jacobian->resultVars[9] /* $res10.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp76;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac9 else pwLine1.vs.re.SeedNLSJac9 - pwLine3.vr.re.SeedNLSJac9 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,199};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp77 && tmp78)?jacobian->seedVars[4] /* pwLine3.is.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine3.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (jacobian->tmpVars[19] /* pwLine3.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac9.dummyVarNLSJac9 else pwLine1.vs.re.SeedNLSJac9 - pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,200};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[192] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[193] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp79 && tmp80)?jacobian->tmpVars[20] /* pwLine.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[191] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[20] /* pwLine.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[190] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[188] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[189] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac9 else pwLine3.vr.re.SeedNLSJac9 - pwLine1.vs.re.SeedNLSJac9 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac9 + pwLine3.vr.im.SeedNLSJac9 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac9 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac9 + (-pwLine3.vr.re.SeedNLSJac9) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac9 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp81 && tmp82)?jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac9 else pwLine3.vr.im.SeedNLSJac9 - pwLine1.vs.im.SeedNLSJac9 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac9 + (-pwLine3.vr.re.SeedNLSJac9) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac9 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac9 + pwLine3.vr.im.SeedNLSJac9 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac9 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[214] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[215] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[213] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[212] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[210] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac9.dummyVarNLSJac9 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac9 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 - (pwFault.R * pwLine3.vr.re.SeedNLSJac9 + pwFault.X * pwLine3.vr.im.SeedNLSJac9) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  modelica_boolean tmp97;
  modelica_real tmp98;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[181] /* pwFault.t1 PARAM */, 8, Less);
  tmp97 = (modelica_boolean)tmp85;
  if(tmp97)
  {
    tmp98 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, 9, Less);
    tmp95 = (modelica_boolean)(tmp86 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp95)
    {
      tmp96 = jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[182] /* pwFault.t2 PARAM */, 9, Less);
      tmp93 = (modelica_boolean)tmp87;
      if(tmp93)
      {
        tmp88 = data->simulationInfo->realParameter[179] /* pwFault.R PARAM */;
        tmp89 = data->simulationInfo->realParameter[180] /* pwFault.X PARAM */;
        tmp90 = data->simulationInfo->realParameter[179] /* pwFault.R PARAM */;
        tmp91 = data->simulationInfo->realParameter[180] /* pwFault.X PARAM */;
        tmp92 = (tmp90 * tmp90) + (tmp91 * tmp91);
        tmp94 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[179] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) + (data->simulationInfo->realParameter[180] /* pwFault.X PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */)) * ((tmp88 * tmp88) + (tmp89 * tmp89)),(tmp92 * tmp92),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp94 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
      }
      tmp96 = tmp94;
    }
    tmp98 = tmp96;
  }
  jacobian->resultVars[14] /* $res15.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp98;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac9 else pwLine3.vr.im.SeedNLSJac9 - pwLine1.vr.im.SeedNLSJac9 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac9 + (-pwLine3.vr.re.SeedNLSJac9) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac9 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac9 + pwLine3.vr.im.SeedNLSJac9 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac9 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, 5, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac9 else pwLine3.vr.re.SeedNLSJac9 - pwLine1.vr.re.SeedNLSJac9 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac9 + pwLine3.vr.im.SeedNLSJac9 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac9 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac9 + (-pwLine3.vr.re.SeedNLSJac9) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac9 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, 5, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac9.dummyVarNLSJac9 = $cse2 * gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 + $cse1 * gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vr.re.SeedNLSJac9
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (data->localData[0]->realVars[15] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[14] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 else pwLine1.vr.re.SeedNLSJac9 - pwLine1.vs.re.SeedNLSJac9 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine1.vr.im.SeedNLSJac9 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac9 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine1.vr.re.SeedNLSJac9) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac9 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 else pwLine1.vr.im.SeedNLSJac9 - pwLine1.vs.im.SeedNLSJac9 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine1.vr.re.SeedNLSJac9) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac9 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine1.vr.im.SeedNLSJac9 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac9 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[203] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[204] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[202] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[201] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[199] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[200] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac9 else pwLine1.vr.re.SeedNLSJac9 - pwLine3.vr.re.SeedNLSJac9 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac9 + pwLine1.vr.im.SeedNLSJac9 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac9 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac9 + (-pwLine1.vr.re.SeedNLSJac9) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac9 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,209};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, 5, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac9 else pwLine1.vr.im.SeedNLSJac9 - pwLine3.vr.im.SeedNLSJac9 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac9 + (-pwLine1.vr.re.SeedNLSJac9) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac9 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac9 + pwLine1.vr.im.SeedNLSJac9 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac9 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,210};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[225] /* pwLine4.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[226] /* pwLine4.t2 PARAM */, 5, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[224] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[223] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[221] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[222] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacNLSJac9_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENSAE_INDEX_JAC_NLSJac9;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacNLSJac9_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENSAE_INDEX_JAC_NLSJac9;
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_166(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_167(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_168(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_169(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_170(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_171(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_172(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_173(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_174(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_175(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_176(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_177(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_178(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_179(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_180(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_181(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_182(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_183(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_184(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_185(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_186(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_187(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_188(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_189(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_190(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_191(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_192(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_193(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_194(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_195(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_196(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_197(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_198(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_199(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_200(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_201(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_202(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_203(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_204(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_205(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_206(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_207(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_208(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_209(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENSAE_eqFunction_210(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENSAE_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENSAE_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENSAE_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianNLSJac9(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,8,11,8,11};
  const int rowIndex[112] = {14,15,16,12,13,14,9,15,16,9,12,13,7,8,10,11,3,4,7,11,7,8,10,11,3,4,8,10,1,2,8,10,1,2,7,11,18,19,20,21,18,19,20,21,0,17,18,19,0,17,18,19,0,2,15,18,19,20,21,1,16,17,18,19,20,21,5,6,7,11,5,6,7,11,8,9,12,13,14,15,16,21,1,2,3,4,5,7,8,10,11,12,18,9,10,12,13,14,15,16,20,1,2,3,4,6,7,8,10,11,13,19};
  int i = 0;
  
  jacobian->sizeCols = 22;
  jacobian->sizeRows = 22;
  jacobian->sizeTmpVars = 45;
  jacobian->seedVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(45,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(112*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 112;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  jacobian->sparsePattern->maxColors = 10;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 112*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[21] = 1;
  jacobian->sparsePattern->colorCols[20] = 2;
  jacobian->sparsePattern->colorCols[19] = 3;
  jacobian->sparsePattern->colorCols[18] = 4;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[17] = 5;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[16] = 6;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[9] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[2] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[8] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[3] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENSAE_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,4,4,4,4,4,4,2};
  const int rowIndex[26] = {2,3,4,6,2,3,4,6,2,3,4,6,2,3,4,6,2,3,4,6,2,3,4,6,5,6};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(26*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 26;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(7*sizeof(int));
  jacobian->sparsePattern->maxColors = 7;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 26*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[4] = 1;
  jacobian->sparsePattern->colorCols[3] = 2;
  jacobian->sparsePattern->colorCols[2] = 3;
  jacobian->sparsePattern->colorCols[5] = 4;
  jacobian->sparsePattern->colorCols[6] = 5;
  jacobian->sparsePattern->colorCols[1] = 6;
  jacobian->sparsePattern->colorCols[0] = 7;
  TRACE_POP
  return 0;
}


