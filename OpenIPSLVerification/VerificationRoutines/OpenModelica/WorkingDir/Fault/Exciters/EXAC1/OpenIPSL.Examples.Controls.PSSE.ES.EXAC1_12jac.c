/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 235
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac21 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac21) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[129] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[128] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[129] /* pwLine1.vs.re variable */) * (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) + (data->localData[0]->realVars[128] /* pwLine1.vs.im variable */) * (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, 5, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp45 = (modelica_boolean)tmp3;
  if(tmp45)
  {
    tmp4 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp12 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
      tmp20 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp27 = (tmp21) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
    }
    tmp36 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp36)
    {
      tmp37 = 0.0;
    }
    else
    {
      tmp29 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
      tmp30 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp37 = (tmp31) * ((-1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
    }
    tmp38 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp39 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp46 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * (tmp27))) + (tmp37) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp40)))));
  }
  else
  {
    tmp46 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 3, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 + constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,239};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 3, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 = ($cse7 * gENROE.iq.SeedNLSJac21 + $cse6 * gENROE.id.SeedNLSJac21) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 = ($cse6 * gENROE.iq.SeedNLSJac21 - $cse7 * gENROE.id.SeedNLSJac21) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */))) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 = gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 - gENROE.R_a * gENROE.iq.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,244};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac21 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 = (-gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21) - gENROE.R_a * gENROE.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 = $cse6 * gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 + $cse7 * gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 = $cse6 * gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 - $cse7 * gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21 = ((-$cse1) * gENCLS.id.SeedNLSJac21 - $cse2 * gENCLS.iq.SeedNLSJac21) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac21 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */))) * (data->simulationInfo->realParameter[175] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21 = ($cse2 * gENCLS.id.SeedNLSJac21 - $cse1 * gENCLS.iq.SeedNLSJac21) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac21 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */))) * (data->simulationInfo->realParameter[175] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac21 - gENCLS.X_d * gENCLS.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,250};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[181] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */) - ((data->simulationInfo->realParameter[184] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 = gENCLS.X_d * gENCLS.iq.SeedNLSJac21 - gENCLS.R_a * gENCLS.id.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,251};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[184] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac21 SEED_VAR */) - ((data->simulationInfo->realParameter[181] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac21 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine4.ir.re.SeedNLSJac21) - gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,252};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac21 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine4.ir.im.SeedNLSJac21) - gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,253};
  jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac21 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine3.ir.re.SeedNLSJac21) - pwLine4.is.re.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,254};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine.ir.im.SeedNLSJac21) - pwLine1.is.im.SeedNLSJac21 - pwLine3.is.im.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,255};
  jacobian->tmpVars[20] /* constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
pwLine1.is.re.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine.ir.re.SeedNLSJac21) - pwLine3.is.re.SeedNLSJac21 - constantLoad.p.ir.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,256};
  jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[3] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[2] /* constantLoad.p.ir.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 = (-pwLine3.ir.im.SeedNLSJac21) - pwLine4.is.im.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,257};
  jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */) - jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac21 else pwLine3.vr.re.SeedNLSJac21 - pwLine1.vs.re.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,258};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->seedVars[9] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac21.dummyVarNLSJac21 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac21 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 - (pwFault.R * pwLine3.vr.re.SeedNLSJac21 + pwFault.X * pwLine3.vr.im.SeedNLSJac21) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,259};
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
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[288] /* pwFault.t1 PARAM */, 8, Less);
  tmp65 = (modelica_boolean)tmp53;
  if(tmp65)
  {
    tmp66 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwFault.t2 PARAM */, 9, Less);
    tmp63 = (modelica_boolean)(tmp54 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp63)
    {
      tmp64 = jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwFault.t2 PARAM */, 9, Less);
      tmp61 = (modelica_boolean)tmp55;
      if(tmp61)
      {
        tmp56 = data->simulationInfo->realParameter[286] /* pwFault.R PARAM */;
        tmp57 = data->simulationInfo->realParameter[287] /* pwFault.X PARAM */;
        tmp58 = data->simulationInfo->realParameter[286] /* pwFault.R PARAM */;
        tmp59 = data->simulationInfo->realParameter[287] /* pwFault.X PARAM */;
        tmp60 = (tmp58 * tmp58) + (tmp59 * tmp59);
        tmp62 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[286] /* pwFault.R PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) + (data->simulationInfo->realParameter[287] /* pwFault.X PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */)) * ((tmp56 * tmp56) + (tmp57 * tmp57)),(tmp60 * tmp60),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp62 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
      }
      tmp64 = tmp62;
    }
    tmp66 = tmp64;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = tmp66;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac21.dummyVarNLSJac21 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac21 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 - (pwFault.R * pwLine3.vr.im.SeedNLSJac21 - pwFault.X * pwLine3.vr.re.SeedNLSJac21) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,260};
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
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[288] /* pwFault.t1 PARAM */, 8, Less);
  tmp79 = (modelica_boolean)tmp67;
  if(tmp79)
  {
    tmp80 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwFault.t2 PARAM */, 9, Less);
    tmp77 = (modelica_boolean)(tmp68 && data->simulationInfo->booleanParameter[68] /* pwFault.ground PARAM */);
    if(tmp77)
    {
      tmp78 = jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[289] /* pwFault.t2 PARAM */, 9, Less);
      tmp75 = (modelica_boolean)tmp69;
      if(tmp75)
      {
        tmp70 = data->simulationInfo->realParameter[287] /* pwFault.X PARAM */;
        tmp71 = data->simulationInfo->realParameter[286] /* pwFault.R PARAM */;
        tmp72 = data->simulationInfo->realParameter[287] /* pwFault.X PARAM */;
        tmp73 = data->simulationInfo->realParameter[286] /* pwFault.R PARAM */;
        tmp74 = (tmp72 * tmp72) + (tmp73 * tmp73);
        tmp76 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[286] /* pwFault.R PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) - ((data->simulationInfo->realParameter[287] /* pwFault.X PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */))) * ((tmp70 * tmp70) + (tmp71 * tmp71)),(tmp74 * tmp74),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp76 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
      }
      tmp78 = tmp76;
    }
    tmp80 = tmp78;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = tmp80;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 else pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vs.re.SeedNLSJac21 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,261};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp81 && tmp82)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[298] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[295] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[297] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[295] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 else pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vs.im.SeedNLSJac21 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,262};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[298] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[295] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[297] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[295] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac21 else pwLine1.vs.im.SeedNLSJac21 - pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,263};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[298] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[295] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[297] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[295] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac21 else pwLine1.vs.re.SeedNLSJac21 - pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,264};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[299] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[300] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[298] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[295] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[297] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[295] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[296] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac21 else pwLine1.vs.re.SeedNLSJac21 - pwLine3.vr.re.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,265};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[3] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac21 else pwLine1.vs.im.SeedNLSJac21 - pwLine3.vr.im.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_266(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,266};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac21.dummyVarNLSJac21 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac21) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_267(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,267};
  jacobian->resultVars[9] /* $res10.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[128] /* pwLine1.vs.im variable */) * (jacobian->seedVars[2] /* constantLoad.p.ir.SeedNLSJac21 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[129] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac21.dummyVarNLSJac21 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac21 + pwLine1.vs.re.SeedNLSJac21 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_268(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,268};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[128] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ii.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[129] /* pwLine1.vs.re variable */) * (jacobian->seedVars[2] /* constantLoad.p.ir.SeedNLSJac21 SEED_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac21.dummyVarNLSJac21 = $cse1 * gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 + (-$cse2) * gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vr.im.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_269(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,269};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac21.dummyVarNLSJac21 = $cse2 * gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 + $cse1 * gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 - pwLine1.vr.re.SeedNLSJac21
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_270(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,270};
  jacobian->resultVars[12] /* $res13.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.$pDERNLSJac21.dummyVarNLSJac21 else pwLine1.vs.re.SeedNLSJac21 - pwLine1.vr.re.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.is.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_271(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,271};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[309] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[308] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[306] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac21 else pwLine1.vs.im.SeedNLSJac21 - pwLine1.vr.im.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac21 + (-pwLine1.vs.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vs.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_272(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,272};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[309] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[306] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[308] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 else pwLine1.vr.re.SeedNLSJac21 - pwLine1.vs.re.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_273(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,273};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[309] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[308] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[306] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac21.dummyVarNLSJac21 else pwLine1.vr.im.SeedNLSJac21 - pwLine1.vs.im.SeedNLSJac21 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac21.dummyVarNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_274(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,274};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwLine1.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwLine1.t2 PARAM */, 13, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[309] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[306] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[308] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[306] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[307] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac21 else pwLine1.vr.re.SeedNLSJac21 - pwLine3.vr.re.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_275(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,275};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac21 else pwLine3.vr.re.SeedNLSJac21 - pwLine1.vr.re.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_276(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,276};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac21 else pwLine3.vr.im.SeedNLSJac21 - pwLine1.vr.im.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_277(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,277};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac21 else pwLine3.vr.im.SeedNLSJac21 - pwLine1.vs.im.SeedNLSJac21 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac21 + (-pwLine3.vr.re.SeedNLSJac21) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac21 + pwLine3.vr.im.SeedNLSJac21 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac21 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,278};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine3.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine3.t2 PARAM */, 7, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac21.dummyVarNLSJac21 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac21 else pwLine1.vr.im.SeedNLSJac21 - pwLine3.vr.im.SeedNLSJac21 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac21 + (-pwLine1.vr.re.SeedNLSJac21) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac21 + pwLine1.vr.im.SeedNLSJac21 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac21 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,279};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac21 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac21 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac21 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac21 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac21 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacNLSJac21_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_NLSJac21;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacNLSJac21_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_NLSJac21;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_235(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_236(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_237(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_238(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_239(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_240(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_241(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_242(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_243(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_244(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_245(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_246(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_247(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_248(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_249(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_250(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_251(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_252(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_253(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_254(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_255(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_256(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_257(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_258(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_259(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_260(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_261(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_262(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_263(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_264(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_265(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_266(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_267(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_268(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_269(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_270(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_271(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_272(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_273(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_274(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_275(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_276(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_277(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_278(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_eqFunction_279(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianNLSJac21(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,3,3,4,4,4,4,4,4,3,3,4,4,4,4,7,7,4,4,8,8,11,11};
  const int rowIndex[112] = {0,2,20,2,18,19,9,10,13,14,7,8,13,14,9,10,13,14,7,8,9,10,5,6,13,14,5,6,9,10,1,18,19,0,1,20,15,16,17,21,15,16,17,21,11,12,15,16,11,12,15,16,11,14,15,16,17,19,21,12,13,15,16,17,18,21,3,4,5,6,3,4,5,6,0,1,2,8,18,19,20,21,0,1,2,7,17,18,19,20,4,5,6,7,8,9,10,13,14,16,20,0,3,5,6,7,8,9,10,13,14,15};
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
  jacobian->sparsePattern->colorCols[5] = 6;
  jacobian->sparsePattern->colorCols[6] = 6;
  jacobian->sparsePattern->colorCols[13] = 6;
  jacobian->sparsePattern->colorCols[4] = 7;
  jacobian->sparsePattern->colorCols[12] = 7;
  jacobian->sparsePattern->colorCols[17] = 7;
  jacobian->sparsePattern->colorCols[18] = 7;
  jacobian->sparsePattern->colorCols[1] = 8;
  jacobian->sparsePattern->colorCols[3] = 8;
  jacobian->sparsePattern->colorCols[7] = 8;
  jacobian->sparsePattern->colorCols[9] = 8;
  jacobian->sparsePattern->colorCols[11] = 8;
  jacobian->sparsePattern->colorCols[0] = 9;
  jacobian->sparsePattern->colorCols[2] = 9;
  jacobian->sparsePattern->colorCols[8] = 9;
  jacobian->sparsePattern->colorCols[10] = 9;
  jacobian->sparsePattern->colorCols[16] = 9;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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

