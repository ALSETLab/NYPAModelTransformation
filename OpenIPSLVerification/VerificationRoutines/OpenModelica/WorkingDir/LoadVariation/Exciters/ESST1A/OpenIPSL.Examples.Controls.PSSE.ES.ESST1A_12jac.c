/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 841
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac9 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac9) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,841};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_842(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,842};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_843(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp45 = (modelica_boolean)tmp3;
  if(tmp45)
  {
    tmp4 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp11 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp26 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp26)
    {
      tmp27 = 0.0;
    }
    else
    {
      tmp19 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
      tmp27 = (tmp21) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */));
    }
    tmp36 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp36)
    {
      tmp37 = 0.0;
    }
    else
    {
      tmp29 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
      tmp37 = (tmp31) * ((-1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */));
    }
    tmp38 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac9.dummyVarNLSJac9 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_844(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,844};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac9.dummyVarNLSJac9 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 + constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_845(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,845};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac9.dummyVarNLSJac9 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_846(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,846};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[278] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac9 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 = ($cse7 * gENROE.iq.SeedNLSJac9 + $cse6 * gENROE.id.SeedNLSJac9) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_847(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,847};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac9 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 = ($cse6 * gENROE.iq.SeedNLSJac9 - $cse7 * gENROE.id.SeedNLSJac9) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_848(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,848};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac9 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac9 SEED_VAR */))) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac9.dummyVarNLSJac9 = (-gENROE.PSIq.$pDERNLSJac9.dummyVarNLSJac9) - gENROE.R_a * gENROE.id.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_849(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,849};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac9.dummyVarNLSJac9 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_850(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,850};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[277] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac9 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac9.dummyVarNLSJac9 = gENROE.PSId.$pDERNLSJac9.dummyVarNLSJac9 - gENROE.R_a * gENROE.iq.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,851};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 = $cse6 * gENROE.ud.$pDERNLSJac9.dummyVarNLSJac9 + $cse7 * gENROE.uq.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,852};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 = $cse6 * gENROE.uq.$pDERNLSJac9.dummyVarNLSJac9 - $cse7 * gENROE.ud.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,853};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac9.dummyVarNLSJac9 = ((-$cse1) * gENCLS.id.SeedNLSJac9 - $cse2 * gENCLS.iq.SeedNLSJac9) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,854};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac9 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac9 SEED_VAR */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac9.dummyVarNLSJac9 = ($cse2 * gENCLS.id.SeedNLSJac9 - $cse1 * gENCLS.iq.SeedNLSJac9) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,855};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac9 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac9 SEED_VAR */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac9 - gENCLS.X_d * gENCLS.id.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,856};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac9 SEED_VAR */) - ((data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 = gENCLS.X_d * gENCLS.iq.SeedNLSJac9 - gENCLS.R_a * gENCLS.id.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,857};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac9 SEED_VAR */) - ((data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine4.ir.re.SeedNLSJac9) - gENCLS.p.ir.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,858};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac9 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine4.ir.im.SeedNLSJac9) - gENCLS.p.ii.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,859};
  jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac9 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
pwLine1.is.im.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine.ir.im.SeedNLSJac9) - pwLine3.is.im.SeedNLSJac9 - constantLoad.p.ii.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,860};
  jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac9 SEED_VAR */) - jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine.ir.re.SeedNLSJac9) - pwLine1.is.re.SeedNLSJac9 - pwLine3.is.re.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_861(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,861};
  jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac9 SEED_VAR */) - jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 862
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine3.ir.re.SeedNLSJac9) - pwLine4.is.re.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_862(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,862};
  jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac9 SEED_VAR */) - jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 863
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 = (-pwLine3.ir.im.SeedNLSJac9) - pwLine4.is.im.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_863(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,863};
  jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac9 SEED_VAR */) - jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 864
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac9.dummyVarNLSJac9 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac9 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 - (pwFault.R * pwLine3.vr.im.SeedNLSJac9 - pwFault.X * pwLine3.vr.re.SeedNLSJac9) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_864(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,864};
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
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */, 7, Less);
  tmp63 = (modelica_boolean)tmp51;
  if(tmp63)
  {
    tmp64 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
    tmp61 = (modelica_boolean)(tmp52 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp61)
    {
      tmp62 = jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
      tmp59 = (modelica_boolean)tmp53;
      if(tmp59)
      {
        tmp54 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp55 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp56 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp57 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp58 = (tmp56 * tmp56) + (tmp57 * tmp57);
        tmp60 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) - ((data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */))) * ((tmp54 * tmp54) + (tmp55 * tmp55)),(tmp58 * tmp58),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp60 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
      }
      tmp62 = tmp60;
    }
    tmp64 = tmp62;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp64;
  TRACE_POP
}

