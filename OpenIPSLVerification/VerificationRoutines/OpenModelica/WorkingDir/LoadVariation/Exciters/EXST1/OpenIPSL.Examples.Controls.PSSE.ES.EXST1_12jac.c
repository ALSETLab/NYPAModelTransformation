/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 737
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac21 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac21) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_737(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,737};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_738(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,738};
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
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp44 = (modelica_boolean)tmp2;
  if(tmp44)
  {
    tmp3 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp4 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    }tmp10 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp11 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    }tmp25 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp25)
    {
      tmp26 = 0.0;
    }
    else
    {
      tmp18 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp19 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp26 = (tmp20) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp35)
    {
      tmp36 = 0.0;
    }
    else
    {
      tmp28 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp29 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp36 = (tmp30) * ((-1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
    }
    tmp37 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp38 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp45 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp12)))) * ((data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * (tmp26))) + (tmp36) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp39)))));
  }
  else
  {
    tmp45 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = tmp45;
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_739(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,739};
  modelica_boolean tmp46;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, 6, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (tmp46?(data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_740(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,740};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_741(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,741};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_742(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,742};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 = ($cse7 * gENROE.iq.SeedNLSJac21 + $cse6 * gENROE.id.SeedNLSJac21) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_743(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,743};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */) + (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 = ($cse6 * gENROE.iq.SeedNLSJac21 - $cse7 * gENROE.id.SeedNLSJac21) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_744(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,744};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */))) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 = gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 - gENROE.R_a * gENROE.iq.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_745(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,745};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_746(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,746};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 = (-gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21) - gENROE.R_a * gENROE.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_747(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,747};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 = $cse6 * gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 - $cse7 * gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_748(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,748};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 = $cse6 * gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 + $cse7 * gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_749(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,749};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21 = ((-$cse1) * gENCLS.id.SeedNLSJac21 - $cse2 * gENCLS.iq.SeedNLSJac21) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_750(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,750};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac21 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21 = ($cse2 * gENCLS.id.SeedNLSJac21 - $cse1 * gENCLS.iq.SeedNLSJac21) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_751(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,751};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac21 SEED_VAR */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac21 - gENCLS.X_d * gENCLS.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_752(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,752};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */) - ((data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 = gENCLS.X_d * gENCLS.iq.SeedNLSJac21 - gENCLS.R_a * gENCLS.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_753(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,753};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */) - ((data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine1.ir.im.SeedNLSJac21) - gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_754(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,754};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac21 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine1.ir.re.SeedNLSJac21) - gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_755(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,755};
  jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac21 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine3.ir.im.SeedNLSJac21) - pwLine4.is.im.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_756(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,756};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine3.ir.re.SeedNLSJac21) - pwLine4.is.re.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_757(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,757};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine.ir.im.SeedNLSJac21) - pwLine1.is.im.SeedNLSJac21 - pwLine3.is.im.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_758(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,758};
  jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
