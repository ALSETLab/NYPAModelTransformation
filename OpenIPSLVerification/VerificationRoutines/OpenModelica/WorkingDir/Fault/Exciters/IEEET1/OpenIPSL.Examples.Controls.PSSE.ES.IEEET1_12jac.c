/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET1_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 221
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac33 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac33) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_221(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,221};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[120] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[119] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[120] /* pwLine1.vs.re variable */) * (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) + (data->localData[0]->realVars[119] /* pwLine1.vs.im variable */) * (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_222(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,222};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[37] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[57] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_223(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,223};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp42 = (modelica_boolean)tmp3;
  if(tmp42)
  {
    tmp4 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    }tmp11 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    }tmp18 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
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
    }tmp33 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp33)
    {
      tmp34 = 0.0;
    }
    else
    {
      tmp26 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp27 = -1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp34 = (tmp28) * ((-1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp36 = data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */;
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
    tmp43 = (data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (tmp20)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)))) + (tmp34) * (exp(((-data->simulationInfo->realParameter[58] /* constantLoad.a2 PARAM */)) * (tmp37)))));
  }
  else
  {
    tmp43 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac33.dummyVarNLSJac33 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_224(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,224};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[40] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac33.dummyVarNLSJac33 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 + constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_225(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,225};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 6, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[41] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac33.dummyVarNLSJac33 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_226(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,226};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[158] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac33 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 = ($cse7 * gENROE.iq.SeedNLSJac33 + $cse6 * gENROE.id.SeedNLSJac33) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_227(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,227};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac33 SEED_VAR */) + (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[104] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 = ($cse6 * gENROE.iq.SeedNLSJac33 - $cse7 * gENROE.id.SeedNLSJac33) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_228(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,228};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac33 SEED_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac33 SEED_VAR */))) * (data->simulationInfo->realParameter[104] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 = gENROE.PSId.$pDERNLSJac33.dummyVarNLSJac33 - gENROE.R_a * gENROE.iq.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_229(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,229};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[141] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac33 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac33.dummyVarNLSJac33 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_230(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,230};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[159] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac33 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 = (-gENROE.PSIq.$pDERNLSJac33.dummyVarNLSJac33) - gENROE.R_a * gENROE.id.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_231(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,231};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[141] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac33 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 = $cse6 * gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 + $cse7 * gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 = $cse6 * gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 - $cse7 * gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_233(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,233};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac33.dummyVarNLSJac33 = ((-$cse1) * gENCLS.id.SeedNLSJac33 - $cse2 * gENCLS.iq.SeedNLSJac33) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_234(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,234};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac33 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac33 SEED_VAR */))) * (data->simulationInfo->realParameter[78] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac33.dummyVarNLSJac33 = ($cse2 * gENCLS.id.SeedNLSJac33 - $cse1 * gENCLS.iq.SeedNLSJac33) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac33 SEED_VAR */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac33 SEED_VAR */))) * (data->simulationInfo->realParameter[78] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 = gENCLS.X_d * gENCLS.iq.SeedNLSJac33 - gENCLS.R_a * gENCLS.id.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[87] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac33 SEED_VAR */) - ((data->simulationInfo->realParameter[84] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac33 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac33 - gENCLS.X_d * gENCLS.id.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
  jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[84] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac33 SEED_VAR */) - ((data->simulationInfo->realParameter[87] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac33 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
pwLine1.ir.re.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine4.ir.re.SeedNLSJac33) - gENCLS.p.ir.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac33 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine1.ir.im.SeedNLSJac33) - gENCLS.p.ii.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,239};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac33 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
pwLine3.is.im.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine.ir.im.SeedNLSJac33) - pwLine1.is.im.SeedNLSJac33 - constantLoad.p.ii.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  jacobian->tmpVars[19] /* pwLine3.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac33 SEED_VAR */) - jacobian->seedVars[6] /* pwLine1.is.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[8] /* constantLoad.p.ii.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
pwLine1.is.re.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine.ir.re.SeedNLSJac33) - pwLine3.is.re.SeedNLSJac33 - constantLoad.p.ir.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  jacobian->tmpVars[20] /* pwLine1.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine.ir.re.SeedNLSJac33 SEED_VAR */) - jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[9] /* constantLoad.p.ir.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine3.ir.im.SeedNLSJac33) - pwLine4.is.im.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac33 SEED_VAR */) - jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 = (-pwLine3.ir.re.SeedNLSJac33) - pwLine4.is.re.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac33 SEED_VAR */) - jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
$res_NLSJac33_1.$pDERNLSJac33.dummyVarNLSJac33 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac33) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,244};
  jacobian->resultVars[0] /* $res_NLSJac33_1.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = (data->localData[0]->realVars[119] /* pwLine1.vs.im variable */) * (jacobian->seedVars[9] /* constantLoad.p.ir.SeedNLSJac33 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[120] /* pwLine1.vs.re variable */) * (jacobian->seedVars[8] /* constantLoad.p.ii.SeedNLSJac33 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
$res_NLSJac33_2.$pDERNLSJac33.dummyVarNLSJac33 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac33 + pwLine1.vs.re.SeedNLSJac33 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  jacobian->resultVars[1] /* $res_NLSJac33_2.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = (data->localData[0]->realVars[119] /* pwLine1.vs.im variable */) * (jacobian->seedVars[8] /* constantLoad.p.ii.SeedNLSJac33 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[120] /* pwLine1.vs.re variable */) * (jacobian->seedVars[9] /* constantLoad.p.ir.SeedNLSJac33 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
$res_NLSJac33_3.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac33 else pwLine1.vs.re.SeedNLSJac33 - pwLine3.vr.re.SeedNLSJac33 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[2] /* $res_NLSJac33_3.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (jacobian->tmpVars[19] /* pwLine3.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
$res_NLSJac33_4.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.$pDERNLSJac33.dummyVarNLSJac33 else pwLine1.vs.im.SeedNLSJac33 - pwLine3.vr.im.SeedNLSJac33 - (pwLine3.Z.re * (pwLine3.is.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[3] /* $res_NLSJac33_4.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->tmpVars[19] /* pwLine3.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (jacobian->tmpVars[19] /* pwLine3.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
$res_NLSJac33_5.$pDERNLSJac33.dummyVarNLSJac33 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac33 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 - (pwFault.R * pwLine3.vr.im.SeedNLSJac33 - pwFault.X * pwLine3.vr.re.SeedNLSJac33) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, 9, Less);
  tmp64 = (modelica_boolean)tmp52;
  if(tmp64)
  {
    tmp65 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 10, Less);
    tmp62 = (modelica_boolean)(tmp53 && data->simulationInfo->booleanParameter[64] /* pwFault.ground PARAM */);
    if(tmp62)
    {
      tmp63 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 10, Less);
      tmp60 = (modelica_boolean)tmp54;
      if(tmp60)
      {
        tmp55 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp56 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp57 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp58 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp59 = (tmp57 * tmp57) + (tmp58 * tmp58);
        tmp61 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) - ((data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */))) * ((tmp55 * tmp55) + (tmp56 * tmp56)),(tmp59 * tmp59),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp61 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
      }
      tmp63 = tmp61;
    }
    tmp65 = tmp63;
  }
  jacobian->resultVars[4] /* $res_NLSJac33_5.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = tmp65;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
$res_NLSJac33_6.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac33 else pwLine3.vr.im.SeedNLSJac33 - pwLine1.vs.im.SeedNLSJac33 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac33 + (-pwLine3.vr.re.SeedNLSJac33) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac33 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac33 + pwLine3.vr.im.SeedNLSJac33 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac33 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[5] /* $res_NLSJac33_6.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp66 && tmp67)?jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
$res_NLSJac33_7.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac33 else pwLine3.vr.re.SeedNLSJac33 - pwLine1.vs.re.SeedNLSJac33 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac33 + pwLine3.vr.im.SeedNLSJac33 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac33 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac33 + (-pwLine3.vr.re.SeedNLSJac33) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac33 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,250};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[295] /* pwLine3.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[296] /* pwLine3.t2 PARAM */, 8, Less);
  jacobian->resultVars[6] /* $res_NLSJac33_7.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp68 && tmp69)?jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[294] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[293] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[291] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[292] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
$res_NLSJac33_8.$pDERNLSJac33.dummyVarNLSJac33 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac33 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 - (pwFault.R * pwLine3.vr.re.SeedNLSJac33 + pwFault.X * pwLine3.vr.im.SeedNLSJac33) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,251};
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
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[262] /* pwFault.t1 PARAM */, 9, Less);
  tmp82 = (modelica_boolean)tmp70;
  if(tmp82)
  {
    tmp83 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 10, Less);
    tmp80 = (modelica_boolean)(tmp71 && data->simulationInfo->booleanParameter[64] /* pwFault.ground PARAM */);
    if(tmp80)
    {
      tmp81 = jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[263] /* pwFault.t2 PARAM */, 10, Less);
      tmp78 = (modelica_boolean)tmp72;
      if(tmp78)
      {
        tmp73 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp74 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp75 = data->simulationInfo->realParameter[260] /* pwFault.R PARAM */;
        tmp76 = data->simulationInfo->realParameter[261] /* pwFault.X PARAM */;
        tmp77 = (tmp75 * tmp75) + (tmp76 * tmp76);
        tmp79 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[260] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) + (data->simulationInfo->realParameter[261] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */)) * ((tmp73 * tmp73) + (tmp74 * tmp74)),(tmp77 * tmp77),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp79 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */;
      }
      tmp81 = tmp79;
    }
    tmp83 = tmp81;
  }
  jacobian->resultVars[7] /* $res_NLSJac33_8.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = tmp83;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
$res_NLSJac33_9.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac33 else pwLine3.vr.im.SeedNLSJac33 - pwLine1.vr.im.SeedNLSJac33 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac33 + (-pwLine3.vr.re.SeedNLSJac33) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac33 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac33 + pwLine3.vr.im.SeedNLSJac33 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac33 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,252};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[8] /* $res_NLSJac33_9.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp84 && tmp85)?jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
$res_NLSJac33_10.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac33 else pwLine3.vr.re.SeedNLSJac33 - pwLine1.vr.re.SeedNLSJac33 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac33 + pwLine3.vr.im.SeedNLSJac33 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac33 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac33 + (-pwLine3.vr.re.SeedNLSJac33) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac33 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,253};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[9] /* $res_NLSJac33_10.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp86 && tmp87)?jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$res_NLSJac33_11.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac33 else pwLine1.vr.re.SeedNLSJac33 - pwLine3.vr.re.SeedNLSJac33 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac33 + pwLine1.vr.im.SeedNLSJac33 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac33 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine1.vr.re.SeedNLSJac33) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac33 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,254};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[10] /* $res_NLSJac33_11.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp88 && tmp89)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
$res_NLSJac33_12.$pDERNLSJac33.dummyVarNLSJac33 = $cse2 * gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 + $cse1 * gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vr.re.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,255};
  jacobian->resultVars[11] /* $res_NLSJac33_12.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = (data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
$res_NLSJac33_13.$pDERNLSJac33.dummyVarNLSJac33 = $cse1 * gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 + (-$cse2) * gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vr.im.SeedNLSJac33
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,256};
  jacobian->resultVars[12] /* $res_NLSJac33_13.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
$res_NLSJac33_14.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac33.dummyVarNLSJac33 else pwLine1.vr.re.SeedNLSJac33 - pwLine1.vs.re.SeedNLSJac33 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine1.vr.im.SeedNLSJac33 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac33 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac33 + (-pwLine1.vr.re.SeedNLSJac33) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac33 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,257};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[13] /* $res_NLSJac33_14.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$res_NLSJac33_15.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac33 else pwLine1.vr.im.SeedNLSJac33 - pwLine1.vs.im.SeedNLSJac33 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac33 + (-pwLine1.vr.re.SeedNLSJac33) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac33 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine1.vr.im.SeedNLSJac33 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac33 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,258};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[14] /* $res_NLSJac33_15.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
$res_NLSJac33_16.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac33 else pwLine1.vs.im.SeedNLSJac33 - pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,259};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res_NLSJac33_16.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
$res_NLSJac33_17.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 else pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vs.re.SeedNLSJac33 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,260};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[16] /* $res_NLSJac33_17.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
$res_NLSJac33_18.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 else pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 - pwLine1.vs.im.SeedNLSJac33 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,261};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[17] /* $res_NLSJac33_18.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
$res_NLSJac33_19.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac33 else pwLine1.vs.re.SeedNLSJac33 - pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,262};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[273] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[274] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[18] /* $res_NLSJac33_19.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[4] /* pwLine.ir.re.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[272] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[271] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine.ir.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[269] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[270] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$res_NLSJac33_20.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.$pDERNLSJac33.dummyVarNLSJac33 else pwLine1.vs.re.SeedNLSJac33 - pwLine1.vr.re.SeedNLSJac33 - (pwLine1.Z.re * (pwLine1.is.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,263};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[19] /* $res_NLSJac33_20.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->tmpVars[20] /* pwLine1.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[20] /* pwLine1.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine1.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$res_NLSJac33_21.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac33 else pwLine1.vs.im.SeedNLSJac33 - pwLine1.vr.im.SeedNLSJac33 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac33 + (-pwLine1.vs.re.SeedNLSJac33) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac33 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.$pDERNLSJac33.dummyVarNLSJac33 + pwLine1.vs.im.SeedNLSJac33 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac33 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,264};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[284] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[285] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[20] /* $res_NLSJac33_21.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[6] /* pwLine1.is.im.SeedNLSJac33 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[283] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine1.is.im.SeedNLSJac33 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[282] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[20] /* pwLine1.is.re.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[280] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[281] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$res_NLSJac33_22.$pDERNLSJac33.dummyVarNLSJac33 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 else pwLine1.vr.im.SeedNLSJac33 - pwLine3.vr.im.SeedNLSJac33 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 + (-pwLine1.vr.re.SeedNLSJac33) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac33 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac33 + pwLine1.vr.im.SeedNLSJac33 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac33 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,265};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[306] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[307] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[21] /* $res_NLSJac33_22.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac33 SEED_VAR */ - ((data->simulationInfo->realParameter[305] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac33.dummyVarNLSJac33 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */)) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[304] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac33 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[302] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac33 SEED_VAR */) * (data->simulationInfo->realParameter[303] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacNLSJac33_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_INDEX_JAC_NLSJac33;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacNLSJac33_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_INDEX_JAC_NLSJac33;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_221(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_222(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_223(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_224(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_225(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_226(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_227(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_228(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_229(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_230(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_231(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_232(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_233(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_234(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_235(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_236(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_237(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_238(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_239(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_240(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_241(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_242(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_243(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_244(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_245(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_246(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_247(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_248(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_249(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_250(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_251(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_252(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_253(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_254(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_255(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_256(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_257(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_258(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_259(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_260(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_261(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_262(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_263(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_264(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_eqFunction_265(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianNLSJac33(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,6,6,7,7,4,4,11,11,8,8};
  const int rowIndex[116] = {7,8,9,5,6,7,4,8,9,4,5,6,15,18,19,20,2,3,19,20,2,3,19,20,2,3,15,18,0,1,2,3,0,1,19,20,10,13,14,21,10,13,14,21,10,11,12,13,14,21,10,11,12,13,14,21,8,10,12,13,14,20,21,9,10,11,13,14,19,21,15,16,17,18,15,16,17,18,0,1,2,3,6,13,15,16,18,19,20,0,1,2,3,5,14,15,17,18,19,20,2,4,5,6,7,8,9,10,3,4,5,6,7,8,9,21};
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
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[9] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[17] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[2] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[16] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[3] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[8] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+12] = {0,8,8,8,8,8,8,8,2,3,3,4,2};
  const int rowIndex[70] = {2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,2,3,4,5,7,8,10,11,6,7,8,10,11,9,10,11,3,9,10,11,10,11};
  int i = 0;
  
  jacobian->sizeCols = 12;
  jacobian->sizeRows = 12;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((12+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(70*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 70;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(12*sizeof(int));
  jacobian->sparsePattern->maxColors = 11;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (12+1)*sizeof(int));
  
  for(i=2;i<12+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 70*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[8] = 1;
  jacobian->sparsePattern->colorCols[10] = 2;
  jacobian->sparsePattern->colorCols[11] = 3;
  jacobian->sparsePattern->colorCols[5] = 4;
  jacobian->sparsePattern->colorCols[4] = 5;
  jacobian->sparsePattern->colorCols[3] = 6;
  jacobian->sparsePattern->colorCols[2] = 7;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[9] = 9;
  jacobian->sparsePattern->colorCols[1] = 10;
  jacobian->sparsePattern->colorCols[0] = 11;
  TRACE_POP
  return 0;
}


