/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 797
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac17 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac17) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_797(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,797};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[132] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[131] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) + (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_798(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,798};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_799(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,799};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp45 = (modelica_boolean)tmp3;
  if(tmp45)
  {
    tmp4 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp5 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    }tmp11 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp12 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    }tmp26 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp26)
    {
      tmp27 = 0.0;
    }
    else
    {
      tmp19 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp20 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp27 = (tmp21) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */));
    }
    tmp36 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp36)
    {
      tmp37 = 0.0;
    }
    else
    {
      tmp29 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp30 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp37 = (tmp31) * ((-1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */));
    }
    tmp38 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp39 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp46 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * (tmp27))) + (tmp37) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp40)))));
  }
  else
  {
    tmp46 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac17.dummyVarNLSJac17 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_800(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,800};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 801
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac17.dummyVarNLSJac17 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_801(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,801};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 802
type: SIMPLE_ASSIGN
gENROU.PSIq.$pDERNLSJac17.dummyVarNLSJac17 = (-gENROU.Xppq) * gENROU.iq.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_802(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,802};
  jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac17 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 803
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 = ($cse6 * gENROU.iq.SeedNLSJac17 - $cse7 * gENROU.id.SeedNLSJac17) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_803(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,803};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac17 SEED_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac17 SEED_VAR */))) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 804
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 = ($cse7 * gENROU.iq.SeedNLSJac17 + $cse6 * gENROU.id.SeedNLSJac17) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_804(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,804};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac17 SEED_VAR */) + (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 805
type: SIMPLE_ASSIGN
gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 = (-gENROU.PSIq.$pDERNLSJac17.dummyVarNLSJac17) - gENROU.R_a * gENROU.id.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_805(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,805};
  jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac17 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 806
type: SIMPLE_ASSIGN
gENROU.PSId.$pDERNLSJac17.dummyVarNLSJac17 = (-gENROU.Xppd) * gENROU.id.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_806(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,806};
  jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac17 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 807
type: SIMPLE_ASSIGN
gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 = gENROU.PSId.$pDERNLSJac17.dummyVarNLSJac17 - gENROU.R_a * gENROU.iq.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_807(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,807};
  jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac17 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 808
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 = $cse6 * gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 + $cse7 * gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_808(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,808};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 809
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 = $cse6 * gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 - $cse7 * gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_809(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,809};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 810
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac17.dummyVarNLSJac17 = ((-$cse1) * gENCLS.id.SeedNLSJac17 - $cse2 * gENCLS.iq.SeedNLSJac17) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_810(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,810};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac17 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac17 SEED_VAR */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 811
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac17.dummyVarNLSJac17 = ($cse2 * gENCLS.id.SeedNLSJac17 - $cse1 * gENCLS.iq.SeedNLSJac17) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_811(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,811};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac17 SEED_VAR */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac17 SEED_VAR */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 812
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac17 - gENCLS.X_d * gENCLS.id.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_812(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,812};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac17 SEED_VAR */) - ((data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac17 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 813
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 = gENCLS.X_d * gENCLS.iq.SeedNLSJac17 - gENCLS.R_a * gENCLS.id.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_813(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,813};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac17 SEED_VAR */) - ((data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac17 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine1.ir.im.SeedNLSJac17) - gENCLS.p.ii.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_814(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,814};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac17 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine4.ir.re.SeedNLSJac17) - gENCLS.p.ir.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_815(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,815};
  jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac17 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine3.ir.im.SeedNLSJac17) - pwLine4.is.im.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_816(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,816};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac17 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine3.ir.re.SeedNLSJac17) - pwLine4.is.re.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_817(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,817};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac17 SEED_VAR */) - jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine.ir.im.SeedNLSJac17) - pwLine1.is.im.SeedNLSJac17 - pwLine3.is.im.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_818(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,818};
  jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac17 SEED_VAR */) - jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine1.is.re.SeedNLSJac17) - pwLine3.is.re.SeedNLSJac17 - constantLoad.p.ir.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_819(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,819};
  jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac17 SEED_VAR */) - jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac17.dummyVarNLSJac17 = $cse1 * gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 + (-$cse2) * gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vr.im.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_820(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,820};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac17 else pwLine1.vs.im.SeedNLSJac17 - pwLine3.vr.im.SeedNLSJac17 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_821(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,821};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac17 else pwLine1.vs.re.SeedNLSJac17 - pwLine3.vr.re.SeedNLSJac17 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_822(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,822};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp53 && tmp54)?jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac17 else pwLine3.vr.im.SeedNLSJac17 - pwLine1.vs.im.SeedNLSJac17 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac17 + (-pwLine3.vr.re.SeedNLSJac17) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac17 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac17 + pwLine3.vr.im.SeedNLSJac17 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac17 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_823(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,823};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp55 && tmp56)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac17 else pwLine3.vr.re.SeedNLSJac17 - pwLine1.vr.re.SeedNLSJac17 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac17 + pwLine3.vr.im.SeedNLSJac17 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac17 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac17 + (-pwLine3.vr.re.SeedNLSJac17) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac17 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_824(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,824};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac17.dummyVarNLSJac17 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac17 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 - (pwFault.R * pwLine3.vr.im.SeedNLSJac17 - pwFault.X * pwLine3.vr.re.SeedNLSJac17) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_825(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,825};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  modelica_boolean tmp69;
  modelica_real tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, 9, Less);
  tmp71 = (modelica_boolean)tmp59;
  if(tmp71)
  {
    tmp72 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
    tmp69 = (modelica_boolean)(tmp60 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */);
    if(tmp69)
    {
      tmp70 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
      tmp67 = (modelica_boolean)tmp61;
      if(tmp67)
      {
        tmp62 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp63 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp64 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp65 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp66 = (tmp64 * tmp64) + (tmp65 * tmp65);
        tmp68 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) - ((data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */))) * ((tmp62 * tmp62) + (tmp63 * tmp63)),(tmp66 * tmp66),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp68 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
      }
      tmp70 = tmp68;
    }
    tmp72 = tmp70;
  }
  jacobian->resultVars[5] /* $res6.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = tmp72;
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac17 else pwLine3.vr.im.SeedNLSJac17 - pwLine1.vr.im.SeedNLSJac17 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac17 + (-pwLine3.vr.re.SeedNLSJac17) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac17 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac17 + pwLine3.vr.im.SeedNLSJac17 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac17 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_826(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,826};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp73 && tmp74)?jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac17.dummyVarNLSJac17 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac17 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 - (pwFault.R * pwLine3.vr.re.SeedNLSJac17 + pwFault.X * pwLine3.vr.im.SeedNLSJac17) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_827(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,827};
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
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, 9, Less);
  tmp87 = (modelica_boolean)tmp75;
  if(tmp87)
  {
    tmp88 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
    tmp85 = (modelica_boolean)(tmp76 && data->simulationInfo->booleanParameter[77] /* pwFault.ground PARAM */);
    if(tmp85)
    {
      tmp86 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
      tmp83 = (modelica_boolean)tmp77;
      if(tmp83)
      {
        tmp78 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp79 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp80 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp81 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp82 = (tmp80 * tmp80) + (tmp81 * tmp81);
        tmp84 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) + (data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */)) * ((tmp78 * tmp78) + (tmp79 * tmp79)),(tmp82 * tmp82),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp84 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
      }
      tmp86 = tmp84;
    }
    tmp88 = tmp86;
  }
  jacobian->resultVars[7] /* $res8.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = tmp88;
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac17 else pwLine3.vr.re.SeedNLSJac17 - pwLine1.vs.re.SeedNLSJac17 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac17 + pwLine3.vr.im.SeedNLSJac17 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac17 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac17 + (-pwLine3.vr.re.SeedNLSJac17) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac17 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_828(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,828};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 else pwLine1.vr.re.SeedNLSJac17 - pwLine1.vs.re.SeedNLSJac17 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vr.im.SeedNLSJac17 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac17 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac17 + (-pwLine1.vr.re.SeedNLSJac17) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac17 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_829(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,829};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac17.dummyVarNLSJac17 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac17 + pwLine1.vs.re.SeedNLSJac17 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_830(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,830};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac17 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac17.dummyVarNLSJac17 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac17) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_831(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,831};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = (data->localData[0]->realVars[131] /* pwLine1.vs.im variable */) * (jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac17 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[132] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 else pwLine1.vs.re.SeedNLSJac17 - pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_832(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,832};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac17 else pwLine1.vs.im.SeedNLSJac17 - pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_833(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,833};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 else pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vs.re.SeedNLSJac17 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 + (-pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_834(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,834};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 else pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vs.im.SeedNLSJac17 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 + (-pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_835(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,835};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac17 else pwLine1.vs.re.SeedNLSJac17 - pwLine1.vr.re.SeedNLSJac17 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_836(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,836};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac17 else pwLine1.vs.im.SeedNLSJac17 - pwLine1.vr.im.SeedNLSJac17 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_837(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,837};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac17 else pwLine1.vr.re.SeedNLSJac17 - pwLine3.vr.re.SeedNLSJac17 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac17 + pwLine1.vr.im.SeedNLSJac17 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac17 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 + (-pwLine1.vr.re.SeedNLSJac17) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac17 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_838(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,838};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 else pwLine1.vr.im.SeedNLSJac17 - pwLine3.vr.im.SeedNLSJac17 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 + (-pwLine1.vr.re.SeedNLSJac17) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac17 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac17 + pwLine1.vr.im.SeedNLSJac17 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac17 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_839(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,839};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac17 else pwLine1.vr.im.SeedNLSJac17 - pwLine1.vs.im.SeedNLSJac17 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac17 + (-pwLine1.vr.re.SeedNLSJac17) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac17 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vr.im.SeedNLSJac17 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac17 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_840(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,840};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac17.dummyVarNLSJac17 = $cse2 * gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 + $cse1 * gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vr.re.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,841};
  jacobian->resultVars[21] /* $res22.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = (data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacNLSJac17_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_NLSJac17;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacNLSJac17_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_NLSJac17;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_797(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_798(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_799(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_800(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_801(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_802(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_803(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_804(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_805(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_806(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_807(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_808(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_809(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_810(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_811(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_812(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_813(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_814(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_815(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_816(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_817(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_818(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_819(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_820(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_821(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_822(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_823(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_824(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_825(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_826(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_827(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_828(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_829(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_830(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_831(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_832(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_833(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_834(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_835(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_836(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_837(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_838(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_839(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_840(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_841(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 887
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.n1.$pDERNLSJac18.dummyVarNLSJac18 = if eSST4B.add2.y > eSST4B.limiter1.uMax then 0.0 else if eSST4B.add2.y < eSST4B.limiter1.uMin then 0.0 else eSST4B.add2.y.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_887(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,887};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_real tmp114;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */, 30, Greater);
  tmp113 = (modelica_boolean)tmp111;
  if(tmp113)
  {
    tmp114 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp112, data->localData[0]->realVars[73] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */, 31, Less);
    tmp114 = (tmp112?0.0:jacobian->seedVars[0] /* eSST4B.add2.y.SeedNLSJac18 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eSST4B.lV_Gate.n1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = tmp114;
  TRACE_POP
}

/*
equation index: 888
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.p.$pDERNLSJac18.dummyVarNLSJac18 = if eSST4B.lV_Gate.n1 > const1.k then 0.0 else eSST4B.lV_Gate.n1.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_888(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,888};
  modelica_boolean tmp115;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->realVars[74] /* eSST4B.lV_Gate.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 25, Greater);
  jacobian->tmpVars[1] /* eSST4B.lV_Gate.p.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (tmp115?0.0:jacobian->tmpVars[0] /* eSST4B.lV_Gate.n1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 889
type: SIMPLE_ASSIGN
eSST4B.EFD.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.lV_Gate.p.$pDERNLSJac18.dummyVarNLSJac18 * eSST4B.maxLimiter.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_889(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,889};
  jacobian->tmpVars[2] /* eSST4B.EFD.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[1] /* eSST4B.lV_Gate.p.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[77] /* eSST4B.maxLimiter.y variable */);
  TRACE_POP
}

