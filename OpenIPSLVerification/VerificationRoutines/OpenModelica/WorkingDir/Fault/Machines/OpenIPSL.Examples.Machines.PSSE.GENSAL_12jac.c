/* Jacobians 5 */
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_model.h"
#include "OpenIPSL.Examples.Machines.PSSE.GENSAL_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianNLSJac8(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,3,3,4,3,3,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {3,18,19,20,16,17,18,19,16,17,18,19,14,15,16,17,14,15,18,19,1,2,8,1,6,7,3,16,17,20,0,6,7,0,2,8,4,9,10,11,4,9,10,11,4,5,9,21,4,5,9,21,4,7,9,10,11,20,21,3,4,5,6,9,10,11,12,13,16,17,12,13,16,17,3,8,10,12,14,15,16,17,18,19,20,2,3,11,13,14,15,16,17,18,19,20,0,1,2,6,7,8,9,18,0,1,2,4,6,7,8,19};
  int i = 0;
  
  jacobian->sizeCols = 22;
  jacobian->sizeRows = 22;
  jacobian->sizeTmpVars = 45;
  jacobian->seedVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(45,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(112*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 112;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(22*sizeof(int));
  jacobian->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 112*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[21] = 1;
  jacobian->sparsePattern.colorCols[20] = 2;
  jacobian->sparsePattern.colorCols[19] = 3;
  jacobian->sparsePattern.colorCols[18] = 4;
  jacobian->sparsePattern.colorCols[15] = 5;
  jacobian->sparsePattern.colorCols[17] = 5;
  jacobian->sparsePattern.colorCols[14] = 6;
  jacobian->sparsePattern.colorCols[16] = 6;
  jacobian->sparsePattern.colorCols[4] = 7;
  jacobian->sparsePattern.colorCols[7] = 7;
  jacobian->sparsePattern.colorCols[13] = 7;
  jacobian->sparsePattern.colorCols[2] = 8;
  jacobian->sparsePattern.colorCols[12] = 8;
  jacobian->sparsePattern.colorCols[1] = 9;
  jacobian->sparsePattern.colorCols[6] = 9;
  jacobian->sparsePattern.colorCols[9] = 9;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[0] = 10;
  jacobian->sparsePattern.colorCols[3] = 10;
  jacobian->sparsePattern.colorCols[5] = 10;
  jacobian->sparsePattern.colorCols[8] = 10;
  jacobian->sparsePattern.colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Machines_PSSE_GENSAL_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,4,4,4,4,4,4,2};
  const int rowIndex[26] = {2,3,4,6,2,3,4,6,2,3,4,6,2,3,4,6,2,3,4,6,2,3,4,6,5,6};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(26*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 26;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  jacobian->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 26*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[5] = 4;
  jacobian->sparsePattern.colorCols[6] = 5;
  jacobian->sparsePattern.colorCols[1] = 6;
  jacobian->sparsePattern.colorCols[0] = 7;
  TRACE_POP
  return 0;
}


/*
equation index: 164
type: SIMPLE_ASSIGN
constantLoad._v._$pDERNLSJac8._dummyVarNLSJac8 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac8 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac8) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_164(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,164};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[94] /* pwLine1.vs.re variable */;
  tmp7 = data->localData[0]->realVars[93] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) + (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */),sqrt((tmp6 * tmp6) + (tmp7 * tmp7)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
constantLoad._kI._$pDERNLSJac8._dummyVarNLSJac8 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_165(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,165};
  modelica_boolean tmp8;
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
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[43] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp50 = (modelica_boolean)tmp8;
  if(tmp50)
  {
    tmp9 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp10 = -1.0 + data->simulationInfo->realParameter[62];
    if(tmp9 < 0.0 && tmp10 != 0.0)
    {
      tmp12 = modf(tmp10, &tmp13);
      
      if(tmp12 > 0.5)
      {
        tmp12 -= 1.0;
        tmp13 += 1.0;
      }
      else if(tmp12 < -0.5)
      {
        tmp12 += 1.0;
        tmp13 -= 1.0;
      }
      
      if(fabs(tmp12) < 1e-10)
        tmp11 = pow(tmp9, tmp13);
      else
      {
        tmp15 = modf(1.0/tmp10, &tmp14);
        if(tmp15 > 0.5)
        {
          tmp15 -= 1.0;
          tmp14 += 1.0;
        }
        else if(tmp15 < -0.5)
        {
          tmp15 += 1.0;
          tmp14 -= 1.0;
        }
        if(fabs(tmp15) < 1e-10 && ((unsigned long)tmp14 & 1))
        {
          tmp11 = -pow(-tmp9, tmp12)*pow(tmp9, tmp13);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
        }
      }
    }
    else
    {
      tmp11 = pow(tmp9, tmp10);
    }
    if(isnan(tmp11) || isinf(tmp11))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
    }tmp16 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp17 = data->simulationInfo->realParameter[62];
    if(tmp16 < 0.0 && tmp17 != 0.0)
    {
      tmp19 = modf(tmp17, &tmp20);
      
      if(tmp19 > 0.5)
      {
        tmp19 -= 1.0;
        tmp20 += 1.0;
      }
      else if(tmp19 < -0.5)
      {
        tmp19 += 1.0;
        tmp20 -= 1.0;
      }
      
      if(fabs(tmp19) < 1e-10)
        tmp18 = pow(tmp16, tmp20);
      else
      {
        tmp22 = modf(1.0/tmp17, &tmp21);
        if(tmp22 > 0.5)
        {
          tmp22 -= 1.0;
          tmp21 += 1.0;
        }
        else if(tmp22 < -0.5)
        {
          tmp22 += 1.0;
          tmp21 -= 1.0;
        }
        if(fabs(tmp22) < 1e-10 && ((unsigned long)tmp21 & 1))
        {
          tmp18 = -pow(-tmp16, tmp19)*pow(tmp16, tmp20);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp16, tmp17);
        }
      }
    }
    else
    {
      tmp18 = pow(tmp16, tmp17);
    }
    if(isnan(tmp18) || isinf(tmp18))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp16, tmp17);
    }tmp31 = (modelica_boolean)(data->localData[0]->realVars[43] /* constantLoad.v variable */ == 0.0);
    if(tmp31)
    {
      tmp32 = 0.0;
    }
    else
    {
      tmp24 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
      tmp25 = data->simulationInfo->realParameter[62] - 1.0;
      if(tmp24 < 0.0 && tmp25 != 0.0)
      {
        tmp27 = modf(tmp25, &tmp28);
        
        if(tmp27 > 0.5)
        {
          tmp27 -= 1.0;
          tmp28 += 1.0;
        }
        else if(tmp27 < -0.5)
        {
          tmp27 += 1.0;
          tmp28 -= 1.0;
        }
        
        if(fabs(tmp27) < 1e-10)
          tmp26 = pow(tmp24, tmp28);
        else
        {
          tmp30 = modf(1.0/tmp25, &tmp29);
          if(tmp30 > 0.5)
          {
            tmp30 -= 1.0;
            tmp29 += 1.0;
          }
          else if(tmp30 < -0.5)
          {
            tmp30 += 1.0;
            tmp29 -= 1.0;
          }
          if(fabs(tmp30) < 1e-10 && ((unsigned long)tmp29 & 1))
          {
            tmp26 = -pow(-tmp24, tmp27)*pow(tmp24, tmp28);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
          }
        }
      }
      else
      {
        tmp26 = pow(tmp24, tmp25);
      }
      if(isnan(tmp26) || isinf(tmp26))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
      }
      tmp32 = (tmp26) * ((data->simulationInfo->realParameter[62]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */));
    }
    tmp41 = (modelica_boolean)(data->localData[0]->realVars[43] /* constantLoad.v variable */ == 0.0);
    if(tmp41)
    {
      tmp42 = 0.0;
    }
    else
    {
      tmp34 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
      tmp35 = -1.0 + data->simulationInfo->realParameter[62] - 1.0;
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
      tmp42 = (tmp36) * ((-1.0 + data->simulationInfo->realParameter[62]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */));
    }
    tmp43 = data->localData[0]->realVars[43] /* constantLoad.v variable */;
    tmp44 = data->simulationInfo->realParameter[62];
    if(tmp43 < 0.0 && tmp44 != 0.0)
    {
      tmp46 = modf(tmp44, &tmp47);
      
      if(tmp46 > 0.5)
      {
        tmp46 -= 1.0;
        tmp47 += 1.0;
      }
      else if(tmp46 < -0.5)
      {
        tmp46 += 1.0;
        tmp47 -= 1.0;
      }
      
      if(fabs(tmp46) < 1e-10)
        tmp45 = pow(tmp43, tmp47);
      else
      {
        tmp49 = modf(1.0/tmp44, &tmp48);
        if(tmp49 > 0.5)
        {
          tmp49 -= 1.0;
          tmp48 += 1.0;
        }
        else if(tmp49 < -0.5)
        {
          tmp49 += 1.0;
          tmp48 -= 1.0;
        }
        if(fabs(tmp49) < 1e-10 && ((unsigned long)tmp48 & 1))
        {
          tmp45 = -pow(-tmp43, tmp46)*pow(tmp43, tmp47);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp43, tmp44);
        }
      }
    }
    else
    {
      tmp45 = pow(tmp43, tmp44);
    }
    if(isnan(tmp45) || isinf(tmp45))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp43, tmp44);
    }
    tmp51 = (data->simulationInfo->realParameter[56]) * ((data->simulationInfo->realParameter[62]) * ((tmp11) * (((-exp(((-data->simulationInfo->realParameter[56])) * (tmp18)))) * ((data->simulationInfo->realParameter[56]) * (tmp32))) + (tmp42) * (exp(((-data->simulationInfo->realParameter[56])) * (tmp45)))));
  }
  else
  {
    tmp51 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = tmp51;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
constantLoad._kP._$pDERNLSJac8._dummyVarNLSJac8 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_166(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,166};
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->realVars[43] /* constantLoad.v variable */, data->simulationInfo->realParameter[35], 7, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (tmp52?(data->simulationInfo->realParameter[55]) * (((-sin((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75])))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75]))) + (data->simulationInfo->realParameter[61]) * ((cos((data->localData[0]->realVars[43] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[75]))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[75]))):0.0);
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
constantLoad._Q._$pDERNLSJac8._dummyVarNLSJac8 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_167(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,167};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[71], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65], 6, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((tmp53 && tmp54)?(data->simulationInfo->realParameter[38]) * ((data->localData[0]->realVars[39] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42]) * (((2.0) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40] + data->simulationInfo->realParameter[64]):(data->simulationInfo->realParameter[38]) * ((data->localData[0]->realVars[39] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[42]) * (((2.0) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[40]));
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
constantLoad._P._$pDERNLSJac8._dummyVarNLSJac8 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 + constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_168(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,168};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[71], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[71] + data->simulationInfo->realParameter[65], 6, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((tmp55 && tmp56)?(data->simulationInfo->realParameter[39]) * ((data->localData[0]->realVars[39] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * (((2.0) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[63]):(data->simulationInfo->realParameter[39]) * ((data->localData[0]->realVars[39] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * (((2.0) * (data->localData[0]->realVars[43] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41]));
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
gENSAL._PSId._$pDERNLSJac8._dummyVarNLSJac8 = (-gENSAL.Xppd) * gENSAL.id.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_169(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,169};
  jacobian->tmpVars[5] /* gENSAL.PSId.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[147])) * (jacobian->seedVars[17] /* gENSAL.id.SeedNLSJac8 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
pwLine._is._re._$pDERNLSJac8._dummyVarNLSJac8 = ($cse7 * gENSAL.iq.SeedNLSJac8 + $cse6 * gENSAL.id.SeedNLSJac8) * gENSAL.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_170(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,170};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[19] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENSAL.iq.SeedNLSJac8 SEED_VAR */) + (data->localData[0]->realVars[18] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENSAL.id.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[102]);
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
pwLine._is._im._$pDERNLSJac8._dummyVarNLSJac8 = ($cse6 * gENSAL.iq.SeedNLSJac8 - $cse7 * gENSAL.id.SeedNLSJac8) * gENSAL.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_171(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,171};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[18] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENSAL.iq.SeedNLSJac8 SEED_VAR */) - ((data->localData[0]->realVars[19] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENSAL.id.SeedNLSJac8 SEED_VAR */))) * (data->simulationInfo->realParameter[102]);
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
gENSAL._uq._$pDERNLSJac8._dummyVarNLSJac8 = gENSAL.PSId.$pDERNLSJac8.dummyVarNLSJac8 - gENSAL.R_a * gENSAL.iq.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_172(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,172};
  jacobian->tmpVars[8] /* gENSAL.uq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENSAL.PSId.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[132]) * (jacobian->seedVars[16] /* gENSAL.iq.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
gENSAL._PSIq._$pDERNLSJac8._dummyVarNLSJac8 = (-gENSAL.Xppq) * gENSAL.iq.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_173(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,173};
  jacobian->tmpVars[9] /* gENSAL.PSIq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[148])) * (jacobian->seedVars[16] /* gENSAL.iq.SeedNLSJac8 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
gENSAL._ud._$pDERNLSJac8._dummyVarNLSJac8 = (-gENSAL.PSIq.$pDERNLSJac8.dummyVarNLSJac8) - gENSAL.R_a * gENSAL.id.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_174(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,174};
  jacobian->tmpVars[10] /* gENSAL.ud.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENSAL.PSIq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[132]) * (jacobian->seedVars[17] /* gENSAL.id.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
pwLine._vs._im._$pDERNLSJac8._dummyVarNLSJac8 = $cse6 * gENSAL.uq.$pDERNLSJac8.dummyVarNLSJac8 - $cse7 * gENSAL.ud.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_175(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,175};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[18] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENSAL.uq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[19] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENSAL.ud.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
pwLine._vs._re._$pDERNLSJac8._dummyVarNLSJac8 = $cse6 * gENSAL.ud.$pDERNLSJac8.dummyVarNLSJac8 + $cse7 * gENSAL.uq.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_176(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,176};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[18] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENSAL.ud.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[19] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENSAL.uq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
gENCLS._p._ir._$pDERNLSJac8._dummyVarNLSJac8 = ((-$cse1) * gENCLS.id.SeedNLSJac8 - $cse2 * gENCLS.iq.SeedNLSJac8) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_177(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,177};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[14] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac8 SEED_VAR */) - ((data->localData[0]->realVars[15] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac8 SEED_VAR */))) * (data->simulationInfo->realParameter[76]);
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
gENCLS._p._ii._$pDERNLSJac8._dummyVarNLSJac8 = ($cse2 * gENCLS.id.SeedNLSJac8 - $cse1 * gENCLS.iq.SeedNLSJac8) * gENCLS.CoB
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_178(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,178};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[15] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac8 SEED_VAR */) - ((data->localData[0]->realVars[14] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac8 SEED_VAR */))) * (data->simulationInfo->realParameter[76]);
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
gENCLS._vq._$pDERNLSJac8._dummyVarNLSJac8 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac8 - gENCLS.X_d * gENCLS.id.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_179(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,179};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[82])) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac8 SEED_VAR */) - ((data->simulationInfo->realParameter[85]) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
gENCLS._vd._$pDERNLSJac8._dummyVarNLSJac8 = gENCLS.X_d * gENCLS.iq.SeedNLSJac8 - gENCLS.R_a * gENCLS.id.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_180(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,180};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[85]) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac8 SEED_VAR */) - ((data->simulationInfo->realParameter[82]) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
pwLine4._ir._re._$pDERNLSJac8._dummyVarNLSJac8 = (-pwLine1.ir.re.SeedNLSJac8) - gENCLS.p.ir.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_181(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,181};
  jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac8 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
pwLine4._ir._im._$pDERNLSJac8._dummyVarNLSJac8 = (-pwLine1.ir.im.SeedNLSJac8) - gENCLS.p.ii.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_182(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,182};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac8 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
pwFault._p._ir._$pDERNLSJac8._dummyVarNLSJac8 = (-pwLine3.ir.re.SeedNLSJac8) - pwLine4.is.re.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_183(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,183};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine3.ir.re.SeedNLSJac8 SEED_VAR */) - jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
pwFault._p._ii._$pDERNLSJac8._dummyVarNLSJac8 = (-pwLine3.ir.im.SeedNLSJac8) - pwLine4.is.im.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_184(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,184};
  jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac8 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
