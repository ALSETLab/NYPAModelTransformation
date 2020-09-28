/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 415
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac13 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac13) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_415(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,415};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_416(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,416};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_417(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,417};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp42 = (modelica_boolean)tmp3;
  if(tmp42)
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
    }tmp18 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp33 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp33)
    {
      tmp34 = 0.0;
    }
    else
    {
      tmp26 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
      tmp34 = (tmp28) * ((-1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    tmp43 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (tmp20)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */)))) + (tmp34) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp37)))));
  }
  else
  {
    tmp43 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac13.dummyVarNLSJac13 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 + constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 + constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 + constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 + constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_418(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,418};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac13.dummyVarNLSJac13 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 + constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 + constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 + constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 + constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_419(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,419};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac13.dummyVarNLSJac13 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_420(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,420};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[278] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac13 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac13.dummyVarNLSJac13 = ($cse7 * gENROE.iq.SeedNLSJac13 + $cse6 * gENROE.id.SeedNLSJac13) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_421(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,421};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac13 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac13.dummyVarNLSJac13 = ($cse6 * gENROE.iq.SeedNLSJac13 - $cse7 * gENROE.id.SeedNLSJac13) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_422(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,422};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac13 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac13 SEED_VAR */))) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac13.dummyVarNLSJac13 = (-gENROE.PSIq.$pDERNLSJac13.dummyVarNLSJac13) - gENROE.R_a * gENROE.id.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_423(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,423};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac13 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac13.dummyVarNLSJac13 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_424(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,424};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[277] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac13 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac13.dummyVarNLSJac13 = gENROE.PSId.$pDERNLSJac13.dummyVarNLSJac13 - gENROE.R_a * gENROE.iq.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_425(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,425};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac13 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 = $cse6 * gENROE.ud.$pDERNLSJac13.dummyVarNLSJac13 + $cse7 * gENROE.uq.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_426(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,426};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 = $cse6 * gENROE.uq.$pDERNLSJac13.dummyVarNLSJac13 - $cse7 * gENROE.ud.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_427(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,427};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac13.dummyVarNLSJac13 = ((-$cse1) * gENCLS.id.SeedNLSJac13 - $cse2 * gENCLS.iq.SeedNLSJac13) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_428(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,428};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac13 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac13 SEED_VAR */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac13.dummyVarNLSJac13 = ($cse2 * gENCLS.id.SeedNLSJac13 - $cse1 * gENCLS.iq.SeedNLSJac13) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_429(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,429};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac13 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac13 SEED_VAR */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac13.dummyVarNLSJac13 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac13 - gENCLS.X_d * gENCLS.id.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_430(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,430};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac13 SEED_VAR */) - ((data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac13 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac13.dummyVarNLSJac13 = gENCLS.X_d * gENCLS.iq.SeedNLSJac13 - gENCLS.R_a * gENCLS.id.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_431(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,431};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac13 SEED_VAR */) - ((data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac13 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac13.dummyVarNLSJac13 = (-pwLine4.ir.re.SeedNLSJac13) - gENCLS.p.ir.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_432(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,432};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac13 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac13.dummyVarNLSJac13 = (-pwLine4.ir.im.SeedNLSJac13) - gENCLS.p.ii.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_433(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,433};
  jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac13 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
pwLine1.is.im.$pDERNLSJac13.dummyVarNLSJac13 = (-pwLine.ir.im.SeedNLSJac13) - pwLine3.is.im.SeedNLSJac13 - constantLoad.p.ii.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_434(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,434};
  jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac13 SEED_VAR */) - jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac13 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac13.dummyVarNLSJac13 = (-pwLine.ir.re.SeedNLSJac13) - pwLine1.is.re.SeedNLSJac13 - pwLine3.is.re.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_435(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,435};
  jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac13 SEED_VAR */) - jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac13 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac13.dummyVarNLSJac13 = (-pwLine3.ir.re.SeedNLSJac13) - pwLine4.is.re.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_436(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,436};
  jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac13 SEED_VAR */) - jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac13 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac13.dummyVarNLSJac13 = (-pwLine3.ir.im.SeedNLSJac13) - pwLine4.is.im.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,437};
  jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac13 SEED_VAR */) - jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac13 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