/*
equation index: 865
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac9.dummyVarNLSJac9 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac9 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 - (pwFault.R * pwLine3.vr.re.SeedNLSJac9 + pwFault.X * pwLine3.vr.im.SeedNLSJac9) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_865(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,865};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_boolean tmp73;
  modelica_real tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */, 7, Less);
  tmp77 = (modelica_boolean)tmp65;
  if(tmp77)
  {
    tmp78 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
    tmp75 = (modelica_boolean)(tmp66 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp75)
    {
      tmp76 = jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
      tmp73 = (modelica_boolean)tmp67;
      if(tmp73)
      {
        tmp68 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp69 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp70 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp71 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp72 = (tmp70 * tmp70) + (tmp71 * tmp71);
        tmp74 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) + (data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */)) * ((tmp68 * tmp68) + (tmp69 * tmp69)),(tmp72 * tmp72),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp74 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
      }
      tmp76 = tmp74;
    }
    tmp78 = tmp76;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp78;
  TRACE_POP
}

/*
equation index: 866
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 else pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vs.im.SeedNLSJac9 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_866(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,866};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp79 && tmp80)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 867
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 else pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vs.re.SeedNLSJac9 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_867(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,867};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp81 && tmp82)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 868
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac9 else pwLine1.vs.im.SeedNLSJac9 - pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_868(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,868};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 869
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac9 else pwLine1.vs.re.SeedNLSJac9 - pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_869(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,869};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac9.dummyVarNLSJac9 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac9.dummyVarNLSJac9 + pwLine1.vs.re.SeedNLSJac9 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_870(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,870};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac9 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac9 else pwLine1.vs.re.SeedNLSJac9 - pwLine3.vr.re.SeedNLSJac9 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_871(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,871};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac9.dummyVarNLSJac9 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac9.dummyVarNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac9) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_872(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,872};
  jacobian->resultVars[8] /* $res9.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac9 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.$pDERNLSJac9.dummyVarNLSJac9 else pwLine1.vs.im.SeedNLSJac9 - pwLine1.vr.im.SeedNLSJac9 - (pwLine1.Z.re * (pwLine1.is.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_873(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,873};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac9 else pwLine1.vs.re.SeedNLSJac9 - pwLine1.vr.re.SeedNLSJac9 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_874(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,874};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac9.dummyVarNLSJac9 = $cse2 * gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 + $cse1 * gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vr.re.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_875(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,875};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac9.dummyVarNLSJac9 = $cse1 * gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 + (-$cse2) * gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 - pwLine1.vr.im.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_876(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,876};
  jacobian->resultVars[12] /* $res13.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 else pwLine1.vr.re.SeedNLSJac9 - pwLine1.vs.re.SeedNLSJac9 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine1.vr.im.SeedNLSJac9 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac9 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine1.vr.re.SeedNLSJac9) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac9 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_877(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 878
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 else pwLine1.vr.im.SeedNLSJac9 - pwLine1.vs.im.SeedNLSJac9 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 + (-pwLine1.vr.re.SeedNLSJac9) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac9 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 + pwLine1.vr.im.SeedNLSJac9 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac9 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_878(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,878};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac9 else pwLine1.vs.im.SeedNLSJac9 - pwLine3.vr.im.SeedNLSJac9 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac9 + (-pwLine1.vs.re.SeedNLSJac9) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac9 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac9 + pwLine1.vs.im.SeedNLSJac9 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac9 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_879(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 880
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac9 else pwLine3.vr.re.SeedNLSJac9 - pwLine1.vr.re.SeedNLSJac9 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac9 + pwLine3.vr.im.SeedNLSJac9 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac9 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac9 + (-pwLine3.vr.re.SeedNLSJac9) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac9 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_880(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac9 else pwLine3.vr.re.SeedNLSJac9 - pwLine1.vs.re.SeedNLSJac9 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac9 + pwLine3.vr.im.SeedNLSJac9 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac9 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac9 + (-pwLine3.vr.re.SeedNLSJac9) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac9 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_881(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 882
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac9 else pwLine3.vr.im.SeedNLSJac9 - pwLine1.vs.im.SeedNLSJac9 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac9 + (-pwLine3.vr.re.SeedNLSJac9) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac9 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac9 + pwLine3.vr.im.SeedNLSJac9 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac9 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_882(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,882};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 883
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac9 else pwLine3.vr.im.SeedNLSJac9 - pwLine1.vr.im.SeedNLSJac9 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac9 + (-pwLine3.vr.re.SeedNLSJac9) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac9 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac9 + pwLine3.vr.im.SeedNLSJac9 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac9 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_883(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,883};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 884
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac9 else pwLine1.vr.re.SeedNLSJac9 - pwLine3.vr.re.SeedNLSJac9 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac9 + pwLine1.vr.im.SeedNLSJac9 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac9 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac9 + (-pwLine1.vr.re.SeedNLSJac9) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac9 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_884(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 885
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac9.dummyVarNLSJac9 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac9 else pwLine1.vr.im.SeedNLSJac9 - pwLine3.vr.im.SeedNLSJac9 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac9 + (-pwLine1.vr.re.SeedNLSJac9) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac9 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac9 + pwLine1.vr.im.SeedNLSJac9 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac9 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_885(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac9 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac9 SEED_VAR */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac9 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac9 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac9 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac9_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac9;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac9_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac9;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_841(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_842(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_843(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_844(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_845(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_846(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_847(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_848(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_849(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_850(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_851(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_852(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_853(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_854(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_855(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_856(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_857(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_858(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_859(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_860(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_861(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_862(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_863(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_864(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_865(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_866(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_867(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_868(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_869(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_870(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_871(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_872(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_873(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_874(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_875(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_876(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_877(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_878(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_879(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_880(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_881(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_882(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_883(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_884(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_885(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 920
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1.$pDERNLSJac10.dummyVarNLSJac10 = if eSST1A.add3_1.y > eSST1A.imLimited.uMax then 0.0 else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then 0.0 else eSST1A.add3_1.y.SeedNLSJac10
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_920(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,920};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_real tmp114;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */, 21, Greater);
  tmp113 = (modelica_boolean)tmp111;
  if(tmp113)
  {
    tmp114 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp112, data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */, 22, Less);
    tmp114 = (tmp112?0.0:jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac10 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ = tmp114;
  TRACE_POP
}

/*
equation index: 921
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p.$pDERNLSJac10.dummyVarNLSJac10 = if eSST1A.hV_GATE.n1 < const1.k then 0.0 else eSST1A.hV_GATE.n1.$pDERNLSJac10.dummyVarNLSJac10
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_921(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,921};
  modelica_boolean tmp115;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 14, Less);
  jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ = (tmp115?0.0:jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 922
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y.$pDERNLSJac10.dummyVarNLSJac10 = eSST1A.add3_1.y.SeedNLSJac10 / eSST1A.add3_1.k1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_922(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,922};
  jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac10 SEED_VAR */,data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k1 PARAM */,"eSST1A.add3_1.k1");
  TRACE_POP
}

/*
equation index: 923
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y.$pDERNLSJac10.dummyVarNLSJac10 = eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p.$pDERNLSJac10.dummyVarNLSJac10
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_923(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,923};
  jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.d PARAM */) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 924
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y.$pDERNLSJac10.dummyVarNLSJac10 = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p.$pDERNLSJac10.dummyVarNLSJac10 else eSST1A.imLeadLag.TF.y.$pDERNLSJac10.dummyVarNLSJac10
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_924(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,924};
  modelica_boolean tmp116;
  tmp116 = Less(fabs(data->simulationInfo->realParameter[150] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ = (tmp116?(data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.K PARAM */) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 925
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y.$pDERNLSJac10.dummyVarNLSJac10 = eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y.$pDERNLSJac10.dummyVarNLSJac10
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_925(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,925};
  jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.d PARAM */) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 926
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y.$pDERNLSJac10.dummyVarNLSJac10 = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y.$pDERNLSJac10.dummyVarNLSJac10 else eSST1A.imLeadLag1.TF.y.$pDERNLSJac10.dummyVarNLSJac10
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_926(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,926};
  modelica_boolean tmp117;
  tmp117 = Less(fabs(data->simulationInfo->realParameter[168] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ = (tmp117?(data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.K PARAM */) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 927
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2.$pDERNLSJac10.dummyVarNLSJac10 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then if noEvent(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax) > eSST1A.simpleLagLim.outMin) then if noEvent(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K < eSST1A.simpleLagLim.outMax) then eSST1A.imLeadLag1.y.$pDERNLSJac10.dummyVarNLSJac10 * eSST1A.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_927(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,927};
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_real tmp122;
  modelica_boolean tmp123;
  modelica_real tmp124;
  tmp118 = LessEq(fabs(data->simulationInfo->realParameter[191] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  tmp123 = (modelica_boolean)tmp118;
  if(tmp123)
  {
    tmp119 = Greater(fmin((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */);
    tmp121 = (modelica_boolean)tmp119;
    if(tmp121)
    {
      tmp120 = Less((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */);
      tmp122 = (tmp120?(jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */):0.0);
    }
    else
    {
      tmp122 = 0.0;
    }
    tmp124 = tmp122;
  }
  else
  {
    tmp124 = 0.0;
  }
  jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ = tmp124;
  TRACE_POP
}

/*
equation index: 928
type: SIMPLE_ASSIGN
eSST1A.add3_2.y.$pDERNLSJac10.dummyVarNLSJac10 = eSST1A.add3_2.k2 * eSST1A.add3_2.u2.$pDERNLSJac10.dummyVarNLSJac10
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_928(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,928};
  jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k2 PARAM */) * (jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 929
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac10.dummyVarNLSJac10 = eSST1A.add3_2.y.$pDERNLSJac10.dummyVarNLSJac10 - eSST1A.imDerivativeLag.y.$pDERNLSJac10.dummyVarNLSJac10 * eSST1A.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_929(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,929};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac10.dummyVarNLSJac10 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[141] /* eSST1A.imDerivativeLag.T PARAM */));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac10_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac10;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac10_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac10;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_920(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_921(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_922(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_923(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_924(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_925(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_926(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_927(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_928(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_929(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac9(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,8,8,11,11};
  const int rowIndex[112] = {0,16,19,0,17,18,1,17,18,1,16,19,6,8,9,10,6,7,8,15,7,9,10,15,6,8,9,10,4,5,9,10,4,5,6,8,13,14,20,21,13,14,20,21,11,12,13,14,11,12,13,14,9,12,13,14,19,20,21,10,11,13,14,16,20,21,2,3,4,5,2,3,4,5,0,1,7,16,17,18,19,20,0,1,15,16,17,18,19,21,2,4,5,6,7,8,9,10,14,15,18,3,4,5,6,7,8,9,10,13,15,17};
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
  jacobian->sparsePattern->maxColors = 9;
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
  jacobian->sparsePattern->colorCols[15] = 4;
  jacobian->sparsePattern->colorCols[14] = 5;
  jacobian->sparsePattern->colorCols[7] = 6;
  jacobian->sparsePattern->colorCols[13] = 6;
  jacobian->sparsePattern->colorCols[17] = 6;
  jacobian->sparsePattern->colorCols[18] = 6;
  jacobian->sparsePattern->colorCols[6] = 7;
  jacobian->sparsePattern->colorCols[9] = 7;
  jacobian->sparsePattern->colorCols[12] = 7;
  jacobian->sparsePattern->colorCols[1] = 8;
  jacobian->sparsePattern->colorCols[3] = 8;
  jacobian->sparsePattern->colorCols[5] = 8;
  jacobian->sparsePattern->colorCols[8] = 8;
  jacobian->sparsePattern->colorCols[11] = 8;
  jacobian->sparsePattern->colorCols[0] = 9;
  jacobian->sparsePattern->colorCols[2] = 9;
  jacobian->sparsePattern->colorCols[4] = 9;
  jacobian->sparsePattern->colorCols[10] = 9;
  jacobian->sparsePattern->colorCols[16] = 9;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac10(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 10;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(10,sizeof(modelica_real));
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
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+13] = {0,6,5,5,5,5,10,10,10,10,10,10,10,2};
  const int rowIndex[98] = {0,1,2,3,4,8,1,2,3,4,8,1,2,3,4,8,1,2,3,4,8,1,2,3,4,8,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,11,12};
  int i = 0;
  
  jacobian->sizeCols = 13;
  jacobian->sizeRows = 13;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(98*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 98;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern->maxColors = 12;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 98*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[4] = 2;
  jacobian->sparsePattern->colorCols[3] = 3;
  jacobian->sparsePattern->colorCols[2] = 4;
  jacobian->sparsePattern->colorCols[10] = 5;
  jacobian->sparsePattern->colorCols[9] = 6;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[7] = 8;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[12] = 10;
  jacobian->sparsePattern->colorCols[1] = 10;
  jacobian->sparsePattern->colorCols[6] = 11;
  jacobian->sparsePattern->colorCols[5] = 12;
  TRACE_POP
  return 0;
}