pwLine._ir._re._$pDERNLSJac8._dummyVarNLSJac8 = (-pwLine1.is.re.SeedNLSJac8) - pwLine3.is.re.SeedNLSJac8 - constantLoad.p.ir.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_185(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,185};
  jacobian->tmpVars[21] /* pwLine.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine1.is.re.SeedNLSJac8 SEED_VAR */) - jacobian->seedVars[2] /* pwLine3.is.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[3] /* constantLoad.p.ir.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
pwLine3._is._im._$pDERNLSJac8._dummyVarNLSJac8 = (-pwLine.ir.im.SeedNLSJac8) - pwLine1.is.im.SeedNLSJac8 - constantLoad.p.ii.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_186(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,186};
  jacobian->tmpVars[22] /* pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac8 SEED_VAR */) - jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[4] /* constantLoad.p.ii.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac8._dummyVarNLSJac8 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac8 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 - (pwFault.R * pwLine3.vr.re.SeedNLSJac8 + pwFault.X * pwLine3.vr.im.SeedNLSJac8) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_187(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,187};
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
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[175], 10, Less);
  tmp69 = (modelica_boolean)tmp57;
  if(tmp69)
  {
    tmp70 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[176], 11, Less);
    tmp67 = (modelica_boolean)(tmp58 && data->simulationInfo->booleanParameter[63]);
    if(tmp67)
    {
      tmp68 = jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[176], 11, Less);
      tmp65 = (modelica_boolean)tmp59;
      if(tmp65)
      {
        tmp60 = data->simulationInfo->realParameter[173];
        tmp61 = data->simulationInfo->realParameter[174];
        tmp62 = data->simulationInfo->realParameter[173];
        tmp63 = data->simulationInfo->realParameter[174];
        tmp64 = (tmp62 * tmp62) + (tmp63 * tmp63);
        tmp66 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[173]) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) + (data->simulationInfo->realParameter[174]) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */)) * ((tmp60 * tmp60) + (tmp61 * tmp61)),(tmp64 * tmp64),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp66 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
      }
      tmp68 = tmp66;
    }
    tmp70 = tmp68;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp70;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac8._dummyVarNLSJac8 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac8 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 - (pwFault.R * pwLine3.vr.im.SeedNLSJac8 - pwFault.X * pwLine3.vr.re.SeedNLSJac8) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_188(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,188};
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
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[175], 10, Less);
  tmp83 = (modelica_boolean)tmp71;
  if(tmp83)
  {
    tmp84 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[176], 11, Less);
    tmp81 = (modelica_boolean)(tmp72 && data->simulationInfo->booleanParameter[63]);
    if(tmp81)
    {
      tmp82 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[176], 11, Less);
      tmp79 = (modelica_boolean)tmp73;
      if(tmp79)
      {
        tmp74 = data->simulationInfo->realParameter[174];
        tmp75 = data->simulationInfo->realParameter[173];
        tmp76 = data->simulationInfo->realParameter[174];
        tmp77 = data->simulationInfo->realParameter[173];
        tmp78 = (tmp76 * tmp76) + (tmp77 * tmp77);
        tmp80 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[173]) * (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) - ((data->simulationInfo->realParameter[174]) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */))) * ((tmp74 * tmp74) + (tmp75 * tmp75)),(tmp78 * tmp78),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp80 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
      }
      tmp82 = tmp80;
    }
    tmp84 = tmp82;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp84;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac8 else pwLine3.vr.im.SeedNLSJac8 - pwLine1.vs.im.SeedNLSJac8 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac8 + (-pwLine3.vr.re.SeedNLSJac8) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac8 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac8 + pwLine3.vr.im.SeedNLSJac8 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac8 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_189(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,189};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[208], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[209], 9, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[207]) * (jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[204]) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[205]))) + (data->simulationInfo->realParameter[206]) * (jacobian->seedVars[9] /* pwLine3.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[204]) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[205])))));
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac8 else pwLine1.vs.re.SeedNLSJac8 - pwLine1.vr.re.SeedNLSJac8 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_190(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,190};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[197], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[198], 3, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[7] /* pwLine1.is.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[196]) * (jacobian->seedVars[7] /* pwLine1.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[193]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[194]))) - ((data->simulationInfo->realParameter[195]) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[193]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[194]))))));
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 else pwLine1.vr.im.SeedNLSJac8 - pwLine3.vr.im.SeedNLSJac8 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine1.vr.re.SeedNLSJac8) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac8 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine1.vr.im.SeedNLSJac8 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac8 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_191(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,191};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[219], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[220], 13, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[218]) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[215]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[216]))) + (data->simulationInfo->realParameter[217]) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[215]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[216])))));
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac8._dummyVarNLSJac8 = $cse2 * gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 + $cse1 * gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vr.re.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_192(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,192};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = (data->localData[0]->realVars[15] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[14] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac8 else pwLine3.vr.re.SeedNLSJac8 - pwLine1.vr.re.SeedNLSJac8 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac8 + pwLine3.vr.im.SeedNLSJac8 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac8 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac8 + (-pwLine3.vr.re.SeedNLSJac8) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac8 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_193(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,193};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[219], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[220], 13, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[218]) * (jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[215]) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[216]))) - ((data->simulationInfo->realParameter[217]) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[215]) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[216]))))));
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac8 else pwLine3.vr.im.SeedNLSJac8 - pwLine1.vr.im.SeedNLSJac8 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac8 + (-pwLine3.vr.re.SeedNLSJac8) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac8 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac8 + pwLine3.vr.im.SeedNLSJac8 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac8 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_194(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,194};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[219], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[220], 13, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[218]) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[215]) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[216]))) + (data->simulationInfo->realParameter[217]) * (jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[215]) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[216])))));
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac8 else pwLine3.vr.re.SeedNLSJac8 - pwLine1.vs.re.SeedNLSJac8 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac8 + pwLine3.vr.im.SeedNLSJac8 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac8 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac8 + (-pwLine3.vr.re.SeedNLSJac8) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac8 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_195(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,195};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[208], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[209], 9, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->seedVars[9] /* pwLine3.ir.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[207]) * (jacobian->seedVars[9] /* pwLine3.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[204]) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[205]))) - ((data->simulationInfo->realParameter[206]) * (jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[204]) - ((jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[205]))))));
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 else pwLine1.vr.re.SeedNLSJac8 - pwLine3.vr.re.SeedNLSJac8 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine1.vr.im.SeedNLSJac8 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac8 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine1.vr.re.SeedNLSJac8) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac8 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,196};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[219], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[220], 13, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[218]) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[215]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[216]))) - ((data->simulationInfo->realParameter[217]) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[215]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[216]))))));
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac8 else pwLine1.vr.re.SeedNLSJac8 - pwLine1.vs.re.SeedNLSJac8 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac8 + pwLine1.vr.im.SeedNLSJac8 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac8 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac8 + (-pwLine1.vr.re.SeedNLSJac8) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac8 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,197};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[197], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[198], 3, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[196]) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[193]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[194]))) - ((data->simulationInfo->realParameter[195]) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[193]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[194]))))));
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac8 else pwLine1.vr.im.SeedNLSJac8 - pwLine1.vs.im.SeedNLSJac8 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac8 + (-pwLine1.vr.re.SeedNLSJac8) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac8 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac8 + pwLine1.vr.im.SeedNLSJac8 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac8 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,198};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[197], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[198], 3, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[196]) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[193]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[194]))) + (data->simulationInfo->realParameter[195]) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[193]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[194])))));
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 else pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vs.re.SeedNLSJac8 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,199};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[186], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[187], 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[185]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[182]) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[183]))) - ((data->simulationInfo->realParameter[184]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[182]) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[183]))))));
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 else pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vs.im.SeedNLSJac8 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,200};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[186], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[187], 1, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[185]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[182]) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[183]))) + (data->simulationInfo->realParameter[184]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[182]) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[183])))));
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac8._dummyVarNLSJac8 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac8) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  jacobian->resultVars[14] /* $res15.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (jacobian->seedVars[3] /* constantLoad.p.ir.SeedNLSJac8 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (jacobian->seedVars[4] /* constantLoad.p.ii.SeedNLSJac8 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac8._dummyVarNLSJac8 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac8 + pwLine1.vs.re.SeedNLSJac8 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac8.dummyVarNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  jacobian->resultVars[15] /* $res16.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = (data->localData[0]->realVars[93] /* pwLine1.vs.im variable */) * (jacobian->seedVars[4] /* constantLoad.p.ii.SeedNLSJac8 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->localData[0]->realVars[41] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[94] /* pwLine1.vs.re variable */) * (jacobian->seedVars[3] /* constantLoad.p.ir.SeedNLSJac8 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->localData[0]->realVars[42] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac8 else pwLine1.vs.im.SeedNLSJac8 - pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[186], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[187], 1, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[185]) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[182]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[183]))) + (data->simulationInfo->realParameter[184]) * (jacobian->tmpVars[21] /* pwLine.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[182]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[183])))));
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac8.dummyVarNLSJac8 else pwLine1.vs.re.SeedNLSJac8 - pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac8.dummyVarNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[186], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[187], 1, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->tmpVars[21] /* pwLine.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[185]) * (jacobian->tmpVars[21] /* pwLine.ir.re.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[182]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[183]))) - ((data->simulationInfo->realParameter[184]) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[182]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[183]))))));
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac8 else pwLine1.vs.re.SeedNLSJac8 - pwLine3.vr.re.SeedNLSJac8 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[208], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[209], 9, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp111 && tmp112)?jacobian->seedVars[2] /* pwLine3.is.re.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[207]) * (jacobian->seedVars[2] /* pwLine3.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[204]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[205]))) - ((data->simulationInfo->realParameter[206]) * (jacobian->tmpVars[22] /* pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[204]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[205]))))));
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 else pwLine1.vs.im.SeedNLSJac8 - pwLine3.vr.im.SeedNLSJac8 - (pwLine3.Z.re * (pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[208], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[209], 9, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp113 && tmp114)?jacobian->tmpVars[22] /* pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[207]) * (jacobian->tmpVars[22] /* pwLine3.is.im.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[204]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[205]))) + (data->simulationInfo->realParameter[206]) * (jacobian->seedVars[2] /* pwLine3.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[204]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[205])))));
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac8._dummyVarNLSJac8 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac8 else pwLine1.vs.im.SeedNLSJac8 - pwLine1.vr.im.SeedNLSJac8 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac8 + (-pwLine1.vs.re.SeedNLSJac8) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac8 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac8 + pwLine1.vs.im.SeedNLSJac8 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac8 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[197], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp116, data->localData[0]->timeValue, data->simulationInfo->realParameter[198], 3, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = ((tmp115 && tmp116)?jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac8 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */ - ((data->simulationInfo->realParameter[196]) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac8 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */)) * (data->simulationInfo->realParameter[193]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[194]))) + (data->simulationInfo->realParameter[195]) * (jacobian->seedVars[7] /* pwLine1.is.re.SeedNLSJac8 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[193]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac8 SEED_VAR */) * (data->simulationInfo->realParameter[194])))));
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac8._dummyVarNLSJac8 = $cse1 * gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 + (-$cse2) * gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 - pwLine1.vr.im.SeedNLSJac8
*/
void OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  jacobian->resultVars[21] /* $res22.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = (data->localData[0]->realVars[14] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[15] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac8 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacNLSJac8_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENSAL_INDEX_JAC_NLSJac8;
  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_164(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_165(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_166(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_167(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_168(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_169(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_170(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_171(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_172(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_173(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_174(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_175(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_176(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_177(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_178(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_179(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_180(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_181(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_182(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_183(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_184(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_185(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_186(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_187(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_188(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_189(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_190(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_191(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_192(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_193(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_194(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_195(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_196(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_197(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_198(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_199(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_200(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_201(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_202(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_203(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_204(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_205(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_206(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_207(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Machines_PSSE_GENSAL_eqFunction_208(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Machines_PSSE_GENSAL_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Machines_PSSE_GENSAL_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


