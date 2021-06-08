/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC1A_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 451
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac4 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac4) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_451(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,451};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[140] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[139] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) + (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_452(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,452};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[65] /* constantLoad.v variable */, data->simulationInfo->realParameter[38] /* constantLoad.PQBRAK PARAM */, 6, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[58] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[65] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[63] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[65] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_453(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,453};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[65] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp42 = (modelica_boolean)tmp3;
  if(tmp42)
  {
    tmp4 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
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
    }tmp11 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
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
    }tmp18 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
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
    }tmp33 = (modelica_boolean)(data->localData[0]->realVars[65] /* constantLoad.v variable */ == 0.0);
    if(tmp33)
    {
      tmp34 = 0.0;
    }
    else
    {
      tmp26 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
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
      tmp34 = (tmp28) * ((-1.0 + data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = data->localData[0]->realVars[65] /* constantLoad.v variable */;
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
    tmp43 = (data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */) * (((data->simulationInfo->realParameter[64] /* constantLoad.b2 PARAM */) * (tmp20)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)))) + (tmp34) * (exp(((-data->simulationInfo->realParameter[59] /* constantLoad.a2 PARAM */)) * (tmp37)))));
  }
  else
  {
    tmp43 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,454};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((tmp44 && tmp45)?(data->simulationInfo->realParameter[41] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[61] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[66] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[41] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[61] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,455};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */, 4, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[67] /* constantLoad.d_t PARAM */, 5, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((tmp46 && tmp47)?(data->simulationInfo->realParameter[42] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[61] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[42] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[61] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[65] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[44] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,456};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[256] /* gENROE.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 = ($cse5 * gENROE.iq.SeedNLSJac4 + $cse4 * gENROE.id.SeedNLSJac4) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,457};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[32] /* $cse5 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac4 SEED_VAR */) + (data->localData[0]->realVars[31] /* $cse4 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 = ($cse4 * gENROE.iq.SeedNLSJac4 - $cse5 * gENROE.id.SeedNLSJac4) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_458(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,458};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse4 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac4 SEED_VAR */) - ((data->localData[0]->realVars[32] /* $cse5 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac4 SEED_VAR */))) * (data->simulationInfo->realParameter[201] /* gENROE.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 = (-gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4) - gENROE.R_a * gENROE.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_459(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,459};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,460};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[255] /* gENROE.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 = gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 - gENROE.R_a * gENROE.iq.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,461};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[238] /* gENROE.R_a PARAM */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 = $cse4 * gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 - $cse5 * gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_462(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,462};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[31] /* $cse4 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[32] /* $cse5 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 = $cse4 * gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 + $cse5 * gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_463(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,463};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[31] /* $cse4 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[32] /* $cse5 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = ((-$cse1) * gENCLS.id.SeedNLSJac4 - $cse2 * gENCLS.iq.SeedNLSJac4) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_464(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,464};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[28] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac4 SEED_VAR */) - ((data->localData[0]->realVars[29] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */))) * (data->simulationInfo->realParameter[176] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 = ($cse2 * gENCLS.id.SeedNLSJac4 - $cse1 * gENCLS.iq.SeedNLSJac4) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_465(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,465};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[29] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac4 SEED_VAR */) - ((data->localData[0]->realVars[28] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */))) * (data->simulationInfo->realParameter[176] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac4 - gENCLS.X_d * gENCLS.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,466};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 = gENCLS.X_d * gENCLS.iq.SeedNLSJac4 - gENCLS.R_a * gENCLS.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,467};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[185] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[182] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
