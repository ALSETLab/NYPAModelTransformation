/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac56(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(112*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 112;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(22*sizeof(int));
  jacobian->sparsePattern.maxColors = 9;
  
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
  jacobian->sparsePattern.colorCols[15] = 4;
  jacobian->sparsePattern.colorCols[14] = 5;
  jacobian->sparsePattern.colorCols[7] = 6;
  jacobian->sparsePattern.colorCols[13] = 6;
  jacobian->sparsePattern.colorCols[17] = 6;
  jacobian->sparsePattern.colorCols[18] = 6;
  jacobian->sparsePattern.colorCols[6] = 7;
  jacobian->sparsePattern.colorCols[9] = 7;
  jacobian->sparsePattern.colorCols[12] = 7;
  jacobian->sparsePattern.colorCols[1] = 8;
  jacobian->sparsePattern.colorCols[3] = 8;
  jacobian->sparsePattern.colorCols[5] = 8;
  jacobian->sparsePattern.colorCols[8] = 8;
  jacobian->sparsePattern.colorCols[11] = 8;
  jacobian->sparsePattern.colorCols[0] = 9;
  jacobian->sparsePattern.colorCols[2] = 9;
  jacobian->sparsePattern.colorCols[4] = 9;
  jacobian->sparsePattern.colorCols[10] = 9;
  jacobian->sparsePattern.colorCols[16] = 9;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac57(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(98*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 98;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern.maxColors = 12;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 98*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  jacobian->sparsePattern.colorCols[4] = 2;
  jacobian->sparsePattern.colorCols[3] = 3;
  jacobian->sparsePattern.colorCols[2] = 4;
  jacobian->sparsePattern.colorCols[10] = 5;
  jacobian->sparsePattern.colorCols[9] = 6;
  jacobian->sparsePattern.colorCols[8] = 7;
  jacobian->sparsePattern.colorCols[7] = 8;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[12] = 10;
  jacobian->sparsePattern.colorCols[1] = 10;
  jacobian->sparsePattern.colorCols[6] = 11;
  jacobian->sparsePattern.colorCols[5] = 12;
  TRACE_POP
  return 0;
}


/*
equation index: 810
type: SIMPLE_ASSIGN
constantLoad._v._$pDERNLSJac56._dummyVarNLSJac56 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac56 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac56) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_810(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,810};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp7 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */),sqrt((tmp6 * tmp6) + (tmp7 * tmp7)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 811
type: SIMPLE_ASSIGN
constantLoad._kP._$pDERNLSJac56._dummyVarNLSJac56 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_811(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,811};
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[38], 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (tmp8?(data->simulationInfo->realParameter[58]) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78])))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[78]))) + (data->simulationInfo->realParameter[64]) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[78]))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[78]))):0.0);
  TRACE_POP
}

/*
equation index: 812
type: SIMPLE_ASSIGN
constantLoad._kI._$pDERNLSJac56._dummyVarNLSJac56 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_812(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,812};
  modelica_boolean tmp9;
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
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_boolean tmp51;
  modelica_real tmp52;
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp51 = (modelica_boolean)tmp9;
  if(tmp51)
  {
    tmp10 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp11 = -1.0 + data->simulationInfo->realParameter[65];
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
    tmp18 = data->simulationInfo->realParameter[65];
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
      tmp26 = data->simulationInfo->realParameter[65] - 1.0;
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
      tmp33 = (tmp27) * ((data->simulationInfo->realParameter[65]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */));
    }
    tmp42 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp42)
    {
      tmp43 = 0.0;
    }
    else
    {
      tmp35 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
      tmp36 = -1.0 + data->simulationInfo->realParameter[65] - 1.0;
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
      tmp43 = (tmp37) * ((-1.0 + data->simulationInfo->realParameter[65]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */));
    }
    tmp44 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp45 = data->simulationInfo->realParameter[65];
    if(tmp44 < 0.0 && tmp45 != 0.0)
    {
      tmp47 = modf(tmp45, &tmp48);
      
      if(tmp47 > 0.5)
      {
        tmp47 -= 1.0;
        tmp48 += 1.0;
      }
      else if(tmp47 < -0.5)
      {
        tmp47 += 1.0;
        tmp48 -= 1.0;
      }
      
      if(fabs(tmp47) < 1e-10)
        tmp46 = pow(tmp44, tmp48);
      else
      {
        tmp50 = modf(1.0/tmp45, &tmp49);
        if(tmp50 > 0.5)
        {
          tmp50 -= 1.0;
          tmp49 += 1.0;
        }
        else if(tmp50 < -0.5)
        {
          tmp50 += 1.0;
          tmp49 -= 1.0;
        }
        if(fabs(tmp50) < 1e-10 && ((unsigned long)tmp49 & 1))
        {
          tmp46 = -pow(-tmp44, tmp47)*pow(tmp44, tmp48);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp44, tmp45);
        }
      }
    }
    else
    {
      tmp46 = pow(tmp44, tmp45);
    }
    if(isnan(tmp46) || isinf(tmp46))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp44, tmp45);
    }
    tmp52 = (data->simulationInfo->realParameter[59]) * ((data->simulationInfo->realParameter[65]) * ((tmp12) * (((-exp(((-data->simulationInfo->realParameter[59])) * (tmp19)))) * ((data->simulationInfo->realParameter[59]) * (tmp33))) + (tmp43) * (exp(((-data->simulationInfo->realParameter[59])) * (tmp46)))));
  }
  else
  {
    tmp52 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = tmp52;
  TRACE_POP
}