/*
equation index: 890
type: SIMPLE_ASSIGN
eSST4B.add1.u1.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.gain.k * eSST4B.EFD.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_890(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,890};
  jacobian->tmpVars[3] /* eSST4B.add1.u1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[150] /* eSST4B.gain.k PARAM */) * (jacobian->tmpVars[2] /* eSST4B.EFD.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 891
type: SIMPLE_ASSIGN
eSST4B.Gain2.u.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.add1.k1 * eSST4B.add1.u1.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_891(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,891};
  jacobian->tmpVars[4] /* eSST4B.Gain2.u.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[141] /* eSST4B.add1.k1 PARAM */) * (jacobian->tmpVars[3] /* eSST4B.add1.u1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 892
type: SIMPLE_ASSIGN
eSST4B.Gain2.y.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.Gain2.k * eSST4B.Gain2.u.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_892(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,892};
  jacobian->tmpVars[5] /* eSST4B.Gain2.y.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[88] /* eSST4B.Gain2.k PARAM */) * (jacobian->tmpVars[4] /* eSST4B.Gain2.u.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 893
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.add2.k1 * eSST4B.Gain2.y.$pDERNLSJac18.dummyVarNLSJac18 - eSST4B.add2.y.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_893(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,893};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[143] /* eSST4B.add2.k1 PARAM */) * (jacobian->tmpVars[5] /* eSST4B.Gain2.y.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* eSST4B.add2.y.SeedNLSJac18 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacNLSJac18_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_NLSJac18;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacNLSJac18_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_NLSJac18;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_887(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_888(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_889(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_890(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_891(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_892(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_893(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianNLSJac17(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {12,13,16,17,10,11,12,13,10,11,12,13,10,11,16,17,3,7,8,4,6,7,4,5,6,3,5,8,1,2,10,11,1,2,12,13,9,18,19,20,9,18,19,20,0,9,18,19,20,21,0,9,18,19,20,21,4,9,16,18,19,20,21,0,6,9,17,18,19,20,12,13,14,15,12,13,14,15,1,2,3,10,11,12,13,15,16,17,20,1,2,8,9,10,11,12,13,14,16,17,1,3,4,5,6,7,8,19,2,3,4,5,6,7,8,18};
  int i = 0;
  
  jacobian->sizeCols = 22;
  jacobian->sizeRows = 22;
  jacobian->sizeTmpVars = 45;
  jacobian->seedVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(45,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(116*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 116;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  jacobian->sparsePattern->maxColors = 10;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 116*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[21] = 1;
  jacobian->sparsePattern->colorCols[20] = 2;
  jacobian->sparsePattern->colorCols[19] = 3;
  jacobian->sparsePattern->colorCols[18] = 4;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[17] = 5;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[16] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[9] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[8] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianNLSJac18(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 7;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+12] = {0,5,3,2,4,9,9,9,9,9,9,9,2};
  const int rowIndex[79] = {0,1,2,3,7,1,2,7,2,7,1,2,3,7,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,10,11};
  int i = 0;
  
  jacobian->sizeCols = 12;
  jacobian->sizeRows = 12;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((12+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(79*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 79;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(12*sizeof(int));
  jacobian->sparsePattern->maxColors = 11;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (12+1)*sizeof(int));
  
  for(i=2;i<12+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 79*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[3] = 3;
  jacobian->sparsePattern->colorCols[9] = 4;
  jacobian->sparsePattern->colorCols[8] = 5;
  jacobian->sparsePattern->colorCols[7] = 6;
  jacobian->sparsePattern->colorCols[6] = 7;
  jacobian->sparsePattern->colorCols[10] = 8;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[5] = 10;
  jacobian->sparsePattern->colorCols[4] = 11;
  TRACE_POP
  return 0;
}


