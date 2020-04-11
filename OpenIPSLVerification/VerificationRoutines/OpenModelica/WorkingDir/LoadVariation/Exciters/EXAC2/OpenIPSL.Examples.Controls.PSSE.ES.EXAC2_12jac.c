/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 837
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac18 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac18) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_837(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,837};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_838(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,838};
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
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp44 = (modelica_boolean)tmp2;
  if(tmp44)
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp10 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp25 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp25)
    {
      tmp26 = 0.0;
    }
    else
    {
      tmp18 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
      tmp26 = (tmp20) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp35)
    {
      tmp36 = 0.0;
    }
    else
    {
      tmp28 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
      tmp36 = (tmp30) * ((-1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */));
    }
    tmp37 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = tmp45;
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_839(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,839};
  modelica_boolean tmp46;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (tmp46?(data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac18.dummyVarNLSJac18 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 + constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 + constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 + constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 + constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_840(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,840};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 3, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac18.dummyVarNLSJac18 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 + constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 + constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 + constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 + constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,841};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 3, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac18.dummyVarNLSJac18 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_842(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,842};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[275] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac18 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac18.dummyVarNLSJac18 = ($cse7 * gENROE.iq.SeedNLSJac18 + $cse6 * gENROE.id.SeedNLSJac18) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_843(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,843};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac18 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac18.dummyVarNLSJac18 = ($cse6 * gENROE.iq.SeedNLSJac18 - $cse7 * gENROE.id.SeedNLSJac18) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_844(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,844};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac18 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac18 SEED_VAR */))) * (data->simulationInfo->realParameter[220] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac18.dummyVarNLSJac18 = (-gENROE.PSIq.$pDERNLSJac18.dummyVarNLSJac18) - gENROE.R_a * gENROE.id.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_845(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,845};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac18 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac18.dummyVarNLSJac18 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_846(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,846};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[274] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac18 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac18.dummyVarNLSJac18 = gENROE.PSId.$pDERNLSJac18.dummyVarNLSJac18 - gENROE.R_a * gENROE.iq.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_847(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,847};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[257] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac18 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 = $cse6 * gENROE.ud.$pDERNLSJac18.dummyVarNLSJac18 + $cse7 * gENROE.uq.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_848(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,848};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 = $cse6 * gENROE.uq.$pDERNLSJac18.dummyVarNLSJac18 - $cse7 * gENROE.ud.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_849(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,849};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac18.dummyVarNLSJac18 = ((-$cse1) * gENCLS.id.SeedNLSJac18 - $cse2 * gENCLS.iq.SeedNLSJac18) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_850(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,850};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac18 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac18 SEED_VAR */))) * (data->simulationInfo->realParameter[194] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac18.dummyVarNLSJac18 = ($cse2 * gENCLS.id.SeedNLSJac18 - $cse1 * gENCLS.iq.SeedNLSJac18) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,851};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac18 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac18 SEED_VAR */))) * (data->simulationInfo->realParameter[194] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac18.dummyVarNLSJac18 = gENCLS.X_d * gENCLS.iq.SeedNLSJac18 - gENCLS.R_a * gENCLS.id.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,852};
  jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac18 SEED_VAR */) - ((data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac18 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac18.dummyVarNLSJac18 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac18 - gENCLS.X_d * gENCLS.id.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,853};
  jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[200] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac18 SEED_VAR */) - ((data->simulationInfo->realParameter[203] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac18 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac18.dummyVarNLSJac18 = (-pwLine1.ir.im.SeedNLSJac18) - gENCLS.p.ii.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,854};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac18 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac18.dummyVarNLSJac18 = (-pwLine1.ir.re.SeedNLSJac18) - gENCLS.p.ir.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,855};
  jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac18 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac18.dummyVarNLSJac18 = (-pwLine3.ir.re.SeedNLSJac18) - pwLine4.is.re.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,856};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac18 SEED_VAR */) - jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac18 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac18.dummyVarNLSJac18 = (-pwLine3.ir.im.SeedNLSJac18) - pwLine4.is.im.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,857};
  jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac18 SEED_VAR */) - jacobian->seedVars[4] /* pwLine4.is.im.SeedNLSJac18 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
pwLine.ir.im.$pDERNLSJac18.dummyVarNLSJac18 = (-pwLine1.is.im.SeedNLSJac18) - pwLine3.is.im.SeedNLSJac18 - constantLoad.p.ii.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,858};
  jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac18 SEED_VAR */) - jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac18 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
