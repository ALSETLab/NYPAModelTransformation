/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.IEEET2_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianNLSJac78(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
  jacobian->sparsePattern.colorCols[19] = 1;
  jacobian->sparsePattern.colorCols[18] = 2;
  jacobian->sparsePattern.colorCols[15] = 3;
  jacobian->sparsePattern.colorCols[14] = 4;
  jacobian->sparsePattern.colorCols[9] = 5;
  jacobian->sparsePattern.colorCols[21] = 5;
  jacobian->sparsePattern.colorCols[8] = 6;
  jacobian->sparsePattern.colorCols[20] = 6;
  jacobian->sparsePattern.colorCols[7] = 7;
  jacobian->sparsePattern.colorCols[13] = 7;
  jacobian->sparsePattern.colorCols[17] = 7;
  jacobian->sparsePattern.colorCols[6] = 8;
  jacobian->sparsePattern.colorCols[12] = 8;
  jacobian->sparsePattern.colorCols[1] = 9;
  jacobian->sparsePattern.colorCols[2] = 9;
  jacobian->sparsePattern.colorCols[5] = 9;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[16] = 9;
  jacobian->sparsePattern.colorCols[0] = 10;
  jacobian->sparsePattern.colorCols[3] = 10;
  jacobian->sparsePattern.colorCols[4] = 10;
  jacobian->sparsePattern.colorCols[10] = 10;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_initialAnalyticJacobianNLSJac79(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 1;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
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
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(91*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 91;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern.maxColors = 12;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 91*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[8] = 1;
  jacobian->sparsePattern.colorCols[10] = 2;
  jacobian->sparsePattern.colorCols[12] = 3;
  jacobian->sparsePattern.colorCols[9] = 4;
  jacobian->sparsePattern.colorCols[5] = 5;
  jacobian->sparsePattern.colorCols[4] = 6;
  jacobian->sparsePattern.colorCols[3] = 7;
  jacobian->sparsePattern.colorCols[2] = 8;
  jacobian->sparsePattern.colorCols[6] = 9;
  jacobian->sparsePattern.colorCols[7] = 10;
  jacobian->sparsePattern.colorCols[11] = 10;
  jacobian->sparsePattern.colorCols[1] = 11;
  jacobian->sparsePattern.colorCols[0] = 12;
  TRACE_POP
  return 0;
}


/*
equation index: 222
type: SIMPLE_ASSIGN
constantLoad._v._$pDERNLSJac78._dummyVarNLSJac78 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac78 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac78) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_222(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,222};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[123] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[122] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */) + (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
constantLoad._kI._$pDERNLSJac78._dummyVarNLSJac78 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_223(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,223};
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
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp44 = (modelica_boolean)tmp2;
  if(tmp44)
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp4 = -1.0 + data->simulationInfo->realParameter[63];
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
    tmp11 = data->simulationInfo->realParameter[63];
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
      tmp19 = data->simulationInfo->realParameter[63] - 1.0;
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
      tmp26 = (tmp20) * ((data->simulationInfo->realParameter[63]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */));
    }
    tmp35 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp35)
    {
      tmp36 = 0.0;
    }
    else
    {
      tmp28 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
      tmp29 = -1.0 + data->simulationInfo->realParameter[63] - 1.0;
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
      tmp36 = (tmp30) * ((-1.0 + data->simulationInfo->realParameter[63]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */));
    }
    tmp37 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp38 = data->simulationInfo->realParameter[63];
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
    tmp45 = (data->simulationInfo->realParameter[57]) * ((data->simulationInfo->realParameter[63]) * ((tmp5) * (((-exp(((-data->simulationInfo->realParameter[57])) * (tmp12)))) * ((data->simulationInfo->realParameter[57]) * (tmp26))) + (tmp36) * (exp(((-data->simulationInfo->realParameter[57])) * (tmp39)))));
  }
  else
  {
    tmp45 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = tmp45;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
constantLoad._kP._$pDERNLSJac78._dummyVarNLSJac78 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_224(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,224};
  modelica_boolean tmp46;
  RELATIONHYSTERESIS(tmp46, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], 6, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (tmp46?(data->simulationInfo->realParameter[56]) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76])))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[76]))) + (data->simulationInfo->realParameter[62]) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[76]))):0.0);
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
constantLoad._Q._$pDERNLSJac78._dummyVarNLSJac78 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 + constantLoad.kI.$pDERNLSJac78.dummyVarNLSJac78 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 + constantLoad.kP.$pDERNLSJac78.dummyVarNLSJac78 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 + constantLoad.kI.$pDERNLSJac78.dummyVarNLSJac78 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 + constantLoad.kP.$pDERNLSJac78.dummyVarNLSJac78 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_225(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,225};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 5, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[39]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[65]):(data->simulationInfo->realParameter[39]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41]));
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
constantLoad._P._$pDERNLSJac78._dummyVarNLSJac78 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 + constantLoad.kI.$pDERNLSJac78.dummyVarNLSJac78 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 + constantLoad.kP.$pDERNLSJac78.dummyVarNLSJac78 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 + constantLoad.kI.$pDERNLSJac78.dummyVarNLSJac78 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 + constantLoad.kP.$pDERNLSJac78.dummyVarNLSJac78 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_226(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,226};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 5, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[64]):(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42]));
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
gENROE._PSIq._$pDERNLSJac78._dummyVarNLSJac78 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_227(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,227};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[155])) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac78 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
pwLine._is._im._$pDERNLSJac78._dummyVarNLSJac78 = ($cse6 * gENROE.iq.SeedNLSJac78 - $cse7 * gENROE.id.SeedNLSJac78) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_228(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,228};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac78 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac78 SEED_VAR */))) * (data->simulationInfo->realParameter[103]);
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
pwLine._is._re._$pDERNLSJac78._dummyVarNLSJac78 = ($cse7 * gENROE.iq.SeedNLSJac78 + $cse6 * gENROE.id.SeedNLSJac78) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_229(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,229};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac78 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[103]);
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
gENROE._ud._$pDERNLSJac78._dummyVarNLSJac78 = (-gENROE.PSIq.$pDERNLSJac78.dummyVarNLSJac78) - gENROE.R_a * gENROE.id.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_230(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,230};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[137]) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac78 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
gENROE._PSId._$pDERNLSJac78._dummyVarNLSJac78 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_231(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,231};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[154])) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac78 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
gENROE._uq._$pDERNLSJac78._dummyVarNLSJac78 = gENROE.PSId.$pDERNLSJac78.dummyVarNLSJac78 - gENROE.R_a * gENROE.iq.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[137]) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac78 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
pwLine._vs._im._$pDERNLSJac78._dummyVarNLSJac78 = $cse6 * gENROE.uq.$pDERNLSJac78.dummyVarNLSJac78 - $cse7 * gENROE.ud.$pDERNLSJac78.dummyVarNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_233(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,233};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
pwLine._vs._re._$pDERNLSJac78._dummyVarNLSJac78 = $cse6 * gENROE.ud.$pDERNLSJac78.dummyVarNLSJac78 + $cse7 * gENROE.uq.$pDERNLSJac78.dummyVarNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_234(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,234};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
gENCLS._p._ii._$pDERNLSJac78._dummyVarNLSJac78 = ($cse2 * gENCLS.id.SeedNLSJac78 - $cse1 * gENCLS.iq.SeedNLSJac78) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac78 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac78 SEED_VAR */))) * (data->simulationInfo->realParameter[77]);
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
gENCLS._p._ir._$pDERNLSJac78._dummyVarNLSJac78 = ((-$cse1) * gENCLS.id.SeedNLSJac78 - $cse2 * gENCLS.iq.SeedNLSJac78) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac78 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac78 SEED_VAR */))) * (data->simulationInfo->realParameter[77]);
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
gENCLS._vq._$pDERNLSJac78._dummyVarNLSJac78 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac78 - gENCLS.X_d * gENCLS.id.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[83])) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac78 SEED_VAR */) - ((data->simulationInfo->realParameter[86]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac78 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
gENCLS._vd._$pDERNLSJac78._dummyVarNLSJac78 = gENCLS.X_d * gENCLS.iq.SeedNLSJac78 - gENCLS.R_a * gENCLS.id.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[86]) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac78 SEED_VAR */) - ((data->simulationInfo->realParameter[83]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac78 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
pwLine4._ir._im._$pDERNLSJac78._dummyVarNLSJac78 = (-pwLine1.ir.im.SeedNLSJac78) - gENCLS.p.ii.$pDERNLSJac78.dummyVarNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,239};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac78 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ii.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
pwLine4._ir._re._$pDERNLSJac78._dummyVarNLSJac78 = (-pwLine1.ir.re.SeedNLSJac78) - gENCLS.p.ir.$pDERNLSJac78.dummyVarNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac78 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ir.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
pwLine1._is._re._$pDERNLSJac78._dummyVarNLSJac78 = (-pwLine.ir.re.SeedNLSJac78) - pwLine3.is.re.SeedNLSJac78 - constantLoad.p.ir.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac78 SEED_VAR */) - jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac78 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
pwLine1._is._im._$pDERNLSJac78._dummyVarNLSJac78 = (-pwLine.ir.im.SeedNLSJac78) - pwLine3.is.im.SeedNLSJac78 - constantLoad.p.ii.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac78 SEED_VAR */) - jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac78 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
pwFault._p._ii._$pDERNLSJac78._dummyVarNLSJac78 = (-pwLine3.ir.im.SeedNLSJac78) - pwLine4.is.im.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine3.ir.im.SeedNLSJac78 SEED_VAR */) - jacobian->seedVars[3] /* pwLine4.is.im.SeedNLSJac78 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
pwFault._p._ir._$pDERNLSJac78._dummyVarNLSJac78 = (-pwLine3.ir.re.SeedNLSJac78) - pwLine4.is.re.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,244};
  jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine3.ir.re.SeedNLSJac78 SEED_VAR */) - jacobian->seedVars[1] /* pwLine4.is.re.SeedNLSJac78 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac78._dummyVarNLSJac78 = $cse2 * gENCLS.vq.$pDERNLSJac78.dummyVarNLSJac78 + $cse1 * gENCLS.vd.$pDERNLSJac78.dummyVarNLSJac78 - pwLine1.vr.re.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac78._dummyVarNLSJac78 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac78 + pwLine1.vs.im.SeedNLSJac78 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac78) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac78.dummyVarNLSJac78 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac78 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac78 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac78._dummyVarNLSJac78 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac78 + pwLine1.vs.im.SeedNLSJac78 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac78 + pwLine1.vs.re.SeedNLSJac78 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac78.dummyVarNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = (data->localData[0]->realVars[122] /* pwLine1.vs.im variable */) * (jacobian->seedVars[9] /* constantLoad.p.ii.SeedNLSJac78 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[123] /* pwLine1.vs.re variable */) * (jacobian->seedVars[8] /* constantLoad.p.ir.SeedNLSJac78 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac78 else pwLine1.vs.im.SeedNLSJac78 - pwLine3.vr.im.SeedNLSJac78 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac78 + (-pwLine1.vs.re.SeedNLSJac78) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac78 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac78 + pwLine1.vs.im.SeedNLSJac78 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac78 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 9, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[285]) * (jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[282]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[283]))) + (data->simulationInfo->realParameter[284]) * (jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[282]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[283])))));
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac78 else pwLine1.vs.re.SeedNLSJac78 - pwLine3.vr.re.SeedNLSJac78 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac78 + pwLine1.vs.im.SeedNLSJac78 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac78 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac78 + (-pwLine1.vs.re.SeedNLSJac78) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac78 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 9, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp53 && tmp54)?jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[285]) * (jacobian->seedVars[7] /* pwLine3.is.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[282]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[283]))) - ((data->simulationInfo->realParameter[284]) * (jacobian->seedVars[5] /* pwLine3.is.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[282]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[283]))))));
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac78 else pwLine3.vr.re.SeedNLSJac78 - pwLine1.vr.re.SeedNLSJac78 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac78 + pwLine3.vr.im.SeedNLSJac78 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac78 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac78 + (-pwLine3.vr.re.SeedNLSJac78) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac78 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,250};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 11, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp55 && tmp56)?jacobian->seedVars[1] /* pwLine4.is.re.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[296]) * (jacobian->seedVars[1] /* pwLine4.is.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (jacobian->seedVars[3] /* pwLine4.is.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[294]))))));
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac78 else pwLine3.vr.im.SeedNLSJac78 - pwLine1.vr.im.SeedNLSJac78 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac78 + (-pwLine3.vr.re.SeedNLSJac78) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac78 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac78 + pwLine3.vr.im.SeedNLSJac78 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac78 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,251};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 11, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->seedVars[3] /* pwLine4.is.im.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[296]) * (jacobian->seedVars[3] /* pwLine4.is.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (jacobian->seedVars[1] /* pwLine4.is.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[294])))));
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac78._dummyVarNLSJac78 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac78.dummyVarNLSJac78 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac78 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac78.dummyVarNLSJac78 - (pwFault.R * pwLine3.vr.im.SeedNLSJac78 - pwFault.X * pwLine3.vr.re.SeedNLSJac78) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac78.dummyVarNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,252};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  modelica_boolean tmp69;
  modelica_real tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 12, Less);
  tmp71 = (modelica_boolean)tmp59;
  if(tmp71)
  {
    tmp72 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[254], 13, Less);
    tmp69 = (modelica_boolean)(tmp60 && data->simulationInfo->booleanParameter[64]);
    if(tmp69)
    {
      tmp70 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[254], 13, Less);
      tmp67 = (modelica_boolean)tmp61;
      if(tmp67)
      {
        tmp62 = data->simulationInfo->realParameter[252];
        tmp63 = data->simulationInfo->realParameter[251];
        tmp64 = data->simulationInfo->realParameter[252];
        tmp65 = data->simulationInfo->realParameter[251];
        tmp66 = (tmp64 * tmp64) + (tmp65 * tmp65);
        tmp68 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[251]) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */) - ((data->simulationInfo->realParameter[252]) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */))) * ((tmp62 * tmp62) + (tmp63 * tmp63)),(tmp66 * tmp66),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp68 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */;
      }
      tmp70 = tmp68;
    }
    tmp72 = tmp70;
  }
  jacobian->resultVars[7] /* $res8.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = tmp72;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac78._dummyVarNLSJac78 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac78.dummyVarNLSJac78 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac78 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac78.dummyVarNLSJac78 - (pwFault.R * pwLine3.vr.re.SeedNLSJac78 + pwFault.X * pwLine3.vr.im.SeedNLSJac78) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac78.dummyVarNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,253};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  modelica_real tmp86;
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 12, Less);
  tmp85 = (modelica_boolean)tmp73;
  if(tmp85)
  {
    tmp86 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[254], 13, Less);
    tmp83 = (modelica_boolean)(tmp74 && data->simulationInfo->booleanParameter[64]);
    if(tmp83)
    {
      tmp84 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[254], 13, Less);
      tmp81 = (modelica_boolean)tmp75;
      if(tmp81)
      {
        tmp76 = data->simulationInfo->realParameter[251];
        tmp77 = data->simulationInfo->realParameter[252];
        tmp78 = data->simulationInfo->realParameter[251];
        tmp79 = data->simulationInfo->realParameter[252];
        tmp80 = (tmp78 * tmp78) + (tmp79 * tmp79);
        tmp82 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[251]) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */) + (data->simulationInfo->realParameter[252]) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */)) * ((tmp76 * tmp76) + (tmp77 * tmp77)),(tmp80 * tmp80),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp82 = jacobian->tmpVars[22] /* pwFault.p.ir.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */;
      }
      tmp84 = tmp82;
    }
    tmp86 = tmp84;
  }
  jacobian->resultVars[8] /* $res9.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = tmp86;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac78 else pwLine3.vr.re.SeedNLSJac78 - pwLine1.vs.re.SeedNLSJac78 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac78 + pwLine3.vr.im.SeedNLSJac78 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac78 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac78 + (-pwLine3.vr.re.SeedNLSJac78) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac78 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,254};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 9, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[0] /* pwLine3.ir.re.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[285]) * (jacobian->seedVars[0] /* pwLine3.ir.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[282]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[283]))) - ((data->simulationInfo->realParameter[284]) * (jacobian->seedVars[2] /* pwLine3.ir.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[282]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[283]))))));
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac78 else pwLine3.vr.im.SeedNLSJac78 - pwLine1.vs.im.SeedNLSJac78 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac78 + (-pwLine3.vr.re.SeedNLSJac78) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac78 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac78 + pwLine3.vr.im.SeedNLSJac78 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac78 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,255};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 9, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[2] /* pwLine3.ir.im.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[285]) * (jacobian->seedVars[2] /* pwLine3.ir.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[282]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[283]))) + (data->simulationInfo->realParameter[284]) * (jacobian->seedVars[0] /* pwLine3.ir.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[282]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[283])))));
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac78 else pwLine1.vs.im.SeedNLSJac78 - pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac78 + (-pwLine1.vs.re.SeedNLSJac78) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac78 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac78 + pwLine1.vs.im.SeedNLSJac78 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac78 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,256};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[265], 1, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[263]) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[260]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[261]))) + (data->simulationInfo->realParameter[262]) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[260]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[261])))));
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac78.dummyVarNLSJac78 else pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 - pwLine1.vs.re.SeedNLSJac78 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac78.dummyVarNLSJac78 + pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac78.dummyVarNLSJac78 + (-pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,257};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[265], 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[263]) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[260]) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[261]))) - ((data->simulationInfo->realParameter[262]) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[260]) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[261]))))));
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac78.dummyVarNLSJac78 else pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 - pwLine1.vs.im.SeedNLSJac78 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac78.dummyVarNLSJac78 + (-pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac78.dummyVarNLSJac78 + pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,258};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[265], 1, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[263]) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[260]) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[261]))) + (data->simulationInfo->realParameter[262]) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[260]) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[261])))));
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.$pDERNLSJac78.dummyVarNLSJac78 else pwLine1.vs.re.SeedNLSJac78 - pwLine1.vr.re.SeedNLSJac78 - (pwLine1.Z.re * (pwLine1.is.re.$pDERNLSJac78.dummyVarNLSJac78 + pwLine1.vs.im.SeedNLSJac78 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac78 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.$pDERNLSJac78.dummyVarNLSJac78 + (-pwLine1.vs.re.SeedNLSJac78) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac78 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,259};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[276], 3, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[274]) * (jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[271]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[272]))) - ((data->simulationInfo->realParameter[273]) * (jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[271]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[272]))))));
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac78 else pwLine1.vs.re.SeedNLSJac78 - pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac78 + pwLine1.vs.im.SeedNLSJac78 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac78 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac78 + (-pwLine1.vs.re.SeedNLSJac78) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac78 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,260};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[265], 1, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[263]) * (jacobian->seedVars[6] /* pwLine.ir.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[260]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[261]))) - ((data->simulationInfo->realParameter[262]) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[260]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[261]))))));
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.$pDERNLSJac78.dummyVarNLSJac78 else pwLine1.vs.im.SeedNLSJac78 - pwLine1.vr.im.SeedNLSJac78 - (pwLine1.Z.re * (pwLine1.is.im.$pDERNLSJac78.dummyVarNLSJac78 + (-pwLine1.vs.re.SeedNLSJac78) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac78 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.$pDERNLSJac78.dummyVarNLSJac78 + pwLine1.vs.im.SeedNLSJac78 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac78 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,261};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[276], 3, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[274]) * (jacobian->tmpVars[20] /* pwLine1.is.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[271]) - ((jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[272]))) + (data->simulationInfo->realParameter[273]) * (jacobian->tmpVars[19] /* pwLine1.is.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[271]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[272])))));
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac78._dummyVarNLSJac78 = $cse1 * gENCLS.vq.$pDERNLSJac78.dummyVarNLSJac78 + (-$cse2) * gENCLS.vd.$pDERNLSJac78.dummyVarNLSJac78 - pwLine1.vr.im.SeedNLSJac78
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,262};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac78.dummyVarNLSJac78 else pwLine1.vr.re.SeedNLSJac78 - pwLine3.vr.re.SeedNLSJac78 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac78.dummyVarNLSJac78 + pwLine1.vr.im.SeedNLSJac78 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac78 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac78.dummyVarNLSJac78 + (-pwLine1.vr.re.SeedNLSJac78) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac78 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,263};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 11, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[296]) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[294]))))));
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac78.dummyVarNLSJac78 else pwLine1.vr.im.SeedNLSJac78 - pwLine3.vr.im.SeedNLSJac78 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac78.dummyVarNLSJac78 + (-pwLine1.vr.re.SeedNLSJac78) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac78 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac78.dummyVarNLSJac78 + pwLine1.vr.im.SeedNLSJac78 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac78 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,264};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 11, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[296]) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[294])))));
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac78 else pwLine1.vr.re.SeedNLSJac78 - pwLine1.vs.re.SeedNLSJac78 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac78 + pwLine1.vr.im.SeedNLSJac78 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac78 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac78 + (-pwLine1.vr.re.SeedNLSJac78) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac78 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,265};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[276], 3, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[274]) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[271]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[272]))) - ((data->simulationInfo->realParameter[273]) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[271]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[272]))))));
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac78._dummyVarNLSJac78 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac78 else pwLine1.vr.im.SeedNLSJac78 - pwLine1.vs.im.SeedNLSJac78 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac78 + (-pwLine1.vr.re.SeedNLSJac78) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac78 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac78 + pwLine1.vr.im.SeedNLSJac78 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac78 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_266(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,266};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[276], 3, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac78.dummyVarNLSJac78 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac78 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.im.SeedNLSJac78 SEED_VAR */ - ((data->simulationInfo->realParameter[274]) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac78 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */)) * (data->simulationInfo->realParameter[271]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[272]))) + (data->simulationInfo->realParameter[273]) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac78 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[271]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac78 SEED_VAR */) * (data->simulationInfo->realParameter[272])))));
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacNLSJac78_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_NLSJac78;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_222(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_223(data, threadData, jacobian, parentJacobian);

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
  
  TRACE_POP
  return 0;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
iEEET2_1._add._u2._$pDERNLSJac79._dummyVarNLSJac79 = if abs(iEEET2_1.simpleLag.T) <= 1e-15 then iEEET2_1.derivativeLag.y.SeedNLSJac79 * iEEET2_1.simpleLag.K else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,293};
  modelica_boolean tmp111;
  tmp111 = LessEq(fabs(data->simulationInfo->realParameter[242]),1e-15);
  jacobian->tmpVars[0] /* iEEET2_1.add.u2.$pDERNLSJac79.dummyVarNLSJac79 JACOBIAN_DIFF_VAR */ = (tmp111?(jacobian->seedVars[0] /* iEEET2_1.derivativeLag.y.SeedNLSJac79 SEED_VAR */) * (data->simulationInfo->realParameter[241]):0.0);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
