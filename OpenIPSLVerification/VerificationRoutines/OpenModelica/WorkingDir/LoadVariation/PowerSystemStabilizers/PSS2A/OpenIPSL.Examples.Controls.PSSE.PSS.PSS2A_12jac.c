/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 1243
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac8 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac8) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1243};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[199] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[198] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1244};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[83] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[83] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[83] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1245};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[83] /* constantLoad.v variable */, 0.5, 8, Less);
  tmp45 = (modelica_boolean)tmp3;
  if(tmp45)
  {
    tmp4 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
    }tmp11 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
    }tmp26 = (modelica_boolean)(data->localData[0]->realVars[83] /* constantLoad.v variable */ == 0.0);
    if(tmp26)
    {
      tmp27 = 0.0;
    }
    else
    {
      tmp19 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
      tmp27 = (tmp21) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */));
    }
    tmp36 = (modelica_boolean)(data->localData[0]->realVars[83] /* constantLoad.v variable */ == 0.0);
    if(tmp36)
    {
      tmp37 = 0.0;
    }
    else
    {
      tmp29 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
      tmp37 = (tmp31) * ((-1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */));
    }
    tmp38 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac8.dummyVarNLSJac8 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1246};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 10, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[79] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[79] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac8.dummyVarNLSJac8 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1247};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 10, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[79] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[79] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac8.dummyVarNLSJac8 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1248};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac8 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 = ($cse6 * gENROE.iq.SeedNLSJac8 - $cse7 * gENROE.id.SeedNLSJac8) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1249};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[58] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac8 SEED_VAR */) - ((data->localData[0]->realVars[59] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac8 SEED_VAR */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 = ($cse7 * gENROE.iq.SeedNLSJac8 + $cse6 * gENROE.id.SeedNLSJac8) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1250};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[59] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac8 SEED_VAR */) + (data->localData[0]->realVars[58] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac8.dummyVarNLSJac8 = (-gENROE.PSIq.$pDERNLSJac8.dummyVarNLSJac8) - gENROE.R_a * gENROE.id.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1251};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac8.dummyVarNLSJac8 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1252};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac8 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac8.dummyVarNLSJac8 = gENROE.PSId.$pDERNLSJac8.dummyVarNLSJac8 - gENROE.R_a * gENROE.iq.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1253};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 = $cse6 * gENROE.uq.$pDERNLSJac8.dummyVarNLSJac8 - $cse7 * gENROE.ud.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1254};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[58] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[59] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 = $cse6 * gENROE.ud.$pDERNLSJac8.dummyVarNLSJac8 + $cse7 * gENROE.uq.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1255};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[58] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[59] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac8.dummyVarNLSJac8 = ((-$cse1) * gENCLS.id.SeedNLSJac8 - $cse2 * gENCLS.iq.SeedNLSJac8) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1256};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[54] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac8 SEED_VAR */) - ((data->localData[0]->realVars[55] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac8 SEED_VAR */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac8.dummyVarNLSJac8 = ($cse2 * gENCLS.id.SeedNLSJac8 - $cse1 * gENCLS.iq.SeedNLSJac8) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1257};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[55] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac8 SEED_VAR */) - ((data->localData[0]->realVars[54] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac8 SEED_VAR */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac8 - gENCLS.X_d * gENCLS.id.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1258};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac8 SEED_VAR */) - ((data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 = gENCLS.X_d * gENCLS.iq.SeedNLSJac8 - gENCLS.R_a * gENCLS.id.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1259};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac8 SEED_VAR */) - ((data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 = (-pwLine1.ir.re.SeedNLSJac8) - gENCLS.p.ir.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1260};
  jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac8 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 = (-pwLine1.ir.im.SeedNLSJac8) - gENCLS.p.ii.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1261};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac8 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 = (-pwLine3.ir.im.SeedNLSJac8) - pwLine4.is.im.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1262};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac8 SEED_VAR */) - jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac8.dummyVarNLSJac8 = (-pwLine.ir.re.SeedNLSJac8) - pwLine1.is.re.SeedNLSJac8 - pwLine3.is.re.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1263};
  jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac8 SEED_VAR */) - jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 = (-pwLine.ir.im.SeedNLSJac8) - pwLine1.is.im.SeedNLSJac8 - constantLoad.p.ii.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1264};
  jacobian->tmpVars[21] /* pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac8 SEED_VAR */) - jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[4] /* constantLoad.p.ii.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 = (-pwLine3.ir.re.SeedNLSJac8) - pwLine4.is.re.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1265};
  jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac8 SEED_VAR */) - jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac8.dummyVarNLSJac8 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac8 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 - (pwFault.R * pwLine3.vr.im.SeedNLSJac8 - pwFault.X * pwLine3.vr.re.SeedNLSJac8) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1266(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1266};
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
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */, 4, Less);
  tmp63 = (modelica_boolean)tmp51;
  if(tmp63)
  {
    tmp64 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, 5, Less);
    tmp61 = (modelica_boolean)(tmp52 && data->simulationInfo->booleanParameter[72] /* pwFault.ground PARAM */);
    if(tmp61)
    {
      tmp62 = jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, 5, Less);
      tmp59 = (modelica_boolean)tmp53;
      if(tmp59)
      {
        tmp54 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp55 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp56 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp57 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp58 = (tmp56 * tmp56) + (tmp57 * tmp57);
        tmp60 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[501] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) - ((data->simulationInfo->realParameter[502] /* pwFault.X PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */))) * ((tmp54 * tmp54) + (tmp55 * tmp55)),(tmp58 * tmp58),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp60 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
      }
      tmp62 = tmp60;
    }
    tmp64 = tmp62;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp64;
  TRACE_POP
}