/*
equation index: 813
type: SIMPLE_ASSIGN
constantLoad._Q._$pDERNLSJac56._dummyVarNLSJac56 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 + constantLoad.kI.$pDERNLSJac56.dummyVarNLSJac56 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 + constantLoad.kP.$pDERNLSJac56.dummyVarNLSJac56 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 + constantLoad.kI.$pDERNLSJac56.dummyVarNLSJac56 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 + constantLoad.kP.$pDERNLSJac56.dummyVarNLSJac56 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_813(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,813};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[74], 3, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68], 4, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = ((tmp53 && tmp54)?(data->simulationInfo->realParameter[41]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[67]):(data->simulationInfo->realParameter[41]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43]));
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
constantLoad._P._$pDERNLSJac56._dummyVarNLSJac56 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 + constantLoad.kI.$pDERNLSJac56.dummyVarNLSJac56 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 + constantLoad.kP.$pDERNLSJac56.dummyVarNLSJac56 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 + constantLoad.kI.$pDERNLSJac56.dummyVarNLSJac56 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 + constantLoad.kP.$pDERNLSJac56.dummyVarNLSJac56 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_814(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,814};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[74], 3, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[74] + data->simulationInfo->realParameter[68], 4, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = ((tmp55 && tmp56)?(data->simulationInfo->realParameter[42]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[66]):(data->simulationInfo->realParameter[42]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[44]));
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
gENROE._PSIq._$pDERNLSJac56._dummyVarNLSJac56 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_815(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,815};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[250])) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac56 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
pwLine._is._re._$pDERNLSJac56._dummyVarNLSJac56 = ($cse7 * gENROE.iq.SeedNLSJac56 + $cse6 * gENROE.id.SeedNLSJac56) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_816(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,816};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac56 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[198]);
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
pwLine._is._im._$pDERNLSJac56._dummyVarNLSJac56 = ($cse6 * gENROE.iq.SeedNLSJac56 - $cse7 * gENROE.id.SeedNLSJac56) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_817(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,817};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac56 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac56 SEED_VAR */))) * (data->simulationInfo->realParameter[198]);
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
gENROE._ud._$pDERNLSJac56._dummyVarNLSJac56 = (-gENROE.PSIq.$pDERNLSJac56.dummyVarNLSJac56) - gENROE.R_a * gENROE.id.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_818(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,818};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[232]) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac56 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
gENROE._PSId._$pDERNLSJac56._dummyVarNLSJac56 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_819(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,819};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[249])) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac56 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
gENROE._uq._$pDERNLSJac56._dummyVarNLSJac56 = gENROE.PSId.$pDERNLSJac56.dummyVarNLSJac56 - gENROE.R_a * gENROE.iq.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_820(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,820};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[232]) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac56 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
pwLine._vs._re._$pDERNLSJac56._dummyVarNLSJac56 = $cse6 * gENROE.ud.$pDERNLSJac56.dummyVarNLSJac56 + $cse7 * gENROE.uq.$pDERNLSJac56.dummyVarNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_821(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,821};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
pwLine._vs._im._$pDERNLSJac56._dummyVarNLSJac56 = $cse6 * gENROE.uq.$pDERNLSJac56.dummyVarNLSJac56 - $cse7 * gENROE.ud.$pDERNLSJac56.dummyVarNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_822(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,822};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
gENCLS._p._ir._$pDERNLSJac56._dummyVarNLSJac56 = ((-$cse1) * gENCLS.id.SeedNLSJac56 - $cse2 * gENCLS.iq.SeedNLSJac56) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_823(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,823};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac56 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac56 SEED_VAR */))) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
gENCLS._p._ii._$pDERNLSJac56._dummyVarNLSJac56 = ($cse2 * gENCLS.id.SeedNLSJac56 - $cse1 * gENCLS.iq.SeedNLSJac56) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_824(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,824};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac56 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac56 SEED_VAR */))) * (data->simulationInfo->realParameter[172]);
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
gENCLS._vq._$pDERNLSJac56._dummyVarNLSJac56 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac56 - gENCLS.X_d * gENCLS.id.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_825(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,825};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[178])) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac56 SEED_VAR */) - ((data->simulationInfo->realParameter[181]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac56 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
gENCLS._vd._$pDERNLSJac56._dummyVarNLSJac56 = gENCLS.X_d * gENCLS.iq.SeedNLSJac56 - gENCLS.R_a * gENCLS.id.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_826(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,826};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[181]) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac56 SEED_VAR */) - ((data->simulationInfo->realParameter[178]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac56 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
pwLine1._ir._re._$pDERNLSJac56._dummyVarNLSJac56 = (-pwLine4.ir.re.SeedNLSJac56) - gENCLS.p.ir.$pDERNLSJac56.dummyVarNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_827(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,827};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac56 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
pwLine1._ir._im._$pDERNLSJac56._dummyVarNLSJac56 = (-pwLine4.ir.im.SeedNLSJac56) - gENCLS.p.ii.$pDERNLSJac56.dummyVarNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_828(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,828};
  jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac56 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
pwLine1._is._im._$pDERNLSJac56._dummyVarNLSJac56 = (-pwLine.ir.im.SeedNLSJac56) - pwLine3.is.im.SeedNLSJac56 - constantLoad.p.ii.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_829(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,829};
  jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac56 SEED_VAR */) - jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac56 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
constantLoad._p._ir._$pDERNLSJac56._dummyVarNLSJac56 = (-pwLine.ir.re.SeedNLSJac56) - pwLine1.is.re.SeedNLSJac56 - pwLine3.is.re.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_830(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,830};
  jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac56 SEED_VAR */) - jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac56 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
