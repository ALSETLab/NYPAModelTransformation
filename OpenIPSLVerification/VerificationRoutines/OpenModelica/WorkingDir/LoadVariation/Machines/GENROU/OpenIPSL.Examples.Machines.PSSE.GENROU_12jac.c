/* Jacobians 6 */
#include "OpenIPSL.Examples.Machines.PSSE.GENROU_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENROU_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 171
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac1 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac1) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_171(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,171};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[99] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[98] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[99] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[98] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_172(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,172};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[45] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[45] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[45] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_173(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,173};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[45] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp45 = (modelica_boolean)tmp3;
  if(tmp45)
  {
    tmp4 = data->localData[0]->realVars[45] /* constantLoad.v variable */;
    tmp5 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    }tmp11 = data->localData[0]->realVars[45] /* constantLoad.v variable */;
    tmp12 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    }tmp26 = (modelica_boolean)(data->localData[0]->realVars[45] /* constantLoad.v variable */ == 0.0);
    if(tmp26)
    {
      tmp27 = 0.0;
    }
    else
    {
      tmp19 = data->localData[0]->realVars[45] /* constantLoad.v variable */;
      tmp20 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp27 = (tmp21) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
    }
    tmp36 = (modelica_boolean)(data->localData[0]->realVars[45] /* constantLoad.v variable */ == 0.0);
    if(tmp36)
    {
      tmp37 = 0.0;
    }
    else
    {
      tmp29 = data->localData[0]->realVars[45] /* constantLoad.v variable */;
      tmp30 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp37 = (tmp31) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
    }
    tmp38 = data->localData[0]->realVars[45] /* constantLoad.v variable */;
    tmp39 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    tmp46 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (tmp27))) + (tmp37) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp40)))));
  }
  else
  {
    tmp46 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac1.dummyVarNLSJac1 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 + constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 + constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 + constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 + constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_174(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,174};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[41] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[45] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[45] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[41] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[45] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[45] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac1.dummyVarNLSJac1 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 + constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 + constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 + constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 + constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_175(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,175};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[41] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[45] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[45] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[41] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[45] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[45] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
gENROU.PSIq.$pDERNLSJac1.dummyVarNLSJac1 = (-gENROU.Xppq) * gENROU.iq.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_176(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,176};
  jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[158] /* gENROU.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac1.dummyVarNLSJac1 = ($cse7 * gENROU.iq.SeedNLSJac1 + $cse6 * gENROU.id.SeedNLSJac1) * gENROU.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_177(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,177};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[21] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac1 SEED_VAR */) + (data->localData[0]->realVars[20] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[102] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac1.dummyVarNLSJac1 = ($cse6 * gENROU.iq.SeedNLSJac1 - $cse7 * gENROU.id.SeedNLSJac1) * gENROU.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_178(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,178};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[20] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac1 SEED_VAR */) - ((data->localData[0]->realVars[21] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[102] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
gENROU.ud.$pDERNLSJac1.dummyVarNLSJac1 = (-gENROU.PSIq.$pDERNLSJac1.dummyVarNLSJac1) - gENROU.R_a * gENROU.id.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_179(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,179};
  jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[140] /* gENROU.R_a PARAM */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
gENROU.PSId.$pDERNLSJac1.dummyVarNLSJac1 = (-gENROU.Xppd) * gENROU.id.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_180(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,180};
  jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[157] /* gENROU.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
gENROU.uq.$pDERNLSJac1.dummyVarNLSJac1 = gENROU.PSId.$pDERNLSJac1.dummyVarNLSJac1 - gENROU.R_a * gENROU.iq.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_181(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,181};
  jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[140] /* gENROU.R_a PARAM */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 = $cse6 * gENROU.ud.$pDERNLSJac1.dummyVarNLSJac1 + $cse7 * gENROU.uq.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_182(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,182};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[20] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[21] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 = $cse6 * gENROU.uq.$pDERNLSJac1.dummyVarNLSJac1 - $cse7 * gENROU.ud.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_183(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,183};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[20] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[21] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac1.dummyVarNLSJac1 = ((-$cse1) * gENCLS.id.SeedNLSJac1 - $cse2 * gENCLS.iq.SeedNLSJac1) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_184(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,184};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[16] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac1 SEED_VAR */) - ((data->localData[0]->realVars[17] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac1.dummyVarNLSJac1 = ($cse2 * gENCLS.id.SeedNLSJac1 - $cse1 * gENCLS.iq.SeedNLSJac1) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_185(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,185};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[17] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac1 SEED_VAR */) - ((data->localData[0]->realVars[16] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac1 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac1.dummyVarNLSJac1 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac1 - gENCLS.X_d * gENCLS.id.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_186(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,186};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac1.dummyVarNLSJac1 = gENCLS.X_d * gENCLS.iq.SeedNLSJac1 - gENCLS.R_a * gENCLS.id.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_187(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,187};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine4.ir.re.SeedNLSJac1) - gENCLS.p.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_188(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,188};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine4.ir.im.SeedNLSJac1) - gENCLS.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_189(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,189};
  jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine3.ir.im.SeedNLSJac1) - pwLine4.is.im.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_190(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,190};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine3.ir.re.SeedNLSJac1) - pwLine4.is.re.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_191(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,191};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
