/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 365
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac29 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac29) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_365(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,365};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_366(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,366};
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
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp41 = (modelica_boolean)tmp2;
  if(tmp41)
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
    }tmp17 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp18 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ - 1.0;
    if(tmp17 < 0.0 && tmp18 != 0.0)
    {
      tmp20 = modf(tmp18, &tmp21);
      
      if(tmp20 > 0.5)
      {
        tmp20 -= 1.0;
        tmp21 += 1.0;
      }
      else if(tmp20 < -0.5)
      {
        tmp20 += 1.0;
        tmp21 -= 1.0;
      }
      
      if(fabs(tmp20) < 1e-10)
        tmp19 = pow(tmp17, tmp21);
      else
      {
        tmp23 = modf(1.0/tmp18, &tmp22);
        if(tmp23 > 0.5)
        {
          tmp23 -= 1.0;
          tmp22 += 1.0;
        }
        else if(tmp23 < -0.5)
        {
          tmp23 += 1.0;
          tmp22 -= 1.0;
        }
        if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
        {
          tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
        }
      }
    }
    else
    {
      tmp19 = pow(tmp17, tmp18);
    }
    if(isnan(tmp19) || isinf(tmp19))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
    }tmp32 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp32)
    {
      tmp33 = 0.0;
    }
    else
    {
      tmp25 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp26 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp25 < 0.0 && tmp26 != 0.0)
      {
        tmp28 = modf(tmp26, &tmp29);
        
        if(tmp28 > 0.5)
        {
          tmp28 -= 1.0;
          tmp29 += 1.0;
        }
        else if(tmp28 < -0.5)
        {
          tmp28 += 1.0;
          tmp29 -= 1.0;
        }
        
        if(fabs(tmp28) < 1e-10)
          tmp27 = pow(tmp25, tmp29);
        else
        {
          tmp31 = modf(1.0/tmp26, &tmp30);
          if(tmp31 > 0.5)
          {
            tmp31 -= 1.0;
            tmp30 += 1.0;
          }
          else if(tmp31 < -0.5)
          {
            tmp31 += 1.0;
            tmp30 -= 1.0;
          }
          if(fabs(tmp31) < 1e-10 && ((unsigned long)tmp30 & 1))
          {
            tmp27 = -pow(-tmp25, tmp28)*pow(tmp25, tmp29);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp25, tmp26);
          }
        }
      }
      else
      {
        tmp27 = pow(tmp25, tmp26);
      }
      if(isnan(tmp27) || isinf(tmp27))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp25, tmp26);
      }
      tmp33 = (tmp27) * ((-1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */));
    }
    tmp34 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp35 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
    if(tmp34 < 0.0 && tmp35 != 0.0)
    {
      tmp37 = modf(tmp35, &tmp38);
      
      if(tmp37 > 0.5)
      {
        tmp37 -= 1.0;
        tmp38 += 1.0;
      }
      else if(tmp37 < -0.5)
      {
        tmp37 += 1.0;
        tmp38 -= 1.0;
      }
      
      if(fabs(tmp37) < 1e-10)
        tmp36 = pow(tmp34, tmp38);
      else
      {
        tmp40 = modf(1.0/tmp35, &tmp39);
        if(tmp40 > 0.5)
        {
          tmp40 -= 1.0;
          tmp39 += 1.0;
        }
        else if(tmp40 < -0.5)
        {
          tmp40 += 1.0;
          tmp39 -= 1.0;
        }
        if(fabs(tmp40) < 1e-10 && ((unsigned long)tmp39 & 1))
        {
          tmp36 = -pow(-tmp34, tmp37)*pow(tmp34, tmp38);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp34, tmp35);
        }
      }
    }
    else
    {
      tmp36 = pow(tmp34, tmp35);
    }
    if(isnan(tmp36) || isinf(tmp36))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp34, tmp35);
    }
    tmp42 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp12)))) * ((data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (tmp19)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)))) + (tmp33) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp36)))));
  }
  else
  {
    tmp42 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = tmp42;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_367(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,367};
  modelica_boolean tmp43;
  RELATIONHYSTERESIS(tmp43, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, 6, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (tmp43?(data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac29.dummyVarNLSJac29 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_368(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,368};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac29.dummyVarNLSJac29 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 + constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_369(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,369};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac29.dummyVarNLSJac29 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_370(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,370};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[224] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac29 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 = ($cse7 * gENROE.iq.SeedNLSJac29 + $cse6 * gENROE.id.SeedNLSJac29) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_371(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,371};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac29 SEED_VAR */) + (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 = ($cse6 * gENROE.iq.SeedNLSJac29 - $cse7 * gENROE.id.SeedNLSJac29) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_372(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,372};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac29 SEED_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac29 SEED_VAR */))) * (data->simulationInfo->realParameter[170] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 = gENROE.PSId.$pDERNLSJac29.dummyVarNLSJac29 - gENROE.R_a * gENROE.iq.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_373(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,373};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac29 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac29.dummyVarNLSJac29 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_374(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,374};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[225] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac29 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 = (-gENROE.PSIq.$pDERNLSJac29.dummyVarNLSJac29) - gENROE.R_a * gENROE.id.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_375(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,375};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[207] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac29 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 = $cse6 * gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 - $cse7 * gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_376(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,376};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 = $cse6 * gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 + $cse7 * gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_377(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,377};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac29.dummyVarNLSJac29 = ((-$cse1) * gENCLS.id.SeedNLSJac29 - $cse2 * gENCLS.iq.SeedNLSJac29) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_378(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,378};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac29 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac29 SEED_VAR */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac29.dummyVarNLSJac29 = ($cse2 * gENCLS.id.SeedNLSJac29 - $cse1 * gENCLS.iq.SeedNLSJac29) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_379(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,379};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac29 SEED_VAR */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac29 SEED_VAR */))) * (data->simulationInfo->realParameter[144] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac29 - gENCLS.X_d * gENCLS.id.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_380(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,380};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac29 SEED_VAR */) - ((data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac29 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 = gENCLS.X_d * gENCLS.iq.SeedNLSJac29 - gENCLS.R_a * gENCLS.id.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_381(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,381};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[153] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac29 SEED_VAR */) - ((data->simulationInfo->realParameter[150] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac29 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine1.ir.im.SeedNLSJac29) - gENCLS.p.ii.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_382(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,382};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac29 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine1.ir.re.SeedNLSJac29) - gENCLS.p.ir.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_383(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,383};
  jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac29 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine3.ir.im.SeedNLSJac29) - pwLine4.is.im.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_384(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,384};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac29 SEED_VAR */) - jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine3.ir.re.SeedNLSJac29) - pwLine4.is.re.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_385(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,385};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac29 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