pwFault._p._ir._$pDERNLSJac56._dummyVarNLSJac56 = (-pwLine3.ir.re.SeedNLSJac56) - pwLine4.is.re.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_831(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,831};
  jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac56 SEED_VAR */) - jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac56 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
pwFault._p._ii._$pDERNLSJac56._dummyVarNLSJac56 = (-pwLine3.ir.im.SeedNLSJac56) - pwLine4.is.im.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_832(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,832};
  jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac56 SEED_VAR */) - jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac56 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac56._dummyVarNLSJac56 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac56.dummyVarNLSJac56 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac56 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac56.dummyVarNLSJac56 - (pwFault.R * pwLine3.vr.im.SeedNLSJac56 - pwFault.X * pwLine3.vr.re.SeedNLSJac56) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac56.dummyVarNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_833(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,833};
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
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[282], 7, Less);
  tmp69 = (modelica_boolean)tmp57;
  if(tmp69)
  {
    tmp70 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 8, Less);
    tmp67 = (modelica_boolean)(tmp58 && data->simulationInfo->booleanParameter[70]);
    if(tmp67)
    {
      tmp68 = jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 8, Less);
      tmp65 = (modelica_boolean)tmp59;
      if(tmp65)
      {
        tmp60 = data->simulationInfo->realParameter[281];
        tmp61 = data->simulationInfo->realParameter[280];
        tmp62 = data->simulationInfo->realParameter[281];
        tmp63 = data->simulationInfo->realParameter[280];
        tmp64 = (tmp62 * tmp62) + (tmp63 * tmp63);
        tmp66 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[280]) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */) - ((data->simulationInfo->realParameter[281]) * (jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */))) * ((tmp60 * tmp60) + (tmp61 * tmp61)),(tmp64 * tmp64),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp66 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */;
      }
      tmp68 = tmp66;
    }
    tmp70 = tmp68;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = tmp70;
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac56._dummyVarNLSJac56 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac56.dummyVarNLSJac56 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac56 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac56.dummyVarNLSJac56 - (pwFault.R * pwLine3.vr.re.SeedNLSJac56 + pwFault.X * pwLine3.vr.im.SeedNLSJac56) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac56.dummyVarNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_834(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,834};
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
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[282], 7, Less);
  tmp83 = (modelica_boolean)tmp71;
  if(tmp83)
  {
    tmp84 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 8, Less);
    tmp81 = (modelica_boolean)(tmp72 && data->simulationInfo->booleanParameter[70]);
    if(tmp81)
    {
      tmp82 = jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[283], 8, Less);
      tmp79 = (modelica_boolean)tmp73;
      if(tmp79)
      {
        tmp74 = data->simulationInfo->realParameter[280];
        tmp75 = data->simulationInfo->realParameter[281];
        tmp76 = data->simulationInfo->realParameter[280];
        tmp77 = data->simulationInfo->realParameter[281];
        tmp78 = (tmp76 * tmp76) + (tmp77 * tmp77);
        tmp80 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[280]) * (jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */) + (data->simulationInfo->realParameter[281]) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */)) * ((tmp74 * tmp74) + (tmp75 * tmp75)),(tmp78 * tmp78),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp80 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */;
      }
      tmp82 = tmp80;
    }
    tmp84 = tmp82;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = tmp84;
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac56.dummyVarNLSJac56 else pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 - pwLine1.vs.im.SeedNLSJac56 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac56.dummyVarNLSJac56 + (-pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac56.dummyVarNLSJac56 + pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_835(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,835};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[293], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 1, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[292]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[289]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[290]))) + (data->simulationInfo->realParameter[291]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[289]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[290])))));
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac56.dummyVarNLSJac56 else pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 - pwLine1.vs.re.SeedNLSJac56 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac56.dummyVarNLSJac56 + pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac56.dummyVarNLSJac56 + (-pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_836(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,836};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[293], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 1, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[292]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[289]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[290]))) - ((data->simulationInfo->realParameter[291]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[289]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[290]))))));
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac56 else pwLine1.vs.im.SeedNLSJac56 - pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac56 + (-pwLine1.vs.re.SeedNLSJac56) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac56 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac56 + pwLine1.vs.im.SeedNLSJac56 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac56 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_837(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,837};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[293], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 1, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[292]) * (jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[289]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[290]))) + (data->simulationInfo->realParameter[291]) * (jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[289]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[290])))));
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac56 else pwLine1.vs.re.SeedNLSJac56 - pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac56 + pwLine1.vs.im.SeedNLSJac56 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac56 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac56 + (-pwLine1.vs.re.SeedNLSJac56) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac56 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_838(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,838};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[293], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[294], 1, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[292]) * (jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[289]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[290]))) - ((data->simulationInfo->realParameter[291]) * (jacobian->seedVars[8] /* pwLine.ir.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[289]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[290]))))));
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac56._dummyVarNLSJac56 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac56 + pwLine1.vs.im.SeedNLSJac56 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac56.dummyVarNLSJac56 + pwLine1.vs.re.SeedNLSJac56 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac56.dummyVarNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_839(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,839};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac56 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac56 else pwLine1.vs.re.SeedNLSJac56 - pwLine3.vr.re.SeedNLSJac56 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac56 + pwLine1.vs.im.SeedNLSJac56 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac56 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac56 + (-pwLine1.vs.re.SeedNLSJac56) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac56 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_840(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,840};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[315], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 6, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[314]) * (jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[311]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[312]))) - ((data->simulationInfo->realParameter[313]) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[311]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[312]))))));
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac56._dummyVarNLSJac56 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac56.dummyVarNLSJac56 + pwLine1.vs.im.SeedNLSJac56 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac56) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac56.dummyVarNLSJac56 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,841};
  jacobian->resultVars[8] /* $res9.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[20] /* constantLoad.p.ir.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[7] /* constantLoad.p.ii.SeedNLSJac56 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.$pDERNLSJac56.dummyVarNLSJac56 else pwLine1.vs.im.SeedNLSJac56 - pwLine1.vr.im.SeedNLSJac56 - (pwLine1.Z.re * (pwLine1.is.im.$pDERNLSJac56.dummyVarNLSJac56 + (-pwLine1.vs.re.SeedNLSJac56) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac56 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac56 + pwLine1.vs.im.SeedNLSJac56 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac56 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_842(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,842};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[304], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 12, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[303]) * (jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[300]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[301]))) + (data->simulationInfo->realParameter[302]) * (jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[300]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[301])))));
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac56 else pwLine1.vs.re.SeedNLSJac56 - pwLine1.vr.re.SeedNLSJac56 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac56 + pwLine1.vs.im.SeedNLSJac56 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac56 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.$pDERNLSJac56.dummyVarNLSJac56 + (-pwLine1.vs.re.SeedNLSJac56) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac56 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_843(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,843};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[304], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 12, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[303]) * (jacobian->seedVars[4] /* pwLine1.is.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[300]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[301]))) - ((data->simulationInfo->realParameter[302]) * (jacobian->tmpVars[19] /* pwLine1.is.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[300]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[301]))))));
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac56._dummyVarNLSJac56 = $cse2 * gENCLS.vq.$pDERNLSJac56.dummyVarNLSJac56 + $cse1 * gENCLS.vd.$pDERNLSJac56.dummyVarNLSJac56 - pwLine1.vr.re.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_844(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,844};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac56._dummyVarNLSJac56 = $cse1 * gENCLS.vq.$pDERNLSJac56.dummyVarNLSJac56 + (-$cse2) * gENCLS.vd.$pDERNLSJac56.dummyVarNLSJac56 - pwLine1.vr.im.SeedNLSJac56
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_845(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,845};
  jacobian->resultVars[12] /* $res13.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac56.dummyVarNLSJac56 else pwLine1.vr.re.SeedNLSJac56 - pwLine1.vs.re.SeedNLSJac56 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac56.dummyVarNLSJac56 + pwLine1.vr.im.SeedNLSJac56 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac56 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac56.dummyVarNLSJac56 + (-pwLine1.vr.re.SeedNLSJac56) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac56 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_846(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,846};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[304], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 12, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[303]) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[300]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[301]))) - ((data->simulationInfo->realParameter[302]) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[300]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[301]))))));
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac56.dummyVarNLSJac56 else pwLine1.vr.im.SeedNLSJac56 - pwLine1.vs.im.SeedNLSJac56 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac56.dummyVarNLSJac56 + (-pwLine1.vr.re.SeedNLSJac56) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac56 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac56.dummyVarNLSJac56 + pwLine1.vr.im.SeedNLSJac56 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac56 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_847(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,847};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[304], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[305], 12, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[303]) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[300]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[301]))) + (data->simulationInfo->realParameter[302]) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[300]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[301])))));
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac56 else pwLine1.vs.im.SeedNLSJac56 - pwLine3.vr.im.SeedNLSJac56 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac56 + (-pwLine1.vs.re.SeedNLSJac56) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac56 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac56 + pwLine1.vs.im.SeedNLSJac56 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac56 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_848(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,848};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[315], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 6, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[314]) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[311]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[312]))) + (data->simulationInfo->realParameter[313]) * (jacobian->seedVars[5] /* pwLine3.is.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[311]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[312])))));
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac56 else pwLine3.vr.re.SeedNLSJac56 - pwLine1.vr.re.SeedNLSJac56 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac56 + pwLine3.vr.im.SeedNLSJac56 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac56 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac56 + (-pwLine3.vr.re.SeedNLSJac56) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac56 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_849(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,849};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[326], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[327], 10, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[325]) * (jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[322]) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[323]))) - ((data->simulationInfo->realParameter[324]) * (jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[322]) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[323]))))));
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac56 else pwLine3.vr.re.SeedNLSJac56 - pwLine1.vs.re.SeedNLSJac56 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac56 + pwLine3.vr.im.SeedNLSJac56 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac56 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac56 + (-pwLine3.vr.re.SeedNLSJac56) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac56 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_850(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,850};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[315], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 6, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[314]) * (jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[311]) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[312]))) - ((data->simulationInfo->realParameter[313]) * (jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[311]) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[312]))))));
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac56 else pwLine3.vr.im.SeedNLSJac56 - pwLine1.vs.im.SeedNLSJac56 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac56 + (-pwLine3.vr.re.SeedNLSJac56) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac56 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac56 + pwLine3.vr.im.SeedNLSJac56 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac56 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,851};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[315], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[316], 6, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[314]) * (jacobian->seedVars[1] /* pwLine3.ir.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[311]) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[312]))) + (data->simulationInfo->realParameter[313]) * (jacobian->seedVars[2] /* pwLine3.ir.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[311]) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[312])))));
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac56 else pwLine3.vr.im.SeedNLSJac56 - pwLine1.vr.im.SeedNLSJac56 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac56 + (-pwLine3.vr.re.SeedNLSJac56) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac56 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac56 + pwLine3.vr.im.SeedNLSJac56 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac56 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,852};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[326], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[327], 10, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp111 && tmp112)?jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[325]) * (jacobian->seedVars[0] /* pwLine4.is.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[322]) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[323]))) + (data->simulationInfo->realParameter[324]) * (jacobian->seedVars[3] /* pwLine4.is.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[322]) - ((jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[323])))));
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac56 else pwLine1.vr.re.SeedNLSJac56 - pwLine3.vr.re.SeedNLSJac56 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac56 + pwLine1.vr.im.SeedNLSJac56 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac56 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac56 + (-pwLine1.vr.re.SeedNLSJac56) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac56 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,853};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[326], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[327], 10, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp113 && tmp114)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.re.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[325]) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[322]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[323]))) - ((data->simulationInfo->realParameter[324]) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[322]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[323]))))));
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac56._dummyVarNLSJac56 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac56 else pwLine1.vr.im.SeedNLSJac56 - pwLine3.vr.im.SeedNLSJac56 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac56 + (-pwLine1.vr.re.SeedNLSJac56) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac56 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac56 + pwLine1.vr.im.SeedNLSJac56 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac56 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,854};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[326], 9, GreaterEq);
  RELATIONHYSTERESIS(tmp116, data->localData[0]->timeValue, data->simulationInfo->realParameter[327], 10, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac56.dummyVarNLSJac56 JACOBIAN_VAR */ = ((tmp115 && tmp116)?jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac56 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac56 SEED_VAR */ - ((data->simulationInfo->realParameter[325]) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac56 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */)) * (data->simulationInfo->realParameter[322]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[323]))) + (data->simulationInfo->realParameter[324]) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac56 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[322]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac56 SEED_VAR */) * (data->simulationInfo->realParameter[323])))));
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac56_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac56;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_810(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_811(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_812(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_813(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_814(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_815(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_816(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_817(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_818(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_819(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_820(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_821(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_822(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_823(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_824(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_825(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_826(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_827(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_828(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_829(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_830(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_831(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_832(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_833(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_834(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_835(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_836(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_837(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_838(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_839(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_840(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_841(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_842(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_843(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_844(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_845(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_846(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_847(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_848(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_849(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_850(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_851(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_852(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_853(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_854(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 889
type: SIMPLE_ASSIGN
eSST1A._hV_GATE._n1._$pDERNLSJac57._dummyVarNLSJac57 = if eSST1A.add3_1.y > eSST1A.imLimited.uMax then 0.0 else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then 0.0 else eSST1A.add3_1.y.SeedNLSJac57
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_889(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_real tmp120;
  RELATIONHYSTERESIS(tmp117, data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[162], 21, Greater);
  tmp119 = (modelica_boolean)tmp117;
  if(tmp119)
  {
    tmp120 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp118, data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */, data->simulationInfo->realParameter[163], 22, Less);
    tmp120 = (tmp118?0.0:jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac57 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ = tmp120;
  TRACE_POP
}

/*
equation index: 890
type: SIMPLE_ASSIGN
eSST1A._hV_GATE._p._$pDERNLSJac57._dummyVarNLSJac57 = if eSST1A.hV_GATE.n1 < const1.k then 0.0 else eSST1A.hV_GATE.n1.$pDERNLSJac57.dummyVarNLSJac57
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_890(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp121;
  RELATIONHYSTERESIS(tmp121, data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[35], 14, Less);
  jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ = (tmp121?0.0:jacobian->tmpVars[0] /* eSST1A.hV_GATE.n1.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 891
type: SIMPLE_ASSIGN
eSST1A._imDerivativeLag._y._$pDERNLSJac57._dummyVarNLSJac57 = eSST1A.add3_1.y.SeedNLSJac57 / eSST1A.add3_1.k1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_891(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,891};
  jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* eSST1A.add3_1.y.SeedNLSJac57 SEED_VAR */,data->simulationInfo->realParameter[116],"eSST1A.add3_1.k1");
  TRACE_POP
}

/*
equation index: 892
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._TF._y._$pDERNLSJac57._dummyVarNLSJac57 = eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p.$pDERNLSJac57.dummyVarNLSJac57
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_892(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,892};
  jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[141]) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 893
type: SIMPLE_ASSIGN
eSST1A._imLeadLag._y._$pDERNLSJac57._dummyVarNLSJac57 = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p.$pDERNLSJac57.dummyVarNLSJac57 else eSST1A.imLeadLag.TF.y.$pDERNLSJac57.dummyVarNLSJac57
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_893(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,893};
  modelica_boolean tmp122;
  tmp122 = Less(fabs(data->simulationInfo->realParameter[131] - data->simulationInfo->realParameter[132]),1e-15);
  jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ = (tmp122?(data->simulationInfo->realParameter[130]) * (jacobian->tmpVars[1] /* eSST1A.hV_GATE.p.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[3] /* eSST1A.imLeadLag.TF.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 894
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._TF._y._$pDERNLSJac57._dummyVarNLSJac57 = eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y.$pDERNLSJac57.dummyVarNLSJac57
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_894(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,894};
  jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[157]) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 895
type: SIMPLE_ASSIGN
eSST1A._imLeadLag1._y._$pDERNLSJac57._dummyVarNLSJac57 = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y.$pDERNLSJac57.dummyVarNLSJac57 else eSST1A.imLeadLag1.TF.y.$pDERNLSJac57.dummyVarNLSJac57
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_895(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,895};
  modelica_boolean tmp123;
  tmp123 = Less(fabs(data->simulationInfo->realParameter[147] - data->simulationInfo->realParameter[148]),1e-15);
  jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ = (tmp123?(data->simulationInfo->realParameter[146]) * (jacobian->tmpVars[4] /* eSST1A.imLeadLag.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[5] /* eSST1A.imLeadLag1.TF.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 896
type: SIMPLE_ASSIGN
eSST1A._add3_2._u2._$pDERNLSJac57._dummyVarNLSJac57 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then if noEvent(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax) > eSST1A.simpleLagLim.outMin) then if noEvent(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K < eSST1A.simpleLagLim.outMax) then eSST1A.imLeadLag1.y.$pDERNLSJac57.dummyVarNLSJac57 * eSST1A.simpleLagLim.K else 0.0 else 0.0 else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_896(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,896};
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_real tmp128;
  modelica_boolean tmp129;
  modelica_real tmp130;
  tmp124 = LessEq(fabs(data->simulationInfo->realParameter[167]),1e-15);
  tmp129 = (modelica_boolean)tmp124;
  if(tmp129)
  {
    tmp125 = Greater(fmin((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[166]),data->simulationInfo->realParameter[169]),data->simulationInfo->realParameter[170]);
    tmp127 = (modelica_boolean)tmp125;
    if(tmp127)
    {
      tmp126 = Less((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[166]),data->simulationInfo->realParameter[169]);
      tmp128 = (tmp126?(jacobian->tmpVars[6] /* eSST1A.imLeadLag1.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[166]):0.0);
    }
    else
    {
      tmp128 = 0.0;
    }
    tmp130 = tmp128;
  }
  else
  {
    tmp130 = 0.0;
  }
  jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ = tmp130;
  TRACE_POP
}

/*
equation index: 897
type: SIMPLE_ASSIGN
eSST1A._add3_2._y._$pDERNLSJac57._dummyVarNLSJac57 = eSST1A.add3_2.k2 * eSST1A.add3_2.u2.$pDERNLSJac57.dummyVarNLSJac57
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_897(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,897};
  jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[120]) * (jacobian->tmpVars[7] /* eSST1A.add3_2.u2.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 898
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac57._dummyVarNLSJac57 = eSST1A.add3_2.y.$pDERNLSJac57.dummyVarNLSJac57 - eSST1A.imDerivativeLag.y.$pDERNLSJac57.dummyVarNLSJac57 * eSST1A.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_898(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,898};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* eSST1A.add3_2.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[2] /* eSST1A.imDerivativeLag.y.$pDERNLSJac57.dummyVarNLSJac57 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[122]));
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac57_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_NLSJac57;
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_889(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_890(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_891(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_892(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_893(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_894(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_895(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_896(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_897(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_898(data, threadData, jacobian, parentJacobian);
  
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
int OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