pwLine2.ir.re.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine4.ir.re.SeedNLSJac4) - gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_468(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,468};
  jacobian->tmpVars[17] /* pwLine2.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac4 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 = (-gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4) - pwLine2.ir.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,469};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[10] /* pwLine2.ir.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine3.ir.im.SeedNLSJac4) - pwLine4.is.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,470};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[8] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine3.is.im.SeedNLSJac4) - constantLoad.p.ii.SeedNLSJac4 - pwLine1.is.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,471};
  jacobian->tmpVars[20] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[5] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[9] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine.ir.re.SeedNLSJac4) - pwLine3.is.re.SeedNLSJac4 - constantLoad.p.ir.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,472};
  jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[2] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[6] /* constantLoad.p.ir.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine3.ir.re.SeedNLSJac4) - pwLine4.is.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,473};
  jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
$res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine1.vs.re.SeedNLSJac4 - pwLine1.vr.re.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,474};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[0] /* $res_NLSJac4_1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp48 && tmp49)?jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
$res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine2.t1 and time < pwLine2.t2 then -pwLine1.ir.re.SeedNLSJac4 else pwLine1.vr.re.SeedNLSJac4 - pwLine2.vr.re.SeedNLSJac4 - (pwLine2.Z.re * (pwLine1.vr.im.SeedNLSJac4 * pwLine2.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine2.Y.re - pwLine1.ir.re.SeedNLSJac4) - pwLine2.Z.im * ((-pwLine1.vr.re.SeedNLSJac4) * pwLine2.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine2.Y.re - pwLine1.ir.im.SeedNLSJac4))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,475};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, 9, Less);
  jacobian->resultVars[1] /* $res_NLSJac4_2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp50 && tmp51)?(-jacobian->seedVars[22] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */):jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * ((jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - jacobian->seedVars[22] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (((-jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - jacobian->seedVars[24] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */))));
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
$res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine2.t1 and time < pwLine2.t2 then -pwLine1.ir.im.SeedNLSJac4 else pwLine1.vr.im.SeedNLSJac4 - pwLine2.vr.im.SeedNLSJac4 - (pwLine2.Z.re * ((-pwLine1.vr.re.SeedNLSJac4) * pwLine2.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine2.Y.re - pwLine1.ir.im.SeedNLSJac4) + pwLine2.Z.im * (pwLine1.vr.im.SeedNLSJac4 * pwLine2.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine2.Y.re - pwLine1.ir.re.SeedNLSJac4))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,476};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, 9, Less);
  jacobian->resultVars[2] /* $res_NLSJac4_3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp52 && tmp53)?(-jacobian->seedVars[24] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */):jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (((-jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - jacobian->seedVars[24] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */) + (data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * ((jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)) - jacobian->seedVars[22] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */)));
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
$res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine2.vr.re.SeedNLSJac4 - pwLine1.vr.re.SeedNLSJac4 - (pwLine2.Z.re * (pwLine2.ir.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine2.vr.im.SeedNLSJac4 * pwLine2.Y.im - pwLine2.vr.re.SeedNLSJac4 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.ir.im.SeedNLSJac4 + (-pwLine2.vr.re.SeedNLSJac4) * pwLine2.Y.im - pwLine2.vr.im.SeedNLSJac4 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,477};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, 9, Less);
  jacobian->resultVars[3] /* $res_NLSJac4_4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp54 && tmp55)?jacobian->tmpVars[17] /* pwLine2.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine2.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine2.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
$res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.im.SeedNLSJac4 else pwLine2.vr.im.SeedNLSJac4 - pwLine1.vr.im.SeedNLSJac4 - (pwLine2.Z.re * (pwLine2.ir.im.SeedNLSJac4 + (-pwLine2.vr.re.SeedNLSJac4) * pwLine2.Y.im - pwLine2.vr.im.SeedNLSJac4 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.ir.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine2.vr.im.SeedNLSJac4 * pwLine2.Y.im - pwLine2.vr.re.SeedNLSJac4 * pwLine2.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,478};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[325] /* pwLine2.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine2.t2 PARAM */, 9, Less);
  jacobian->resultVars[4] /* $res_NLSJac4_5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp56 && tmp57)?jacobian->seedVars[10] /* pwLine2.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[324] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine2.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[323] /* pwLine2.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine2.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[321] /* pwLine2.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
$res_NLSJac4_6.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac4 else pwLine1.vr.im.SeedNLSJac4 - pwLine1.vs.im.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,479};
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[5] /* $res_NLSJac4_6.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp58 && tmp59)?jacobian->seedVars[24] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[24] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[22] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
$res_NLSJac4_7.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac4 else pwLine1.vr.re.SeedNLSJac4 - pwLine1.vs.re.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_480(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,480};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[6] /* $res_NLSJac4_7.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp60 && tmp61)?jacobian->seedVars[22] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[22] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[24] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[25] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
$res_NLSJac4_8.$pDERNLSJac4.dummyVarNLSJac4 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac4 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 - (pwFault.R * pwLine3.vr.im.SeedNLSJac4 - pwFault.X * pwLine3.vr.re.SeedNLSJac4) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,481};
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
  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */, 14, Less);
  tmp74 = (modelica_boolean)tmp62;
  if(tmp74)
  {
    tmp75 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, 15, Less);
    tmp72 = (modelica_boolean)(tmp63 && data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */);
    if(tmp72)
    {
      tmp73 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, 15, Less);
      tmp70 = (modelica_boolean)tmp64;
      if(tmp70)
      {
        tmp65 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp66 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp67 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp68 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp69 = (tmp67 * tmp67) + (tmp68 * tmp68);
        tmp71 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[290] /* pwFault.R PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[291] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */))) * ((tmp65 * tmp65) + (tmp66 * tmp66)),(tmp69 * tmp69),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp71 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
      }
      tmp73 = tmp71;
    }
    tmp75 = tmp73;
  }
  jacobian->resultVars[7] /* $res_NLSJac4_8.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp75;
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
$res_NLSJac4_9.$pDERNLSJac4.dummyVarNLSJac4 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac4 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 - (pwFault.R * pwLine3.vr.re.SeedNLSJac4 + pwFault.X * pwLine3.vr.im.SeedNLSJac4) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,482};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_real tmp89;
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[292] /* pwFault.t1 PARAM */, 14, Less);
  tmp88 = (modelica_boolean)tmp76;
  if(tmp88)
  {
    tmp89 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, 15, Less);
    tmp86 = (modelica_boolean)(tmp77 && data->simulationInfo->booleanParameter[79] /* pwFault.ground PARAM */);
    if(tmp86)
    {
      tmp87 = jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[293] /* pwFault.t2 PARAM */, 15, Less);
      tmp84 = (modelica_boolean)tmp78;
      if(tmp84)
      {
        tmp79 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp80 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp81 = data->simulationInfo->realParameter[290] /* pwFault.R PARAM */;
        tmp82 = data->simulationInfo->realParameter[291] /* pwFault.X PARAM */;
        tmp83 = (tmp81 * tmp81) + (tmp82 * tmp82);
        tmp85 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[290] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) + (data->simulationInfo->realParameter[291] /* pwFault.X PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */)) * ((tmp79 * tmp79) + (tmp80 * tmp80)),(tmp83 * tmp83),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp85 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
      }
      tmp87 = tmp85;
    }
    tmp89 = tmp87;
  }
  jacobian->resultVars[8] /* $res_NLSJac4_9.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp89;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
$res_NLSJac4_10.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac4 else pwLine3.vr.re.SeedNLSJac4 - pwLine1.vs.re.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,483};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, 13, Less);
  jacobian->resultVars[9] /* $res_NLSJac4_10.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp90 && tmp91)?jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
$res_NLSJac4_11.$pDERNLSJac4.dummyVarNLSJac4 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac4) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,484};
  jacobian->resultVars[10] /* $res_NLSJac4_11.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (jacobian->seedVars[6] /* constantLoad.p.ir.SeedNLSJac4 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[64] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->localData[0]->realVars[63] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (jacobian->seedVars[5] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
$res_NLSJac4_12.$pDERNLSJac4.dummyVarNLSJac4 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac4 + pwLine1.vs.re.SeedNLSJac4 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,485};
  jacobian->resultVars[11] /* $res_NLSJac4_12.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[139] /* pwLine1.vs.im variable */) * (jacobian->seedVars[5] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[63] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[140] /* pwLine1.vs.re variable */) * (jacobian->seedVars[6] /* constantLoad.p.ir.SeedNLSJac4 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[64] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
$res_NLSJac4_13.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine1.vs.im.SeedNLSJac4 - pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,486};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[12] /* $res_NLSJac4_13.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp92 && tmp93)?jacobian->tmpVars[20] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[20] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
$res_NLSJac4_14.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac4 else pwLine1.vs.re.SeedNLSJac4 - pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,487};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[13] /* $res_NLSJac4_14.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp94 && tmp95)?jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[20] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
$res_NLSJac4_15.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vs.re.SeedNLSJac4 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_488(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,488};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[14] /* $res_NLSJac4_15.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
$res_NLSJac4_16.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vs.im.SeedNLSJac4 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,489};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[303] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[304] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res_NLSJac4_16.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[302] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[301] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[299] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
$res_NLSJac4_17.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac4 else pwLine1.vs.im.SeedNLSJac4 - pwLine1.vr.im.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,490};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[314] /* pwLine1.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwLine1.t2 PARAM */, 3, Less);
  jacobian->resultVars[16] /* $res_NLSJac4_17.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[9] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[23] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[313] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[312] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[21] /* pwLine1.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[310] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[311] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
$res_NLSJac4_18.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac4 else pwLine1.vs.re.SeedNLSJac4 - pwLine3.vr.re.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,491};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, 13, Less);
  jacobian->resultVars[17] /* $res_NLSJac4_18.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp102 && tmp103)?jacobian->seedVars[2] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
$res_NLSJac4_19.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac4 else pwLine1.vs.im.SeedNLSJac4 - pwLine3.vr.im.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,492};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, 13, Less);
  jacobian->resultVars[18] /* $res_NLSJac4_19.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp104 && tmp105)?jacobian->seedVars[4] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
$res_NLSJac4_20.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac4 else pwLine3.vr.im.SeedNLSJac4 - pwLine1.vs.im.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,493};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[336] /* pwLine3.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine3.t2 PARAM */, 13, Less);
  jacobian->resultVars[19] /* $res_NLSJac4_20.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[8] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[335] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[334] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[332] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
$res_NLSJac4_21.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac4 else pwLine3.vr.im.SeedNLSJac4 - pwLine2.vr.im.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,494};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[20] /* $res_NLSJac4_21.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp108 && tmp109)?jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
$res_NLSJac4_22.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac4 else pwLine3.vr.re.SeedNLSJac4 - pwLine2.vr.re.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[21] /* $res_NLSJac4_22.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp110 && tmp111)?jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
$res_NLSJac4_23.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac4 else pwLine2.vr.re.SeedNLSJac4 - pwLine3.vr.re.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac4 + pwLine2.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine2.vr.re.SeedNLSJac4 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine2.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine2.vr.im.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,496};
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[22] /* $res_NLSJac4_23.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp112 && tmp113)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
$res_NLSJac4_24.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine2.vr.im.SeedNLSJac4 - pwLine3.vr.im.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine2.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine2.vr.im.SeedNLSJac4 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac4 + pwLine2.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine2.vr.re.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,497};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[347] /* pwLine4.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine4.t2 PARAM */, 11, Less);
  jacobian->resultVars[23] /* $res_NLSJac4_24.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp114 && tmp115)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[346] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[345] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[343] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
$res_NLSJac4_25.$pDERNLSJac4.dummyVarNLSJac4 = $cse1 * gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 + (-$cse2) * gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine2.vr.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,498};
  jacobian->resultVars[24] /* $res_NLSJac4_25.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[28] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[29] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine2.vr.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
$res_NLSJac4_26.$pDERNLSJac4.dummyVarNLSJac4 = $cse2 * gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 + $cse1 * gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine2.vr.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  jacobian->resultVars[25] /* $res_NLSJac4_26.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[29] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[28] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine2.vr.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacNLSJac4_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_NLSJac4;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_NLSJac4;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_451(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_452(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_453(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_454(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_455(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_456(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_457(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_458(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_459(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_460(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_461(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_462(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_463(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_464(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_465(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_466(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_467(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_468(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_469(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_470(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_471(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_472(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_473(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_474(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_475(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_476(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_477(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_478(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_479(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_480(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_481(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_482(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_483(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_484(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_485(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_486(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_487(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_488(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_489(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_490(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_491(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_492(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_493(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_494(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_495(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_496(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_497(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_498(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_eqFunction_499(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+26] = {0,3,3,4,4,4,4,4,3,3,4,4,4,6,6,7,7,4,4,8,11,11,8,4,6,4,6};
  const int rowIndex[136] = {8,20,21,8,9,19,0,16,17,18,0,12,13,16,12,13,17,18,10,11,12,13,0,10,11,16,7,20,21,7,9,19,0,12,13,16,3,4,22,23,3,4,22,23,3,4,22,23,24,25,3,4,22,23,24,25,2,3,4,20,22,23,24,1,3,4,21,22,23,25,12,13,14,15,12,13,14,15,7,8,9,18,19,20,21,23,0,5,10,11,12,13,15,16,17,18,19,0,6,9,10,11,12,13,14,16,17,18,7,8,9,17,19,20,21,22,1,2,5,6,1,2,4,5,6,16,1,2,5,6,0,1,2,3,5,6};
  int i = 0;
  
  jacobian->sizeCols = 26;
  jacobian->sizeRows = 26;
  jacobian->sizeTmpVars = 49;
  jacobian->seedVars = (modelica_real*) calloc(26,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(26,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(49,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((26+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(136*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 136;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(26*sizeof(int));
  jacobian->sparsePattern->maxColors = 10;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (26+1)*sizeof(int));
  
  for(i=2;i<26+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 136*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[21] = 1;
  jacobian->sparsePattern->colorCols[25] = 1;
  jacobian->sparsePattern->colorCols[20] = 2;
  jacobian->sparsePattern->colorCols[19] = 3;
  jacobian->sparsePattern->colorCols[18] = 4;
  jacobian->sparsePattern->colorCols[23] = 4;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[17] = 5;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[16] = 6;
  jacobian->sparsePattern->colorCols[9] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[4] = 8;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[3] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[24] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[2] = 10;
  jacobian->sparsePattern->colorCols[5] = 10;
  jacobian->sparsePattern->colorCols[8] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  jacobian->sparsePattern->colorCols[22] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC1A_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+14] = {0,4,3,4,5,2,10,10,0,10,10,10,10,10,2};
  const int rowIndex[90] = {0,1,3,4,1,3,4,1,2,3,4,0,1,3,4,9,3,4,0,1,2,3,4,8,9,10,11,13,0,1,2,3,4,8,9,10,11,13,0,1,2,3,4,8,9,10,11,13,0,1,2,3,4,8,9,10,11,13,0,1,2,3,4,8,9,10,11,13,0,1,2,3,4,8,9,10,11,13,0,1,2,3,4,8,9,10,11,13,12,13};
  int i = 0;
  
  jacobian->sizeCols = 14;
  jacobian->sizeRows = 14;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(14,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(14,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((14+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(90*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 90;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(14*sizeof(int));
  jacobian->sparsePattern->maxColors = 12;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (14+1)*sizeof(int));
  
  for(i=2;i<14+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 90*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[0] = 2;
  jacobian->sparsePattern->colorCols[4] = 3;
  jacobian->sparsePattern->colorCols[2] = 4;
  jacobian->sparsePattern->colorCols[11] = 5;
  jacobian->sparsePattern->colorCols[10] = 6;
  jacobian->sparsePattern->colorCols[9] = 7;
  jacobian->sparsePattern->colorCols[8] = 8;
  jacobian->sparsePattern->colorCols[12] = 9;
  jacobian->sparsePattern->colorCols[13] = 10;
  jacobian->sparsePattern->colorCols[1] = 10;
  jacobian->sparsePattern->colorCols[6] = 11;
  jacobian->sparsePattern->colorCols[5] = 12;
  jacobian->sparsePattern->colorCols[7] = 12;
  TRACE_POP
  return 0;
}