pwLine.ir.re.$pDERNLSJac18.dummyVarNLSJac18 = (-pwLine1.is.re.SeedNLSJac18) - pwLine3.is.re.SeedNLSJac18 - constantLoad.p.ir.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,859};
  jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac18 SEED_VAR */) - jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac18 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac18.dummyVarNLSJac18 = $cse2 * gENCLS.vq.$pDERNLSJac18.dummyVarNLSJac18 + $cse1 * gENCLS.vd.$pDERNLSJac18.dummyVarNLSJac18 - pwLine1.vr.re.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,860};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac18.dummyVarNLSJac18 else pwLine1.vs.im.SeedNLSJac18 - pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac18.dummyVarNLSJac18 + (-pwLine1.vs.re.SeedNLSJac18) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac18 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac18.dummyVarNLSJac18 + pwLine1.vs.im.SeedNLSJac18 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac18 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_861(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,861};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 862
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac18 else pwLine1.vs.im.SeedNLSJac18 - pwLine3.vr.im.SeedNLSJac18 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac18 + (-pwLine1.vs.re.SeedNLSJac18) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac18 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac18 + pwLine1.vs.im.SeedNLSJac18 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac18 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_862(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,862};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp53 && tmp54)?jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 863
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac18 else pwLine1.vs.re.SeedNLSJac18 - pwLine3.vr.re.SeedNLSJac18 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac18 + pwLine1.vs.im.SeedNLSJac18 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac18 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac18 + (-pwLine1.vs.re.SeedNLSJac18) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac18 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_863(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,863};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp55 && tmp56)?jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 864
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac18.dummyVarNLSJac18 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac18.dummyVarNLSJac18 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac18 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac18.dummyVarNLSJac18 - (pwFault.R * pwLine3.vr.re.SeedNLSJac18 + pwFault.X * pwLine3.vr.im.SeedNLSJac18) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_864(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,864};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  modelica_boolean tmp69;
  modelica_real tmp70;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwFault.t1 PARAM */, 9, Less);
  tmp69 = (modelica_boolean)tmp57;
  if(tmp69)
  {
    tmp70 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */, 10, Less);
    tmp67 = (modelica_boolean)(tmp58 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp67)
    {
      tmp68 = jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */, 10, Less);
      tmp65 = (modelica_boolean)tmp59;
      if(tmp65)
      {
        tmp60 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp61 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp62 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp63 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp64 = (tmp62 * tmp62) + (tmp63 * tmp63);
        tmp66 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[305] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */) + (data->simulationInfo->realParameter[306] /* pwFault.X PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */)) * ((tmp60 * tmp60) + (tmp61 * tmp61)),(tmp64 * tmp64),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp66 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */;
      }
      tmp68 = tmp66;
    }
    tmp70 = tmp68;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = tmp70;
  TRACE_POP
}

