/* Jacobians 7 */
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENCLS_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 59
type: SIMPLE_ASSIGN
$cse1 = cos(gENCLS2.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_59(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,59};
  jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
$cse2 = sin(gENCLS2.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_60(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,60};
  jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[2] /* gENCLS2.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
$cse3 = cos(gENCLS.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_61(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,61};
  jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */ = cos(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
$cse4 = sin(gENCLS.delta)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_62(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,62};
  jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */ = sin(data->localData[0]->realVars[0] /* gENCLS.delta STATE(1) */);
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac4 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac4) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_63(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,63};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[81] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[80] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_64(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,64};
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
  tmp2 = Less(data->localData[0]->realVars[38] /* constantLoad.v variable */,0.5);
  tmp44 = (modelica_boolean)tmp2;
  if(tmp44)
  {
    tmp3 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp4 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    }tmp10 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp11 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    }tmp25 = (modelica_boolean)(data->localData[0]->realVars[38] /* constantLoad.v variable */ == 0.0);
    if(tmp25)
    {
      tmp26 = 0.0;
    }
    else
    {
      tmp18 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
      tmp19 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp26 = (tmp20) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = (modelica_boolean)(data->localData[0]->realVars[38] /* constantLoad.v variable */ == 0.0);
    if(tmp35)
    {
      tmp36 = 0.0;
    }
    else
    {
      tmp28 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
      tmp29 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp36 = (tmp30) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
    }
    tmp37 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp38 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
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
    tmp45 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp12)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (tmp26))) + (tmp36) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp39)))));
  }
  else
  {
    tmp45 = 0.0;
  }
  jacobian->tmpVars[5] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = tmp45;
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_65(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,65};
  modelica_boolean tmp46;
  tmp46 = Less(data->localData[0]->realVars[38] /* constantLoad.v variable */,data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */);
  jacobian->tmpVars[6] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (tmp46?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[38] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[38] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_66(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,66};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  tmp47 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
  tmp48 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
  jacobian->tmpVars[7] /* constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[34] /* constantLoad.kI variable */) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[5] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[6] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[34] /* constantLoad.kI variable */) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[5] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[6] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 + constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_67(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,67};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  tmp49 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */);
  tmp50 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */);
  jacobian->tmpVars[8] /* constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[34] /* constantLoad.kI variable */) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[5] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[6] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[34] /* constantLoad.kI variable */) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[5] /* constantLoad.kI.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) * (jacobian->tmpVars[4] /* constantLoad.v.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[6] /* constantLoad.kP.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = ((-$cse4) * gENCLS.id.SeedNLSJac4 - $cse3 * gENCLS.iq.SeedNLSJac4) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_68(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,68};
  jacobian->tmpVars[9] /* gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (((-jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */)) * (jacobian->seedVars[16] /* gENCLS.id.SeedNLSJac4 SEED_VAR */) - ((jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[15] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 = ($cse3 * gENCLS.id.SeedNLSJac4 - $cse4 * gENCLS.iq.SeedNLSJac4) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_69(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,69};
  jacobian->tmpVars[10] /* gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[16] /* gENCLS.id.SeedNLSJac4 SEED_VAR */) - ((jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[15] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 = gENCLS.X_d * gENCLS.iq.SeedNLSJac4 - gENCLS.R_a * gENCLS.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_70(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,70};
  jacobian->tmpVars[11] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[15] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[16] /* gENCLS.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac4 - gENCLS.X_d * gENCLS.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_71(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,71};
  jacobian->tmpVars[12] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[15] /* gENCLS.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[16] /* gENCLS.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine1.ir.im.SeedNLSJac4) - gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_72(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,72};
  jacobian->tmpVars[13] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[14] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */) - jacobian->tmpVars[10] /* gENCLS.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine1.ir.re.SeedNLSJac4) - gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_73(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,73};
  jacobian->tmpVars[14] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[13] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */) - jacobian->tmpVars[9] /* gENCLS.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 = ($cse1 * gENCLS2.iq.SeedNLSJac4 + $cse2 * gENCLS2.id.SeedNLSJac4) * gENCLS2.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_74(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,74};
  jacobian->tmpVars[15] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[11] /* gENCLS2.iq.SeedNLSJac4 SEED_VAR */) + (jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[10] /* gENCLS2.id.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[102] /* gENCLS2.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 = ($cse2 * gENCLS2.iq.SeedNLSJac4 - $cse1 * gENCLS2.id.SeedNLSJac4) * gENCLS2.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_75(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,75};
  jacobian->tmpVars[16] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[11] /* gENCLS2.iq.SeedNLSJac4 SEED_VAR */) - ((jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->seedVars[10] /* gENCLS2.id.SeedNLSJac4 SEED_VAR */))) * (data->simulationInfo->realParameter[102] /* gENCLS2.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
gENCLS2.vq.$pDERNLSJac4.dummyVarNLSJac4 = (-gENCLS2.R_a) * gENCLS2.iq.SeedNLSJac4 - gENCLS2.X_d * gENCLS2.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_76(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,76};
  jacobian->tmpVars[17] /* gENCLS2.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */)) * (jacobian->seedVars[11] /* gENCLS2.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (jacobian->seedVars[10] /* gENCLS2.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
gENCLS2.vd.$pDERNLSJac4.dummyVarNLSJac4 = gENCLS2.X_d * gENCLS2.iq.SeedNLSJac4 - gENCLS2.R_a * gENCLS2.id.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_77(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,77};
  jacobian->tmpVars[18] /* gENCLS2.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (jacobian->seedVars[11] /* gENCLS2.iq.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */) * (jacobian->seedVars[10] /* gENCLS2.id.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine3.ir.im.SeedNLSJac4) - pwLine4.is.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_78(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,78};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine3.ir.re.SeedNLSJac4) - pwLine4.is.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_79(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,79};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine.ir.re.SeedNLSJac4) - pwLine1.is.re.SeedNLSJac4 - pwLine3.is.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_80(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,80};
  jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 = (-pwLine1.is.im.SeedNLSJac4) - pwLine3.is.im.SeedNLSJac4 - constantLoad.p.ii.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_81(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,81};
  jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */) - jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[0] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac4.dummyVarNLSJac4 = $cse2 * gENCLS2.vq.$pDERNLSJac4.dummyVarNLSJac4 + (-$cse1) * gENCLS2.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine.vs.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_82(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,82};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[17] /* gENCLS2.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + ((-jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[18] /* gENCLS2.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[17] /* pwLine.vs.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac4.dummyVarNLSJac4 = $cse4 * gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 + (-$cse3) * gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vr.im.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_83(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,83};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[12] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + ((-jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */)) * (jacobian->tmpVars[11] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac4.dummyVarNLSJac4 = $cse3 * gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 + $cse4 * gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vr.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (jacobian->tmpVars[1] /* $cse3 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[12] /* gENCLS.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[0] /* $cse4 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[11] /* gENCLS.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac4.dummyVarNLSJac4 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac4 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 - (pwFault.R * pwLine3.vr.re.SeedNLSJac4 + pwFault.X * pwLine3.vr.im.SeedNLSJac4) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
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
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130] /* pwFault.t1 PARAM */);
  tmp63 = (modelica_boolean)tmp51;
  if(tmp63)
  {
    tmp64 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp52 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */);
    tmp61 = (modelica_boolean)(tmp52 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp61)
    {
      tmp62 = jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */;
    }
    else
    {
      tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */);
      tmp59 = (modelica_boolean)tmp53;
      if(tmp59)
      {
        tmp54 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp55 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp56 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp57 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp58 = (tmp56 * tmp56) + (tmp57 * tmp57);
        tmp60 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[128] /* pwFault.R PARAM */) * (jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) + (data->simulationInfo->realParameter[129] /* pwFault.X PARAM */) * (jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */)) * ((tmp54 * tmp54) + (tmp55 * tmp55)),(tmp58 * tmp58),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp60 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
      }
      tmp62 = tmp60;
    }
    tmp64 = tmp62;
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp64;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac4 else pwLine1.vs.re.SeedNLSJac4 - pwLine3.vr.re.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_86(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,86};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  tmp65 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */);
  tmp66 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp65 && tmp66)?jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac4 else pwLine1.vs.im.SeedNLSJac4 - pwLine3.vr.im.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_87(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,87};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  tmp67 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */);
  tmp68 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp67 && tmp68)?jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac4.dummyVarNLSJac4 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac4 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 - (pwFault.R * pwLine3.vr.im.SeedNLSJac4 - pwFault.X * pwLine3.vr.re.SeedNLSJac4) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_88(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,88};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  tmp69 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[130] /* pwFault.t1 PARAM */);
  tmp81 = (modelica_boolean)tmp69;
  if(tmp81)
  {
    tmp82 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp70 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */);
    tmp79 = (modelica_boolean)(tmp70 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp79)
    {
      tmp80 = jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */;
    }
    else
    {
      tmp71 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */);
      tmp77 = (modelica_boolean)tmp71;
      if(tmp77)
      {
        tmp72 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp73 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp74 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp75 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp76 = (tmp74 * tmp74) + (tmp75 * tmp75);
        tmp78 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[128] /* pwFault.R PARAM */) * (jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) - ((data->simulationInfo->realParameter[129] /* pwFault.X PARAM */) * (jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */))) * ((tmp72 * tmp72) + (tmp73 * tmp73)),(tmp76 * tmp76),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp78 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
      }
      tmp80 = tmp78;
    }
    tmp82 = tmp80;
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp82;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac4 else pwLine3.vr.re.SeedNLSJac4 - pwLine1.vs.re.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_89(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,89};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  tmp83 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */);
  tmp84 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac4 else pwLine3.vr.im.SeedNLSJac4 - pwLine1.vs.im.SeedNLSJac4 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_90(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,90};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  tmp85 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */);
  tmp86 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac4 else pwLine3.vr.im.SeedNLSJac4 - pwLine1.vr.im.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_91(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,91};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  tmp87 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */);
  tmp88 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac4 else pwLine3.vr.re.SeedNLSJac4 - pwLine1.vr.re.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac4 + pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac4 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac4 + (-pwLine3.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_92(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,92};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  tmp89 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */);
  tmp90 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac4 else pwLine1.vs.im.SeedNLSJac4 - pwLine1.vr.im.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_93(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,93};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  tmp91 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */);
  tmp92 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac4 else pwLine1.vs.re.SeedNLSJac4 - pwLine1.vr.re.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_94(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,94};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  tmp93 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */);
  tmp94 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine1.is.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine1.vr.re.SeedNLSJac4 - pwLine3.vr.re.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_95(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,95};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  tmp95 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */);
  tmp96 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->tmpVars[14] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[22] /* pwLine3.vr.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[14] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[13] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine1.vr.im.SeedNLSJac4 - pwLine3.vr.im.SeedNLSJac4 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_96(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,96};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  tmp97 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */);
  tmp98 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[13] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[23] /* pwLine3.vr.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[13] /* pwLine4.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[14] /* pwLine4.ir.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac4 else pwLine1.vr.im.SeedNLSJac4 - pwLine1.vs.im.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_97(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,97};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  tmp99 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */);
  tmp100 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->seedVars[14] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[14] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[13] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac4 else pwLine1.vr.re.SeedNLSJac4 - pwLine1.vs.re.SeedNLSJac4 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac4 + pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac4 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac4 + (-pwLine1.vr.re.SeedNLSJac4) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac4 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_98(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,98};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  tmp101 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */);
  tmp102 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[13] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[13] /* pwLine1.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[14] /* pwLine1.ir.im.SeedNLSJac4 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vr.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vr.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac4.dummyVarNLSJac4 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac4) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_99(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,99};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[37] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->localData[0]->realVars[36] /* constantLoad.p.ii variable */) - jacobian->tmpVars[7] /* constantLoad.Q.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (jacobian->seedVars[0] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac4.dummyVarNLSJac4 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 + pwLine1.vs.re.SeedNLSJac4 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_100(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,100};
  jacobian->resultVars[18] /* $res19.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (jacobian->seedVars[0] /* constantLoad.p.ii.SeedNLSJac4 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[36] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[37] /* constantLoad.p.ir variable */) - jacobian->tmpVars[8] /* constantLoad.P.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 else pwLine.vs.re.SeedNLSJac4 - pwLine1.vs.re.SeedNLSJac4 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine.vs.re.SeedNLSJac4 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine.vs.im.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_101(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,101};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  tmp103 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */);
  tmp104 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->tmpVars[15] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[12] /* pwLine.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[15] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[17] /* pwLine.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[12] /* pwLine.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[16] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[12] /* pwLine.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac4 else pwLine1.vs.re.SeedNLSJac4 - pwLine.vs.re.SeedNLSJac4 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_102(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,102};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  tmp105 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */);
  tmp106 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[12] /* pwLine.vs.re.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine1.vs.im.SeedNLSJac4 - pwLine.vs.im.SeedNLSJac4 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine1.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac4 + pwLine1.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_103(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,103};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  tmp107 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */);
  tmp108 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[17] /* pwLine.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[22] /* pwLine.ir.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac4 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
$res23.$pDERNLSJac4.dummyVarNLSJac4 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 else pwLine.vs.im.SeedNLSJac4 - pwLine1.vs.im.SeedNLSJac4 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 + (-pwLine.vs.re.SeedNLSJac4) * pwLine.Y.im - pwLine.vs.im.SeedNLSJac4 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 + pwLine.vs.im.SeedNLSJac4 * pwLine.Y.im - pwLine.vs.re.SeedNLSJac4 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_104(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,104};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  tmp109 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */);
  tmp110 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */);
  jacobian->resultVars[22] /* $res23.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->tmpVars[16] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */:jacobian->seedVars[17] /* pwLine.vs.im.SeedNLSJac4 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac4 SEED_VAR */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[16] /* pwLine.is.im.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[12] /* pwLine.vs.re.SeedNLSJac4 SEED_VAR */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[15] /* pwLine.is.re.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[17] /* pwLine.vs.im.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[12] /* pwLine.vs.re.SeedNLSJac4 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
$res24.$pDERNLSJac4.dummyVarNLSJac4 = $cse1 * gENCLS2.vq.$pDERNLSJac4.dummyVarNLSJac4 + $cse2 * gENCLS2.vd.$pDERNLSJac4.dummyVarNLSJac4 - pwLine.vs.re.SeedNLSJac4
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_105(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,105};
  jacobian->resultVars[23] /* $res24.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (jacobian->tmpVars[3] /* $cse1 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[17] /* gENCLS2.vq.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* $cse2 JACOBIAN_DIFF_VAR */) * (jacobian->tmpVars[18] /* gENCLS2.vd.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[12] /* pwLine.vs.re.SeedNLSJac4 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacNLSJac4_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_NLSJac4;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_NLSJac4;
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_59(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_60(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_61(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_62(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_63(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_64(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_65(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_66(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_67(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_68(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_69(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_70(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_71(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_72(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_73(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_74(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_75(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_76(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_77(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_78(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_79(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_80(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_81(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_82(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_83(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_84(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_85(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_86(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_87(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_88(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_89(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_90(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_91(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_92(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_93(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_94(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_95(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_96(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_97(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_98(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_99(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_100(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_101(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_102(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_103(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_104(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_105(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 196
type: SIMPLE_ASSIGN
constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac5 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac5) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,196};
  modelica_real tmp111;
  modelica_real tmp112;
  tmp111 = data->localData[0]->realVars[81] /* pwLine1.vs.re variable */;
  tmp112 = data->localData[0]->realVars[80] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */) + (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */),sqrt((tmp111 * tmp111) + (tmp112 * tmp112)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,197};
  modelica_boolean tmp113;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->realVars[38] /* constantLoad.v variable */, data->simulationInfo->realParameter[35] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (tmp113?(data->simulationInfo->realParameter[55] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[38] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[61] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[38] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,198};
  modelica_boolean tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_boolean tmp137;
  modelica_real tmp138;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_boolean tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_boolean tmp156;
  modelica_real tmp157;
  RELATIONHYSTERESIS(tmp114, data->localData[0]->realVars[38] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp156 = (modelica_boolean)tmp114;
  if(tmp156)
  {
    tmp115 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp116 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp115 < 0.0 && tmp116 != 0.0)
    {
      tmp118 = modf(tmp116, &tmp119);
      
      if(tmp118 > 0.5)
      {
        tmp118 -= 1.0;
        tmp119 += 1.0;
      }
      else if(tmp118 < -0.5)
      {
        tmp118 += 1.0;
        tmp119 -= 1.0;
      }
      
      if(fabs(tmp118) < 1e-10)
        tmp117 = pow(tmp115, tmp119);
      else
      {
        tmp121 = modf(1.0/tmp116, &tmp120);
        if(tmp121 > 0.5)
        {
          tmp121 -= 1.0;
          tmp120 += 1.0;
        }
        else if(tmp121 < -0.5)
        {
          tmp121 += 1.0;
          tmp120 -= 1.0;
        }
        if(fabs(tmp121) < 1e-10 && ((unsigned long)tmp120 & 1))
        {
          tmp117 = -pow(-tmp115, tmp118)*pow(tmp115, tmp119);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
        }
      }
    }
    else
    {
      tmp117 = pow(tmp115, tmp116);
    }
    if(isnan(tmp117) || isinf(tmp117))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
    }tmp122 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp123 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp122 < 0.0 && tmp123 != 0.0)
    {
      tmp125 = modf(tmp123, &tmp126);
      
      if(tmp125 > 0.5)
      {
        tmp125 -= 1.0;
        tmp126 += 1.0;
      }
      else if(tmp125 < -0.5)
      {
        tmp125 += 1.0;
        tmp126 -= 1.0;
      }
      
      if(fabs(tmp125) < 1e-10)
        tmp124 = pow(tmp122, tmp126);
      else
      {
        tmp128 = modf(1.0/tmp123, &tmp127);
        if(tmp128 > 0.5)
        {
          tmp128 -= 1.0;
          tmp127 += 1.0;
        }
        else if(tmp128 < -0.5)
        {
          tmp128 += 1.0;
          tmp127 -= 1.0;
        }
        if(fabs(tmp128) < 1e-10 && ((unsigned long)tmp127 & 1))
        {
          tmp124 = -pow(-tmp122, tmp125)*pow(tmp122, tmp126);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
        }
      }
    }
    else
    {
      tmp124 = pow(tmp122, tmp123);
    }
    if(isnan(tmp124) || isinf(tmp124))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
    }tmp137 = (modelica_boolean)(data->localData[0]->realVars[38] /* constantLoad.v variable */ == 0.0);
    if(tmp137)
    {
      tmp138 = 0.0;
    }
    else
    {
      tmp130 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
      tmp131 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp130 < 0.0 && tmp131 != 0.0)
      {
        tmp133 = modf(tmp131, &tmp134);
        
        if(tmp133 > 0.5)
        {
          tmp133 -= 1.0;
          tmp134 += 1.0;
        }
        else if(tmp133 < -0.5)
        {
          tmp133 += 1.0;
          tmp134 -= 1.0;
        }
        
        if(fabs(tmp133) < 1e-10)
          tmp132 = pow(tmp130, tmp134);
        else
        {
          tmp136 = modf(1.0/tmp131, &tmp135);
          if(tmp136 > 0.5)
          {
            tmp136 -= 1.0;
            tmp135 += 1.0;
          }
          else if(tmp136 < -0.5)
          {
            tmp136 += 1.0;
            tmp135 -= 1.0;
          }
          if(fabs(tmp136) < 1e-10 && ((unsigned long)tmp135 & 1))
          {
            tmp132 = -pow(-tmp130, tmp133)*pow(tmp130, tmp134);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp130, tmp131);
          }
        }
      }
      else
      {
        tmp132 = pow(tmp130, tmp131);
      }
      if(isnan(tmp132) || isinf(tmp132))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp130, tmp131);
      }
      tmp138 = (tmp132) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */));
    }
    tmp147 = (modelica_boolean)(data->localData[0]->realVars[38] /* constantLoad.v variable */ == 0.0);
    if(tmp147)
    {
      tmp148 = 0.0;
    }
    else
    {
      tmp140 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
      tmp141 = -1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */ - 1.0;
      if(tmp140 < 0.0 && tmp141 != 0.0)
      {
        tmp143 = modf(tmp141, &tmp144);
        
        if(tmp143 > 0.5)
        {
          tmp143 -= 1.0;
          tmp144 += 1.0;
        }
        else if(tmp143 < -0.5)
        {
          tmp143 += 1.0;
          tmp144 -= 1.0;
        }
        
        if(fabs(tmp143) < 1e-10)
          tmp142 = pow(tmp140, tmp144);
        else
        {
          tmp146 = modf(1.0/tmp141, &tmp145);
          if(tmp146 > 0.5)
          {
            tmp146 -= 1.0;
            tmp145 += 1.0;
          }
          else if(tmp146 < -0.5)
          {
            tmp146 += 1.0;
            tmp145 -= 1.0;
          }
          if(fabs(tmp146) < 1e-10 && ((unsigned long)tmp145 & 1))
          {
            tmp142 = -pow(-tmp140, tmp143)*pow(tmp140, tmp144);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp140, tmp141);
          }
        }
      }
      else
      {
        tmp142 = pow(tmp140, tmp141);
      }
      if(isnan(tmp142) || isinf(tmp142))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp140, tmp141);
      }
      tmp148 = (tmp142) * ((-1.0 + data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */));
    }
    tmp149 = data->localData[0]->realVars[38] /* constantLoad.v variable */;
    tmp150 = data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */;
    if(tmp149 < 0.0 && tmp150 != 0.0)
    {
      tmp152 = modf(tmp150, &tmp153);
      
      if(tmp152 > 0.5)
      {
        tmp152 -= 1.0;
        tmp153 += 1.0;
      }
      else if(tmp152 < -0.5)
      {
        tmp152 += 1.0;
        tmp153 -= 1.0;
      }
      
      if(fabs(tmp152) < 1e-10)
        tmp151 = pow(tmp149, tmp153);
      else
      {
        tmp155 = modf(1.0/tmp150, &tmp154);
        if(tmp155 > 0.5)
        {
          tmp155 -= 1.0;
          tmp154 += 1.0;
        }
        else if(tmp155 < -0.5)
        {
          tmp155 += 1.0;
          tmp154 -= 1.0;
        }
        if(fabs(tmp155) < 1e-10 && ((unsigned long)tmp154 & 1))
        {
          tmp151 = -pow(-tmp149, tmp152)*pow(tmp149, tmp153);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp149, tmp150);
        }
      }
    }
    else
    {
      tmp151 = pow(tmp149, tmp150);
    }
    if(isnan(tmp151) || isinf(tmp151))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp149, tmp150);
    }
    tmp157 = (data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[62] /* constantLoad.b2 PARAM */) * ((tmp117) * (((-exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp124)))) * ((data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */) * (tmp138))) + (tmp148) * (exp(((-data->simulationInfo->realParameter[56] /* constantLoad.a2 PARAM */)) * (tmp151)))));
  }
  else
  {
    tmp157 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = tmp157;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
constantLoad.Q.$pDERNLSJac5.dummyVarNLSJac5 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 + constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 + constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 + constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 + constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,199};
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  RELATIONHYSTERESIS(tmp158, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp159, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((tmp158 && tmp159)?(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[34] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[64] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[38] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[34] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
constantLoad.P.$pDERNLSJac5.dummyVarNLSJac5 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 + constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 + constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 + constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 + constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,200};
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  RELATIONHYSTERESIS(tmp160, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp161, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[65] /* constantLoad.d_t PARAM */, 4, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((tmp160 && tmp161)?(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[34] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[63] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[39] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[34] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[38] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
gENCLS.p.ir.$pDERNLSJac5.dummyVarNLSJac5 = ((-$cse5) * gENCLS.id.SeedNLSJac5 - $cse6 * gENCLS.iq.SeedNLSJac5) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  jacobian->tmpVars[5] /* gENCLS.p.ir.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[11] /* $cse5 variable */)) * (jacobian->seedVars[14] /* gENCLS.id.SeedNLSJac5 SEED_VAR */) - ((data->localData[0]->realVars[12] /* $cse6 variable */) * (jacobian->seedVars[15] /* gENCLS.iq.SeedNLSJac5 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
gENCLS.p.ii.$pDERNLSJac5.dummyVarNLSJac5 = ($cse6 * gENCLS.id.SeedNLSJac5 - $cse5 * gENCLS.iq.SeedNLSJac5) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  jacobian->tmpVars[6] /* gENCLS.p.ii.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[12] /* $cse6 variable */) * (jacobian->seedVars[14] /* gENCLS.id.SeedNLSJac5 SEED_VAR */) - ((data->localData[0]->realVars[11] /* $cse5 variable */) * (jacobian->seedVars[15] /* gENCLS.iq.SeedNLSJac5 SEED_VAR */))) * (data->simulationInfo->realParameter[76] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
gENCLS.vq.$pDERNLSJac5.dummyVarNLSJac5 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac5 - gENCLS.X_d * gENCLS.id.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  jacobian->tmpVars[7] /* gENCLS.vq.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[15] /* gENCLS.iq.SeedNLSJac5 SEED_VAR */) - ((data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[14] /* gENCLS.id.SeedNLSJac5 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
gENCLS.vd.$pDERNLSJac5.dummyVarNLSJac5 = gENCLS.X_d * gENCLS.iq.SeedNLSJac5 - gENCLS.R_a * gENCLS.id.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  jacobian->tmpVars[8] /* gENCLS.vd.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[85] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[15] /* gENCLS.iq.SeedNLSJac5 SEED_VAR */) - ((data->simulationInfo->realParameter[82] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[14] /* gENCLS.id.SeedNLSJac5 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
pwLine4.ir.re.$pDERNLSJac5.dummyVarNLSJac5 = (-pwLine1.ir.re.SeedNLSJac5) - gENCLS.p.ir.$pDERNLSJac5.dummyVarNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  jacobian->tmpVars[9] /* pwLine4.ir.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[13] /* pwLine1.ir.re.SeedNLSJac5 SEED_VAR */) - jacobian->tmpVars[5] /* gENCLS.p.ir.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
pwLine1.ir.im.$pDERNLSJac5.dummyVarNLSJac5 = (-pwLine4.ir.im.SeedNLSJac5) - gENCLS.p.ii.$pDERNLSJac5.dummyVarNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  jacobian->tmpVars[10] /* pwLine1.ir.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[12] /* pwLine4.ir.im.SeedNLSJac5 SEED_VAR */) - jacobian->tmpVars[6] /* gENCLS.p.ii.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
pwLine.is.re.$pDERNLSJac5.dummyVarNLSJac5 = ($cse10 * gENCLS2.iq.SeedNLSJac5 + $cse9 * gENCLS2.id.SeedNLSJac5) * gENCLS2.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
  jacobian->tmpVars[11] /* pwLine.is.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[10] /* $cse10 variable */) * (jacobian->seedVars[11] /* gENCLS2.iq.SeedNLSJac5 SEED_VAR */) + (data->localData[0]->realVars[14] /* $cse9 variable */) * (jacobian->seedVars[10] /* gENCLS2.id.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[102] /* gENCLS2.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
pwLine.is.im.$pDERNLSJac5.dummyVarNLSJac5 = ($cse9 * gENCLS2.iq.SeedNLSJac5 - $cse10 * gENCLS2.id.SeedNLSJac5) * gENCLS2.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  jacobian->tmpVars[12] /* pwLine.is.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[14] /* $cse9 variable */) * (jacobian->seedVars[11] /* gENCLS2.iq.SeedNLSJac5 SEED_VAR */) - ((data->localData[0]->realVars[10] /* $cse10 variable */) * (jacobian->seedVars[10] /* gENCLS2.id.SeedNLSJac5 SEED_VAR */))) * (data->simulationInfo->realParameter[102] /* gENCLS2.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
gENCLS2.vd.$pDERNLSJac5.dummyVarNLSJac5 = gENCLS2.X_d * gENCLS2.iq.SeedNLSJac5 - gENCLS2.R_a * gENCLS2.id.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,209};
  jacobian->tmpVars[13] /* gENCLS2.vd.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (jacobian->seedVars[11] /* gENCLS2.iq.SeedNLSJac5 SEED_VAR */) - ((data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */) * (jacobian->seedVars[10] /* gENCLS2.id.SeedNLSJac5 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
gENCLS2.vq.$pDERNLSJac5.dummyVarNLSJac5 = (-gENCLS2.R_a) * gENCLS2.iq.SeedNLSJac5 - gENCLS2.X_d * gENCLS2.id.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,210};
  jacobian->tmpVars[14] /* gENCLS2.vq.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[108] /* gENCLS2.R_a PARAM */)) * (jacobian->seedVars[11] /* gENCLS2.iq.SeedNLSJac5 SEED_VAR */) - ((data->simulationInfo->realParameter[111] /* gENCLS2.X_d PARAM */) * (jacobian->seedVars[10] /* gENCLS2.id.SeedNLSJac5 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 = $cse9 * gENCLS2.vd.$pDERNLSJac5.dummyVarNLSJac5 + $cse10 * gENCLS2.vq.$pDERNLSJac5.dummyVarNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_211(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,211};
  jacobian->tmpVars[15] /* pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[14] /* $cse9 variable */) * (jacobian->tmpVars[13] /* gENCLS2.vd.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[10] /* $cse10 variable */) * (jacobian->tmpVars[14] /* gENCLS2.vq.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 = $cse9 * gENCLS2.vq.$pDERNLSJac5.dummyVarNLSJac5 - $cse10 * gENCLS2.vd.$pDERNLSJac5.dummyVarNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_212(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,212};
  jacobian->tmpVars[16] /* pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[14] /* $cse9 variable */) * (jacobian->tmpVars[14] /* gENCLS2.vq.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[10] /* $cse10 variable */) * (jacobian->tmpVars[13] /* gENCLS2.vd.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
pwFault.p.ii.$pDERNLSJac5.dummyVarNLSJac5 = (-pwLine3.ir.im.SeedNLSJac5) - pwLine4.is.im.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_213(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,213};
  jacobian->tmpVars[17] /* pwFault.p.ii.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac5 SEED_VAR */) - jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
pwFault.p.ir.$pDERNLSJac5.dummyVarNLSJac5 = (-pwLine3.ir.re.SeedNLSJac5) - pwLine4.is.re.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_214(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,214};
  jacobian->tmpVars[18] /* pwFault.p.ir.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac5 SEED_VAR */) - jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
pwLine3.is.re.$pDERNLSJac5.dummyVarNLSJac5 = (-pwLine.ir.re.SeedNLSJac5) - pwLine1.is.re.SeedNLSJac5 - constantLoad.p.ir.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_215(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,215};
  jacobian->tmpVars[19] /* pwLine3.is.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac5 SEED_VAR */) - jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[4] /* constantLoad.p.ir.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
pwLine3.is.im.$pDERNLSJac5.dummyVarNLSJac5 = (-pwLine.ir.im.SeedNLSJac5) - pwLine1.is.im.SeedNLSJac5 - constantLoad.p.ii.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_216(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,216};
  jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac5 SEED_VAR */) - jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[5] /* constantLoad.p.ii.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac5 else pwLine3.vr.re.SeedNLSJac5 - pwLine1.vs.re.SeedNLSJac5 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac5 + pwLine3.vr.im.SeedNLSJac5 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac5 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac5 + (-pwLine3.vr.re.SeedNLSJac5) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac5 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_217(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,217};
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  RELATIONHYSTERESIS(tmp162, data->localData[0]->timeValue, data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp163, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp162 && tmp163)?jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
$res2.$pDERNLSJac5.dummyVarNLSJac5 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac5.dummyVarNLSJac5 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac5 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac5.dummyVarNLSJac5 - (pwFault.R * pwLine3.vr.im.SeedNLSJac5 - pwFault.X * pwLine3.vr.re.SeedNLSJac5) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac5.dummyVarNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_218(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,218};
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_boolean tmp172;
  modelica_real tmp173;
  modelica_boolean tmp174;
  modelica_real tmp175;
  modelica_boolean tmp176;
  modelica_real tmp177;
  RELATIONHYSTERESIS(tmp164, data->localData[0]->timeValue, data->simulationInfo->realParameter[130] /* pwFault.t1 PARAM */, 7, Less);
  tmp176 = (modelica_boolean)tmp164;
  if(tmp176)
  {
    tmp177 = jacobian->tmpVars[17] /* pwFault.p.ii.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp165, data->localData[0]->timeValue, data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */, 8, Less);
    tmp174 = (modelica_boolean)(tmp165 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp174)
    {
      tmp175 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp166, data->localData[0]->timeValue, data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */, 8, Less);
      tmp172 = (modelica_boolean)tmp166;
      if(tmp172)
      {
        tmp167 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp168 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp169 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp170 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp171 = (tmp169 * tmp169) + (tmp170 * tmp170);
        tmp173 = jacobian->tmpVars[17] /* pwFault.p.ii.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[128] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */) - ((data->simulationInfo->realParameter[129] /* pwFault.X PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */))) * ((tmp167 * tmp167) + (tmp168 * tmp168)),(tmp171 * tmp171),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp173 = jacobian->tmpVars[17] /* pwFault.p.ii.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
      }
      tmp175 = tmp173;
    }
    tmp177 = tmp175;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp177;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
$res3.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac5 else pwLine3.vr.re.SeedNLSJac5 - pwLine1.vr.re.SeedNLSJac5 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac5 + pwLine3.vr.im.SeedNLSJac5 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac5 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac5 + (-pwLine3.vr.re.SeedNLSJac5) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac5 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_219(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,219};
  modelica_boolean tmp178;
  modelica_boolean tmp179;
  RELATIONHYSTERESIS(tmp178, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp179, data->localData[0]->timeValue, data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp178 && tmp179)?jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
$res4.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac5 else pwLine3.vr.im.SeedNLSJac5 - pwLine1.vr.im.SeedNLSJac5 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac5 + (-pwLine3.vr.re.SeedNLSJac5) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac5 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac5 + pwLine3.vr.im.SeedNLSJac5 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac5 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_220(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,220};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  RELATIONHYSTERESIS(tmp180, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp181, data->localData[0]->timeValue, data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp180 && tmp181)?jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
$res5.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac5 else pwLine1.vr.re.SeedNLSJac5 - pwLine1.vs.re.SeedNLSJac5 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac5 + pwLine1.vr.im.SeedNLSJac5 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac5 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac5.dummyVarNLSJac5 + (-pwLine1.vr.re.SeedNLSJac5) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac5 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_221(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,221};
  modelica_boolean tmp182;
  modelica_boolean tmp183;
  RELATIONHYSTERESIS(tmp182, data->localData[0]->timeValue, data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp183, data->localData[0]->timeValue, data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp182 && tmp183)?jacobian->seedVars[13] /* pwLine1.ir.re.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[13] /* pwLine1.ir.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[10] /* pwLine1.ir.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
$res6.$pDERNLSJac5.dummyVarNLSJac5 = $cse6 * gENCLS.vq.$pDERNLSJac5.dummyVarNLSJac5 + $cse5 * gENCLS.vd.$pDERNLSJac5.dummyVarNLSJac5 - pwLine1.vr.re.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_222(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,222};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (data->localData[0]->realVars[12] /* $cse6 variable */) * (jacobian->tmpVars[7] /* gENCLS.vq.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[11] /* $cse5 variable */) * (jacobian->tmpVars[8] /* gENCLS.vd.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
$res7.$pDERNLSJac5.dummyVarNLSJac5 = $cse5 * gENCLS.vq.$pDERNLSJac5.dummyVarNLSJac5 + (-$cse6) * gENCLS.vd.$pDERNLSJac5.dummyVarNLSJac5 - pwLine1.vr.im.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_223(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,223};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (data->localData[0]->realVars[11] /* $cse5 variable */) * (jacobian->tmpVars[7] /* gENCLS.vq.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[12] /* $cse6 variable */)) * (jacobian->tmpVars[8] /* gENCLS.vd.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
$res8.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac5 else pwLine1.vr.im.SeedNLSJac5 - pwLine3.vr.im.SeedNLSJac5 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac5 + (-pwLine1.vr.re.SeedNLSJac5) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac5 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac5.dummyVarNLSJac5 + pwLine1.vr.im.SeedNLSJac5 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac5 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_224(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,224};
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  RELATIONHYSTERESIS(tmp184, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp185, data->localData[0]->timeValue, data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp184 && tmp185)?jacobian->seedVars[12] /* pwLine4.ir.im.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[12] /* pwLine4.ir.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[9] /* pwLine4.ir.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
$res9.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac5.dummyVarNLSJac5 else pwLine1.vr.re.SeedNLSJac5 - pwLine3.vr.re.SeedNLSJac5 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac5.dummyVarNLSJac5 + pwLine1.vr.im.SeedNLSJac5 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac5 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac5 + (-pwLine1.vr.re.SeedNLSJac5) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac5 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_225(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,225};
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  RELATIONHYSTERESIS(tmp186, data->localData[0]->timeValue, data->simulationInfo->realParameter[174] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp187, data->localData[0]->timeValue, data->simulationInfo->realParameter[175] /* pwLine4.t2 PARAM */, 10, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp186 && tmp187)?jacobian->tmpVars[9] /* pwLine4.ir.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */:jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[173] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[9] /* pwLine4.ir.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[172] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[12] /* pwLine4.ir.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[170] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[171] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
$res10.$pDERNLSJac5.dummyVarNLSJac5 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac5.dummyVarNLSJac5 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac5 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac5.dummyVarNLSJac5 - (pwFault.R * pwLine3.vr.re.SeedNLSJac5 + pwFault.X * pwLine3.vr.im.SeedNLSJac5) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac5.dummyVarNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_226(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,226};
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  modelica_boolean tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_boolean tmp196;
  modelica_real tmp197;
  modelica_boolean tmp198;
  modelica_real tmp199;
  modelica_boolean tmp200;
  modelica_real tmp201;
  RELATIONHYSTERESIS(tmp188, data->localData[0]->timeValue, data->simulationInfo->realParameter[130] /* pwFault.t1 PARAM */, 7, Less);
  tmp200 = (modelica_boolean)tmp188;
  if(tmp200)
  {
    tmp201 = jacobian->tmpVars[18] /* pwFault.p.ir.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp189, data->localData[0]->timeValue, data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */, 8, Less);
    tmp198 = (modelica_boolean)(tmp189 && data->simulationInfo->booleanParameter[63] /* pwFault.ground PARAM */);
    if(tmp198)
    {
      tmp199 = jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp190, data->localData[0]->timeValue, data->simulationInfo->realParameter[131] /* pwFault.t2 PARAM */, 8, Less);
      tmp196 = (modelica_boolean)tmp190;
      if(tmp196)
      {
        tmp191 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp192 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp193 = data->simulationInfo->realParameter[128] /* pwFault.R PARAM */;
        tmp194 = data->simulationInfo->realParameter[129] /* pwFault.X PARAM */;
        tmp195 = (tmp193 * tmp193) + (tmp194 * tmp194);
        tmp197 = jacobian->tmpVars[18] /* pwFault.p.ir.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[128] /* pwFault.R PARAM */) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */) + (data->simulationInfo->realParameter[129] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */)) * ((tmp191 * tmp191) + (tmp192 * tmp192)),(tmp195 * tmp195),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp197 = jacobian->tmpVars[18] /* pwFault.p.ir.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
      }
      tmp199 = tmp197;
    }
    tmp201 = tmp199;
  }
  jacobian->resultVars[9] /* $res10.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp201;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
$res11.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac5 else pwLine3.vr.im.SeedNLSJac5 - pwLine1.vs.im.SeedNLSJac5 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac5 + (-pwLine3.vr.re.SeedNLSJac5) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac5 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac5 + pwLine3.vr.im.SeedNLSJac5 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac5 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_227(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,227};
  modelica_boolean tmp202;
  modelica_boolean tmp203;
  RELATIONHYSTERESIS(tmp202, data->localData[0]->timeValue, data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp203, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp202 && tmp203)?jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine3.ir.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
$res12.$pDERNLSJac5.dummyVarNLSJac5 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac5 + pwLine1.vs.im.SeedNLSJac5 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac5) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac5.dummyVarNLSJac5 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_228(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,228};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (jacobian->seedVars[4] /* constantLoad.p.ir.SeedNLSJac5 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->localData[0]->realVars[37] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */)) * (data->localData[0]->realVars[36] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (jacobian->seedVars[5] /* constantLoad.p.ii.SeedNLSJac5 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
$res13.$pDERNLSJac5.dummyVarNLSJac5 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac5 + pwLine1.vs.im.SeedNLSJac5 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac5 + pwLine1.vs.re.SeedNLSJac5 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac5.dummyVarNLSJac5
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_229(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,229};
  jacobian->resultVars[12] /* $res13.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (data->localData[0]->realVars[80] /* pwLine1.vs.im variable */) * (jacobian->seedVars[5] /* constantLoad.p.ii.SeedNLSJac5 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->localData[0]->realVars[36] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[81] /* pwLine1.vs.re variable */) * (jacobian->seedVars[4] /* constantLoad.p.ir.SeedNLSJac5 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */) * (data->localData[0]->realVars[37] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
$res14.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac5 else pwLine1.vs.im.SeedNLSJac5 - pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac5 + (-pwLine1.vs.re.SeedNLSJac5) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac5 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac5 + pwLine1.vs.im.SeedNLSJac5 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac5 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_230(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,230};
  modelica_boolean tmp204;
  modelica_boolean tmp205;
  RELATIONHYSTERESIS(tmp204, data->localData[0]->timeValue, data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp205, data->localData[0]->timeValue, data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp204 && tmp205)?jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */ - jacobian->tmpVars[16] /* pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
$res15.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac5 else pwLine1.vs.re.SeedNLSJac5 - pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac5 + pwLine1.vs.im.SeedNLSJac5 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac5 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac5 + (-pwLine1.vs.re.SeedNLSJac5) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac5 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_231(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,231};
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  RELATIONHYSTERESIS(tmp206, data->localData[0]->timeValue, data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp207, data->localData[0]->timeValue, data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp206 && tmp207)?jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */ - jacobian->tmpVars[15] /* pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine.ir.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
$res16.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac5.dummyVarNLSJac5 else pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 - pwLine1.vs.im.SeedNLSJac5 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac5.dummyVarNLSJac5 + (-pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac5.dummyVarNLSJac5 + pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  modelica_boolean tmp208;
  modelica_boolean tmp209;
  RELATIONHYSTERESIS(tmp208, data->localData[0]->timeValue, data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp209, data->localData[0]->timeValue, data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp208 && tmp209)?jacobian->tmpVars[12] /* pwLine.is.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[16] /* pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[12] /* pwLine.is.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[15] /* pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[16] /* pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[11] /* pwLine.is.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[16] /* pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[15] /* pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
$res17.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac5.dummyVarNLSJac5 else pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 - pwLine1.vs.re.SeedNLSJac5 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac5.dummyVarNLSJac5 + pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac5.dummyVarNLSJac5 + (-pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_233(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,233};
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  RELATIONHYSTERESIS(tmp210, data->localData[0]->timeValue, data->simulationInfo->realParameter[141] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp211, data->localData[0]->timeValue, data->simulationInfo->realParameter[142] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp210 && tmp211)?jacobian->tmpVars[11] /* pwLine.is.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[15] /* pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[140] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[11] /* pwLine.is.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[16] /* pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[15] /* pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[139] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[12] /* pwLine.is.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[15] /* pwLine.vs.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[137] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[16] /* pwLine.vs.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[138] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
$res18.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.$pDERNLSJac5.dummyVarNLSJac5 else pwLine1.vs.re.SeedNLSJac5 - pwLine3.vr.re.SeedNLSJac5 - (pwLine3.Z.re * (pwLine3.is.re.$pDERNLSJac5.dummyVarNLSJac5 + pwLine1.vs.im.SeedNLSJac5 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac5 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.$pDERNLSJac5.dummyVarNLSJac5 + (-pwLine1.vs.re.SeedNLSJac5) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac5 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_234(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,234};
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  RELATIONHYSTERESIS(tmp212, data->localData[0]->timeValue, data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp213, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp212 && tmp213)?jacobian->tmpVars[19] /* pwLine3.is.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (jacobian->tmpVars[19] /* pwLine3.is.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
$res19.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.$pDERNLSJac5.dummyVarNLSJac5 else pwLine1.vs.im.SeedNLSJac5 - pwLine3.vr.im.SeedNLSJac5 - (pwLine3.Z.re * (pwLine3.is.im.$pDERNLSJac5.dummyVarNLSJac5 + (-pwLine1.vs.re.SeedNLSJac5) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac5 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.$pDERNLSJac5.dummyVarNLSJac5 + pwLine1.vs.im.SeedNLSJac5 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac5 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  modelica_boolean tmp214;
  modelica_boolean tmp215;
  RELATIONHYSTERESIS(tmp214, data->localData[0]->timeValue, data->simulationInfo->realParameter[163] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp215, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* pwLine3.t2 PARAM */, 6, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp214 && tmp215)?jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[162] /* pwLine3.Z.re PARAM */) * (jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[161] /* pwLine3.Z.im PARAM */) * (jacobian->tmpVars[19] /* pwLine3.is.re.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[159] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[160] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
$res20.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac5 else pwLine1.vs.im.SeedNLSJac5 - pwLine1.vr.im.SeedNLSJac5 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac5 + (-pwLine1.vs.re.SeedNLSJac5) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac5 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac5 + pwLine1.vs.im.SeedNLSJac5 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac5 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  RELATIONHYSTERESIS(tmp216, data->localData[0]->timeValue, data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp217, data->localData[0]->timeValue, data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp216 && tmp217)?jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
$res21.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac5 else pwLine1.vs.re.SeedNLSJac5 - pwLine1.vr.re.SeedNLSJac5 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac5 + pwLine1.vs.im.SeedNLSJac5 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac5 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac5 + (-pwLine1.vs.re.SeedNLSJac5) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac5 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  RELATIONHYSTERESIS(tmp218, data->localData[0]->timeValue, data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp219, data->localData[0]->timeValue, data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp218 && tmp219)?jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac5 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine1.is.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac5 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
$res22.$pDERNLSJac5.dummyVarNLSJac5 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac5.dummyVarNLSJac5 else pwLine1.vr.im.SeedNLSJac5 - pwLine1.vs.im.SeedNLSJac5 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac5.dummyVarNLSJac5 + (-pwLine1.vr.re.SeedNLSJac5) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac5 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac5 + pwLine1.vr.im.SeedNLSJac5 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac5 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  RELATIONHYSTERESIS(tmp220, data->localData[0]->timeValue, data->simulationInfo->realParameter[152] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp221, data->localData[0]->timeValue, data->simulationInfo->realParameter[153] /* pwLine1.t2 PARAM */, 12, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = ((tmp220 && tmp221)?jacobian->tmpVars[10] /* pwLine1.ir.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */:jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac5 SEED_VAR */ - ((data->simulationInfo->realParameter[151] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[10] /* pwLine1.ir.im.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */)) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[150] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[13] /* pwLine1.ir.re.SeedNLSJac5 SEED_VAR */ + (jacobian->seedVars[17] /* pwLine1.vr.im.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[148] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[16] /* pwLine1.vr.re.SeedNLSJac5 SEED_VAR */) * (data->simulationInfo->realParameter[149] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacNLSJac5_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_NLSJac5;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacNLSJac5_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_NLSJac5;
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_196(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_197(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_198(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_199(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_200(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_201(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_202(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_203(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_204(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_205(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_206(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_207(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_208(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_209(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_210(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_211(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_212(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_213(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_214(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_215(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_216(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_217(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_218(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_219(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_220(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_221(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_222(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_223(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_224(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_225(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_226(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_227(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_228(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_229(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_230(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_231(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_232(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_233(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_234(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_235(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_236(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_237(data, threadData, jacobian, parentJacobian);
  OpenIPSL_Examples_Machines_PSSE_GENCLS_eqFunction_238(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int OpenIPSL_Examples_Machines_PSSE_GENCLS_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENCLS_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+24] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,11,11,8,8};
  const int rowIndex[120] = {17,18,20,21,11,12,20,21,17,18,20,21,11,12,17,18,3,9,10,3,7,8,6,9,10,6,7,8,4,5,20,21,4,5,17,18,0,19,22,23,0,19,22,23,19,20,22,23,13,14,15,16,13,14,15,16,1,2,13,14,1,2,13,14,0,19,21,22,2,10,12,13,14,15,16,1,9,11,13,14,15,16,4,5,8,11,12,15,17,18,20,21,22,4,5,7,11,12,16,17,18,19,20,21,3,4,6,7,8,9,10,13,3,5,6,7,8,9,10,14};
  int i = 0;
  
  jacobian->sizeCols = 24;
  jacobian->sizeRows = 24;
  jacobian->sizeTmpVars = 47;
  jacobian->seedVars = (modelica_real*) calloc(24,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(24,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(47,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((24+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(120*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 120;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(24*sizeof(int));
  jacobian->sparsePattern->maxColors = 10;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (24+1)*sizeof(int));
  
  for(i=2;i<24+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 120*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[23] = 1;
  jacobian->sparsePattern->colorCols[22] = 2;
  jacobian->sparsePattern->colorCols[21] = 3;
  jacobian->sparsePattern->colorCols[20] = 4;
  jacobian->sparsePattern->colorCols[17] = 5;
  jacobian->sparsePattern->colorCols[19] = 5;
  jacobian->sparsePattern->colorCols[12] = 6;
  jacobian->sparsePattern->colorCols[18] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[16] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[15] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[5] = 9;
  jacobian->sparsePattern->colorCols[6] = 9;
  jacobian->sparsePattern->colorCols[9] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[14] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[4] = 10;
  jacobian->sparsePattern->colorCols[7] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  jacobian->sparsePattern->colorCols[13] = 10;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,4,3,3,3,3,4,4,4,4,6,6,7,7,11,11,8,8};
  const int rowIndex[116] = {17,18,19,20,13,14,17,18,17,18,19,20,13,14,17,18,11,12,17,18,11,12,17,18,0,9,10,2,3,9,1,2,3,0,1,10,13,14,15,16,13,14,15,16,4,7,8,21,4,7,8,21,4,5,6,7,8,21,4,5,6,7,8,21,2,4,5,7,8,20,21,3,4,6,7,8,19,21,0,4,11,12,13,14,16,17,18,19,20,10,11,12,13,14,15,17,18,19,20,21,0,1,2,3,8,9,10,17,0,1,2,3,7,9,10,18};
  int i = 0;
  
  jacobian->sizeCols = 22;
  jacobian->sizeRows = 22;
  jacobian->sizeTmpVars = 43;
  jacobian->seedVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(43,sizeof(modelica_real));
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
  jacobian->sparsePattern->colorCols[5] = 5;
  jacobian->sparsePattern->colorCols[17] = 5;
  jacobian->sparsePattern->colorCols[4] = 6;
  jacobian->sparsePattern->colorCols[16] = 6;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[15] = 7;
  jacobian->sparsePattern->colorCols[2] = 8;
  jacobian->sparsePattern->colorCols[11] = 8;
  jacobian->sparsePattern->colorCols[14] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[7] = 9;
  jacobian->sparsePattern->colorCols[9] = 9;
  jacobian->sparsePattern->colorCols[13] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[6] = 10;
  jacobian->sparsePattern->colorCols[8] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  jacobian->sparsePattern->colorCols[12] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENCLS_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,1,1,1,1,2};
  const int rowIndex[6] = {4,4,4,4,2,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(6*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 6;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern->maxColors = 5;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 6*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[4] = 2;
  jacobian->sparsePattern->colorCols[2] = 3;
  jacobian->sparsePattern->colorCols[1] = 4;
  jacobian->sparsePattern->colorCols[0] = 5;
  TRACE_POP
  return 0;
}


