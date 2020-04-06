/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXST1_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac72(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
  jacobian->sparsePattern.colorCols[13] = 7;
  jacobian->sparsePattern.colorCols[3] = 8;
  jacobian->sparsePattern.colorCols[9] = 8;
  jacobian->sparsePattern.colorCols[12] = 8;
  jacobian->sparsePattern.colorCols[1] = 9;
  jacobian->sparsePattern.colorCols[2] = 9;
  jacobian->sparsePattern.colorCols[6] = 9;
  jacobian->sparsePattern.colorCols[7] = 9;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[0] = 10;
  jacobian->sparsePattern.colorCols[5] = 10;
  jacobian->sparsePattern.colorCols[8] = 10;
  jacobian->sparsePattern.colorCols[10] = 10;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_initialAnalyticJacobianNLSJac73(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((12+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(82*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 82;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(12*sizeof(int));
  jacobian->sparsePattern.maxColors = 11;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (12+1)*sizeof(int));
  
  for(i=2;i<12+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 82*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  jacobian->sparsePattern.colorCols[2] = 2;
  jacobian->sparsePattern.colorCols[1] = 3;
  jacobian->sparsePattern.colorCols[9] = 4;
  jacobian->sparsePattern.colorCols[8] = 5;
  jacobian->sparsePattern.colorCols[7] = 6;
  jacobian->sparsePattern.colorCols[6] = 7;
  jacobian->sparsePattern.colorCols[10] = 8;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[3] = 9;
  jacobian->sparsePattern.colorCols[5] = 10;
  jacobian->sparsePattern.colorCols[4] = 11;
  TRACE_POP
  return 0;
}


/*
equation index: 718
type: SIMPLE_ASSIGN
constantLoad._v._$pDERNLSJac72._dummyVarNLSJac72 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac72 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac72) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_718(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,718};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[121] /* pwLine1.vs.re variable */;
  tmp7 = data->localData[0]->realVars[120] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */) + (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */),sqrt((tmp6 * tmp6) + (tmp7 * tmp7)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
constantLoad._kI._$pDERNLSJac72._dummyVarNLSJac72 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_719(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,719};
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
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[53] /* constantLoad.v variable */, 0.5, 7, Less);
  tmp50 = (modelica_boolean)tmp8;
  if(tmp50)
  {
    tmp9 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp10 = -1.0 + data->simulationInfo->realParameter[63];
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
    }tmp16 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp17 = data->simulationInfo->realParameter[63];
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
    }tmp31 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp31)
    {
      tmp32 = 0.0;
    }
    else
    {
      tmp24 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp25 = data->simulationInfo->realParameter[63] - 1.0;
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
      tmp32 = (tmp26) * ((data->simulationInfo->realParameter[63]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */));
    }
    tmp41 = (modelica_boolean)(data->localData[0]->realVars[53] /* constantLoad.v variable */ == 0.0);
    if(tmp41)
    {
      tmp42 = 0.0;
    }
    else
    {
      tmp34 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
      tmp35 = -1.0 + data->simulationInfo->realParameter[63] - 1.0;
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
      tmp42 = (tmp36) * ((-1.0 + data->simulationInfo->realParameter[63]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */));
    }
    tmp43 = data->localData[0]->realVars[53] /* constantLoad.v variable */;
    tmp44 = data->simulationInfo->realParameter[63];
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
    tmp51 = (data->simulationInfo->realParameter[57]) * ((data->simulationInfo->realParameter[63]) * ((tmp11) * (((-exp(((-data->simulationInfo->realParameter[57])) * (tmp18)))) * ((data->simulationInfo->realParameter[57]) * (tmp32))) + (tmp42) * (exp(((-data->simulationInfo->realParameter[57])) * (tmp45)))));
  }
  else
  {
    tmp51 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = tmp51;
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
constantLoad._kP._$pDERNLSJac72._dummyVarNLSJac72 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_720(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,720};
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->realVars[53] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], 6, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (tmp52?(data->simulationInfo->realParameter[56]) * (((-sin((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76])))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[76]))) + (data->simulationInfo->realParameter[62]) * ((cos((data->localData[0]->realVars[53] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[76]))):0.0);
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
constantLoad._Q._$pDERNLSJac72._dummyVarNLSJac72 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 + constantLoad.kI.$pDERNLSJac72.dummyVarNLSJac72 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 + constantLoad.kP.$pDERNLSJac72.dummyVarNLSJac72 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 + constantLoad.kI.$pDERNLSJac72.dummyVarNLSJac72 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 + constantLoad.kP.$pDERNLSJac72.dummyVarNLSJac72 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_721(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,721};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 5, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = ((tmp53 && tmp54)?(data->simulationInfo->realParameter[39]) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[65]):(data->simulationInfo->realParameter[39]) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41]));
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
constantLoad._P._$pDERNLSJac72._dummyVarNLSJac72 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 + constantLoad.kI.$pDERNLSJac72.dummyVarNLSJac72 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 + constantLoad.kP.$pDERNLSJac72.dummyVarNLSJac72 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 + constantLoad.kI.$pDERNLSJac72.dummyVarNLSJac72 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 + constantLoad.kP.$pDERNLSJac72.dummyVarNLSJac72 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_722(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,722};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 5, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = ((tmp55 && tmp56)?(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[64]):(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[49] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[53] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42]));
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
gENROE._PSId._$pDERNLSJac72._dummyVarNLSJac72 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_723(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,723};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[208])) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac72 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
pwLine._is._re._$pDERNLSJac72._dummyVarNLSJac72 = ($cse7 * gENROE.iq.SeedNLSJac72 + $cse6 * gENROE.id.SeedNLSJac72) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_724(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,724};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac72 SEED_VAR */) + (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}

