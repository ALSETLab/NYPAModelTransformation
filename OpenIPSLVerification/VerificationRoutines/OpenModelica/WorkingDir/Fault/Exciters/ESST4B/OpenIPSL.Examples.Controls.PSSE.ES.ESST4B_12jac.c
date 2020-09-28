/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST4B_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 394
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac17 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac17) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_394(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,394};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[130] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[129] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) + (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_395(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,395};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_396(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,396};
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
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp42 = (modelica_boolean)tmp3;
  if(tmp42)
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
    }tmp18 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp19 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ - 1.0;
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
    }tmp33 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp33)
    {
      tmp34 = 0.0;
    }
    else
    {
      tmp26 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp27 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp26 < 0.0 && tmp27 != 0.0)
      {
        tmp29 = modf(tmp27, &tmp30);
        
        if(tmp29 > 0.5)
        {
          tmp29 -= 1.0;
          tmp30 += 1.0;
        }
        else if(tmp29 < -0.5)
        {
          tmp29 += 1.0;
          tmp30 -= 1.0;
        }
        
        if(fabs(tmp29) < 1e-10)
          tmp28 = pow(tmp26, tmp30);
        else
        {
          tmp32 = modf(1.0/tmp27, &tmp31);
          if(tmp32 > 0.5)
          {
            tmp32 -= 1.0;
            tmp31 += 1.0;
          }
          else if(tmp32 < -0.5)
          {
            tmp32 += 1.0;
            tmp31 -= 1.0;
          }
          if(fabs(tmp32) < 1e-10 && ((unsigned long)tmp31 & 1))
          {
            tmp28 = -pow(-tmp26, tmp29)*pow(tmp26, tmp30);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
          }
        }
      }
      else
      {
        tmp28 = pow(tmp26, tmp27);
      }
      if(isnan(tmp28) || isinf(tmp28))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp26, tmp27);
      }
      tmp34 = (tmp28) * ((-1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp36 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp35 < 0.0 && tmp36 != 0.0)
    {
      tmp38 = modf(tmp36, &tmp39);
      
      if(tmp38 > 0.5)
      {
        tmp38 -= 1.0;
        tmp39 += 1.0;
      }
      else if(tmp38 < -0.5)
      {
        tmp38 += 1.0;
        tmp39 -= 1.0;
      }
      
      if(fabs(tmp38) < 1e-10)
        tmp37 = pow(tmp35, tmp39);
      else
      {
        tmp41 = modf(1.0/tmp36, &tmp40);
        if(tmp41 > 0.5)
        {
          tmp41 -= 1.0;
          tmp40 += 1.0;
        }
        else if(tmp41 < -0.5)
        {
          tmp41 += 1.0;
          tmp40 -= 1.0;
        }
        if(fabs(tmp41) < 1e-10 && ((unsigned long)tmp40 & 1))
        {
          tmp37 = -pow(-tmp35, tmp38)*pow(tmp35, tmp39);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
        }
      }
    }
    else
    {
      tmp37 = pow(tmp35, tmp36);
    }
    if(isnan(tmp37) || isinf(tmp37))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
    }
    tmp43 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (tmp20)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)))) + (tmp34) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp37)))));
  }
  else
  {
    tmp43 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac17.dummyVarNLSJac17 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_397(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,397};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac17.dummyVarNLSJac17 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 + constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_398(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,398};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
gENROU.PSIq.$pDERNLSJac17.dummyVarNLSJac17 = (-gENROU.Xppq) * gENROU.iq.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_399(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,399};
  jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[241] /* gENROU.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac17 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 = ($cse6 * gENROU.iq.SeedNLSJac17 - $cse7 * gENROU.id.SeedNLSJac17) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_400(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,400};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac17 SEED_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac17 SEED_VAR */))) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 = ($cse7 * gENROU.iq.SeedNLSJac17 + $cse6 * gENROU.id.SeedNLSJac17) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_401(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,401};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac17 SEED_VAR */) + (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[186] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 = (-gENROU.PSIq.$pDERNLSJac17.dummyVarNLSJac17) - gENROU.R_a * gENROU.id.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_402(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,402};
  jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac17 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
gENROU.PSId.$pDERNLSJac17.dummyVarNLSJac17 = (-gENROU.Xppd) * gENROU.id.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_403(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,403};
  jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[240] /* gENROU.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac17 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 = gENROU.PSId.$pDERNLSJac17.dummyVarNLSJac17 - gENROU.R_a * gENROU.iq.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_404(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,404};
  jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[223] /* gENROU.R_a PARAM */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac17 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 = $cse6 * gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 + $cse7 * gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_405(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,405};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 = $cse6 * gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 - $cse7 * gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_406(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,406};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac17.dummyVarNLSJac17 = ((-$cse1) * gENCLS.id.SeedNLSJac17 - $cse2 * gENCLS.iq.SeedNLSJac17) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_407(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,407};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac17 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac17 SEED_VAR */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac17.dummyVarNLSJac17 = ($cse2 * gENCLS.id.SeedNLSJac17 - $cse1 * gENCLS.iq.SeedNLSJac17) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_408(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,408};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac17 SEED_VAR */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac17 SEED_VAR */))) * (data->simulationInfo->realParameter[160] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac17 - gENCLS.X_d * gENCLS.id.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_409(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,409};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac17 SEED_VAR */) - ((data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac17 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 = gENCLS.X_d * gENCLS.iq.SeedNLSJac17 - gENCLS.R_a * gENCLS.id.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_410(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,410};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[169] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac17 SEED_VAR */) - ((data->simulationInfo->realParameter[166] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac17 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine1.ir.im.SeedNLSJac17) - gENCLS.p.ii.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_411(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,411};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac17 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine4.ir.re.SeedNLSJac17) - gENCLS.p.ir.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_412(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,412};
  jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac17 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine3.ir.im.SeedNLSJac17) - pwLine4.is.im.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_413(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,413};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac17 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine3.ir.re.SeedNLSJac17) - pwLine4.is.re.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_414(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,414};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac17 SEED_VAR */) - jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine.ir.im.SeedNLSJac17) - pwLine1.is.im.SeedNLSJac17 - pwLine3.is.im.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_415(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,415};
  jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac17 SEED_VAR */) - jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 = (-pwLine1.is.re.SeedNLSJac17) - pwLine3.is.re.SeedNLSJac17 - constantLoad.p.ir.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_416(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,416};
  jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac17 SEED_VAR */) - jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