constantLoad.p.ii.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine.ir.im.SeedNLSJac29) - pwLine1.is.im.SeedNLSJac29 - pwLine3.is.im.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_386(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,386};
  jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac29 SEED_VAR */) - jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
pwLine.ir.re.$pDERNLSJac29.dummyVarNLSJac29 = (-pwLine1.is.re.SeedNLSJac29) - pwLine3.is.re.SeedNLSJac29 - constantLoad.p.ir.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_387(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,387};
  jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac29 SEED_VAR */) - jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[0] /* constantLoad.p.ir.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
$res_NLSJac29_1.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac29 else pwLine1.vs.re.SeedNLSJac29 - pwLine1.vr.re.SeedNLSJac29 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_388(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,388};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[0] /* $res_NLSJac29_1.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
$res_NLSJac29_2.$pDERNLSJac29.dummyVarNLSJac29 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac29 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 - (pwFault.R * pwLine3.vr.re.SeedNLSJac29 + pwFault.X * pwLine3.vr.im.SeedNLSJac29) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_389(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,389};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, 12, Less);
  tmp62 = (modelica_boolean)tmp50;
  if(tmp62)
  {
    tmp63 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
    tmp60 = (modelica_boolean)(tmp51 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp60)
    {
      tmp61 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
      tmp58 = (modelica_boolean)tmp52;
      if(tmp58)
      {
        tmp53 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp54 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp55 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp56 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp57 = (tmp55 * tmp55) + (tmp56 * tmp56);
        tmp59 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) + (data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */)) * ((tmp53 * tmp53) + (tmp54 * tmp54)),(tmp57 * tmp57),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp59 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
      }
      tmp61 = tmp59;
    }
    tmp63 = tmp61;
  }
  jacobian->resultVars[1] /* $res_NLSJac29_2.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = tmp63;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
$res_NLSJac29_3.$pDERNLSJac29.dummyVarNLSJac29 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac29 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 - (pwFault.R * pwLine3.vr.im.SeedNLSJac29 - pwFault.X * pwLine3.vr.re.SeedNLSJac29) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_390(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,390};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  modelica_boolean tmp76;
  modelica_real tmp77;
  RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[257] /* pwFault.t1 PARAM */, 12, Less);
  tmp76 = (modelica_boolean)tmp64;
  if(tmp76)
  {
    tmp77 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
    tmp74 = (modelica_boolean)(tmp65 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp74)
    {
      tmp75 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[258] /* pwFault.t2 PARAM */, 13, Less);
      tmp72 = (modelica_boolean)tmp66;
      if(tmp72)
      {
        tmp67 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp68 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp69 = data->simulationInfo->realParameter[256] /* pwFault.X PARAM */;
        tmp70 = data->simulationInfo->realParameter[255] /* pwFault.R PARAM */;
        tmp71 = (tmp69 * tmp69) + (tmp70 * tmp70);
        tmp73 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[255] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) - ((data->simulationInfo->realParameter[256] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */))) * ((tmp67 * tmp67) + (tmp68 * tmp68)),(tmp71 * tmp71),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp73 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
      }
      tmp75 = tmp73;
    }
    tmp77 = tmp75;
  }
  jacobian->resultVars[2] /* $res_NLSJac29_3.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = tmp77;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
$res_NLSJac29_4.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac29.dummyVarNLSJac29 else pwLine1.vr.re.SeedNLSJac29 - pwLine3.vr.re.SeedNLSJac29 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine1.vr.im.SeedNLSJac29 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac29 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine1.vr.re.SeedNLSJac29) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac29 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_391(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,391};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[3] /* $res_NLSJac29_4.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp78 && tmp79)?jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
$res_NLSJac29_5.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 else pwLine1.vr.im.SeedNLSJac29 - pwLine3.vr.im.SeedNLSJac29 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine1.vr.re.SeedNLSJac29) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac29 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine1.vr.im.SeedNLSJac29 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac29 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_392(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,392};
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[4] /* $res_NLSJac29_5.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp80 && tmp81)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
$res_NLSJac29_6.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac29 else pwLine3.vr.re.SeedNLSJac29 - pwLine1.vr.re.SeedNLSJac29 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac29 + pwLine3.vr.im.SeedNLSJac29 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac29 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac29 + (-pwLine3.vr.re.SeedNLSJac29) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac29 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_393(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,393};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[5] /* $res_NLSJac29_6.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp82 && tmp83)?jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
$res_NLSJac29_7.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac29 else pwLine3.vr.im.SeedNLSJac29 - pwLine1.vr.im.SeedNLSJac29 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac29 + (-pwLine3.vr.re.SeedNLSJac29) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac29 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac29 + pwLine3.vr.im.SeedNLSJac29 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac29 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_394(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,394};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[6] /* $res_NLSJac29_7.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
$res_NLSJac29_8.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac29 else pwLine3.vr.im.SeedNLSJac29 - pwLine1.vs.im.SeedNLSJac29 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac29 + (-pwLine3.vr.re.SeedNLSJac29) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac29 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac29 + pwLine3.vr.im.SeedNLSJac29 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac29 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_395(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,395};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[7] /* $res_NLSJac29_8.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
$res_NLSJac29_9.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac29 else pwLine3.vr.re.SeedNLSJac29 - pwLine1.vs.re.SeedNLSJac29 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac29 + pwLine3.vr.im.SeedNLSJac29 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac29 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac29 + (-pwLine3.vr.re.SeedNLSJac29) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac29 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_396(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,396};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[8] /* $res_NLSJac29_9.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
$res_NLSJac29_10.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac29 else pwLine1.vr.re.SeedNLSJac29 - pwLine1.vs.re.SeedNLSJac29 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac29 + pwLine1.vr.im.SeedNLSJac29 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac29 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac29 + (-pwLine1.vr.re.SeedNLSJac29) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac29 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_397(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,397};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[9] /* $res_NLSJac29_10.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
$res_NLSJac29_11.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac29 else pwLine1.vs.im.SeedNLSJac29 - pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_398(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,398};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[10] /* $res_NLSJac29_11.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
$res_NLSJac29_12.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 else pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vs.im.SeedNLSJac29 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_399(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,399};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[11] /* $res_NLSJac29_12.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
$res_NLSJac29_13.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 else pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vs.re.SeedNLSJac29 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 + (-pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_400(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,400};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res_NLSJac29_13.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
$res_NLSJac29_14.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac29 else pwLine1.vs.re.SeedNLSJac29 - pwLine3.vr.re.SeedNLSJac29 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_401(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,401};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[13] /* $res_NLSJac29_14.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
$res_NLSJac29_15.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac29 else pwLine1.vs.im.SeedNLSJac29 - pwLine3.vr.im.SeedNLSJac29 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_402(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,402};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[14] /* $res_NLSJac29_15.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
$res_NLSJac29_16.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac29.dummyVarNLSJac29 else pwLine1.vs.re.SeedNLSJac29 - pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac29.dummyVarNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_403(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,403};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res_NLSJac29_16.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[267] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[266] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[264] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[265] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
$res_NLSJac29_17.$pDERNLSJac29.dummyVarNLSJac29 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac29) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_404(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,404};
  jacobian->resultVars[16] /* $res_NLSJac29_17.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (jacobian->seedVars[0] /* constantLoad.p.ir.SeedNLSJac29 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
$res_NLSJac29_18.$pDERNLSJac29.dummyVarNLSJac29 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac29.dummyVarNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac29 + pwLine1.vs.re.SeedNLSJac29 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac29.dummyVarNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_405(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,405};
  jacobian->resultVars[17] /* $res_NLSJac29_18.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (jacobian->seedVars[0] /* constantLoad.p.ir.SeedNLSJac29 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
$res_NLSJac29_19.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac29 else pwLine1.vs.im.SeedNLSJac29 - pwLine1.vr.im.SeedNLSJac29 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac29 + (-pwLine1.vs.re.SeedNLSJac29) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac29 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac29 + pwLine1.vs.im.SeedNLSJac29 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac29 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_406(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,406};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[18] /* $res_NLSJac29_19.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
$res_NLSJac29_20.$pDERNLSJac29.dummyVarNLSJac29 = $cse1 * gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 + (-$cse2) * gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vr.im.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_407(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,407};
  jacobian->resultVars[19] /* $res_NLSJac29_20.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
$res_NLSJac29_21.$pDERNLSJac29.dummyVarNLSJac29 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac29 else pwLine1.vr.im.SeedNLSJac29 - pwLine1.vs.im.SeedNLSJac29 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac29 + (-pwLine1.vr.re.SeedNLSJac29) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac29 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac29 + pwLine1.vr.im.SeedNLSJac29 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac29 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_408(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,408};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[20] /* $res_NLSJac29_21.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac29 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac29 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac29 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac29 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
$res_NLSJac29_22.$pDERNLSJac29.dummyVarNLSJac29 = $cse2 * gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 + $cse1 * gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 - pwLine1.vr.re.SeedNLSJac29
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_409(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,409};
  jacobian->resultVars[21] /* $res_NLSJac29_22.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = (data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac29 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac29_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac29;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac29_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac29;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_365(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_366(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_367(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_368(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_369(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_370(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_371(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_372(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_373(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_374(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_375(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_376(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_377(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_378(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_379(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_380(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_381(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_382(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_383(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_384(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_385(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_386(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_387(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_388(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_389(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_390(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_391(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_392(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_393(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_394(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_395(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_396(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_397(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_398(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_399(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_400(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_401(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_402(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_403(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_404(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_405(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_406(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_407(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_408(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_409(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 443
type: SIMPLE_ASSIGN
eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 = if eXST1.feedback.y > eXST1.limiter.uMax then 0.0 else if eXST1.feedback.y < eXST1.limiter.uMin then 0.0 else eXST1.feedback.y.SeedNLSJac30
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  RELATIONHYSTERESIS(tmp108, data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[142] /* eXST1.limiter.uMax PARAM */, 16, Greater);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp109, data->localData[0]->realVars[65] /* eXST1.feedback.y variable */, data->simulationInfo->realParameter[143] /* eXST1.limiter.uMin PARAM */, 17, Less);
    tmp111 = (tmp109?0.0:jacobian->seedVars[0] /* eXST1.feedback.y.SeedNLSJac30 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = tmp111;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
eXST1.imLeadLag.TF.y.$pDERNLSJac30.dummyVarNLSJac30 = eXST1.imLeadLag.TF.d * eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  jacobian->tmpVars[1] /* eXST1.imLeadLag.TF.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[135] /* eXST1.imLeadLag.TF.d PARAM */) * (jacobian->tmpVars[0] /* eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
eXST1.K_a.u.$pDERNLSJac30.dummyVarNLSJac30 = if abs(eXST1.imLeadLag.T1 - eXST1.imLeadLag.T2) < 1e-15 then eXST1.imLeadLag.K * eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 else eXST1.imLeadLag.TF.y.$pDERNLSJac30.dummyVarNLSJac30
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,445};
  modelica_boolean tmp112;
  tmp112 = Less(fabs(data->simulationInfo->realParameter[125] /* eXST1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[126] /* eXST1.imLeadLag.T2 PARAM */),1e-15);
  jacobian->tmpVars[2] /* eXST1.K_a.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = (tmp112?(data->simulationInfo->realParameter[124] /* eXST1.imLeadLag.K PARAM */) * (jacobian->tmpVars[0] /* eXST1.imLeadLag.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[1] /* eXST1.imLeadLag.TF.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
eXST1.K_a.y.$pDERNLSJac30.dummyVarNLSJac30 = eXST1.K_a.k * eXST1.K_a.u.$pDERNLSJac30.dummyVarNLSJac30
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,446};
  jacobian->tmpVars[3] /* eXST1.K_a.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[86] /* eXST1.K_a.k PARAM */) * (jacobian->tmpVars[2] /* eXST1.K_a.u.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
eXST1.Vm1.y.$pDERNLSJac30.dummyVarNLSJac30 = if abs(eXST1.Vm1.T) <= 1e-15 then eXST1.K_a.y.$pDERNLSJac30.dummyVarNLSJac30 * eXST1.Vm1.K else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,447};
  modelica_boolean tmp113;
  tmp113 = LessEq(fabs(data->simulationInfo->realParameter[110] /* eXST1.Vm1.T PARAM */),1e-15);
  jacobian->tmpVars[4] /* eXST1.Vm1.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = (tmp113?(jacobian->tmpVars[3] /* eXST1.K_a.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[109] /* eXST1.Vm1.K PARAM */):0.0);
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
eXST1.imDerivativeLag.y.$pDERNLSJac30.dummyVarNLSJac30 = 0.1 * eXST1.Vm1.y.$pDERNLSJac30.dummyVarNLSJac30 / eXST1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,448};
  jacobian->tmpVars[5] /* eXST1.imDerivativeLag.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */ = (0.1) * (DIVISION(jacobian->tmpVars[4] /* eXST1.Vm1.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[120] /* eXST1.imDerivativeLag.T PARAM */,"eXST1.imDerivativeLag.T"));
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
$res_NLSJac30_1.$pDERNLSJac30.dummyVarNLSJac30 = (-eXST1.imDerivativeLag.y.$pDERNLSJac30.dummyVarNLSJac30) - eXST1.feedback.y.SeedNLSJac30
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,449};
  jacobian->resultVars[0] /* $res_NLSJac30_1.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_VAR */ = (-jacobian->tmpVars[5] /* eXST1.imDerivativeLag.y.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* eXST1.feedback.y.SeedNLSJac30 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac30_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac30;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac30_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac30;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_443(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_444(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_445(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_446(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_447(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_448(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_449(data, threadData, jacobian, parentJacobian);
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
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac29(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac30(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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