/*
equation index: 725
type: SIMPLE_ASSIGN
pwLine._is._im._$pDERNLSJac72._dummyVarNLSJac72 = ($cse6 * gENROE.iq.SeedNLSJac72 - $cse7 * gENROE.id.SeedNLSJac72) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_725(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,725};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac72 SEED_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac72 SEED_VAR */))) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
gENROE._uq._$pDERNLSJac72._dummyVarNLSJac72 = gENROE.PSId.$pDERNLSJac72.dummyVarNLSJac72 - gENROE.R_a * gENROE.iq.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_726(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,726};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[191]) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac72 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
gENROE._PSIq._$pDERNLSJac72._dummyVarNLSJac72 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_727(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,727};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[209])) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac72 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
gENROE._ud._$pDERNLSJac72._dummyVarNLSJac72 = (-gENROE.PSIq.$pDERNLSJac72.dummyVarNLSJac72) - gENROE.R_a * gENROE.id.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_728(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,728};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[191]) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac72 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
pwLine._vs._im._$pDERNLSJac72._dummyVarNLSJac72 = $cse6 * gENROE.uq.$pDERNLSJac72.dummyVarNLSJac72 - $cse7 * gENROE.ud.$pDERNLSJac72.dummyVarNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_729(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,729};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
pwLine._vs._re._$pDERNLSJac72._dummyVarNLSJac72 = $cse6 * gENROE.ud.$pDERNLSJac72.dummyVarNLSJac72 + $cse7 * gENROE.uq.$pDERNLSJac72.dummyVarNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_730(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,730};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[28] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[29] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
gENCLS._p._ir._$pDERNLSJac72._dummyVarNLSJac72 = ((-$cse1) * gENCLS.id.SeedNLSJac72 - $cse2 * gENCLS.iq.SeedNLSJac72) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_731(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,731};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[24] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac72 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac72 SEED_VAR */))) * (data->simulationInfo->realParameter[131]);
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
gENCLS._p._ii._$pDERNLSJac72._dummyVarNLSJac72 = ($cse2 * gENCLS.id.SeedNLSJac72 - $cse1 * gENCLS.iq.SeedNLSJac72) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_732(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,732};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac72 SEED_VAR */) - ((data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac72 SEED_VAR */))) * (data->simulationInfo->realParameter[131]);
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
gENCLS._vq._$pDERNLSJac72._dummyVarNLSJac72 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac72 - gENCLS.X_d * gENCLS.id.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_733(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,733};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[137])) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac72 SEED_VAR */) - ((data->simulationInfo->realParameter[140]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac72 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
gENCLS._vd._$pDERNLSJac72._dummyVarNLSJac72 = gENCLS.X_d * gENCLS.iq.SeedNLSJac72 - gENCLS.R_a * gENCLS.id.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_734(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,734};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[140]) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac72 SEED_VAR */) - ((data->simulationInfo->realParameter[137]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac72 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
pwLine4._ir._im._$pDERNLSJac72._dummyVarNLSJac72 = (-pwLine1.ir.im.SeedNLSJac72) - gENCLS.p.ii.$pDERNLSJac72.dummyVarNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_735(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,735};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac72 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
pwLine4._ir._re._$pDERNLSJac72._dummyVarNLSJac72 = (-pwLine1.ir.re.SeedNLSJac72) - gENCLS.p.ir.$pDERNLSJac72.dummyVarNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_736(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,736};
  jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac72 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
pwFault._p._ii._$pDERNLSJac72._dummyVarNLSJac72 = (-pwLine3.ir.im.SeedNLSJac72) - pwLine4.is.im.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_737(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,737};
  jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac72 SEED_VAR */) - jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac72 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
pwFault._p._ir._$pDERNLSJac72._dummyVarNLSJac72 = (-pwLine3.ir.re.SeedNLSJac72) - pwLine4.is.re.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_738(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,738};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac72 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac72 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
constantLoad._p._ii._$pDERNLSJac72._dummyVarNLSJac72 = (-pwLine.ir.im.SeedNLSJac72) - pwLine1.is.im.SeedNLSJac72 - pwLine3.is.im.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_739(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,739};
  jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac72 SEED_VAR */) - jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac72 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
