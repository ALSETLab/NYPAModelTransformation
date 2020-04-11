/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 1173
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac12 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac12) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1173(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1173};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[183] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[182] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1174(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1174};
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
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[73] /* constantLoad.v variable */, 0.5, 10, Less);
  tmp44 = (modelica_boolean)tmp2;
  if(tmp44)
  {
    tmp3 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp4 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    }tmp10 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp11 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    }tmp25 = (modelica_boolean)(data->localData[0]->realVars[73] /* constantLoad.v variable */ == 0.0);
    if(tmp25)
    {
      tmp26 = 0.0;
    }
    else
    {
      tmp18 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
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
      }
      tmp26 = (tmp20) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = (modelica_boolean)(data->localData[0]->realVars[73] /* constantLoad.v variable */ == 0.0);
    if(tmp35)
    {
      tmp36 = 0.0;
    }
    else
    {
      tmp28 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
      tmp29 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp36 = (tmp30) * ((-1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */));
    }
    tmp37 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp38 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp45 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp12)))) * ((data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * (tmp26))) + (tmp36) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp39)))));
  }
  else
  {
    tmp45 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = tmp45;
  TRACE_POP
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1175(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1175};
  modelica_boolean tmp46;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->realVars[73] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (tmp46?(data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[73] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[73] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac12.dummyVarNLSJac12 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1176(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1176};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 12, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[69] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[69] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac12.dummyVarNLSJac12 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 + constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1177(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1177};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 12, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[69] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[69] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac12.dummyVarNLSJac12 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1178(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1178};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac12 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 = ($cse6 * gENROE.iq.SeedNLSJac12 - $cse7 * gENROE.id.SeedNLSJac12) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1179(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1179};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[48] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac12 SEED_VAR */) - ((data->localData[0]->realVars[49] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac12 SEED_VAR */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 = ($cse7 * gENROE.iq.SeedNLSJac12 + $cse6 * gENROE.id.SeedNLSJac12) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1180(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1180};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[49] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac12 SEED_VAR */) + (data->localData[0]->realVars[48] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac12.dummyVarNLSJac12 = gENROE.PSId.$pDERNLSJac12.dummyVarNLSJac12 - gENROE.R_a * gENROE.iq.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1181(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1181};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac12.dummyVarNLSJac12 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1182(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1182};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac12 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac12.dummyVarNLSJac12 = (-gENROE.PSIq.$pDERNLSJac12.dummyVarNLSJac12) - gENROE.R_a * gENROE.id.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1183(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1183};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 = $cse6 * gENROE.uq.$pDERNLSJac12.dummyVarNLSJac12 - $cse7 * gENROE.ud.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1184(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1184};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[48] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[49] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 = $cse6 * gENROE.ud.$pDERNLSJac12.dummyVarNLSJac12 + $cse7 * gENROE.uq.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1185(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1185};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[48] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[49] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac12.dummyVarNLSJac12 = ($cse2 * gENCLS.id.SeedNLSJac12 - $cse1 * gENCLS.iq.SeedNLSJac12) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1186(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1186};
  jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[45] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac12 SEED_VAR */) - ((data->localData[0]->realVars[44] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac12 SEED_VAR */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac12.dummyVarNLSJac12 = ((-$cse1) * gENCLS.id.SeedNLSJac12 - $cse2 * gENCLS.iq.SeedNLSJac12) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1187(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1187};
  jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[44] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac12 SEED_VAR */) - ((data->localData[0]->realVars[45] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac12 SEED_VAR */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac12 - gENCLS.X_d * gENCLS.id.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1188(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1188};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac12 SEED_VAR */) - ((data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 = gENCLS.X_d * gENCLS.iq.SeedNLSJac12 - gENCLS.R_a * gENCLS.id.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1189(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1189};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac12 SEED_VAR */) - ((data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac12 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine4.ir.im.SeedNLSJac12) - gENCLS.p.ii.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1190(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1190};
  jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.im.SeedNLSJac12 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine4.ir.re.SeedNLSJac12) - gENCLS.p.ir.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1191(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1191};
  jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac12 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine3.ir.im.SeedNLSJac12) - pwLine4.is.im.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1192(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1192};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac12 SEED_VAR */) - jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine3.ir.re.SeedNLSJac12) - pwLine4.is.re.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1193(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1193};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac12 SEED_VAR */) - jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine.ir.re.SeedNLSJac12) - pwLine1.is.re.SeedNLSJac12 - pwLine3.is.re.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1194(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1194};
  jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac12 SEED_VAR */) - jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 = (-pwLine.ir.im.SeedNLSJac12) - pwLine1.is.im.SeedNLSJac12 - pwLine3.is.im.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1195(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1195};
  jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac12 SEED_VAR */) - jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 else pwLine1.vr.re.SeedNLSJac12 - pwLine1.vs.re.SeedNLSJac12 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vr.im.SeedNLSJac12 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac12 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine1.vr.re.SeedNLSJac12) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac12 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1196};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, 9, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1197
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 else pwLine1.vr.im.SeedNLSJac12 - pwLine1.vs.im.SeedNLSJac12 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine1.vr.re.SeedNLSJac12) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac12 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vr.im.SeedNLSJac12 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac12 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1197};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, 9, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp53 && tmp54)?jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1198
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac12 else pwLine1.vs.im.SeedNLSJac12 - pwLine3.vr.im.SeedNLSJac12 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1198};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp55 && tmp56)?jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac12 else pwLine1.vs.re.SeedNLSJac12 - pwLine3.vr.re.SeedNLSJac12 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1199};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac12.dummyVarNLSJac12 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac12 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 - (pwFault.R * pwLine3.vr.im.SeedNLSJac12 - pwFault.X * pwLine3.vr.re.SeedNLSJac12) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1200};
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
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */, 4, Less);
  tmp71 = (modelica_boolean)tmp59;
  if(tmp71)
  {
    tmp72 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, 5, Less);
    tmp69 = (modelica_boolean)(tmp60 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp69)
    {
      tmp70 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, 5, Less);
      tmp67 = (modelica_boolean)tmp61;
      if(tmp67)
      {
        tmp62 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp63 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp64 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp65 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp66 = (tmp64 * tmp64) + (tmp65 * tmp65);
        tmp68 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[476] /* pwFault.R PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) - ((data->simulationInfo->realParameter[477] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */))) * ((tmp62 * tmp62) + (tmp63 * tmp63)),(tmp66 * tmp66),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp68 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
      }
      tmp70 = tmp68;
    }
    tmp72 = tmp70;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = tmp72;
  TRACE_POP
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac12 else pwLine3.vr.re.SeedNLSJac12 - pwLine1.vr.re.SeedNLSJac12 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac12 + pwLine3.vr.im.SeedNLSJac12 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac12 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac12 + (-pwLine3.vr.re.SeedNLSJac12) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac12 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1201};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, 7, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp73 && tmp74)?jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac12 else pwLine3.vr.im.SeedNLSJac12 - pwLine1.vr.im.SeedNLSJac12 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac12 + (-pwLine3.vr.re.SeedNLSJac12) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac12 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac12 + pwLine3.vr.im.SeedNLSJac12 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac12 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1202};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, 7, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp75 && tmp76)?jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac12.dummyVarNLSJac12 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac12 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 - (pwFault.R * pwLine3.vr.re.SeedNLSJac12 + pwFault.X * pwLine3.vr.im.SeedNLSJac12) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1203};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  modelica_real tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  modelica_boolean tmp89;
  modelica_real tmp90;
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */, 4, Less);
  tmp89 = (modelica_boolean)tmp77;
  if(tmp89)
  {
    tmp90 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, 5, Less);
    tmp87 = (modelica_boolean)(tmp78 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp87)
    {
      tmp88 = jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, 5, Less);
      tmp85 = (modelica_boolean)tmp79;
      if(tmp85)
      {
        tmp80 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp81 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp82 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp83 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp84 = (tmp82 * tmp82) + (tmp83 * tmp83);
        tmp86 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[476] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) + (data->simulationInfo->realParameter[477] /* pwFault.X PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */)) * ((tmp80 * tmp80) + (tmp81 * tmp81)),(tmp84 * tmp84),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp86 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
      }
      tmp88 = tmp86;
    }
    tmp90 = tmp88;
  }
  jacobian->resultVars[7] /* $res8.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = tmp90;
  TRACE_POP
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac12 else pwLine3.vr.im.SeedNLSJac12 - pwLine1.vs.im.SeedNLSJac12 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac12 + (-pwLine3.vr.re.SeedNLSJac12) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac12 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac12 + pwLine3.vr.im.SeedNLSJac12 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac12 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1204};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac12 else pwLine3.vr.re.SeedNLSJac12 - pwLine1.vs.re.SeedNLSJac12 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac12 + pwLine3.vr.im.SeedNLSJac12 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac12 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac12 + (-pwLine3.vr.re.SeedNLSJac12) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac12 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1205};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine3.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 else pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 - pwLine1.vs.re.SeedNLSJac12 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1206};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 else pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 - pwLine1.vs.im.SeedNLSJac12 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 + (-pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 + pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1207};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac12 else pwLine1.vs.im.SeedNLSJac12 - pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1208};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac12 else pwLine1.vs.re.SeedNLSJac12 - pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1209};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac12.dummyVarNLSJac12 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac12) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac12.dummyVarNLSJac12 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1210};
  jacobian->resultVars[14] /* $res15.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->localData[0]->realVars[72] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->localData[0]->realVars[71] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac12.dummyVarNLSJac12 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac12.dummyVarNLSJac12 + pwLine1.vs.re.SeedNLSJac12 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac12.dummyVarNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1211(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1211};
  jacobian->resultVars[15] /* $res16.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->localData[0]->realVars[71] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->localData[0]->realVars[72] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac12 else pwLine1.vs.re.SeedNLSJac12 - pwLine1.vr.re.SeedNLSJac12 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1212(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1212};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, 9, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac12 else pwLine1.vs.im.SeedNLSJac12 - pwLine1.vr.im.SeedNLSJac12 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac12 + (-pwLine1.vs.re.SeedNLSJac12) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac12 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac12 + pwLine1.vs.im.SeedNLSJac12 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac12 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1213(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1213};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, 9, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac12.dummyVarNLSJac12 = $cse1 * gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 + (-$cse2) * gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 - pwLine1.vr.im.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1214(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1214};
  jacobian->resultVars[18] /* $res19.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = (data->localData[0]->realVars[44] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[45] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac12 else pwLine1.vr.re.SeedNLSJac12 - pwLine3.vr.re.SeedNLSJac12 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac12 + pwLine1.vr.im.SeedNLSJac12 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac12 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac12 + (-pwLine1.vr.re.SeedNLSJac12) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac12 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1215(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1215};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, 7, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac12.dummyVarNLSJac12 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac12 else pwLine1.vr.im.SeedNLSJac12 - pwLine3.vr.im.SeedNLSJac12 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac12 + (-pwLine1.vr.re.SeedNLSJac12) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac12 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac12 + pwLine1.vr.im.SeedNLSJac12 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac12 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1216(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1216};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, 7, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[11] /* pwLine4.ir.im.SeedNLSJac12 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac12 SEED_VAR */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.im.SeedNLSJac12 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.re.SeedNLSJac12 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac12.dummyVarNLSJac12 = $cse2 * gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 + $cse1 * gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 - pwLine1.vr.re.SeedNLSJac12
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1217(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1217};
  jacobian->resultVars[21] /* $res22.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_VAR */ = (data->localData[0]->realVars[45] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[44] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac12.dummyVarNLSJac12 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac12 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacNLSJac12_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_NLSJac12;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacNLSJac12_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_NLSJac12;
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1173(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1174(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1175(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1176(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1177(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1178(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1179(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1180(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1181(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1182(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1183(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1184(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1185(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1186(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1187(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1188(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1189(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1190(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1191(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1192(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1193(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1194(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1195(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1196(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1197(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1198(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1199(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1200(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1201(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1202(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1203(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1204(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1205(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1206(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1207(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1208(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1209(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1210(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1211(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1212(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1213(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1214(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1215(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1216(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1217(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1288
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1.$pDERNLSJac13.dummyVarNLSJac13 = if eSST1A.add3_1.y > eSST1A.imLimited.uMax then 0.0 else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then 0.0 else eSST1A.add3_1.y.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1288(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1288};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_real tmp114;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */, 21, Greater);
  tmp113 = (modelica_boolean)tmp111;
  if(tmp113)
  {
    tmp114 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp112, data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */, 22, Less);
    tmp114 = (tmp112?0.0:jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac13 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = tmp114;
  TRACE_POP
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p.$pDERNLSJac13.dummyVarNLSJac13 = if eSST1A.hV_GATE.n1 < const1.k then 0.0 else eSST1A.hV_GATE.n1.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1289(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1289};
  modelica_boolean tmp115;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 14, Less);
  jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (tmp115?0.0:jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y.$pDERNLSJac13.dummyVarNLSJac13 = eSST1A.add3_1.y.SeedNLSJac13 / eSST1A.add3_1.k1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1290(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1290};
  jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac13 SEED_VAR */,data->simulationInfo->realParameter[131] /* eSST1A.add3_1.k1 PARAM */,"eSST1A.add3_1.k1");
  TRACE_POP
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y.$pDERNLSJac13.dummyVarNLSJac13 = eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1291(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1291};
  jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[158] /* eSST1A.imLeadLag.TF.d PARAM */) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y.$pDERNLSJac13.dummyVarNLSJac13 = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p.$pDERNLSJac13.dummyVarNLSJac13 else eSST1A.imLeadLag.TF.y.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1292(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1292};
  modelica_boolean tmp116;
  tmp116 = Less(fabs(data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (tmp116?(data->simulationInfo->realParameter[147] /* eSST1A.imLeadLag.K PARAM */) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y.$pDERNLSJac13.dummyVarNLSJac13 = eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1293};
  jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[176] /* eSST1A.imLeadLag1.TF.d PARAM */) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y.$pDERNLSJac13.dummyVarNLSJac13 = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y.$pDERNLSJac13.dummyVarNLSJac13 else eSST1A.imLeadLag1.TF.y.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1294};
  modelica_boolean tmp117;
  tmp117 = Less(fabs(data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (tmp117?(data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag1.K PARAM */) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2.$pDERNLSJac13.dummyVarNLSJac13 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then if noEvent(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax) > eSST1A.simpleLagLim.outMin) then if noEvent(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K < eSST1A.simpleLagLim.outMax) then eSST1A.imLeadLag1.y.$pDERNLSJac13.dummyVarNLSJac13 * eSST1A.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1295};
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_real tmp122;
  modelica_boolean tmp123;
  modelica_real tmp124;
  tmp118 = LessEq(fabs(data->simulationInfo->realParameter[189] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  tmp123 = (modelica_boolean)tmp118;
  if(tmp123)
  {
    tmp119 = Greater(fmin((data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */);
    tmp121 = (modelica_boolean)tmp119;
    if(tmp121)
    {
      tmp120 = Less((data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */);
      tmp122 = (tmp120?(jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */):0.0);
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
  jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = tmp124;
  TRACE_POP
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
eSST1A.add3_2.y.$pDERNLSJac13.dummyVarNLSJac13 = eSST1A.add3_2.k2 * eSST1A.add3_2.u2.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1296};
  jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k2 PARAM */) * (jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac13.dummyVarNLSJac13 = eSST1A.add3_2.y.$pDERNLSJac13.dummyVarNLSJac13 - eSST1A.imDerivativeLag.y.$pDERNLSJac13.dummyVarNLSJac13 * eSST1A.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1297};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[139] /* eSST1A.imDerivativeLag.T PARAM */));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacNLSJac13_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_NLSJac13;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacNLSJac13_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_NLSJac13;
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1288(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1289(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1290(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1291(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1292(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1293(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1294(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1295(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1296(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1297(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianNLSJac12(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,11,8,8,11};
  const int rowIndex[112] = {14,15,16,17,12,13,14,15,14,15,16,17,12,13,14,15,7,8,9,5,6,7,4,8,9,4,5,6,2,3,14,15,2,3,14,15,0,1,19,20,0,1,19,20,0,1,18,21,0,1,18,21,0,1,5,16,19,20,21,0,1,6,17,18,19,20,10,11,12,13,10,11,12,13,0,2,3,9,10,12,13,14,15,16,17,2,4,5,6,7,8,9,20,3,4,5,6,7,8,9,19,1,2,3,8,11,12,13,14,15,16,17};
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
  jacobian->sparsePattern->maxColors = 8;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 112*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[21] = 1;
  jacobian->sparsePattern->colorCols[18] = 2;
  jacobian->sparsePattern->colorCols[9] = 3;
  jacobian->sparsePattern->colorCols[15] = 3;
  jacobian->sparsePattern->colorCols[8] = 4;
  jacobian->sparsePattern->colorCols[14] = 4;
  jacobian->sparsePattern->colorCols[3] = 5;
  jacobian->sparsePattern->colorCols[13] = 5;
  jacobian->sparsePattern->colorCols[20] = 5;
  jacobian->sparsePattern->colorCols[2] = 6;
  jacobian->sparsePattern->colorCols[12] = 6;
  jacobian->sparsePattern->colorCols[17] = 6;
  jacobian->sparsePattern->colorCols[19] = 6;
  jacobian->sparsePattern->colorCols[1] = 7;
  jacobian->sparsePattern->colorCols[5] = 7;
  jacobian->sparsePattern->colorCols[6] = 7;
  jacobian->sparsePattern->colorCols[11] = 7;
  jacobian->sparsePattern->colorCols[0] = 8;
  jacobian->sparsePattern->colorCols[4] = 8;
  jacobian->sparsePattern->colorCols[7] = 8;
  jacobian->sparsePattern->colorCols[10] = 8;
  jacobian->sparsePattern->colorCols[16] = 8;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianNLSJac13(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,6,5,5,5,5,16,16,16,16,16,16,16,13,8,7,6,9,9,11,10,11,10};
  const int rowIndex[232] = {0,1,2,3,4,8,1,2,3,4,8,1,2,3,4,8,1,2,3,4,8,1,2,3,4,8,0,1,2,3,4,7,8,9,10,12,13,14,15,17,20,21,0,1,2,3,4,7,8,9,10,12,13,14,15,17,20,21,0,1,2,3,4,7,8,9,10,12,13,14,15,17,20,21,0,1,2,3,4,7,8,9,10,12,13,14,15,17,20,21,0,1,2,3,4,7,8,9,10,12,13,14,15,17,20,21,0,1,2,3,4,7,8,9,10,12,13,14,15,17,20,21,0,1,2,3,4,7,8,9,10,12,13,14,15,17,20,21,1,2,3,4,8,11,12,13,14,15,16,18,19,1,2,3,4,8,13,14,15,1,2,3,4,8,14,15,1,2,3,4,8,15,1,2,3,4,8,13,14,15,16,1,2,3,4,8,13,14,15,17,1,2,3,4,8,13,14,15,16,18,19,1,2,3,4,8,13,14,15,16,19,1,2,3,4,8,13,14,15,17,20,21,1,2,3,4,8,13,14,15,17,21};
  int i = 0;
  
  jacobian->sizeCols = 22;
  jacobian->sizeRows = 22;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(232*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 232;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  jacobian->sparsePattern->maxColors = 22;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 232*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[21] = 1;
  jacobian->sparsePattern->colorCols[20] = 2;
  jacobian->sparsePattern->colorCols[19] = 3;
  jacobian->sparsePattern->colorCols[18] = 4;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[17] = 6;
  jacobian->sparsePattern->colorCols[16] = 7;
  jacobian->sparsePattern->colorCols[14] = 8;
  jacobian->sparsePattern->colorCols[13] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[4] = 11;
  jacobian->sparsePattern->colorCols[3] = 12;
  jacobian->sparsePattern->colorCols[2] = 13;
  jacobian->sparsePattern->colorCols[1] = 14;
  jacobian->sparsePattern->colorCols[10] = 15;
  jacobian->sparsePattern->colorCols[9] = 16;
  jacobian->sparsePattern->colorCols[8] = 17;
  jacobian->sparsePattern->colorCols[7] = 18;
  jacobian->sparsePattern->colorCols[11] = 19;
  jacobian->sparsePattern->colorCols[12] = 20;
  jacobian->sparsePattern->colorCols[6] = 21;
  jacobian->sparsePattern->colorCols[5] = 22;
  TRACE_POP
  return 0;
}