$res_NLSJac13_1.$pDERNLSJac13.dummyVarNLSJac13 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac13.dummyVarNLSJac13 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac13 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac13.dummyVarNLSJac13 - (pwFault.R * pwLine3.vr.im.SeedNLSJac13 - pwFault.X * pwLine3.vr.re.SeedNLSJac13) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */, 7, Less);
  tmp60 = (modelica_boolean)tmp48;
  if(tmp60)
  {
    tmp61 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
    tmp58 = (modelica_boolean)(tmp49 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp58)
    {
      tmp59 = jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
      tmp56 = (modelica_boolean)tmp50;
      if(tmp56)
      {
        tmp51 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp52 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp53 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp54 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp55 = (tmp53 * tmp53) + (tmp54 * tmp54);
        tmp57 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */) - ((data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */))) * ((tmp51 * tmp51) + (tmp52 * tmp52)),(tmp55 * tmp55),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp57 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */;
      }
      tmp59 = tmp57;
    }
    tmp61 = tmp59;
  }
  jacobian->resultVars[0] /* $res_NLSJac13_1.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = tmp61;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
$res_NLSJac13_2.$pDERNLSJac13.dummyVarNLSJac13 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac13.dummyVarNLSJac13 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac13 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac13.dummyVarNLSJac13 - (pwFault.R * pwLine3.vr.re.SeedNLSJac13 + pwFault.X * pwLine3.vr.im.SeedNLSJac13) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,439};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */, 7, Less);
  tmp74 = (modelica_boolean)tmp62;
  if(tmp74)
  {
    tmp75 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
    tmp72 = (modelica_boolean)(tmp63 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp72)
    {
      tmp73 = jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
      tmp70 = (modelica_boolean)tmp64;
      if(tmp70)
      {
        tmp65 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp66 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp67 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp68 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp69 = (tmp67 * tmp67) + (tmp68 * tmp68);
        tmp71 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */) + (data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */)) * ((tmp65 * tmp65) + (tmp66 * tmp66)),(tmp69 * tmp69),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp71 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */;
      }
      tmp73 = tmp71;
    }
    tmp75 = tmp73;
  }
  jacobian->resultVars[1] /* $res_NLSJac13_2.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = tmp75;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
$res_NLSJac13_3.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac13.dummyVarNLSJac13 else pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 - pwLine1.vs.im.SeedNLSJac13 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac13.dummyVarNLSJac13 + (-pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac13.dummyVarNLSJac13 + pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,440};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[2] /* $res_NLSJac13_3.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp76 && tmp77)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
$res_NLSJac13_4.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac13.dummyVarNLSJac13 else pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 - pwLine1.vs.re.SeedNLSJac13 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac13.dummyVarNLSJac13 + pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac13.dummyVarNLSJac13 + (-pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[3] /* $res_NLSJac13_4.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp78 && tmp79)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
$res_NLSJac13_5.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac13 else pwLine1.vs.im.SeedNLSJac13 - pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac13 + (-pwLine1.vs.re.SeedNLSJac13) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac13 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac13 + pwLine1.vs.im.SeedNLSJac13 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac13 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[4] /* $res_NLSJac13_5.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp80 && tmp81)?jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
$res_NLSJac13_6.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac13 else pwLine1.vs.re.SeedNLSJac13 - pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac13 + pwLine1.vs.im.SeedNLSJac13 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac13 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac13 + (-pwLine1.vs.re.SeedNLSJac13) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac13 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[5] /* $res_NLSJac13_6.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp82 && tmp83)?jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
$res_NLSJac13_7.$pDERNLSJac13.dummyVarNLSJac13 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac13 + pwLine1.vs.im.SeedNLSJac13 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac13.dummyVarNLSJac13 + pwLine1.vs.re.SeedNLSJac13 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac13.dummyVarNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  jacobian->resultVars[6] /* $res_NLSJac13_7.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac13 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
$res_NLSJac13_8.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac13 else pwLine1.vs.re.SeedNLSJac13 - pwLine3.vr.re.SeedNLSJac13 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac13 + pwLine1.vs.im.SeedNLSJac13 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac13 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac13 + (-pwLine1.vs.re.SeedNLSJac13) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac13 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,445};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[7] /* $res_NLSJac13_8.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
$res_NLSJac13_9.$pDERNLSJac13.dummyVarNLSJac13 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac13.dummyVarNLSJac13 + pwLine1.vs.im.SeedNLSJac13 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac13) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac13.dummyVarNLSJac13 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_446(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,446};
  jacobian->resultVars[8] /* $res_NLSJac13_9.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac13 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
$res_NLSJac13_10.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.$pDERNLSJac13.dummyVarNLSJac13 else pwLine1.vs.im.SeedNLSJac13 - pwLine1.vr.im.SeedNLSJac13 - (pwLine1.Z.re * (pwLine1.is.im.$pDERNLSJac13.dummyVarNLSJac13 + (-pwLine1.vs.re.SeedNLSJac13) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac13 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac13 + pwLine1.vs.im.SeedNLSJac13 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac13 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_447(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,447};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[9] /* $res_NLSJac13_10.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
$res_NLSJac13_11.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac13 else pwLine1.vs.re.SeedNLSJac13 - pwLine1.vr.re.SeedNLSJac13 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac13 + pwLine1.vs.im.SeedNLSJac13 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac13 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.$pDERNLSJac13.dummyVarNLSJac13 + (-pwLine1.vs.re.SeedNLSJac13) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac13 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_448(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,448};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[10] /* $res_NLSJac13_11.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
$res_NLSJac13_12.$pDERNLSJac13.dummyVarNLSJac13 = $cse2 * gENCLS.vq.$pDERNLSJac13.dummyVarNLSJac13 + $cse1 * gENCLS.vd.$pDERNLSJac13.dummyVarNLSJac13 - pwLine1.vr.re.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_449(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,449};
  jacobian->resultVars[11] /* $res_NLSJac13_12.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
$res_NLSJac13_13.$pDERNLSJac13.dummyVarNLSJac13 = $cse1 * gENCLS.vq.$pDERNLSJac13.dummyVarNLSJac13 + (-$cse2) * gENCLS.vd.$pDERNLSJac13.dummyVarNLSJac13 - pwLine1.vr.im.SeedNLSJac13
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_450(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,450};
  jacobian->resultVars[12] /* $res_NLSJac13_13.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
$res_NLSJac13_14.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac13.dummyVarNLSJac13 else pwLine1.vr.re.SeedNLSJac13 - pwLine1.vs.re.SeedNLSJac13 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac13.dummyVarNLSJac13 + pwLine1.vr.im.SeedNLSJac13 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac13 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac13.dummyVarNLSJac13 + (-pwLine1.vr.re.SeedNLSJac13) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac13 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_451(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,451};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[13] /* $res_NLSJac13_14.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
$res_NLSJac13_15.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac13.dummyVarNLSJac13 else pwLine1.vr.im.SeedNLSJac13 - pwLine1.vs.im.SeedNLSJac13 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac13.dummyVarNLSJac13 + (-pwLine1.vr.re.SeedNLSJac13) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac13 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac13.dummyVarNLSJac13 + pwLine1.vr.im.SeedNLSJac13 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac13 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_452(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,452};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[14] /* $res_NLSJac13_15.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
$res_NLSJac13_16.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac13 else pwLine1.vs.im.SeedNLSJac13 - pwLine3.vr.im.SeedNLSJac13 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac13 + (-pwLine1.vs.re.SeedNLSJac13) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac13 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac13 + pwLine1.vs.im.SeedNLSJac13 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac13 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_453(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,453};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[15] /* $res_NLSJac13_16.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
$res_NLSJac13_17.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac13 else pwLine3.vr.re.SeedNLSJac13 - pwLine1.vr.re.SeedNLSJac13 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac13 + pwLine3.vr.im.SeedNLSJac13 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac13 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac13 + (-pwLine3.vr.re.SeedNLSJac13) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac13 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_454(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,454};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[16] /* $res_NLSJac13_17.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
$res_NLSJac13_18.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac13 else pwLine3.vr.re.SeedNLSJac13 - pwLine1.vs.re.SeedNLSJac13 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac13 + pwLine3.vr.im.SeedNLSJac13 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac13 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac13 + (-pwLine3.vr.re.SeedNLSJac13) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac13 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_455(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,455};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[17] /* $res_NLSJac13_18.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
$res_NLSJac13_19.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac13 else pwLine3.vr.im.SeedNLSJac13 - pwLine1.vs.im.SeedNLSJac13 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac13 + (-pwLine3.vr.re.SeedNLSJac13) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac13 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac13 + pwLine3.vr.im.SeedNLSJac13 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac13 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_456(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,456};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[18] /* $res_NLSJac13_19.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
$res_NLSJac13_20.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac13 else pwLine3.vr.im.SeedNLSJac13 - pwLine1.vr.im.SeedNLSJac13 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac13 + (-pwLine3.vr.re.SeedNLSJac13) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac13 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac13 + pwLine3.vr.im.SeedNLSJac13 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac13 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_457(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,457};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[19] /* $res_NLSJac13_20.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
$res_NLSJac13_21.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac13 else pwLine1.vr.re.SeedNLSJac13 - pwLine3.vr.re.SeedNLSJac13 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac13 + pwLine1.vr.im.SeedNLSJac13 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac13 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac13 + (-pwLine1.vr.re.SeedNLSJac13) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac13 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_458(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,458};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[20] /* $res_NLSJac13_21.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$res_NLSJac13_22.$pDERNLSJac13.dummyVarNLSJac13 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac13 else pwLine1.vr.im.SeedNLSJac13 - pwLine3.vr.im.SeedNLSJac13 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac13 + (-pwLine1.vr.re.SeedNLSJac13) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac13 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac13 + pwLine1.vr.im.SeedNLSJac13 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac13 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_459(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,459};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[21] /* $res_NLSJac13_22.$pDERNLSJac13.dummyVarNLSJac13 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac13 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac13 SEED_VAR */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac13 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac13 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac13 SEED_VAR */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac13_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac13;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac13_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac13;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_415(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_416(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_417(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_418(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_419(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_420(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_421(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_422(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_423(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_424(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_425(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_426(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_427(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_428(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_429(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_430(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_431(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_432(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_433(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_434(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_435(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_436(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_437(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_438(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_439(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_440(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_441(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_442(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_443(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_444(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_445(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_446(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_447(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_448(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_449(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_450(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_451(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_452(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_453(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_454(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_455(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_456(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_457(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_458(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_459(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 494
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1.$pDERNLSJac14.dummyVarNLSJac14 = if eSST1A.add3_1.y > eSST1A.imLimited.uMax then 0.0 else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then 0.0 else eSST1A.add3_1.y.SeedNLSJac14
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_494(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,494};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  RELATIONHYSTERESIS(tmp108, data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */, 21, Greater);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp109, data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */, 22, Less);
    tmp111 = (tmp109?0.0:jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac14 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ = tmp111;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p.$pDERNLSJac14.dummyVarNLSJac14 = if eSST1A.hV_GATE.n1 < const1.k then 0.0 else eSST1A.hV_GATE.n1.$pDERNLSJac14.dummyVarNLSJac14
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp112, data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 14, Less);
  jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ = (tmp112?0.0:jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y.$pDERNLSJac14.dummyVarNLSJac14 = eSST1A.add3_1.y.SeedNLSJac14 / eSST1A.add3_1.k1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,496};
  jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac14 SEED_VAR */,data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k1 PARAM */,"eSST1A.add3_1.k1");
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y.$pDERNLSJac14.dummyVarNLSJac14 = eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p.$pDERNLSJac14.dummyVarNLSJac14
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,497};
  jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.d PARAM */) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y.$pDERNLSJac14.dummyVarNLSJac14 = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p.$pDERNLSJac14.dummyVarNLSJac14 else eSST1A.imLeadLag.TF.y.$pDERNLSJac14.dummyVarNLSJac14
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,498};
  modelica_boolean tmp113;
  tmp113 = Less(fabs(data->simulationInfo->realParameter[150] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ = (tmp113?(data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.K PARAM */) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y.$pDERNLSJac14.dummyVarNLSJac14 = eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y.$pDERNLSJac14.dummyVarNLSJac14
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.d PARAM */) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y.$pDERNLSJac14.dummyVarNLSJac14 = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y.$pDERNLSJac14.dummyVarNLSJac14 else eSST1A.imLeadLag1.TF.y.$pDERNLSJac14.dummyVarNLSJac14
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_500(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,500};
  modelica_boolean tmp114;
  tmp114 = Less(fabs(data->simulationInfo->realParameter[168] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ = (tmp114?(data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.K PARAM */) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2.$pDERNLSJac14.dummyVarNLSJac14 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then if noEvent(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax) > eSST1A.simpleLagLim.outMin) then if noEvent(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K < eSST1A.simpleLagLim.outMax) then eSST1A.imLeadLag1.y.$pDERNLSJac14.dummyVarNLSJac14 * eSST1A.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_501(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,501};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  modelica_real tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  tmp115 = LessEq(fabs(data->simulationInfo->realParameter[191] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  tmp120 = (modelica_boolean)tmp115;
  if(tmp120)
  {
    tmp116 = Greater(fmin((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */);
    tmp118 = (modelica_boolean)tmp116;
    if(tmp118)
    {
      tmp117 = Less((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */);
      tmp119 = (tmp117?(jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */):0.0);
    }
    else
    {
      tmp119 = 0.0;
    }
    tmp121 = tmp119;
  }
  else
  {
    tmp121 = 0.0;
  }
  jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ = tmp121;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
eSST1A.add3_2.y.$pDERNLSJac14.dummyVarNLSJac14 = eSST1A.add3_2.k2 * eSST1A.add3_2.u2.$pDERNLSJac14.dummyVarNLSJac14
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_502(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,502};
  jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k2 PARAM */) * (jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
$res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 = eSST1A.add3_2.y.$pDERNLSJac14.dummyVarNLSJac14 - eSST1A.imDerivativeLag.y.$pDERNLSJac14.dummyVarNLSJac14 * eSST1A.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_503(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,503};
  jacobian->resultVars[0] /* $res_NLSJac14_1.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac14.dummyVarNLSJac14 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[141] /* eSST1A.imDerivativeLag.T PARAM */));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac14_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac14;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac14_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac14;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_494(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_495(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_496(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_497(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_498(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_499(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_500(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_501(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_502(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_503(data, threadData, jacobian, parentJacobian);
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
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac13(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac14(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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