pwLine.ir.re.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine1.is.re.SeedNLSJac21) - pwLine3.is.re.SeedNLSJac21 - constantLoad.p.ir.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_759(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,759};
  jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[0] /* constantLoad.p.ir.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac21 else pwLine1.vs.re.SeedNLSJac21 - pwLine1.vr.re.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_760(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,760};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac21.dummyVarNLSJac21 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac21 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 - (pwFault.R * pwLine3.vr.re.SeedNLSJac21 + pwFault.X * pwLine3.vr.im.SeedNLSJac21) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_761(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,761};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, 12, Less);
  tmp65 = (modelica_boolean)tmp53;
  if(tmp65)
  {
    tmp66 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
    tmp63 = (modelica_boolean)(tmp54 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp63)
    {
      tmp64 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
      tmp61 = (modelica_boolean)tmp55;
      if(tmp61)
      {
        tmp56 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp57 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp58 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp59 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp60 = (tmp58 * tmp58) + (tmp59 * tmp59);
        tmp62 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) + (data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */)) * ((tmp56 * tmp56) + (tmp57 * tmp57)),(tmp60 * tmp60),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp62 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
      }
      tmp64 = tmp62;
    }
    tmp66 = tmp64;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = tmp66;
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac21.dummyVarNLSJac21 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac21 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 - (pwFault.R * pwLine3.vr.im.SeedNLSJac21 - pwFault.X * pwLine3.vr.re.SeedNLSJac21) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_762(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,762};
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
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, 12, Less);
  tmp79 = (modelica_boolean)tmp67;
  if(tmp79)
  {
    tmp80 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
    tmp77 = (modelica_boolean)(tmp68 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp77)
    {
      tmp78 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
      tmp75 = (modelica_boolean)tmp69;
      if(tmp75)
      {
        tmp70 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp71 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp72 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp73 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp74 = (tmp72 * tmp72) + (tmp73 * tmp73);
        tmp76 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) - ((data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */))) * ((tmp70 * tmp70) + (tmp71 * tmp71)),(tmp74 * tmp74),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp76 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
      }
      tmp78 = tmp76;
    }
    tmp80 = tmp78;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = tmp80;
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac21.dummyVarNLSJac21 else pwLine1.vr.re.SeedNLSJac21 - pwLine3.vr.re.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_763(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,763};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp81 && tmp82)?jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 else pwLine1.vr.im.SeedNLSJac21 - pwLine3.vr.im.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_764(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,764};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac21 else pwLine3.vr.re.SeedNLSJac21 - pwLine1.vr.re.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_765(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,765};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac21 else pwLine3.vr.im.SeedNLSJac21 - pwLine1.vr.im.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_766(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,766};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac21 else pwLine3.vr.im.SeedNLSJac21 - pwLine1.vs.im.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_767(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,767};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac21 else pwLine3.vr.re.SeedNLSJac21 - pwLine1.vs.re.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_768(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,768};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac21 else pwLine1.vr.re.SeedNLSJac21 - pwLine1.vs.re.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_769(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,769};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac21 else pwLine1.vs.im.SeedNLSJac21 - pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_770(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,770};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 else pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vs.im.SeedNLSJac21 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_771(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,771};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 else pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vs.re.SeedNLSJac21 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_772(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,772};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac21 else pwLine1.vs.re.SeedNLSJac21 - pwLine3.vr.re.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_773(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,773};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac21 else pwLine1.vs.im.SeedNLSJac21 - pwLine3.vr.im.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_774(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,774};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac21.dummyVarNLSJac21 else pwLine1.vs.re.SeedNLSJac21 - pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_775(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,775};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac21.dummyVarNLSJac21 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac21) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_776(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,776};
  jacobian->resultVars[16] /* $res17.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (jacobian->seedVars[0] /* constantLoad.p.ir.SeedNLSJac21 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac21.dummyVarNLSJac21 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac21 + pwLine1.vs.re.SeedNLSJac21 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_777(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,777};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (jacobian->seedVars[0] /* constantLoad.p.ir.SeedNLSJac21 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 778
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac21 else pwLine1.vs.im.SeedNLSJac21 - pwLine1.vr.im.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_778(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,778};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac21.dummyVarNLSJac21 = $cse1 * gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 + (-$cse2) * gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vr.im.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,779};
  jacobian->resultVars[19] /* $res20.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac21 else pwLine1.vr.im.SeedNLSJac21 - pwLine1.vs.im.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,780};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac21.dummyVarNLSJac21 = $cse2 * gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 + $cse1 * gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vr.re.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_781(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,781};
  jacobian->resultVars[21] /* $res22.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac21_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac21;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac21_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac21;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_737(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_738(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_739(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_740(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_741(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_742(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_743(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_744(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_745(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_746(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_747(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_748(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_749(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_750(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_751(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_752(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_753(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_754(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_755(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_756(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_757(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_758(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_759(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_760(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_761(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_762(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_763(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_764(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_765(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_766(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_767(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_768(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_769(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_770(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_771(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_772(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_773(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_774(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_775(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_776(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_777(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_778(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_779(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_780(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_781(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 815
type: SIMPLE_ASSIGN
eXST1.imLeadLag.u.$pDERNLSJac22.dummyVarNLSJac22 = if eXST1.feedback.y > eXST1.limiter.uMax then 0.0 else if eXST1.feedback.y < eXST1.limiter.uMin then 0.0 else eXST1.feedback.y.SeedNLSJac22
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_815(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,815};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_real tmp114;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */, 16, Greater);
  tmp113 = (modelica_boolean)tmp111;
  if(tmp113)
  {
    tmp114 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp112, data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */, 17, Less);
    tmp114 = (tmp112?0.0:jacobian->seedVars[0] /* eXST1.feedback.y.SeedNLSJac22 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eXST1.imLeadLag.u.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */ = tmp114;
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.y.$pDERNLSJac22.dummyVarNLSJac22 = eXST1.imLeadLag.TF.d * eXST1.imLeadLag.u.$pDERNLSJac22.dummyVarNLSJac22
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_816(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,816};
  jacobian->tmpVars[1] /* eXST1.imLeadLag.TF.y.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[135] /* eXST1.imLeadLag.TF.d PARAM */) * (jacobian->tmpVars[0] /* eXST1.imLeadLag.u.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
eXST1.K_a.u.$pDERNLSJac22.dummyVarNLSJac22 = if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then eXST1.imLeadLag.K * eXST1.imLeadLag.u.$pDERNLSJac22.dummyVarNLSJac22 else eXST1.imLeadLag.TF.y.$pDERNLSJac22.dummyVarNLSJac22
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_817(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,817};
  modelica_boolean tmp115;
  tmp115 = Less(fabs(data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  jacobian->tmpVars[2] /* eXST1.K_a.u.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */ = (tmp115?(data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */) * (jacobian->tmpVars[0] /* eXST1.imLeadLag.u.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[1] /* eXST1.imLeadLag.TF.y.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
eXST1.K_a.y.$pDERNLSJac22.dummyVarNLSJac22 = eXST1.K_a.k * eXST1.K_a.u.$pDERNLSJac22.dummyVarNLSJac22
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_818(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,818};
  jacobian->tmpVars[3] /* eXST1.K_a.y.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[86] /* eXST1.K_a.k PARAM */) * (jacobian->tmpVars[2] /* eXST1.K_a.u.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
eXST1.Vm1.y.$pDERNLSJac22.dummyVarNLSJac22 = if abs(eXST1.Vm1.T) <= 1e-15 then eXST1.K_a.y.$pDERNLSJac22.dummyVarNLSJac22 * eXST1.Vm1.K else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_819(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,819};
  modelica_boolean tmp116;
  tmp116 = LessEq(fabs(data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */),1e-15);
  jacobian->tmpVars[4] /* eXST1.Vm1.y.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */ = (tmp116?(jacobian->tmpVars[3] /* eXST1.K_a.y.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[109] /* eXST1.Vm1.K PARAM */):0.0);
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.y.$pDERNLSJac22.dummyVarNLSJac22 = 0.1 * eXST1.Vm1.y.$pDERNLSJac22.dummyVarNLSJac22 / eXST1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_820(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,820};
  jacobian->tmpVars[5] /* eXST1.imDerivativeLag.y.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */ = (0.1) * (DIVISION(jacobian->tmpVars[4] /* eXST1.Vm1.y.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */,"eXST1.imDerivativeLag.T"));
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac22.dummyVarNLSJac22 = (-eXST1.imDerivativeLag.y.$pDERNLSJac22.dummyVarNLSJac22) - eXST1.feedback.y.SeedNLSJac22
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_821(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,821};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_VAR */ = (-jacobian->tmpVars[5] /* eXST1.imDerivativeLag.y.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* eXST1.feedback.y.SeedNLSJac22 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac22_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac22;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac22_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac22;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_815(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_816(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_817(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_818(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_819(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_820(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_821(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac21(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,3,3,3,3,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {10,15,16,17,10,13,14,15,0,16,17,18,13,14,16,17,10,15,16,17,1,7,8,1,5,6,2,7,8,2,5,6,0,10,15,18,3,4,9,20,3,4,9,20,3,4,19,21,3,4,19,21,0,3,4,5,9,20,21,3,4,6,9,18,19,20,10,11,12,15,10,11,12,15,0,7,10,11,13,14,15,16,17,18,20,0,8,9,10,12,13,14,15,16,17,18,1,2,4,5,6,7,8,14,1,2,3,5,6,7,8,13};
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
  jacobian->sparsePattern->colorCols[4] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[3] = 8;
  jacobian->sparsePattern->colorCols[9] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[2] = 9;
  jacobian->sparsePattern->colorCols[6] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[5] = 10;
  jacobian->sparsePattern->colorCols[8] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac22(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+12] = {0,5,4,4,4,9,9,9,9,9,9,9,2};
  const int rowIndex[82] = {0,1,2,3,7,1,2,3,7,1,2,3,7,1,2,3,7,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,0,1,2,3,6,7,8,9,11,10,11};
  int i = 0;
  
  jacobian->sizeCols = 12;
  jacobian->sizeRows = 12;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((12+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(82*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 82;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(12*sizeof(int));
  jacobian->sparsePattern->maxColors = 11;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (12+1)*sizeof(int));
  
  for(i=2;i<12+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 82*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[1] = 3;
  jacobian->sparsePattern->colorCols[9] = 4;
  jacobian->sparsePattern->colorCols[8] = 5;
  jacobian->sparsePattern->colorCols[7] = 6;
  jacobian->sparsePattern->colorCols[6] = 7;
  jacobian->sparsePattern->colorCols[10] = 8;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[3] = 9;
  jacobian->sparsePattern->colorCols[5] = 10;
  jacobian->sparsePattern->colorCols[4] = 11;
  TRACE_POP
  return 0;
}