iEEET2_1._add._y._$pDERNLSJac79._dummyVarNLSJac79 = iEEET2_1.add.k2 * iEEET2_1.add.u2.$pDERNLSJac79.dummyVarNLSJac79
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,294};
  jacobian->tmpVars[1] /* iEEET2_1.add.y.$pDERNLSJac79.dummyVarNLSJac79 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[217]) * (jacobian->tmpVars[0] /* iEEET2_1.add.u2.$pDERNLSJac79.dummyVarNLSJac79 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
iEEET2_1._derivativeLag._u._$pDERNLSJac79._dummyVarNLSJac79 = if abs(iEEET2_1.simpleLagLim.T) <= 1e-15 then if noEvent(min(iEEET2_1.add.y * iEEET2_1.simpleLagLim.K, iEEET2_1.simpleLagLim.outMax) > iEEET2_1.simpleLagLim.outMin) then if noEvent(iEEET2_1.add.y * iEEET2_1.simpleLagLim.K < iEEET2_1.simpleLagLim.outMax) then iEEET2_1.add.y.$pDERNLSJac79.dummyVarNLSJac79 * iEEET2_1.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,295};
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_real tmp116;
  modelica_boolean tmp117;
  modelica_real tmp118;
  tmp112 = LessEq(fabs(data->simulationInfo->realParameter[246]),1e-15);
  tmp117 = (modelica_boolean)tmp112;
  if(tmp117)
  {
    tmp113 = Greater(fmin((data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) * (data->simulationInfo->realParameter[245]),data->simulationInfo->realParameter[248]),data->simulationInfo->realParameter[249]);
    tmp115 = (modelica_boolean)tmp113;
    if(tmp115)
    {
      tmp114 = Less((data->localData[0]->realVars[92] /* iEEET2_1.add.y variable */) * (data->simulationInfo->realParameter[245]),data->simulationInfo->realParameter[248]);
      tmp116 = (tmp114?(jacobian->tmpVars[1] /* iEEET2_1.add.y.$pDERNLSJac79.dummyVarNLSJac79 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[245]):0.0);
    }
    else
    {
      tmp116 = 0.0;
    }
    tmp118 = tmp116;
  }
  else
  {
    tmp118 = 0.0;
  }
  jacobian->tmpVars[2] /* iEEET2_1.derivativeLag.u.$pDERNLSJac79.dummyVarNLSJac79 JACOBIAN_DIFF_VAR */ = tmp118;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac79._dummyVarNLSJac79 = 0.06 * iEEET2_1.derivativeLag.u.$pDERNLSJac79.dummyVarNLSJac79 / iEEET2_1.derivativeLag.T - iEEET2_1.derivativeLag.y.SeedNLSJac79
*/
void OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,296};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac79.dummyVarNLSJac79 JACOBIAN_VAR */ = (0.06) * (DIVISION(jacobian->tmpVars[2] /* iEEET2_1.derivativeLag.u.$pDERNLSJac79.dummyVarNLSJac79 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[221],"iEEET2_1.derivativeLag.T")) - jacobian->seedVars[0] /* iEEET2_1.derivativeLag.y.SeedNLSJac79 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacNLSJac79_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_NLSJac79;
  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_293(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_294(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_295(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_eqFunction_296(data, threadData, jacobian, parentJacobian);
  
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
int OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_IEEET2_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