/*
equation index: 1267
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac8 else pwLine1.vs.re.SeedNLSJac8 - pwLine3.vr.re.SeedNLSJac8 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1267(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1267};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp65 && tmp66)?jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (jacobian->tmpVars[21] /* pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac8 else pwLine1.vs.im.SeedNLSJac8 - pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1268(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1268};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp67 && tmp68)?jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 else pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vs.re.SeedNLSJac8 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1269(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1269};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp69 && tmp70)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 else pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vs.im.SeedNLSJac8 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1270(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1270};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp71 && tmp72)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac8.dummyVarNLSJac8 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac8.dummyVarNLSJac8 + pwLine1.vs.re.SeedNLSJac8 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1271(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1271};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (jacobian->seedVars[4] /* constantLoad.p.ii.SeedNLSJac8 SEED_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->localData[0]->realVars[81] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->localData[0]->realVars[82] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac8.dummyVarNLSJac8 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac8.dummyVarNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac8) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1272(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1272};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->localData[0]->realVars[82] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->localData[0]->realVars[81] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (jacobian->seedVars[4] /* constantLoad.p.ii.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac8 else pwLine1.vs.im.SeedNLSJac8 - pwLine1.vr.im.SeedNLSJac8 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1273(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1273};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp73 && tmp74)?jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1274
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac8 else pwLine1.vs.re.SeedNLSJac8 - pwLine1.vr.re.SeedNLSJac8 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1274(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1274};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp75 && tmp76)?jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine1.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac8.dummyVarNLSJac8 = $cse1 * gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 + (-$cse2) * gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vr.im.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1275(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1275};
  jacobian->resultVars[9] /* $res10.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = (data->localData[0]->realVars[54] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[55] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac8.dummyVarNLSJac8 = $cse2 * gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 + $cse1 * gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vr.re.SeedNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1276(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1276};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = (data->localData[0]->realVars[55] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[54] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac8 else pwLine1.vr.re.SeedNLSJac8 - pwLine1.vs.re.SeedNLSJac8 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac8 + pwLine1.vr.im.SeedNLSJac8 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac8 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac8 + (-pwLine1.vr.re.SeedNLSJac8) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac8 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1277(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1277};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp77 && tmp78)?jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 else pwLine1.vr.re.SeedNLSJac8 - pwLine3.vr.re.SeedNLSJac8 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine1.vr.im.SeedNLSJac8 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac8 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine1.vr.re.SeedNLSJac8) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac8 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1278(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1278};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, 7, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp79 && tmp80)?jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 else pwLine1.vr.im.SeedNLSJac8 - pwLine3.vr.im.SeedNLSJac8 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine1.vr.re.SeedNLSJac8) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac8 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine1.vr.im.SeedNLSJac8 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac8 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1279(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1279};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, 7, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp81 && tmp82)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 else pwLine1.vs.im.SeedNLSJac8 - pwLine3.vr.im.SeedNLSJac8 - (pwLine3.Z.re * (pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1280(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1280};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->tmpVars[21] /* pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (jacobian->tmpVars[21] /* pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac8 else pwLine1.vs.re.SeedNLSJac8 - pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1281(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1281};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac8 else pwLine3.vr.re.SeedNLSJac8 - pwLine1.vs.re.SeedNLSJac8 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac8 + pwLine3.vr.im.SeedNLSJac8 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac8 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac8 + (-pwLine3.vr.re.SeedNLSJac8) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac8 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1282(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1282};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac8 else pwLine3.vr.im.SeedNLSJac8 - pwLine1.vs.im.SeedNLSJac8 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac8 + (-pwLine3.vr.re.SeedNLSJac8) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac8 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac8 + pwLine3.vr.im.SeedNLSJac8 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac8 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1283(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1283};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac8.dummyVarNLSJac8 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac8 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 - (pwFault.R * pwLine3.vr.re.SeedNLSJac8 + pwFault.X * pwLine3.vr.im.SeedNLSJac8) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1284(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1284};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_boolean tmp99;
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  modelica_boolean tmp103;
  modelica_real tmp104;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */, 4, Less);
  tmp103 = (modelica_boolean)tmp91;
  if(tmp103)
  {
    tmp104 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, 5, Less);
    tmp101 = (modelica_boolean)(tmp92 && data->simulationInfo->booleanParameter[72] /* pwFault.ground PARAM */);
    if(tmp101)
    {
      tmp102 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, 5, Less);
      tmp99 = (modelica_boolean)tmp93;
      if(tmp99)
      {
        tmp94 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp95 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp96 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp97 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp98 = (tmp96 * tmp96) + (tmp97 * tmp97);
        tmp100 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[501] /* pwFault.R PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) + (data->simulationInfo->realParameter[502] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */)) * ((tmp94 * tmp94) + (tmp95 * tmp95)),(tmp98 * tmp98),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp100 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
      }
      tmp102 = tmp100;
    }
    tmp104 = tmp102;
  }
  jacobian->resultVars[18] /* $res19.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp104;
  TRACE_POP
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac8 else pwLine3.vr.re.SeedNLSJac8 - pwLine1.vr.re.SeedNLSJac8 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac8 + pwLine3.vr.im.SeedNLSJac8 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac8 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac8 + (-pwLine3.vr.re.SeedNLSJac8) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac8 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1285(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1285};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, 7, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac8 else pwLine3.vr.im.SeedNLSJac8 - pwLine1.vr.im.SeedNLSJac8 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac8 + (-pwLine3.vr.re.SeedNLSJac8) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac8 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac8 + pwLine3.vr.im.SeedNLSJac8 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac8 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1286(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1286};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, 7, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac8.dummyVarNLSJac8 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac8 else pwLine1.vr.im.SeedNLSJac8 - pwLine1.vs.im.SeedNLSJac8 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac8 + (-pwLine1.vr.re.SeedNLSJac8) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac8 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac8 + pwLine1.vr.im.SeedNLSJac8 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac8 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1287(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1287};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacNLSJac8_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_NLSJac8;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacNLSJac8_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_NLSJac8;
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1243(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1244(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1245(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1246(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1247(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1248(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1249(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1250(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1251(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1252(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1253(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1254(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1255(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1256(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1257(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1258(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1259(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1260(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1261(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1262(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1263(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1264(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1265(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1266(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1267(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1268(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1269(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1270(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1271(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1272(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1273(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1274(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1275(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1276(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1277(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1278(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1279(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1280(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1281(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1282(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1283(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1284(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1285(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1286(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1287(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1352
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1.$pDERNLSJac9.dummyVarNLSJac9 = if eSST1A.add3_1.y > eSST1A.imLimited.uMax then 0.0 else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then 0.0 else eSST1A.add3_1.y.SeedNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1352};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_real tmp114;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */, 21, Greater);
  tmp113 = (modelica_boolean)tmp111;
  if(tmp113)
  {
    tmp114 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp112, data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */, 22, Less);
    tmp114 = (tmp112?0.0:jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac9 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = tmp114;
  TRACE_POP
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p.$pDERNLSJac9.dummyVarNLSJac9 = if eSST1A.hV_GATE.n1 < const1.k then 0.0 else eSST1A.hV_GATE.n1.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1353};
  modelica_boolean tmp115;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->realVars[100] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 14, Less);
  jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (tmp115?0.0:jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y.$pDERNLSJac9.dummyVarNLSJac9 = eSST1A.add3_1.y.SeedNLSJac9 / eSST1A.add3_1.k1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1354};
  jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac9 SEED_VAR */,data->simulationInfo->realParameter[131] /* eSST1A.add3_1.k1 PARAM */,"eSST1A.add3_1.k1");
  TRACE_POP
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y.$pDERNLSJac9.dummyVarNLSJac9 = eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1355};
  jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[158] /* eSST1A.imLeadLag.TF.d PARAM */) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y.$pDERNLSJac9.dummyVarNLSJac9 = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p.$pDERNLSJac9.dummyVarNLSJac9 else eSST1A.imLeadLag.TF.y.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1356};
  modelica_boolean tmp116;
  tmp116 = Less(fabs(data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (tmp116?(data->simulationInfo->realParameter[147] /* eSST1A.imLeadLag.K PARAM */) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y.$pDERNLSJac9.dummyVarNLSJac9 = eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1357};
  jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[176] /* eSST1A.imLeadLag1.TF.d PARAM */) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y.$pDERNLSJac9.dummyVarNLSJac9 = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y.$pDERNLSJac9.dummyVarNLSJac9 else eSST1A.imLeadLag1.TF.y.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1358};
  modelica_boolean tmp117;
  tmp117 = Less(fabs(data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (tmp117?(data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag1.K PARAM */) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2.$pDERNLSJac9.dummyVarNLSJac9 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then if noEvent(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax) > eSST1A.simpleLagLim.outMin) then if noEvent(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K < eSST1A.simpleLagLim.outMax) then eSST1A.imLeadLag1.y.$pDERNLSJac9.dummyVarNLSJac9 * eSST1A.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1359};
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
    tmp119 = Greater(fmin((data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */);
    tmp121 = (modelica_boolean)tmp119;
    if(tmp121)
    {
      tmp120 = Less((data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */);
      tmp122 = (tmp120?(jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */):0.0);
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
  jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = tmp124;
  TRACE_POP
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
eSST1A.add3_2.y.$pDERNLSJac9.dummyVarNLSJac9 = eSST1A.add3_2.k2 * eSST1A.add3_2.u2.$pDERNLSJac9.dummyVarNLSJac9
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1360(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1360};
  jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k2 PARAM */) * (jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac9.dummyVarNLSJac9 = eSST1A.add3_2.y.$pDERNLSJac9.dummyVarNLSJac9 - eSST1A.imDerivativeLag.y.$pDERNLSJac9.dummyVarNLSJac9 * eSST1A.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1361(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1361};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[139] /* eSST1A.imDerivativeLag.T PARAM */));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacNLSJac9_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_NLSJac9;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacNLSJac9_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_NLSJac9;
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1352(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1353(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1354(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1355(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1356(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1357(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1358(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1359(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1360(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1361(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianNLSJac8(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,3,3,4,4,4,4,4,4,3,3,4,4,4,4,7,7,4,4,8,11,8,11};
  const int rowIndex[112] = {18,19,20,16,17,18,1,2,14,15,1,7,8,14,1,5,6,14,5,6,7,8,2,5,6,15,1,5,6,14,0,19,20,0,16,17,11,12,13,21,11,12,13,21,9,10,12,13,9,10,12,13,7,9,11,12,13,20,21,8,10,11,12,13,19,21,2,3,4,15,2,3,4,15,0,1,12,16,17,18,19,20,1,2,3,5,6,7,8,11,14,15,16,0,13,14,16,17,18,19,20,1,2,4,5,6,7,8,14,15,17,21};
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
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[17] = 7;
  jacobian->sparsePattern->colorCols[4] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[16] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[3] = 9;
  jacobian->sparsePattern->colorCols[6] = 9;
  jacobian->sparsePattern->colorCols[8] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[2] = 10;
  jacobian->sparsePattern->colorCols[5] = 10;
  jacobian->sparsePattern->colorCols[9] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianNLSJac9(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+27] = {0,6,5,5,5,5,21,21,21,21,21,21,21,18,7,6,14,14,16,15,16,15,13,12,11,10,9,8};
  const int rowIndex[357] = {0,1,2,3,4,8,1,2,3,4,8,1,2,3,4,8,1,2,3,4,8,1,2,3,4,8,0,1,2,3,4,7,8,9,10,12,13,14,16,19,20,21,22,23,24,25,26,0,1,2,3,4,7,8,9,10,12,13,14,16,19,20,21,22,23,24,25,26,0,1,2,3,4,7,8,9,10,12,13,14,16,19,20,21,22,23,24,25,26,0,1,2,3,4,7,8,9,10,12,13,14,16,19,20,21,22,23,24,25,26,0,1,2,3,4,7,8,9,10,12,13,14,16,19,20,21,22,23,24,25,26,0,1,2,3,4,7,8,9,10,12,13,14,16,19,20,21,22,23,24,25,26,0,1,2,3,4,7,8,9,10,12,13,14,16,19,20,21,22,23,24,25,26,1,2,3,4,8,11,12,13,14,15,17,18,21,22,23,24,25,26,1,2,3,4,8,13,14,1,2,3,4,8,14,1,2,3,4,8,13,14,15,21,22,23,24,25,26,1,2,3,4,8,13,14,16,21,22,23,24,25,26,1,2,3,4,8,13,14,15,17,18,21,22,23,24,25,26,1,2,3,4,8,13,14,15,18,21,22,23,24,25,26,1,2,3,4,8,13,14,16,19,20,21,22,23,24,25,26,1,2,3,4,8,13,14,16,20,21,22,23,24,25,26,1,2,3,4,8,13,14,21,22,23,24,25,26,1,2,3,4,8,13,14,22,23,24,25,26,1,2,3,4,8,13,14,23,24,25,26,1,2,3,4,8,13,14,24,25,26,1,2,3,4,8,13,14,25,26,1,2,3,4,8,13,14,26};
  int i = 0;
  
  jacobian->sizeCols = 27;
  jacobian->sizeRows = 27;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(27,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(27,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((27+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(357*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 357;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(27*sizeof(int));
  jacobian->sparsePattern->maxColors = 27;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (27+1)*sizeof(int));
  
  for(i=2;i<27+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 357*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[20] = 1;
  jacobian->sparsePattern->colorCols[19] = 2;
  jacobian->sparsePattern->colorCols[18] = 3;
  jacobian->sparsePattern->colorCols[17] = 4;
  jacobian->sparsePattern->colorCols[26] = 5;
  jacobian->sparsePattern->colorCols[25] = 6;
  jacobian->sparsePattern->colorCols[24] = 7;
  jacobian->sparsePattern->colorCols[23] = 8;
  jacobian->sparsePattern->colorCols[22] = 9;
  jacobian->sparsePattern->colorCols[21] = 10;
  jacobian->sparsePattern->colorCols[16] = 11;
  jacobian->sparsePattern->colorCols[15] = 12;
  jacobian->sparsePattern->colorCols[14] = 13;
  jacobian->sparsePattern->colorCols[13] = 14;
  jacobian->sparsePattern->colorCols[0] = 15;
  jacobian->sparsePattern->colorCols[4] = 16;
  jacobian->sparsePattern->colorCols[3] = 17;
  jacobian->sparsePattern->colorCols[2] = 18;
  jacobian->sparsePattern->colorCols[1] = 19;
  jacobian->sparsePattern->colorCols[10] = 20;
  jacobian->sparsePattern->colorCols[9] = 21;
  jacobian->sparsePattern->colorCols[8] = 22;
  jacobian->sparsePattern->colorCols[7] = 23;
  jacobian->sparsePattern->colorCols[11] = 24;
  jacobian->sparsePattern->colorCols[12] = 25;
  jacobian->sparsePattern->colorCols[6] = 26;
  jacobian->sparsePattern->colorCols[5] = 27;
  TRACE_POP
  return 0;
}