$res_NLSJac17_1.$pDERNLSJac17.dummyVarNLSJac17 = $cse1 * gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 + (-$cse2) * gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vr.im.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_417(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,417};
  jacobian->resultVars[0] /* $res_NLSJac17_1.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
$res_NLSJac17_2.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac17 else pwLine1.vs.im.SeedNLSJac17 - pwLine3.vr.im.SeedNLSJac17 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_418(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,418};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[1] /* $res_NLSJac17_2.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
$res_NLSJac17_3.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac17 else pwLine1.vs.re.SeedNLSJac17 - pwLine3.vr.re.SeedNLSJac17 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_419(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,419};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[2] /* $res_NLSJac17_3.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
$res_NLSJac17_4.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac17 else pwLine3.vr.im.SeedNLSJac17 - pwLine1.vs.im.SeedNLSJac17 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac17 + (-pwLine3.vr.re.SeedNLSJac17) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac17 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac17 + pwLine3.vr.im.SeedNLSJac17 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac17 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_420(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,420};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[3] /* $res_NLSJac17_4.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp52 && tmp53)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
$res_NLSJac17_5.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac17 else pwLine3.vr.re.SeedNLSJac17 - pwLine1.vr.re.SeedNLSJac17 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac17 + pwLine3.vr.im.SeedNLSJac17 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac17 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac17 + (-pwLine3.vr.re.SeedNLSJac17) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac17 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_421(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,421};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[4] /* $res_NLSJac17_5.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp54 && tmp55)?jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
$res_NLSJac17_6.$pDERNLSJac17.dummyVarNLSJac17 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac17 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 - (pwFault.R * pwLine3.vr.im.SeedNLSJac17 - pwFault.X * pwLine3.vr.re.SeedNLSJac17) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_422(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,422};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, 9, Less);
  tmp68 = (modelica_boolean)tmp56;
  if(tmp68)
  {
    tmp69 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
    tmp66 = (modelica_boolean)(tmp57 && data->simulationInfo->booleanParameter[73] /* pwFault.ground PARAM */);
    if(tmp66)
    {
      tmp67 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
      tmp64 = (modelica_boolean)tmp58;
      if(tmp64)
      {
        tmp59 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp60 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp61 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp62 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp63 = (tmp61 * tmp61) + (tmp62 * tmp62);
        tmp65 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) - ((data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */))) * ((tmp59 * tmp59) + (tmp60 * tmp60)),(tmp63 * tmp63),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp65 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
      }
      tmp67 = tmp65;
    }
    tmp69 = tmp67;
  }
  jacobian->resultVars[5] /* $res_NLSJac17_6.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = tmp69;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
$res_NLSJac17_7.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac17 else pwLine3.vr.im.SeedNLSJac17 - pwLine1.vr.im.SeedNLSJac17 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac17 + (-pwLine3.vr.re.SeedNLSJac17) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac17 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac17 + pwLine3.vr.im.SeedNLSJac17 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac17 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_423(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,423};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[6] /* $res_NLSJac17_7.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp70 && tmp71)?jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
$res_NLSJac17_8.$pDERNLSJac17.dummyVarNLSJac17 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac17 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 - (pwFault.R * pwLine3.vr.re.SeedNLSJac17 + pwFault.X * pwLine3.vr.im.SeedNLSJac17) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_424(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,424};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwFault.t1 PARAM */, 9, Less);
  tmp84 = (modelica_boolean)tmp72;
  if(tmp84)
  {
    tmp85 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
    tmp82 = (modelica_boolean)(tmp73 && data->simulationInfo->booleanParameter[73] /* pwFault.ground PARAM */);
    if(tmp82)
    {
      tmp83 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwFault.t2 PARAM */, 10, Less);
      tmp80 = (modelica_boolean)tmp74;
      if(tmp80)
      {
        tmp75 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp76 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp77 = data->simulationInfo->realParameter[271] /* pwFault.R PARAM */;
        tmp78 = data->simulationInfo->realParameter[272] /* pwFault.X PARAM */;
        tmp79 = (tmp77 * tmp77) + (tmp78 * tmp78);
        tmp81 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[271] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) + (data->simulationInfo->realParameter[272] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */)) * ((tmp75 * tmp75) + (tmp76 * tmp76)),(tmp79 * tmp79),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp81 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
      }
      tmp83 = tmp81;
    }
    tmp85 = tmp83;
  }
  jacobian->resultVars[7] /* $res_NLSJac17_8.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = tmp85;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
$res_NLSJac17_9.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac17 else pwLine3.vr.re.SeedNLSJac17 - pwLine1.vs.re.SeedNLSJac17 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac17 + pwLine3.vr.im.SeedNLSJac17 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac17 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac17 + (-pwLine3.vr.re.SeedNLSJac17) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac17 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_425(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,425};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[8] /* $res_NLSJac17_9.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
$res_NLSJac17_10.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 else pwLine1.vr.re.SeedNLSJac17 - pwLine1.vs.re.SeedNLSJac17 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vr.im.SeedNLSJac17 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac17 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac17 + (-pwLine1.vr.re.SeedNLSJac17) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac17 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_426(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,426};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[9] /* $res_NLSJac17_10.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
$res_NLSJac17_11.$pDERNLSJac17.dummyVarNLSJac17 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac17 + pwLine1.vs.re.SeedNLSJac17 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_427(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,427};
  jacobian->resultVars[10] /* $res_NLSJac17_11.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac17 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
$res_NLSJac17_12.$pDERNLSJac17.dummyVarNLSJac17 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac17) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_428(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,428};
  jacobian->resultVars[11] /* $res_NLSJac17_12.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = (data->localData[0]->realVars[129] /* pwLine1.vs.im variable */) * (jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac17 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[130] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
$res_NLSJac17_13.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 else pwLine1.vs.re.SeedNLSJac17 - pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_429(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,429};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res_NLSJac17_13.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
$res_NLSJac17_14.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac17 else pwLine1.vs.im.SeedNLSJac17 - pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_430(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,430};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[13] /* $res_NLSJac17_14.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
$res_NLSJac17_15.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 else pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vs.re.SeedNLSJac17 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 + (-pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_431(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,431};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[14] /* $res_NLSJac17_15.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
$res_NLSJac17_16.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 else pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vs.im.SeedNLSJac17 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 + (-pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_432(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,432};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res_NLSJac17_16.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
$res_NLSJac17_17.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac17 else pwLine1.vs.re.SeedNLSJac17 - pwLine1.vr.re.SeedNLSJac17 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_433(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,433};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[16] /* $res_NLSJac17_17.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
$res_NLSJac17_18.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac17 else pwLine1.vs.im.SeedNLSJac17 - pwLine1.vr.im.SeedNLSJac17 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac17 + (-pwLine1.vs.re.SeedNLSJac17) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac17 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac17 + pwLine1.vs.im.SeedNLSJac17 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac17 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_434(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,434};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[17] /* $res_NLSJac17_18.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
$res_NLSJac17_19.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac17 else pwLine1.vr.re.SeedNLSJac17 - pwLine3.vr.re.SeedNLSJac17 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac17 + pwLine1.vr.im.SeedNLSJac17 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac17 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 + (-pwLine1.vr.re.SeedNLSJac17) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac17 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_435(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,435};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[18] /* $res_NLSJac17_19.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
$res_NLSJac17_20.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 else pwLine1.vr.im.SeedNLSJac17 - pwLine3.vr.im.SeedNLSJac17 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 + (-pwLine1.vr.re.SeedNLSJac17) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac17 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac17 + pwLine1.vr.im.SeedNLSJac17 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac17 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_436(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,436};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[317] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[19] /* $res_NLSJac17_20.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[316] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[315] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac17 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[313] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
$res_NLSJac17_21.$pDERNLSJac17.dummyVarNLSJac17 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac17 else pwLine1.vr.im.SeedNLSJac17 - pwLine1.vs.im.SeedNLSJac17 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac17 + (-pwLine1.vr.re.SeedNLSJac17) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac17 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 + pwLine1.vr.im.SeedNLSJac17 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac17 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,437};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[20] /* $res_NLSJac17_21.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac17 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac17 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac17 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
$res_NLSJac17_22.$pDERNLSJac17.dummyVarNLSJac17 = $cse2 * gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 + $cse1 * gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 - pwLine1.vr.re.SeedNLSJac17
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  jacobian->resultVars[21] /* $res_NLSJac17_22.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_VAR */ = (data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac17.dummyVarNLSJac17 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac17 SEED_VAR */;
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_394(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_395(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_396(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_397(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_398(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_399(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_400(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_401(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_402(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_403(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_404(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_405(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_406(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_407(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_408(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_409(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_410(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_411(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_412(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_413(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_414(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_415(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_416(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_417(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_418(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_419(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_420(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_421(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_422(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_423(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_424(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_425(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_426(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_427(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_428(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_429(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_430(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_431(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_432(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_433(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_434(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_435(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_436(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_437(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_438(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 484
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.n1.$pDERNLSJac18.dummyVarNLSJac18 = if eSST4B.add2.y > eSST4B.limiter1.uMax then 0.0 else if eSST4B.add2.y < eSST4B.limiter1.uMin then 0.0 else eSST4B.add2.y.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_484(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,484};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  RELATIONHYSTERESIS(tmp108, data->localData[0]->realVars[71] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[154] /* eSST4B.limiter1.uMax PARAM */, 30, Greater);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp109, data->localData[0]->realVars[71] /* eSST4B.add2.y variable */, data->simulationInfo->realParameter[155] /* eSST4B.limiter1.uMin PARAM */, 31, Less);
    tmp111 = (tmp109?0.0:jacobian->seedVars[0] /* eSST4B.add2.y.SeedNLSJac18 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eSST4B.lV_Gate.n1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = tmp111;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
eSST4B.lV_Gate.p.$pDERNLSJac18.dummyVarNLSJac18 = if eSST4B.lV_Gate.n1 > const1.k then 0.0 else eSST4B.lV_Gate.n1.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_485(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,485};
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp112, data->localData[0]->realVars[72] /* eSST4B.lV_Gate.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 25, Greater);
  jacobian->tmpVars[1] /* eSST4B.lV_Gate.p.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (tmp112?0.0:jacobian->tmpVars[0] /* eSST4B.lV_Gate.n1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
eSST4B.EFD.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.lV_Gate.p.$pDERNLSJac18.dummyVarNLSJac18 * eSST4B.maxLimiter.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_486(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,486};
  jacobian->tmpVars[2] /* eSST4B.EFD.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[1] /* eSST4B.lV_Gate.p.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[75] /* eSST4B.maxLimiter.y variable */);
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
eSST4B.add1.u1.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.gain.k * eSST4B.EFD.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_487(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,487};
  jacobian->tmpVars[3] /* eSST4B.add1.u1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[150] /* eSST4B.gain.k PARAM */) * (jacobian->tmpVars[2] /* eSST4B.EFD.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
eSST4B.Gain2.u.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.add1.k1 * eSST4B.add1.u1.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_488(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,488};
  jacobian->tmpVars[4] /* eSST4B.Gain2.u.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[141] /* eSST4B.add1.k1 PARAM */) * (jacobian->tmpVars[3] /* eSST4B.add1.u1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
eSST4B.Gain2.y.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.Gain2.k * eSST4B.Gain2.u.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_489(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,489};
  jacobian->tmpVars[5] /* eSST4B.Gain2.y.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[88] /* eSST4B.Gain2.k PARAM */) * (jacobian->tmpVars[4] /* eSST4B.Gain2.u.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
$res_NLSJac18_1.$pDERNLSJac18.dummyVarNLSJac18 = eSST4B.add2.k1 * eSST4B.Gain2.y.$pDERNLSJac18.dummyVarNLSJac18 - eSST4B.add2.y.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_490(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,490};
  jacobian->resultVars[0] /* $res_NLSJac18_1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[143] /* eSST4B.add2.k1 PARAM */) * (jacobian->tmpVars[5] /* eSST4B.Gain2.y.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* eSST4B.add2.y.SeedNLSJac18 SEED_VAR */;
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
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_484(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_485(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_486(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_487(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_488(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_489(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST4B_eqFunction_490(data, threadData, jacobian, parentJacobian);
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