pwLine1.is.im.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine.ir.im.SeedNLSJac1) - pwLine3.is.im.SeedNLSJac1 - constantLoad.p.ii.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_192(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,192};
  jacobian->tmpVars[21] /* pwLine1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
pwLine1.is.re.$pDERNLSJac1.dummyVarNLSJac1 = (-pwLine.ir.re.SeedNLSJac1) - pwLine3.is.re.SeedNLSJac1 - constantLoad.p.ir.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_193(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,193};
  jacobian->tmpVars[22] /* pwLine1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */) - jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac1.dummyVarNLSJac1 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac1 + pwLine1.vs.re.SeedNLSJac1 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_194(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,194};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[98] /* pwLine1.vs.im variable */) * (jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[43] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[99] /* pwLine1.vs.re variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[44] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac1.dummyVarNLSJac1 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac1) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac1.dummyVarNLSJac1 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_195(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,195};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[98] /* pwLine1.vs.im variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac1 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->localData[0]->realVars[44] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->localData[0]->realVars[43] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[99] /* pwLine1.vs.re variable */) * (jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac1 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac1.dummyVarNLSJac1 = $cse1 * gENCLS.vq.$pDERNLSJac1.dummyVarNLSJac1 + (-$cse2) * gENCLS.vd.$pDERNLSJac1.dummyVarNLSJac1 - pwLine1.vr.im.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,196};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[16] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[17] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac1.dummyVarNLSJac1 = $cse2 * gENCLS.vq.$pDERNLSJac1.dummyVarNLSJac1 + $cse1 * gENCLS.vd.$pDERNLSJac1.dummyVarNLSJac1 - pwLine1.vr.re.SeedNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,197};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[17] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[16] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac1.dummyVarNLSJac1 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac1 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 - (pwFault.R * pwLine3.vr.im.SeedNLSJac1 - pwFault.X * pwLine3.vr.re.SeedNLSJac1) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,198};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[190] /* pwFault.t1 PARAM */, 11, Less);
  tmp63 = (modelica_boolean)tmp51;
  if(tmp63)
  {
    tmp64 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[191] /* pwFault.t2 PARAM */, 12, Less);
    tmp61 = (modelica_boolean)(tmp52 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp61)
    {
      tmp62 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[191] /* pwFault.t2 PARAM */, 12, Less);
      tmp59 = (modelica_boolean)tmp53;
      if(tmp59)
      {
        tmp54 = data->simulationInfo->realParameter[189] /* pwFault.X PARAM */;
        tmp55 = data->simulationInfo->realParameter[188] /* pwFault.R PARAM */;
        tmp56 = data->simulationInfo->realParameter[189] /* pwFault.X PARAM */;
        tmp57 = data->simulationInfo->realParameter[188] /* pwFault.R PARAM */;
        tmp58 = (tmp56 * tmp56) + (tmp57 * tmp57);
        tmp60 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[188] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */) - ((data->simulationInfo->realParameter[189] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */))) * ((tmp54 * tmp54) + (tmp55 * tmp55)),(tmp58 * tmp58),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp60 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
      }
      tmp62 = tmp60;
    }
    tmp64 = tmp62;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp64;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac1 else pwLine3.vr.re.SeedNLSJac1 - pwLine1.vs.re.SeedNLSJac1 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac1 + pwLine3.vr.im.SeedNLSJac1 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac1 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac1 + (-pwLine3.vr.re.SeedNLSJac1) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac1 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,199};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[223] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[224] /* pwLine3.t2 PARAM */, 10, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp65 && tmp66)?jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[222] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[219] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[220] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[221] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[219] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[220] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac1.dummyVarNLSJac1 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac1 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 - (pwFault.R * pwLine3.vr.re.SeedNLSJac1 + pwFault.X * pwLine3.vr.im.SeedNLSJac1) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,200};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[190] /* pwFault.t1 PARAM */, 11, Less);
  tmp79 = (modelica_boolean)tmp67;
  if(tmp79)
  {
    tmp80 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[191] /* pwFault.t2 PARAM */, 12, Less);
    tmp77 = (modelica_boolean)(tmp68 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp77)
    {
      tmp78 = jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[191] /* pwFault.t2 PARAM */, 12, Less);
      tmp75 = (modelica_boolean)tmp69;
      if(tmp75)
      {
        tmp70 = data->simulationInfo->realParameter[188] /* pwFault.R PARAM */;
        tmp71 = data->simulationInfo->realParameter[189] /* pwFault.X PARAM */;
        tmp72 = data->simulationInfo->realParameter[188] /* pwFault.R PARAM */;
        tmp73 = data->simulationInfo->realParameter[189] /* pwFault.X PARAM */;
        tmp74 = (tmp72 * tmp72) + (tmp73 * tmp73);
        tmp76 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[188] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */) + (data->simulationInfo->realParameter[189] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */)) * ((tmp70 * tmp70) + (tmp71 * tmp71)),(tmp74 * tmp74),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp76 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
      }
      tmp78 = tmp76;
    }
    tmp80 = tmp78;
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp80;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac1 else pwLine1.vs.re.SeedNLSJac1 - pwLine3.vr.re.SeedNLSJac1 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[223] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[224] /* pwLine3.t2 PARAM */, 10, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp81 && tmp82)?jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[222] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[219] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[220] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[221] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[219] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[220] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac1 else pwLine1.vs.im.SeedNLSJac1 - pwLine3.vr.im.SeedNLSJac1 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[223] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[224] /* pwLine3.t2 PARAM */, 10, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[222] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[219] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[220] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[221] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[219] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[220] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac1 else pwLine3.vr.im.SeedNLSJac1 - pwLine1.vs.im.SeedNLSJac1 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac1 + (-pwLine3.vr.re.SeedNLSJac1) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac1 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac1 + pwLine3.vr.im.SeedNLSJac1 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac1 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[223] /* pwLine3.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[224] /* pwLine3.t2 PARAM */, 10, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[222] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[219] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[220] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[221] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[219] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[220] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac1 else pwLine3.vr.im.SeedNLSJac1 - pwLine1.vr.im.SeedNLSJac1 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac1 + (-pwLine3.vr.re.SeedNLSJac1) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac1 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac1 + pwLine3.vr.im.SeedNLSJac1 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac1 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[234] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[235] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[233] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[230] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[231] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[232] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[230] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[231] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac1 else pwLine3.vr.re.SeedNLSJac1 - pwLine1.vr.re.SeedNLSJac1 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac1 + pwLine3.vr.im.SeedNLSJac1 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac1 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac1 + (-pwLine3.vr.re.SeedNLSJac1) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac1 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[234] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[235] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[233] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[230] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[231] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[232] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[230] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[231] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac1 else pwLine1.vr.re.SeedNLSJac1 - pwLine3.vr.re.SeedNLSJac1 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac1 + pwLine1.vr.im.SeedNLSJac1 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac1 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac1 + (-pwLine1.vr.re.SeedNLSJac1) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac1 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[234] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[235] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[233] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[230] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[231] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[232] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[230] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[231] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.$pDERNLSJac1.dummyVarNLSJac1 else pwLine1.vs.re.SeedNLSJac1 - pwLine1.vr.re.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.is.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[212] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[213] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->tmpVars[22] /* pwLine1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[211] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[208] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[209] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[210] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[21] /* pwLine1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[208] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[209] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac1 else pwLine1.vs.im.SeedNLSJac1 - pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[201] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[202] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[200] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[197] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[198] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[199] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[197] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[198] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac1.dummyVarNLSJac1 else pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 - pwLine1.vs.im.SeedNLSJac1 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,209};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[201] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[202] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[200] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[197] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[198] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[199] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[197] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[198] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac1.dummyVarNLSJac1 else pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - pwLine1.vs.re.SeedNLSJac1 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,210};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[201] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[202] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[200] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[197] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[198] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[199] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[197] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[198] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.$pDERNLSJac1.dummyVarNLSJac1 else pwLine1.vs.im.SeedNLSJac1 - pwLine1.vr.im.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.is.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_211(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,211};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[212] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[213] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->tmpVars[21] /* pwLine1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[211] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[21] /* pwLine1.is.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[208] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[209] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[210] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine1.is.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[208] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[209] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac1 else pwLine1.vs.re.SeedNLSJac1 - pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac1 + pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac1 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac1 + (-pwLine1.vs.re.SeedNLSJac1) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac1 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_212(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,212};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[201] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[202] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[0] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[200] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[197] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[198] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[199] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[197] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[198] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 else pwLine1.vr.im.SeedNLSJac1 - pwLine1.vs.im.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine1.vr.re.SeedNLSJac1) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac1 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine1.vr.im.SeedNLSJac1 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_213(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,213};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[212] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[213] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[211] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[208] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[209] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[210] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[208] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[209] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 else pwLine1.vr.re.SeedNLSJac1 - pwLine1.vs.re.SeedNLSJac1 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 + pwLine1.vr.im.SeedNLSJac1 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac1 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 + (-pwLine1.vr.re.SeedNLSJac1) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac1 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_214(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,214};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[212] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[213] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[211] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[208] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[209] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[210] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[208] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[209] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac1.dummyVarNLSJac1 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac1 else pwLine1.vr.im.SeedNLSJac1 - pwLine3.vr.im.SeedNLSJac1 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac1 + (-pwLine1.vr.re.SeedNLSJac1) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac1 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac1 + pwLine1.vr.im.SeedNLSJac1 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac1 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_215(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,215};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[234] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[235] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac1 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac1 SEED_VAR */ - ((data->simulationInfo->realParameter[233] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac1 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */)) * (data->simulationInfo->realParameter[230] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[231] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[232] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac1 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[230] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac1 SEED_VAR */) * (data->simulationInfo->realParameter[231] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacNLSJac1_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_NLSJac1;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_NLSJac1;
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_171(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_172(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_173(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_174(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_175(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_176(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_177(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_178(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_179(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_180(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_181(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_182(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_183(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_184(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_185(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_186(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_187(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_188(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_189(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_190(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_191(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_192(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_193(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_194(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_195(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_196(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_197(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_198(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_199(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_200(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_201(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_202(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_203(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_204(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_205(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_206(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_207(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_208(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_209(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_210(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_211(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_212(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_213(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_214(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENROU_eqFunction_215(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENROU_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENROU_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {13,14,17,18,7,8,13,17,13,14,17,18,7,8,13,17,6,10,11,5,6,9,4,5,9,4,10,11,0,1,13,17,0,1,13,17,12,19,20,21,12,19,20,21,2,3,19,20,2,3,19,20,2,10,12,17,19,20,21,3,11,12,13,19,20,21,14,15,16,18,14,15,16,18,0,1,7,8,9,13,14,15,17,18,19,0,1,5,7,8,13,14,16,17,18,20,4,5,6,7,9,10,11,12,4,5,6,8,9,10,11,21};
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
  jacobian->sparsePattern->colorCols[19] = 1;
  jacobian->sparsePattern->colorCols[18] = 2;
  jacobian->sparsePattern->colorCols[15] = 3;
  jacobian->sparsePattern->colorCols[14] = 4;
  jacobian->sparsePattern->colorCols[9] = 5;
  jacobian->sparsePattern->colorCols[8] = 6;
  jacobian->sparsePattern->colorCols[21] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[17] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[20] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[16] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENROU_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+8] = {0,5,5,5,5,5,5,5,2};
  const int rowIndex[37] = {2,3,4,5,7,2,3,4,5,7,2,3,4,5,7,2,3,4,5,7,2,3,4,5,7,2,3,4,5,7,2,3,4,5,7,6,7};
  int i = 0;
  
  jacobian->sizeCols = 8;
  jacobian->sizeRows = 8;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((8+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(37*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 37;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(8*sizeof(int));
  jacobian->sparsePattern->maxColors = 8;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (8+1)*sizeof(int));
  
  for(i=2;i<8+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 37*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[5] = 1;
  jacobian->sparsePattern->colorCols[4] = 2;
  jacobian->sparsePattern->colorCols[3] = 3;
  jacobian->sparsePattern->colorCols[2] = 4;
  jacobian->sparsePattern->colorCols[6] = 5;
  jacobian->sparsePattern->colorCols[7] = 6;
  jacobian->sparsePattern->colorCols[1] = 7;
  jacobian->sparsePattern->colorCols[0] = 8;
  TRACE_POP
  return 0;
}