pwLine._ir._re._$pDERNLSJac72._dummyVarNLSJac72 = (-pwLine1.is.re.SeedNLSJac72) - pwLine3.is.re.SeedNLSJac72 - constantLoad.p.ir.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_740(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,740};
  jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac72 SEED_VAR */) - jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[0] /* constantLoad.p.ir.SeedNLSJac72 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac72 else pwLine1.vs.re.SeedNLSJac72 - pwLine1.vr.re.SeedNLSJac72 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac72 + pwLine1.vs.im.SeedNLSJac72 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac72 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac72 + (-pwLine1.vs.re.SeedNLSJac72) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac72 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_741(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,741};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[263], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 3, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[262]) * (jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[259]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[260]))) - ((data->simulationInfo->realParameter[261]) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[259]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[260]))))));
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac72._dummyVarNLSJac72 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac72.dummyVarNLSJac72 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac72 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac72.dummyVarNLSJac72 - (pwFault.R * pwLine3.vr.re.SeedNLSJac72 + pwFault.X * pwLine3.vr.im.SeedNLSJac72) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac72.dummyVarNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_742(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,742};
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
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[241], 12, Less);
  tmp71 = (modelica_boolean)tmp59;
  if(tmp71)
  {
    tmp72 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[242], 13, Less);
    tmp69 = (modelica_boolean)(tmp60 && data->simulationInfo->booleanParameter[66]);
    if(tmp69)
    {
      tmp70 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[242], 13, Less);
      tmp67 = (modelica_boolean)tmp61;
      if(tmp67)
      {
        tmp62 = data->simulationInfo->realParameter[239];
        tmp63 = data->simulationInfo->realParameter[240];
        tmp64 = data->simulationInfo->realParameter[239];
        tmp65 = data->simulationInfo->realParameter[240];
        tmp66 = (tmp64 * tmp64) + (tmp65 * tmp65);
        tmp68 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[239]) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */) + (data->simulationInfo->realParameter[240]) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */)) * ((tmp62 * tmp62) + (tmp63 * tmp63)),(tmp66 * tmp66),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp68 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */;
      }
      tmp70 = tmp68;
    }
    tmp72 = tmp70;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = tmp72;
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac72._dummyVarNLSJac72 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac72.dummyVarNLSJac72 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac72 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac72.dummyVarNLSJac72 - (pwFault.R * pwLine3.vr.im.SeedNLSJac72 - pwFault.X * pwLine3.vr.re.SeedNLSJac72) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac72.dummyVarNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_743(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,743};
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
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[241], 12, Less);
  tmp85 = (modelica_boolean)tmp73;
  if(tmp85)
  {
    tmp86 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[242], 13, Less);
    tmp83 = (modelica_boolean)(tmp74 && data->simulationInfo->booleanParameter[66]);
    if(tmp83)
    {
      tmp84 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[242], 13, Less);
      tmp81 = (modelica_boolean)tmp75;
      if(tmp81)
      {
        tmp76 = data->simulationInfo->realParameter[240];
        tmp77 = data->simulationInfo->realParameter[239];
        tmp78 = data->simulationInfo->realParameter[240];
        tmp79 = data->simulationInfo->realParameter[239];
        tmp80 = (tmp78 * tmp78) + (tmp79 * tmp79);
        tmp82 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[239]) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */) - ((data->simulationInfo->realParameter[240]) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */))) * ((tmp76 * tmp76) + (tmp77 * tmp77)),(tmp80 * tmp80),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp82 = jacobian->tmpVars[19] /* pwFault.p.ii.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */;
      }
      tmp84 = tmp82;
    }
    tmp86 = tmp84;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = tmp86;
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac72.dummyVarNLSJac72 else pwLine1.vr.re.SeedNLSJac72 - pwLine3.vr.re.SeedNLSJac72 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac72.dummyVarNLSJac72 + pwLine1.vr.im.SeedNLSJac72 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac72 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac72.dummyVarNLSJac72 + (-pwLine1.vr.re.SeedNLSJac72) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac72 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_744(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,744};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[285], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 11, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[284]) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[281]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[282]))) - ((data->simulationInfo->realParameter[283]) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[281]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[282]))))));
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac72.dummyVarNLSJac72 else pwLine1.vr.im.SeedNLSJac72 - pwLine3.vr.im.SeedNLSJac72 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac72.dummyVarNLSJac72 + (-pwLine1.vr.re.SeedNLSJac72) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac72 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac72.dummyVarNLSJac72 + pwLine1.vr.im.SeedNLSJac72 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac72 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_745(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,745};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[285], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 11, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[284]) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[281]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[282]))) + (data->simulationInfo->realParameter[283]) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[281]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[282])))));
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac72 else pwLine3.vr.re.SeedNLSJac72 - pwLine1.vr.re.SeedNLSJac72 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac72 + pwLine3.vr.im.SeedNLSJac72 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac72 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac72 + (-pwLine3.vr.re.SeedNLSJac72) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac72 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_746(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,746};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[285], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 11, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[284]) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[281]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[282]))) - ((data->simulationInfo->realParameter[283]) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[281]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[282]))))));
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac72 else pwLine3.vr.im.SeedNLSJac72 - pwLine1.vr.im.SeedNLSJac72 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac72 + (-pwLine3.vr.re.SeedNLSJac72) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac72 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac72 + pwLine3.vr.im.SeedNLSJac72 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac72 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_747(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,747};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[285], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 11, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[284]) * (jacobian->seedVars[8] /* pwLine4.is.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[281]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[282]))) + (data->simulationInfo->realParameter[283]) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[281]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[282])))));
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac72 else pwLine3.vr.im.SeedNLSJac72 - pwLine1.vs.im.SeedNLSJac72 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac72 + (-pwLine3.vr.re.SeedNLSJac72) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac72 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac72 + pwLine3.vr.im.SeedNLSJac72 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac72 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_748(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,748};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[274], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 9, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[273]) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[270]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[271]))) + (data->simulationInfo->realParameter[272]) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[270]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[271])))));
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac72 else pwLine3.vr.re.SeedNLSJac72 - pwLine1.vs.re.SeedNLSJac72 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac72 + pwLine3.vr.im.SeedNLSJac72 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac72 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac72 + (-pwLine3.vr.re.SeedNLSJac72) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac72 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_749(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,749};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[274], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 9, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[273]) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[270]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[271]))) - ((data->simulationInfo->realParameter[272]) * (jacobian->seedVars[7] /* pwLine3.ir.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[270]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[271]))))));
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac72 else pwLine1.vr.re.SeedNLSJac72 - pwLine1.vs.re.SeedNLSJac72 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac72 + pwLine1.vr.im.SeedNLSJac72 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac72 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac72 + (-pwLine1.vr.re.SeedNLSJac72) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac72 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_750(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,750};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[263], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 3, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[262]) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[259]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[260]))) - ((data->simulationInfo->realParameter[261]) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[259]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[260]))))));
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac72 else pwLine1.vs.im.SeedNLSJac72 - pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac72 + (-pwLine1.vs.re.SeedNLSJac72) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac72 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac72.dummyVarNLSJac72 + pwLine1.vs.im.SeedNLSJac72 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac72 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_751(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,751};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[252], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 1, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[251]) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[248]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[249]))) + (data->simulationInfo->realParameter[250]) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[248]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[249])))));
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac72.dummyVarNLSJac72 else pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 - pwLine1.vs.im.SeedNLSJac72 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac72.dummyVarNLSJac72 + (-pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac72.dummyVarNLSJac72 + pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_752(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,752};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[252], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 1, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[251]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[248]) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[249]))) + (data->simulationInfo->realParameter[250]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[248]) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[249])))));
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac72.dummyVarNLSJac72 else pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 - pwLine1.vs.re.SeedNLSJac72 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac72.dummyVarNLSJac72 + pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac72.dummyVarNLSJac72 + (-pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_753(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,753};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[252], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[251]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[248]) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[249]))) - ((data->simulationInfo->realParameter[250]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[248]) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[249]))))));
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac72 else pwLine1.vs.re.SeedNLSJac72 - pwLine3.vr.re.SeedNLSJac72 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac72 + pwLine1.vs.im.SeedNLSJac72 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac72 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac72 + (-pwLine1.vs.re.SeedNLSJac72) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac72 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_754(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,754};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[274], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 9, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[273]) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[270]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[271]))) - ((data->simulationInfo->realParameter[272]) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[270]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[271]))))));
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac72 else pwLine1.vs.im.SeedNLSJac72 - pwLine3.vr.im.SeedNLSJac72 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac72 + (-pwLine1.vs.re.SeedNLSJac72) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac72 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac72 + pwLine1.vs.im.SeedNLSJac72 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac72 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_755(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,755};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[274], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[275], 9, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[273]) * (jacobian->seedVars[3] /* pwLine3.is.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[270]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[271]))) + (data->simulationInfo->realParameter[272]) * (jacobian->seedVars[1] /* pwLine3.is.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[270]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[271])))));
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac72.dummyVarNLSJac72 else pwLine1.vs.re.SeedNLSJac72 - pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac72.dummyVarNLSJac72 + pwLine1.vs.im.SeedNLSJac72 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac72 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac72 + (-pwLine1.vs.re.SeedNLSJac72) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac72 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_756(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,756};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[252], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[253], 1, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp111 && tmp112)?jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[251]) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[248]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[249]))) - ((data->simulationInfo->realParameter[250]) * (jacobian->seedVars[4] /* pwLine.ir.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[248]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[249]))))));
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac72._dummyVarNLSJac72 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac72 + pwLine1.vs.im.SeedNLSJac72 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac72) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac72.dummyVarNLSJac72 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac72.dummyVarNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_757(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,757};
  jacobian->resultVars[16] /* $res17.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (jacobian->seedVars[0] /* constantLoad.p.ir.SeedNLSJac72 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */)) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac72._dummyVarNLSJac72 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac72.dummyVarNLSJac72 + pwLine1.vs.im.SeedNLSJac72 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac72 + pwLine1.vs.re.SeedNLSJac72 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac72.dummyVarNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_758(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,758};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = (data->localData[0]->realVars[120] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ii.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->localData[0]->realVars[51] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[121] /* pwLine1.vs.re variable */) * (jacobian->seedVars[0] /* constantLoad.p.ir.SeedNLSJac72 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */) * (data->localData[0]->realVars[52] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac72 else pwLine1.vs.im.SeedNLSJac72 - pwLine1.vr.im.SeedNLSJac72 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac72 + (-pwLine1.vs.re.SeedNLSJac72) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac72 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac72 + pwLine1.vs.im.SeedNLSJac72 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac72 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_759(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,759};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[263], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 3, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp113 && tmp114)?jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[262]) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[259]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[260]))) + (data->simulationInfo->realParameter[261]) * (jacobian->seedVars[9] /* pwLine1.is.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[259]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[260])))));
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac72._dummyVarNLSJac72 = $cse1 * gENCLS.vq.$pDERNLSJac72.dummyVarNLSJac72 + (-$cse2) * gENCLS.vd.$pDERNLSJac72.dummyVarNLSJac72 - pwLine1.vr.im.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_760(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,760};
  jacobian->resultVars[19] /* $res20.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[25] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac72._dummyVarNLSJac72 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac72 else pwLine1.vr.im.SeedNLSJac72 - pwLine1.vs.im.SeedNLSJac72 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac72 + (-pwLine1.vr.re.SeedNLSJac72) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac72 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac72 + pwLine1.vr.im.SeedNLSJac72 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac72 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_761(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,761};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[263], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp116, data->localData[0]->timeValue, data->simulationInfo->realParameter[264], 3, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = ((tmp115 && tmp116)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac72 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac72 SEED_VAR */ - ((data->simulationInfo->realParameter[262]) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac72 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */)) * (data->simulationInfo->realParameter[259]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[260]))) + (data->simulationInfo->realParameter[261]) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac72 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[259]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */) * (data->simulationInfo->realParameter[260])))));
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac72._dummyVarNLSJac72 = $cse2 * gENCLS.vq.$pDERNLSJac72.dummyVarNLSJac72 + $cse1 * gENCLS.vd.$pDERNLSJac72.dummyVarNLSJac72 - pwLine1.vr.re.SeedNLSJac72
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_762(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,762};
  jacobian->resultVars[21] /* $res22.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_VAR */ = (data->localData[0]->realVars[25] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[24] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac72.dummyVarNLSJac72 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac72 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac72_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac72;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_718(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_719(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_720(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_721(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_722(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_723(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_724(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_725(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_726(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_727(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_728(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_729(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_730(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_731(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_732(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_733(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_734(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_735(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_736(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_737(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_738(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_739(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_740(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_741(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_742(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_743(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_744(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_745(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_746(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_747(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_748(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_749(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_750(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_751(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_752(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_753(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_754(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_755(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_756(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_757(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_758(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_759(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_760(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_761(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_762(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 796
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._u._$pDERNLSJac73._dummyVarNLSJac73 = if eXST1_1.feedback.y > eXST1_1.limiter.uMax then 0.0 else if eXST1_1.feedback.y < eXST1_1.limiter.uMin then 0.0 else eXST1_1.feedback.y.SeedNLSJac73
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_796(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,796};
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_real tmp120;
  RELATIONHYSTERESIS(tmp117, data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */, data->simulationInfo->realParameter[129], 16, Greater);
  tmp119 = (modelica_boolean)tmp117;
  if(tmp119)
  {
    tmp120 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp118, data->localData[0]->realVars[65] /* eXST1_1.feedback.y variable */, data->simulationInfo->realParameter[130], 17, Less);
    tmp120 = (tmp118?0.0:jacobian->seedVars[0] /* eXST1_1.feedback.y.SeedNLSJac73 SEED_VAR */);
  }
  jacobian->tmpVars[0] /* eXST1_1.imLeadLag.u.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */ = tmp120;
  TRACE_POP
}

/*
equation index: 797
type: SIMPLE_ASSIGN
eXST1_1._imLeadLag._TF._y._$pDERNLSJac73._dummyVarNLSJac73 = eXST1_1.imLeadLag.TF.d * eXST1_1.imLeadLag.u.$pDERNLSJac73.dummyVarNLSJac73
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_797(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,797};
  jacobian->tmpVars[1] /* eXST1_1.imLeadLag.TF.y.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[124]) * (jacobian->tmpVars[0] /* eXST1_1.imLeadLag.u.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
eXST1_1._K_a._u._$pDERNLSJac73._dummyVarNLSJac73 = if abs(eXST1_1.imLeadLag.T1 - eXST1_1.imLeadLag.T2) < 1e-15 then eXST1_1.imLeadLag.K * eXST1_1.imLeadLag.u.$pDERNLSJac73.dummyVarNLSJac73 else eXST1_1.imLeadLag.TF.y.$pDERNLSJac73.dummyVarNLSJac73
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_798(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,798};
  modelica_boolean tmp121;
  tmp121 = Less(fabs(data->simulationInfo->realParameter[114] - data->simulationInfo->realParameter[115]),1e-15);
  jacobian->tmpVars[2] /* eXST1_1.K_a.u.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */ = (tmp121?(data->simulationInfo->realParameter[113]) * (jacobian->tmpVars[0] /* eXST1_1.imLeadLag.u.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */):jacobian->tmpVars[1] /* eXST1_1.imLeadLag.TF.y.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
eXST1_1._K_a._y._$pDERNLSJac73._dummyVarNLSJac73 = eXST1_1.K_a.k * eXST1_1.K_a.u.$pDERNLSJac73.dummyVarNLSJac73
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_799(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,799};
  jacobian->tmpVars[3] /* eXST1_1.K_a.y.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[84]) * (jacobian->tmpVars[2] /* eXST1_1.K_a.u.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
eXST1_1._Vm1._y._$pDERNLSJac73._dummyVarNLSJac73 = if abs(eXST1_1.Vm1.T) <= 1e-15 then eXST1_1.K_a.y.$pDERNLSJac73.dummyVarNLSJac73 * eXST1_1.Vm1.K else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_800(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,800};
  modelica_boolean tmp122;
  tmp122 = LessEq(fabs(data->simulationInfo->realParameter[102]),1e-15);
  jacobian->tmpVars[4] /* eXST1_1.Vm1.y.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */ = (tmp122?(jacobian->tmpVars[3] /* eXST1_1.K_a.y.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[101]):0.0);
  TRACE_POP
}

/*
equation index: 801
type: SIMPLE_ASSIGN
eXST1_1._imDerivativeLag._y._$pDERNLSJac73._dummyVarNLSJac73 = 0.1 * eXST1_1.Vm1.y.$pDERNLSJac73.dummyVarNLSJac73 / eXST1_1.imDerivativeLag.T
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_801(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,801};
  jacobian->tmpVars[5] /* eXST1_1.imDerivativeLag.y.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */ = (0.1) * (DIVISION(jacobian->tmpVars[4] /* eXST1_1.Vm1.y.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[109],"eXST1_1.imDerivativeLag.T"));
  TRACE_POP
}

/*
equation index: 802
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac73._dummyVarNLSJac73 = (-eXST1_1.imDerivativeLag.y.$pDERNLSJac73.dummyVarNLSJac73) - eXST1_1.feedback.y.SeedNLSJac73
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_802(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,802};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_VAR */ = (-jacobian->tmpVars[5] /* eXST1_1.imDerivativeLag.y.$pDERNLSJac73.dummyVarNLSJac73 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* eXST1_1.feedback.y.SeedNLSJac73 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacNLSJac73_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_NLSJac73;
  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_796(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_797(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_798(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_799(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_800(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_801(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXST1_eqFunction_802(data, threadData, jacobian, parentJacobian);
  
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
int OpenIPSL_Examples_Controls_PSSE_ES_EXST1_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXST1_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