/*
equation index: 865
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac18.dummyVarNLSJac18 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac18.dummyVarNLSJac18 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac18 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac18.dummyVarNLSJac18 - (pwFault.R * pwLine3.vr.im.SeedNLSJac18 - pwFault.X * pwLine3.vr.re.SeedNLSJac18) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_865(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,865};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwFault.t1 PARAM */, 9, Less);
  tmp83 = (modelica_boolean)tmp71;
  if(tmp83)
  {
    tmp84 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */, 10, Less);
    tmp81 = (modelica_boolean)(tmp72 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp81)
    {
      tmp82 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[308] /* pwFault.t2 PARAM */, 10, Less);
      tmp79 = (modelica_boolean)tmp73;
      if(tmp79)
      {
        tmp74 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp75 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp76 = data->simulationInfo->realParameter[306] /* pwFault.X PARAM */;
        tmp77 = data->simulationInfo->realParameter[305] /* pwFault.R PARAM */;
        tmp78 = (tmp76 * tmp76) + (tmp77 * tmp77);
        tmp80 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[305] /* pwFault.R PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */) - ((data->simulationInfo->realParameter[306] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */))) * ((tmp74 * tmp74) + (tmp75 * tmp75)),(tmp78 * tmp78),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp80 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */;
      }
      tmp82 = tmp80;
    }
    tmp84 = tmp82;
  }
  jacobian->resultVars[5] /* $res6.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = tmp84;
  TRACE_POP
}

/*
equation index: 866
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac18 else pwLine3.vr.re.SeedNLSJac18 - pwLine1.vs.re.SeedNLSJac18 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac18 + pwLine3.vr.im.SeedNLSJac18 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac18 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac18 + (-pwLine3.vr.re.SeedNLSJac18) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac18 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_866(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,866};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 867
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac18 else pwLine3.vr.im.SeedNLSJac18 - pwLine1.vs.im.SeedNLSJac18 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac18 + (-pwLine3.vr.re.SeedNLSJac18) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac18 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac18 + pwLine3.vr.im.SeedNLSJac18 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac18 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_867(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,867};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[340] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[341] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[339] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[338] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[336] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[337] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 868
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac18.dummyVarNLSJac18 else pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 - pwLine1.vs.im.SeedNLSJac18 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac18.dummyVarNLSJac18 + (-pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac18.dummyVarNLSJac18 + pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_868(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,868};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 869
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac18.dummyVarNLSJac18 else pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 - pwLine1.vs.re.SeedNLSJac18 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac18.dummyVarNLSJac18 + pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac18.dummyVarNLSJac18 + (-pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_869(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,869};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac18.dummyVarNLSJac18 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac18 + pwLine1.vs.im.SeedNLSJac18 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac18) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac18.dummyVarNLSJac18 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_870(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,870};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac18 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac18 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac18.dummyVarNLSJac18 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac18 + pwLine1.vs.im.SeedNLSJac18 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac18 + pwLine1.vs.re.SeedNLSJac18 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac18.dummyVarNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_871(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,871};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac18 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac18 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac18.dummyVarNLSJac18 else pwLine1.vs.re.SeedNLSJac18 - pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac18.dummyVarNLSJac18 + pwLine1.vs.im.SeedNLSJac18 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac18 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac18.dummyVarNLSJac18 + (-pwLine1.vs.re.SeedNLSJac18) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac18 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_872(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,872};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[318] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[319] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[317] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[316] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[314] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[315] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac18 else pwLine1.vs.im.SeedNLSJac18 - pwLine1.vr.im.SeedNLSJac18 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac18 + (-pwLine1.vs.re.SeedNLSJac18) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac18 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac18 + pwLine1.vs.im.SeedNLSJac18 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac18 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_873(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,873};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac18 else pwLine1.vs.re.SeedNLSJac18 - pwLine1.vr.re.SeedNLSJac18 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac18 + pwLine1.vs.im.SeedNLSJac18 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac18 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac18 + (-pwLine1.vs.re.SeedNLSJac18) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac18 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_874(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,874};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac18 else pwLine3.vr.re.SeedNLSJac18 - pwLine1.vr.re.SeedNLSJac18 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac18 + pwLine3.vr.im.SeedNLSJac18 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac18 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac18 + (-pwLine3.vr.re.SeedNLSJac18) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac18 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_875(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,875};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac18 else pwLine3.vr.im.SeedNLSJac18 - pwLine1.vr.im.SeedNLSJac18 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac18 + (-pwLine3.vr.re.SeedNLSJac18) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac18 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac18 + pwLine3.vr.im.SeedNLSJac18 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac18 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_876(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,876};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[4] /* pwLine4.is.im.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac18.dummyVarNLSJac18 else pwLine1.vr.im.SeedNLSJac18 - pwLine3.vr.im.SeedNLSJac18 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac18.dummyVarNLSJac18 + (-pwLine1.vr.re.SeedNLSJac18) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac18 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac18.dummyVarNLSJac18 + pwLine1.vr.im.SeedNLSJac18 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac18 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_877(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 878
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac18.dummyVarNLSJac18 else pwLine1.vr.re.SeedNLSJac18 - pwLine3.vr.re.SeedNLSJac18 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac18.dummyVarNLSJac18 + pwLine1.vr.im.SeedNLSJac18 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac18 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac18.dummyVarNLSJac18 + (-pwLine1.vr.re.SeedNLSJac18) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac18 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_878(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,878};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[351] /* pwLine4.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[352] /* pwLine4.t2 PARAM */, 8, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[350] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[349] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[347] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[348] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac18 else pwLine1.vr.re.SeedNLSJac18 - pwLine1.vs.re.SeedNLSJac18 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac18 + pwLine1.vr.im.SeedNLSJac18 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac18 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac18 + (-pwLine1.vr.re.SeedNLSJac18) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac18 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_879(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 880
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac18.dummyVarNLSJac18 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac18 else pwLine1.vr.im.SeedNLSJac18 - pwLine1.vs.im.SeedNLSJac18 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac18 + (-pwLine1.vr.re.SeedNLSJac18) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac18 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac18 + pwLine1.vr.im.SeedNLSJac18 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac18 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_880(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[329] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[330] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac18 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac18 SEED_VAR */ - ((data->simulationInfo->realParameter[328] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac18 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */)) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[327] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac18 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[325] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac18 SEED_VAR */) * (data->simulationInfo->realParameter[326] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac18.dummyVarNLSJac18 = $cse1 * gENCLS.vq.$pDERNLSJac18.dummyVarNLSJac18 + (-$cse2) * gENCLS.vd.$pDERNLSJac18.dummyVarNLSJac18 - pwLine1.vr.im.SeedNLSJac18
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_881(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,881};
  jacobian->resultVars[21] /* $res22.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac18 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacNLSJac18_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_NLSJac18;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacNLSJac18_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_NLSJac18;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_837(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_838(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_839(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_840(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_841(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_842(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_843(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_844(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_845(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_846(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_847(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_848(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_849(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_850(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_851(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_852(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_853(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_854(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_855(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_856(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_857(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_858(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_859(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_860(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_861(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_862(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_863(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_864(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_865(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_866(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_867(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_868(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_869(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_870(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_871(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_872(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_873(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_874(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_875(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_876(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_877(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_878(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_879(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_880(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_881(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianNLSJac18(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,8,11,11,8};
  const int rowIndex[112] = {1,12,13,14,1,10,11,12,1,12,13,14,1,10,11,12,5,15,16,5,6,7,4,6,7,4,15,16,1,2,3,12,1,2,3,12,17,18,19,20,17,18,19,20,0,17,18,21,0,17,18,21,13,16,17,18,19,20,21,0,14,15,17,18,19,20,1,8,9,12,1,8,9,12,2,4,5,6,7,15,16,17,1,2,3,6,9,10,11,12,13,14,19,1,2,3,7,8,10,11,12,13,14,20,3,4,5,6,7,15,16,18};
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
  jacobian->sparsePattern->colorCols[20] = 1;
  jacobian->sparsePattern->colorCols[19] = 2;
  jacobian->sparsePattern->colorCols[17] = 3;
  jacobian->sparsePattern->colorCols[21] = 3;
  jacobian->sparsePattern->colorCols[16] = 4;
  jacobian->sparsePattern->colorCols[18] = 4;
  jacobian->sparsePattern->colorCols[9] = 5;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[8] = 6;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
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
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+13] = {0,4,4,2,3,5,10,10,10,10,10,10,10,2};
  const int rowIndex[90] = {0,2,3,4,1,2,3,4,2,4,2,3,4,1,2,3,4,8,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,11,12};
  int i = 0;
  
  jacobian->sizeCols = 13;
  jacobian->sizeRows = 13;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(90*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 90;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern->maxColors = 12;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 90*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[4] = 2;
  jacobian->sparsePattern->colorCols[3] = 3;
  jacobian->sparsePattern->colorCols[1] = 4;
  jacobian->sparsePattern->colorCols[10] = 5;
  jacobian->sparsePattern->colorCols[9] = 6;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[7] = 8;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[12] = 10;
  jacobian->sparsePattern->colorCols[2] = 10;
  jacobian->sparsePattern->colorCols[6] = 11;
  jacobian->sparsePattern->colorCols[5] = 12;
  TRACE_POP
  return 0;
}


