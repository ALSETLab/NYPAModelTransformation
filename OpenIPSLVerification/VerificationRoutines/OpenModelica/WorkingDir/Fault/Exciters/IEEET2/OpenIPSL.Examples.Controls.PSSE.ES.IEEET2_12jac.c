/* Jacobians 7 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 224
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac35 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac35) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_224(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,224};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */) + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_225(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,225};
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
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp41 = (modelica_boolean)tmp2;
  if(tmp41)
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
    }tmp17 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp32 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp32)
    {
      tmp33 = 0.0;
    }
    else
    {
      tmp25 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
      tmp33 = (tmp27) * ((-1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */));
    }
    tmp34 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    tmp42 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp12)))) * ((data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (tmp19)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */)))) + (tmp33) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp36)))));
  }
  else
  {
    tmp42 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = tmp42;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_226(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,226};
  modelica_boolean tmp43;
  RELATIONHYSTERESIS(tmp43, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, 6, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (tmp43?(data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac35.dummyVarNLSJac35 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 + constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 + constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 + constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 + constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_227(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,227};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac35.dummyVarNLSJac35 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 + constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 + constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 + constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 + constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_228(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,228};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac35.dummyVarNLSJac35 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_229(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,229};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[159] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac35 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac35.dummyVarNLSJac35 = ($cse6 * gENROE.iq.SeedNLSJac35 - $cse7 * gENROE.id.SeedNLSJac35) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_230(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,230};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac35 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac35 SEED_VAR */))) * (data->simulationInfo->realParameter[104] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac35.dummyVarNLSJac35 = ($cse7 * gENROE.iq.SeedNLSJac35 + $cse6 * gENROE.id.SeedNLSJac35) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_231(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,231};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac35 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[104] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac35.dummyVarNLSJac35 = (-gENROE.PSIq.$pDERNLSJac35.dummyVarNLSJac35) - gENROE.R_a * gENROE.id.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[141] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac35 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac35.dummyVarNLSJac35 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_233(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,233};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[158] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac35 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac35.dummyVarNLSJac35 = gENROE.PSId.$pDERNLSJac35.dummyVarNLSJac35 - gENROE.R_a * gENROE.iq.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_234(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,234};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[141] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac35 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 = $cse6 * gENROE.uq.$pDERNLSJac35.dummyVarNLSJac35 - $cse7 * gENROE.ud.$pDERNLSJac35.dummyVarNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 = $cse6 * gENROE.ud.$pDERNLSJac35.dummyVarNLSJac35 + $cse7 * gENROE.uq.$pDERNLSJac35.dummyVarNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac35.dummyVarNLSJac35 = ($cse2 * gENCLS.id.SeedNLSJac35 - $cse1 * gENCLS.iq.SeedNLSJac35) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
  jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac35 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac35 SEED_VAR */))) * (data->simulationInfo->realParameter[78] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac35.dummyVarNLSJac35 = ((-$cse1) * gENCLS.id.SeedNLSJac35 - $cse2 * gENCLS.iq.SeedNLSJac35) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac35 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac35 SEED_VAR */))) * (data->simulationInfo->realParameter[78] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac35.dummyVarNLSJac35 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac35 - gENCLS.X_d * gENCLS.id.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,239};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[84] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac35 SEED_VAR */) - ((data->simulationInfo->realParameter[87] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac35 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac35.dummyVarNLSJac35 = gENCLS.X_d * gENCLS.iq.SeedNLSJac35 - gENCLS.R_a * gENCLS.id.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[87] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac35 SEED_VAR */) - ((data->simulationInfo->realParameter[84] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac35 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac35.dummyVarNLSJac35 = (-pwLine1.ir.im.SeedNLSJac35) - gENCLS.p.ii.$pDERNLSJac35.dummyVarNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac35 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac35.dummyVarNLSJac35 = (-pwLine1.ir.re.SeedNLSJac35) - gENCLS.p.ir.$pDERNLSJac35.dummyVarNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac35 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
pwLine1.is.re.$pDERNLSJac35.dummyVarNLSJac35 = (-pwLine.ir.re.SeedNLSJac35) - pwLine3.is.re.SeedNLSJac35 - constantLoad.p.ir.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac35 SEED_VAR */) - jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
pwLine1.is.im.$pDERNLSJac35.dummyVarNLSJac35 = (-pwLine.ir.im.SeedNLSJac35) - pwLine3.is.im.SeedNLSJac35 - constantLoad.p.ii.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,244};
  jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac35 SEED_VAR */) - jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac35.dummyVarNLSJac35 = (-pwLine3.ir.im.SeedNLSJac35) - pwLine4.is.im.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine3.ir.im.SeedNLSJac35 SEED_VAR */) - jacobian->seedVars[3] /* pwLine4.is.im.SeedNLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac35.dummyVarNLSJac35 = (-pwLine3.ir.re.SeedNLSJac35) - pwLine4.is.re.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine3.ir.re.SeedNLSJac35 SEED_VAR */) - jacobian->seedVars[1] /* pwLine4.is.re.SeedNLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
$res_NLSJac35_1.$pDERNLSJac35.dummyVarNLSJac35 = $cse2 * gENCLS.vq.$pDERNLSJac35.dummyVarNLSJac35 + $cse1 * gENCLS.vd.$pDERNLSJac35.dummyVarNLSJac35 - pwLine1.vr.re.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  jacobian->resultVars[0] /* $res_NLSJac35_1.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
$res_NLSJac35_2.$pDERNLSJac35.dummyVarNLSJac35 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac35 + pwLine1.vs.im.SeedNLSJac35 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac35) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac35.dummyVarNLSJac35 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  jacobian->resultVars[1] /* $res_NLSJac35_2.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac35 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac35 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
$res_NLSJac35_3.$pDERNLSJac35.dummyVarNLSJac35 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac35 + pwLine1.vs.im.SeedNLSJac35 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac35 + pwLine1.vs.re.SeedNLSJac35 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac35.dummyVarNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  jacobian->resultVars[2] /* $res_NLSJac35_3.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac35 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac35 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
$res_NLSJac35_4.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac35 else pwLine1.vs.im.SeedNLSJac35 - pwLine3.vr.im.SeedNLSJac35 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac35 + (-pwLine1.vs.re.SeedNLSJac35) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac35 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac35 + pwLine1.vs.im.SeedNLSJac35 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac35 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,250};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[3] /* $res_NLSJac35_4.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
$res_NLSJac35_5.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac35 else pwLine1.vs.re.SeedNLSJac35 - pwLine3.vr.re.SeedNLSJac35 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac35 + pwLine1.vs.im.SeedNLSJac35 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac35 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac35 + (-pwLine1.vs.re.SeedNLSJac35) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac35 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,251};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[4] /* $res_NLSJac35_5.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
$res_NLSJac35_6.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac35 else pwLine3.vr.re.SeedNLSJac35 - pwLine1.vr.re.SeedNLSJac35 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac35 + pwLine3.vr.im.SeedNLSJac35 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac35 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac35 + (-pwLine3.vr.re.SeedNLSJac35) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac35 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,252};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[5] /* $res_NLSJac35_6.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp52 && tmp53)?jacobian->seedVars[1] /* pwLine4.is.re.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine4.is.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine4.is.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
$res_NLSJac35_7.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac35 else pwLine3.vr.im.SeedNLSJac35 - pwLine1.vr.im.SeedNLSJac35 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac35 + (-pwLine3.vr.re.SeedNLSJac35) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac35 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac35 + pwLine3.vr.im.SeedNLSJac35 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac35 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,253};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[6] /* $res_NLSJac35_7.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp54 && tmp55)?jacobian->seedVars[3] /* pwLine4.is.im.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine4.is.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine4.is.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$res_NLSJac35_8.$pDERNLSJac35.dummyVarNLSJac35 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac35.dummyVarNLSJac35 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac35 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac35.dummyVarNLSJac35 - (pwFault.R * pwLine3.vr.im.SeedNLSJac35 - pwFault.X * pwLine3.vr.re.SeedNLSJac35) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac35.dummyVarNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,254};
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
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t1 PARAM */, 12, Less);
  tmp68 = (modelica_boolean)tmp56;
  if(tmp68)
  {
    tmp69 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */, 13, Less);
    tmp66 = (modelica_boolean)(tmp57 && data->simulationInfo->booleanParameter[64] /* pwFault.ground PARAM */);
    if(tmp66)
    {
      tmp67 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */, 13, Less);
      tmp64 = (modelica_boolean)tmp58;
      if(tmp64)
      {
        tmp59 = data->simulationInfo->realParameter[267] /* pwFault.X PARAM */;
        tmp60 = data->simulationInfo->realParameter[266] /* pwFault.R PARAM */;
        tmp61 = data->simulationInfo->realParameter[267] /* pwFault.X PARAM */;
        tmp62 = data->simulationInfo->realParameter[266] /* pwFault.R PARAM */;
        tmp63 = (tmp61 * tmp61) + (tmp62 * tmp62);
        tmp65 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[266] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */) - ((data->simulationInfo->realParameter[267] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */))) * ((tmp59 * tmp59) + (tmp60 * tmp60)),(tmp63 * tmp63),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp65 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */;
      }
      tmp67 = tmp65;
    }
    tmp69 = tmp67;
  }
  jacobian->resultVars[7] /* $res_NLSJac35_8.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = tmp69;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
$res_NLSJac35_9.$pDERNLSJac35.dummyVarNLSJac35 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac35.dummyVarNLSJac35 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac35 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac35.dummyVarNLSJac35 - (pwFault.R * pwLine3.vr.re.SeedNLSJac35 + pwFault.X * pwLine3.vr.im.SeedNLSJac35) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac35.dummyVarNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,255};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[268] /* pwFault.t1 PARAM */, 12, Less);
  tmp82 = (modelica_boolean)tmp70;
  if(tmp82)
  {
    tmp83 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */, 13, Less);
    tmp80 = (modelica_boolean)(tmp71 && data->simulationInfo->booleanParameter[64] /* pwFault.ground PARAM */);
    if(tmp80)
    {
      tmp81 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[269] /* pwFault.t2 PARAM */, 13, Less);
      tmp78 = (modelica_boolean)tmp72;
      if(tmp78)
      {
        tmp73 = data->simulationInfo->realParameter[266] /* pwFault.R PARAM */;
        tmp74 = data->simulationInfo->realParameter[267] /* pwFault.X PARAM */;
        tmp75 = data->simulationInfo->realParameter[266] /* pwFault.R PARAM */;
        tmp76 = data->simulationInfo->realParameter[267] /* pwFault.X PARAM */;
        tmp77 = (tmp75 * tmp75) + (tmp76 * tmp76);
        tmp79 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[266] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */) + (data->simulationInfo->realParameter[267] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */)) * ((tmp73 * tmp73) + (tmp74 * tmp74)),(tmp77 * tmp77),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp79 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */;
      }
      tmp81 = tmp79;
    }
    tmp83 = tmp81;
  }
  jacobian->resultVars[8] /* $res_NLSJac35_9.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = tmp83;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
$res_NLSJac35_10.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac35 else pwLine3.vr.re.SeedNLSJac35 - pwLine1.vs.re.SeedNLSJac35 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac35 + pwLine3.vr.im.SeedNLSJac35 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac35 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac35 + (-pwLine3.vr.re.SeedNLSJac35) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac35 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,256};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[9] /* $res_NLSJac35_10.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->seedVars[0] /* pwLine3.ir.re.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine3.ir.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine3.ir.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
$res_NLSJac35_11.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac35 else pwLine3.vr.im.SeedNLSJac35 - pwLine1.vs.im.SeedNLSJac35 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac35 + (-pwLine3.vr.re.SeedNLSJac35) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac35 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac35 + pwLine3.vr.im.SeedNLSJac35 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac35 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,257};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[301] /* pwLine3.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[302] /* pwLine3.t2 PARAM */, 9, Less);
  jacobian->resultVars[10] /* $res_NLSJac35_11.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->seedVars[2] /* pwLine3.ir.im.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[300] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine3.ir.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[299] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine3.ir.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[297] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[298] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$res_NLSJac35_12.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac35 else pwLine1.vs.im.SeedNLSJac35 - pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac35 + (-pwLine1.vs.re.SeedNLSJac35) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac35 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac35 + pwLine1.vs.im.SeedNLSJac35 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac35 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,258};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[11] /* $res_NLSJac35_12.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
$res_NLSJac35_13.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac35.dummyVarNLSJac35 else pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 - pwLine1.vs.re.SeedNLSJac35 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac35.dummyVarNLSJac35 + pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac35.dummyVarNLSJac35 + (-pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,259};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res_NLSJac35_13.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
$res_NLSJac35_14.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac35.dummyVarNLSJac35 else pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 - pwLine1.vs.im.SeedNLSJac35 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac35.dummyVarNLSJac35 + (-pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac35.dummyVarNLSJac35 + pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,260};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[13] /* $res_NLSJac35_14.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
$res_NLSJac35_15.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.$pDERNLSJac35.dummyVarNLSJac35 else pwLine1.vs.re.SeedNLSJac35 - pwLine1.vr.re.SeedNLSJac35 - (pwLine1.Z.re * (pwLine1.is.re.$pDERNLSJac35.dummyVarNLSJac35 + pwLine1.vs.im.SeedNLSJac35 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac35 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.$pDERNLSJac35.dummyVarNLSJac35 + (-pwLine1.vs.re.SeedNLSJac35) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac35 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,261};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[14] /* $res_NLSJac35_15.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
$res_NLSJac35_16.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac35 else pwLine1.vs.re.SeedNLSJac35 - pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac35 + pwLine1.vs.im.SeedNLSJac35 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac35 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac35 + (-pwLine1.vs.re.SeedNLSJac35) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac35 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,262};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[279] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[280] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res_NLSJac35_16.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[278] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[277] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[275] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[276] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$res_NLSJac35_17.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.$pDERNLSJac35.dummyVarNLSJac35 else pwLine1.vs.im.SeedNLSJac35 - pwLine1.vr.im.SeedNLSJac35 - (pwLine1.Z.re * (pwLine1.is.im.$pDERNLSJac35.dummyVarNLSJac35 + (-pwLine1.vs.re.SeedNLSJac35) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac35 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.$pDERNLSJac35.dummyVarNLSJac35 + pwLine1.vs.im.SeedNLSJac35 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac35 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,263};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[16] /* $res_NLSJac35_17.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$res_NLSJac35_18.$pDERNLSJac35.dummyVarNLSJac35 = $cse1 * gENCLS.vq.$pDERNLSJac35.dummyVarNLSJac35 + (-$cse2) * gENCLS.vd.$pDERNLSJac35.dummyVarNLSJac35 - pwLine1.vr.im.SeedNLSJac35
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,264};
  jacobian->resultVars[17] /* $res_NLSJac35_18.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$res_NLSJac35_19.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac35.dummyVarNLSJac35 else pwLine1.vr.re.SeedNLSJac35 - pwLine3.vr.re.SeedNLSJac35 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac35.dummyVarNLSJac35 + pwLine1.vr.im.SeedNLSJac35 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac35 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac35.dummyVarNLSJac35 + (-pwLine1.vr.re.SeedNLSJac35) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac35 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,265};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[18] /* $res_NLSJac35_19.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$res_NLSJac35_20.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac35.dummyVarNLSJac35 else pwLine1.vr.im.SeedNLSJac35 - pwLine3.vr.im.SeedNLSJac35 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac35.dummyVarNLSJac35 + (-pwLine1.vr.re.SeedNLSJac35) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac35 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac35.dummyVarNLSJac35 + pwLine1.vr.im.SeedNLSJac35 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac35 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_266(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,266};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[312] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[313] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[19] /* $res_NLSJac35_20.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[311] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[310] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[308] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[309] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
$res_NLSJac35_21.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac35 else pwLine1.vr.re.SeedNLSJac35 - pwLine1.vs.re.SeedNLSJac35 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac35 + pwLine1.vr.im.SeedNLSJac35 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac35 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac35 + (-pwLine1.vr.re.SeedNLSJac35) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac35 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_267(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,267};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[20] /* $res_NLSJac35_21.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
$res_NLSJac35_22.$pDERNLSJac35.dummyVarNLSJac35 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac35 else pwLine1.vr.im.SeedNLSJac35 - pwLine1.vs.im.SeedNLSJac35 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac35 + (-pwLine1.vr.re.SeedNLSJac35) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac35 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac35 + pwLine1.vr.im.SeedNLSJac35 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac35 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_268(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,268};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[291] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[21] /* $res_NLSJac35_22.$pDERNLSJac35.dummyVarNLSJac35 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac35 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac35 SEED_VAR */ - ((data->simulationInfo->realParameter[289] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac35 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */)) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[288] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac35 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[286] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac35 SEED_VAR */) * (data->simulationInfo->realParameter[287] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacNLSJac35_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_NLSJac35;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacNLSJac35_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_NLSJac35;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_224(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_225(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_226(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_227(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_228(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_229(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_230(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_231(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_232(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_233(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_234(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_235(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_236(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_237(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_238(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_239(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_240(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_241(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_242(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_243(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_244(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_245(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_246(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_247(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_248(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_249(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_250(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_251(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_252(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_253(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_254(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_255(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_256(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_257(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_258(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_259(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_260(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_261(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_262(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_263(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_264(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_265(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_266(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_267(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_268(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 295
type: SIMPLE_ASSIGN
iEEET2.add.u2.$pDERNLSJac36.dummyVarNLSJac36 = if abs(iEEET2.simpleLag.T) <= 1e-15 then iEEET2.derivativeLag.y.SeedNLSJac36 * iEEET2.simpleLag.K else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,295};
  modelica_boolean tmp108;
  tmp108 = LessEq(fabs(data->simulationInfo->realParameter[255] /* iEEET2.simpleLag.T PARAM */),1e-15);
  jacobian->tmpVars[0] /* iEEET2.add.u2.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_DIFF_VAR */ = (tmp108?(jacobian->seedVars[0] /* iEEET2.derivativeLag.y.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[254] /* iEEET2.simpleLag.K PARAM */):0.0);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
iEEET2.add.y.$pDERNLSJac36.dummyVarNLSJac36 = iEEET2.add.k2 * iEEET2.add.u2.$pDERNLSJac36.dummyVarNLSJac36
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,296};
  jacobian->tmpVars[1] /* iEEET2.add.y.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[229] /* iEEET2.add.k2 PARAM */) * (jacobian->tmpVars[0] /* iEEET2.add.u2.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
iEEET2.derivativeLag.u.$pDERNLSJac36.dummyVarNLSJac36 = if abs(iEEET2.simpleLagLim.T) <= 1e-15 then if noEvent(min(iEEET2.add.y * iEEET2.simpleLagLim.K, iEEET2.simpleLagLim.outMax) > iEEET2.simpleLagLim.outMin) then if noEvent(iEEET2.add.y * iEEET2.simpleLagLim.K < iEEET2.simpleLagLim.outMax) then iEEET2.add.y.$pDERNLSJac36.dummyVarNLSJac36 * iEEET2.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,297};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_real tmp113;
  modelica_boolean tmp114;
  modelica_real tmp115;
  tmp109 = LessEq(fabs(data->simulationInfo->realParameter[260] /* iEEET2.simpleLagLim.T PARAM */),1e-15);
  tmp114 = (modelica_boolean)tmp109;
  if(tmp114)
  {
    tmp110 = Greater(fmin((data->localData[0]->realVars[92] /* iEEET2.add.y variable */) * (data->simulationInfo->realParameter[259] /* iEEET2.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[264] /* iEEET2.simpleLagLim.outMin PARAM */);
    tmp112 = (modelica_boolean)tmp110;
    if(tmp112)
    {
      tmp111 = Less((data->localData[0]->realVars[92] /* iEEET2.add.y variable */) * (data->simulationInfo->realParameter[259] /* iEEET2.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[263] /* iEEET2.simpleLagLim.outMax PARAM */);
      tmp113 = (tmp111?(jacobian->tmpVars[1] /* iEEET2.add.y.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[259] /* iEEET2.simpleLagLim.K PARAM */):0.0);
    }
    else
    {
      tmp113 = 0.0;
    }
    tmp115 = tmp113;
  }
  else
  {
    tmp115 = 0.0;
  }
  jacobian->tmpVars[2] /* iEEET2.derivativeLag.u.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_DIFF_VAR */ = tmp115;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
$res_NLSJac36_1.$pDERNLSJac36.dummyVarNLSJac36 = 0.06 * iEEET2.derivativeLag.u.$pDERNLSJac36.dummyVarNLSJac36 / iEEET2.derivativeLag.T - iEEET2.derivativeLag.y.SeedNLSJac36
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,298};
  jacobian->resultVars[0] /* $res_NLSJac36_1.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (0.06) * (DIVISION(jacobian->tmpVars[2] /* iEEET2.derivativeLag.u.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[234] /* iEEET2.derivativeLag.T PARAM */,"iEEET2.derivativeLag.T")) - jacobian->seedVars[0] /* iEEET2.derivativeLag.y.SeedNLSJac36 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacNLSJac36_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_NLSJac36;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacNLSJac36_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_NLSJac36;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_295(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_296(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_297(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_298(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianNLSJac35(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {8,9,10,5,6,8,7,9,10,5,6,7,11,14,15,16,3,4,14,16,11,14,15,16,3,4,14,16,1,2,14,16,1,2,14,16,18,19,20,21,18,19,20,21,0,17,18,19,0,17,18,19,0,5,14,18,19,20,21,6,16,17,18,19,20,21,11,12,13,15,11,12,13,15,1,2,3,4,9,11,12,14,15,16,20,1,2,3,4,10,11,13,14,15,16,21,3,5,6,7,8,9,10,19,4,5,6,7,8,9,10,18};
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
  jacobian->sparsePattern->colorCols[19] = 1;
  jacobian->sparsePattern->colorCols[18] = 2;
  jacobian->sparsePattern->colorCols[15] = 3;
  jacobian->sparsePattern->colorCols[14] = 4;
  jacobian->sparsePattern->colorCols[9] = 5;
  jacobian->sparsePattern->colorCols[21] = 5;
  jacobian->sparsePattern->colorCols[8] = 6;
  jacobian->sparsePattern->colorCols[20] = 6;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[17] = 7;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[2] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[16] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[3] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianNLSJac36(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 4;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(4,sizeof(modelica_real));
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
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+13] = {0,10,10,10,10,10,10,10,2,5,4,2,4,4};
  const int rowIndex[91] = {2,3,4,5,7,8,9,10,11,12,2,3,4,5,7,8,9,10,11,12,2,3,4,5,7,8,9,10,11,12,2,3,4,5,7,8,9,10,11,12,2,3,4,5,7,8,9,10,11,12,2,3,4,5,7,8,9,10,11,12,2,3,4,5,7,8,9,10,11,12,6,7,8,9,10,11,12,9,10,11,12,3,10,9,10,11,12,9,10,11,12};
  int i = 0;
  
  jacobian->sizeCols = 13;
  jacobian->sizeRows = 13;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(91*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 91;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern->maxColors = 12;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 91*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[8] = 1;
  jacobian->sparsePattern->colorCols[10] = 2;
  jacobian->sparsePattern->colorCols[12] = 3;
  jacobian->sparsePattern->colorCols[9] = 4;
  jacobian->sparsePattern->colorCols[5] = 5;
  jacobian->sparsePattern->colorCols[4] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[6] = 9;
  jacobian->sparsePattern->colorCols[7] = 10;
  jacobian->sparsePattern->colorCols[11] = 10;
  jacobian->sparsePattern->colorCols[1] = 11;
  jacobian->sparsePattern->colorCols[0] = 12;
  TRACE_POP
  return 0;
}


