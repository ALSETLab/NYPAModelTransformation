/* Jacobians 5 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.SEXS_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianNLSJac83(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,4,3,3,3,3,4,4,4,4,4,7,7,4,4,11,11,8,8};
  const int rowIndex[112] = {0,13,14,15,0,11,12,13,11,12,14,15,9,10,11,12,0,9,10,13,1,5,6,1,3,4,2,5,6,2,3,4,0,11,12,13,16,19,20,21,16,19,20,21,17,18,19,20,17,18,19,20,3,14,16,18,19,20,21,4,15,16,17,19,20,21,7,8,11,12,7,8,11,12,0,5,7,9,10,11,12,13,14,15,20,0,6,8,9,10,11,12,13,14,15,19,1,2,3,4,5,6,13,21,0,1,2,3,4,5,6,16};
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
  jacobian->sparsePattern.colorCols[9] = 7;
  jacobian->sparsePattern.colorCols[13] = 7;
  jacobian->sparsePattern.colorCols[2] = 8;
  jacobian->sparsePattern.colorCols[4] = 8;
  jacobian->sparsePattern.colorCols[12] = 8;
  jacobian->sparsePattern.colorCols[1] = 9;
  jacobian->sparsePattern.colorCols[6] = 9;
  jacobian->sparsePattern.colorCols[7] = 9;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[0] = 10;
  jacobian->sparsePattern.colorCols[3] = 10;
  jacobian->sparsePattern.colorCols[5] = 10;
  jacobian->sparsePattern.colorCols[8] = 10;
  jacobian->sparsePattern.colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+10] = {0,7,7,7,7,7,7,7,2,3,2};
  const int rowIndex[56] = {2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,2,3,4,5,7,8,9,6,7,3,8,9,3,9};
  int i = 0;
  
  jacobian->sizeCols = 10;
  jacobian->sizeRows = 10;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(10,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(10,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((10+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(56*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 56;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(10*sizeof(int));
  jacobian->sparsePattern.maxColors = 9;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (10+1)*sizeof(int));
  
  for(i=2;i<10+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 56*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[8] = 1;
  jacobian->sparsePattern.colorCols[5] = 2;
  jacobian->sparsePattern.colorCols[4] = 3;
  jacobian->sparsePattern.colorCols[3] = 4;
  jacobian->sparsePattern.colorCols[2] = 5;
  jacobian->sparsePattern.colorCols[6] = 6;
  jacobian->sparsePattern.colorCols[7] = 7;
  jacobian->sparsePattern.colorCols[9] = 7;
  jacobian->sparsePattern.colorCols[1] = 8;
  jacobian->sparsePattern.colorCols[0] = 9;
  TRACE_POP
  return 0;
}


/*
equation index: 198
type: SIMPLE_ASSIGN
constantLoad._v._$pDERNLSJac83._dummyVarNLSJac83 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac83 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac83) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,198};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[103] /* pwLine1.vs.re variable */;
  tmp7 = data->localData[0]->realVars[102] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */) + (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */),sqrt((tmp6 * tmp6) + (tmp7 * tmp7)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
constantLoad._kI._$pDERNLSJac83._dummyVarNLSJac83 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,199};
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
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[49] /* constantLoad.v variable */, 0.5, 5, Less);
  tmp50 = (modelica_boolean)tmp8;
  if(tmp50)
  {
    tmp9 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp10 = -1.0 + data->simulationInfo->realParameter[64];
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
    }tmp16 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp17 = data->simulationInfo->realParameter[64];
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
    }tmp31 = (modelica_boolean)(data->localData[0]->realVars[49] /* constantLoad.v variable */ == 0.0);
    if(tmp31)
    {
      tmp32 = 0.0;
    }
    else
    {
      tmp24 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
      tmp25 = data->simulationInfo->realParameter[64] - 1.0;
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
      tmp32 = (tmp26) * ((data->simulationInfo->realParameter[64]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */));
    }
    tmp41 = (modelica_boolean)(data->localData[0]->realVars[49] /* constantLoad.v variable */ == 0.0);
    if(tmp41)
    {
      tmp42 = 0.0;
    }
    else
    {
      tmp34 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
      tmp35 = -1.0 + data->simulationInfo->realParameter[64] - 1.0;
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
      tmp42 = (tmp36) * ((-1.0 + data->simulationInfo->realParameter[64]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */));
    }
    tmp43 = data->localData[0]->realVars[49] /* constantLoad.v variable */;
    tmp44 = data->simulationInfo->realParameter[64];
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
    tmp51 = (data->simulationInfo->realParameter[58]) * ((data->simulationInfo->realParameter[64]) * ((tmp11) * (((-exp(((-data->simulationInfo->realParameter[58])) * (tmp18)))) * ((data->simulationInfo->realParameter[58]) * (tmp32))) + (tmp42) * (exp(((-data->simulationInfo->realParameter[58])) * (tmp45)))));
  }
  else
  {
    tmp51 = 0.0;
  }
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = tmp51;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
constantLoad._kP._$pDERNLSJac83._dummyVarNLSJac83 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,200};
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->realVars[49] /* constantLoad.v variable */, data->simulationInfo->realParameter[37], 4, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (tmp52?(data->simulationInfo->realParameter[57]) * (((-sin((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77])))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77]))) + (data->simulationInfo->realParameter[63]) * ((cos((data->localData[0]->realVars[49] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77]))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77]))):0.0);
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
constantLoad._Q._$pDERNLSJac83._dummyVarNLSJac83 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 + constantLoad.kI.$pDERNLSJac83.dummyVarNLSJac83 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 + constantLoad.kP.$pDERNLSJac83.dummyVarNLSJac83 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 + constantLoad.kI.$pDERNLSJac83.dummyVarNLSJac83 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 + constantLoad.kP.$pDERNLSJac83.dummyVarNLSJac83 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[73], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], 3, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = ((tmp53 && tmp54)?(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[45] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[66]):(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[45] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42]));
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
constantLoad._P._$pDERNLSJac83._dummyVarNLSJac83 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 + constantLoad.kI.$pDERNLSJac83.dummyVarNLSJac83 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 + constantLoad.kP.$pDERNLSJac83.dummyVarNLSJac83 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 + constantLoad.kI.$pDERNLSJac83.dummyVarNLSJac83 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 + constantLoad.kP.$pDERNLSJac83.dummyVarNLSJac83 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[73], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], 3, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = ((tmp55 && tmp56)?(data->simulationInfo->realParameter[41]) * ((data->localData[0]->realVars[45] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * (((2.0) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[65]):(data->simulationInfo->realParameter[41]) * ((data->localData[0]->realVars[45] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * (((2.0) * (data->localData[0]->realVars[49] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43]));
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
gENROE._PSId._$pDERNLSJac83._dummyVarNLSJac83 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[155])) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac83 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
pwLine._is._re._$pDERNLSJac83._dummyVarNLSJac83 = ($cse7 * gENROE.iq.SeedNLSJac83 + $cse6 * gENROE.id.SeedNLSJac83) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac83 SEED_VAR */) + (data->localData[0]->realVars[24] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[104]);
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
pwLine._is._im._$pDERNLSJac83._dummyVarNLSJac83 = ($cse6 * gENROE.iq.SeedNLSJac83 - $cse7 * gENROE.id.SeedNLSJac83) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[24] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac83 SEED_VAR */) - ((data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac83 SEED_VAR */))) * (data->simulationInfo->realParameter[104]);
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
gENROE._uq._$pDERNLSJac83._dummyVarNLSJac83 = gENROE.PSId.$pDERNLSJac83.dummyVarNLSJac83 - gENROE.R_a * gENROE.iq.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac83 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
gENROE._PSIq._$pDERNLSJac83._dummyVarNLSJac83 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[156])) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac83 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
gENROE._ud._$pDERNLSJac83._dummyVarNLSJac83 = (-gENROE.PSIq.$pDERNLSJac83.dummyVarNLSJac83) - gENROE.R_a * gENROE.id.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[138]) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac83 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
pwLine._vs._re._$pDERNLSJac83._dummyVarNLSJac83 = $cse6 * gENROE.ud.$pDERNLSJac83.dummyVarNLSJac83 + $cse7 * gENROE.uq.$pDERNLSJac83.dummyVarNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,209};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[24] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
pwLine._vs._im._$pDERNLSJac83._dummyVarNLSJac83 = $cse6 * gENROE.uq.$pDERNLSJac83.dummyVarNLSJac83 - $cse7 * gENROE.ud.$pDERNLSJac83.dummyVarNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,210};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[24] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[25] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
gENCLS._p._ir._$pDERNLSJac83._dummyVarNLSJac83 = ((-$cse1) * gENCLS.id.SeedNLSJac83 - $cse2 * gENCLS.iq.SeedNLSJac83) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_211(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,211};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[20] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac83 SEED_VAR */) - ((data->localData[0]->realVars[21] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac83 SEED_VAR */))) * (data->simulationInfo->realParameter[78]);
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
gENCLS._p._ii._$pDERNLSJac83._dummyVarNLSJac83 = ($cse2 * gENCLS.id.SeedNLSJac83 - $cse1 * gENCLS.iq.SeedNLSJac83) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_212(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,212};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[21] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac83 SEED_VAR */) - ((data->localData[0]->realVars[20] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac83 SEED_VAR */))) * (data->simulationInfo->realParameter[78]);
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
gENCLS._vd._$pDERNLSJac83._dummyVarNLSJac83 = gENCLS.X_d * gENCLS.iq.SeedNLSJac83 - gENCLS.R_a * gENCLS.id.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_213(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,213};
  jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[87]) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac83 SEED_VAR */) - ((data->simulationInfo->realParameter[84]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac83 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
gENCLS._vq._$pDERNLSJac83._dummyVarNLSJac83 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac83 - gENCLS.X_d * gENCLS.id.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_214(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,214};
  jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[84])) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac83 SEED_VAR */) - ((data->simulationInfo->realParameter[87]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac83 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
pwLine1._ir._re._$pDERNLSJac83._dummyVarNLSJac83 = (-pwLine4.ir.re.SeedNLSJac83) - gENCLS.p.ir.$pDERNLSJac83.dummyVarNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_215(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,215};
  jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac83 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
pwLine1._ir._im._$pDERNLSJac83._dummyVarNLSJac83 = (-pwLine4.ir.im.SeedNLSJac83) - gENCLS.p.ii.$pDERNLSJac83.dummyVarNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_216(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,216};
  jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac83 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
pwFault._p._ir._$pDERNLSJac83._dummyVarNLSJac83 = (-pwLine3.ir.re.SeedNLSJac83) - pwLine4.is.re.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_217(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,217};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac83 SEED_VAR */) - jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac83 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
pwFault._p._ii._$pDERNLSJac83._dummyVarNLSJac83 = (-pwLine3.ir.im.SeedNLSJac83) - pwLine4.is.im.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_218(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,218};
  jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac83 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac83 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
pwLine._ir._im._$pDERNLSJac83._dummyVarNLSJac83 = (-pwLine1.is.im.SeedNLSJac83) - pwLine3.is.im.SeedNLSJac83 - constantLoad.p.ii.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_219(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,219};
  jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac83 SEED_VAR */) - jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac83 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
pwLine3._is._re._$pDERNLSJac83._dummyVarNLSJac83 = (-pwLine.ir.re.SeedNLSJac83) - pwLine1.is.re.SeedNLSJac83 - constantLoad.p.ir.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_220(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,220};
  jacobian->tmpVars[22] /* pwLine3.is.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine.ir.re.SeedNLSJac83 SEED_VAR */) - jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[4] /* constantLoad.p.ir.SeedNLSJac83 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.$pDERNLSJac83.dummyVarNLSJac83 else pwLine1.vs.re.SeedNLSJac83 - pwLine3.vr.re.SeedNLSJac83 - (pwLine3.Z.re * (pwLine3.is.re.$pDERNLSJac83.dummyVarNLSJac83 + pwLine1.vs.im.SeedNLSJac83 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac83 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac83 + (-pwLine1.vs.re.SeedNLSJac83) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac83 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_221(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,221};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[221], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[222], 9, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->tmpVars[22] /* pwLine3.is.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[220]) * (jacobian->tmpVars[22] /* pwLine3.is.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[217]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[218]))) - ((data->simulationInfo->realParameter[219]) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[217]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[218]))))));
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac83._dummyVarNLSJac83 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac83.dummyVarNLSJac83 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac83 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac83.dummyVarNLSJac83 - (pwFault.R * pwLine3.vr.im.SeedNLSJac83 - pwFault.X * pwLine3.vr.re.SeedNLSJac83) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac83.dummyVarNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_222(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,222};
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
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[188], 10, Less);
  tmp71 = (modelica_boolean)tmp59;
  if(tmp71)
  {
    tmp72 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[189], 11, Less);
    tmp69 = (modelica_boolean)(tmp60 && data->simulationInfo->booleanParameter[63]);
    if(tmp69)
    {
      tmp70 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[189], 11, Less);
      tmp67 = (modelica_boolean)tmp61;
      if(tmp67)
      {
        tmp62 = data->simulationInfo->realParameter[187];
        tmp63 = data->simulationInfo->realParameter[186];
        tmp64 = data->simulationInfo->realParameter[187];
        tmp65 = data->simulationInfo->realParameter[186];
        tmp66 = (tmp64 * tmp64) + (tmp65 * tmp65);
        tmp68 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[186]) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */) - ((data->simulationInfo->realParameter[187]) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */))) * ((tmp62 * tmp62) + (tmp63 * tmp63)),(tmp66 * tmp66),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp68 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */;
      }
      tmp70 = tmp68;
    }
    tmp72 = tmp70;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = tmp72;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac83._dummyVarNLSJac83 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac83.dummyVarNLSJac83 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac83 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac83.dummyVarNLSJac83 - (pwFault.R * pwLine3.vr.re.SeedNLSJac83 + pwFault.X * pwLine3.vr.im.SeedNLSJac83) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac83.dummyVarNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_223(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,223};
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
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[188], 10, Less);
  tmp85 = (modelica_boolean)tmp73;
  if(tmp85)
  {
    tmp86 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[189], 11, Less);
    tmp83 = (modelica_boolean)(tmp74 && data->simulationInfo->booleanParameter[63]);
    if(tmp83)
    {
      tmp84 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[189], 11, Less);
      tmp81 = (modelica_boolean)tmp75;
      if(tmp81)
      {
        tmp76 = data->simulationInfo->realParameter[186];
        tmp77 = data->simulationInfo->realParameter[187];
        tmp78 = data->simulationInfo->realParameter[186];
        tmp79 = data->simulationInfo->realParameter[187];
        tmp80 = (tmp78 * tmp78) + (tmp79 * tmp79);
        tmp82 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[186]) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */) + (data->simulationInfo->realParameter[187]) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */)) * ((tmp76 * tmp76) + (tmp77 * tmp77)),(tmp80 * tmp80),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp82 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */;
      }
      tmp84 = tmp82;
    }
    tmp86 = tmp84;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = tmp86;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac83 else pwLine3.vr.re.SeedNLSJac83 - pwLine1.vr.re.SeedNLSJac83 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac83 + pwLine3.vr.im.SeedNLSJac83 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac83 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac83 + (-pwLine3.vr.re.SeedNLSJac83) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac83 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_224(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,224};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[232], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[233], 13, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[231]) * (jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[228]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[229]))) - ((data->simulationInfo->realParameter[230]) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[228]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[229]))))));
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac83 else pwLine3.vr.im.SeedNLSJac83 - pwLine1.vr.im.SeedNLSJac83 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac83 + (-pwLine3.vr.re.SeedNLSJac83) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac83 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac83 + pwLine3.vr.im.SeedNLSJac83 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac83 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_225(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,225};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[232], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[233], 13, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[231]) * (jacobian->seedVars[6] /* pwLine4.is.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[228]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[229]))) + (data->simulationInfo->realParameter[230]) * (jacobian->seedVars[8] /* pwLine4.is.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[228]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[229])))));
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac83 else pwLine3.vr.im.SeedNLSJac83 - pwLine1.vs.im.SeedNLSJac83 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac83 + (-pwLine3.vr.re.SeedNLSJac83) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac83 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac83 + pwLine3.vr.im.SeedNLSJac83 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac83 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_226(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,226};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[221], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[222], 9, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[220]) * (jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[217]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[218]))) + (data->simulationInfo->realParameter[219]) * (jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[217]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[218])))));
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac83 else pwLine3.vr.re.SeedNLSJac83 - pwLine1.vs.re.SeedNLSJac83 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac83 + pwLine3.vr.im.SeedNLSJac83 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac83 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac83 + (-pwLine3.vr.re.SeedNLSJac83) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac83 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_227(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,227};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[221], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[222], 9, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[220]) * (jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[217]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[218]))) - ((data->simulationInfo->realParameter[219]) * (jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[217]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[218]))))));
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac83.dummyVarNLSJac83 else pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 - pwLine1.vs.im.SeedNLSJac83 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac83.dummyVarNLSJac83 + (-pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac83.dummyVarNLSJac83 + pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_228(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,228};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[199], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[200], 1, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[198]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[195]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[196]))) + (data->simulationInfo->realParameter[197]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[195]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[196])))));
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac83.dummyVarNLSJac83 else pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 - pwLine1.vs.re.SeedNLSJac83 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac83.dummyVarNLSJac83 + pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac83.dummyVarNLSJac83 + (-pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_229(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,229};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[199], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[200], 1, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[198]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[195]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[196]))) - ((data->simulationInfo->realParameter[197]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[195]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[196]))))));
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac83._dummyVarNLSJac83 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac83 + pwLine1.vs.im.SeedNLSJac83 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac83) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac83.dummyVarNLSJac83 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_230(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,230};
  jacobian->resultVars[9] /* $res10.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (jacobian->seedVars[4] /* constantLoad.p.ir.SeedNLSJac83 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */)) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac83 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac83._dummyVarNLSJac83 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac83 + pwLine1.vs.im.SeedNLSJac83 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac83 + pwLine1.vs.re.SeedNLSJac83 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac83.dummyVarNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_231(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,231};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = (data->localData[0]->realVars[102] /* pwLine1.vs.im variable */) * (jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac83 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->localData[0]->realVars[47] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[103] /* pwLine1.vs.re variable */) * (jacobian->seedVars[4] /* constantLoad.p.ir.SeedNLSJac83 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */) * (data->localData[0]->realVars[48] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac83.dummyVarNLSJac83 else pwLine1.vs.im.SeedNLSJac83 - pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac83.dummyVarNLSJac83 + (-pwLine1.vs.re.SeedNLSJac83) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac83 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac83 + pwLine1.vs.im.SeedNLSJac83 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac83 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[199], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[200], 1, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[198]) * (jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[195]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[196]))) + (data->simulationInfo->realParameter[197]) * (jacobian->seedVars[1] /* pwLine.ir.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[195]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[196])))));
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac83 else pwLine1.vs.re.SeedNLSJac83 - pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac83 + pwLine1.vs.im.SeedNLSJac83 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac83 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac83.dummyVarNLSJac83 + (-pwLine1.vs.re.SeedNLSJac83) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac83 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_233(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,233};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[199], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[200], 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[1] /* pwLine.ir.re.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[198]) * (jacobian->seedVars[1] /* pwLine.ir.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[195]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[196]))) - ((data->simulationInfo->realParameter[197]) * (jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[195]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[196]))))));
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac83 else pwLine1.vs.im.SeedNLSJac83 - pwLine3.vr.im.SeedNLSJac83 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac83 + (-pwLine1.vs.re.SeedNLSJac83) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac83 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.$pDERNLSJac83.dummyVarNLSJac83 + pwLine1.vs.im.SeedNLSJac83 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac83 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_234(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,234};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[221], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[222], 9, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[220]) * (jacobian->seedVars[9] /* pwLine3.is.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[217]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[218]))) + (data->simulationInfo->realParameter[219]) * (jacobian->tmpVars[22] /* pwLine3.is.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[217]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[218])))));
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac83 else pwLine1.vs.re.SeedNLSJac83 - pwLine1.vr.re.SeedNLSJac83 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac83 + pwLine1.vs.im.SeedNLSJac83 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac83 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac83 + (-pwLine1.vs.re.SeedNLSJac83) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac83 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[210], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[211], 7, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[209]) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[206]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[207]))) - ((data->simulationInfo->realParameter[208]) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[206]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[207]))))));
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac83 else pwLine1.vs.im.SeedNLSJac83 - pwLine1.vr.im.SeedNLSJac83 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac83 + (-pwLine1.vs.re.SeedNLSJac83) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac83 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac83 + pwLine1.vs.im.SeedNLSJac83 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac83 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[210], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[211], 7, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[209]) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[206]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[207]))) + (data->simulationInfo->realParameter[208]) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[206]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[207])))));
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac83 else pwLine1.vr.re.SeedNLSJac83 - pwLine3.vr.re.SeedNLSJac83 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac83 + pwLine1.vr.im.SeedNLSJac83 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac83 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac83 + (-pwLine1.vr.re.SeedNLSJac83) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac83 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[232], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[233], 13, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[231]) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[228]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[229]))) - ((data->simulationInfo->realParameter[230]) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[228]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[229]))))));
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac83._dummyVarNLSJac83 = $cse1 * gENCLS.vq.$pDERNLSJac83.dummyVarNLSJac83 + (-$cse2) * gENCLS.vd.$pDERNLSJac83.dummyVarNLSJac83 - pwLine1.vr.im.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = (data->localData[0]->realVars[20] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[21] /* $cse2 variable */)) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac83._dummyVarNLSJac83 = $cse2 * gENCLS.vq.$pDERNLSJac83.dummyVarNLSJac83 + $cse1 * gENCLS.vd.$pDERNLSJac83.dummyVarNLSJac83 - pwLine1.vr.re.SeedNLSJac83
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,239};
  jacobian->resultVars[18] /* $res19.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = (data->localData[0]->realVars[21] /* $cse2 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[20] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.$pDERNLSJac83.dummyVarNLSJac83 else pwLine1.vr.re.SeedNLSJac83 - pwLine1.vs.re.SeedNLSJac83 - (pwLine1.Z.re * (pwLine1.ir.re.$pDERNLSJac83.dummyVarNLSJac83 + pwLine1.vr.im.SeedNLSJac83 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac83 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac83.dummyVarNLSJac83 + (-pwLine1.vr.re.SeedNLSJac83) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac83 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[210], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[211], 7, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp111 && tmp112)?jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[209]) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[206]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[207]))) - ((data->simulationInfo->realParameter[208]) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[206]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[207]))))));
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac83.dummyVarNLSJac83 else pwLine1.vr.im.SeedNLSJac83 - pwLine1.vs.im.SeedNLSJac83 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac83.dummyVarNLSJac83 + (-pwLine1.vr.re.SeedNLSJac83) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac83 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.$pDERNLSJac83.dummyVarNLSJac83 + pwLine1.vr.im.SeedNLSJac83 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac83 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[210], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[211], 7, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp113 && tmp114)?jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[209]) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[206]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[207]))) + (data->simulationInfo->realParameter[208]) * (jacobian->tmpVars[17] /* pwLine1.ir.re.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[206]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[207])))));
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac83._dummyVarNLSJac83 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac83 else pwLine1.vr.im.SeedNLSJac83 - pwLine3.vr.im.SeedNLSJac83 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac83 + (-pwLine1.vr.re.SeedNLSJac83) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac83 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac83 + pwLine1.vr.im.SeedNLSJac83 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac83 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[232], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp116, data->localData[0]->timeValue, data->simulationInfo->realParameter[233], 13, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac83.dummyVarNLSJac83 JACOBIAN_VAR */ = ((tmp115 && tmp116)?jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac83 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac83 SEED_VAR */ - ((data->simulationInfo->realParameter[231]) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac83 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */)) * (data->simulationInfo->realParameter[228]) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[229]))) + (data->simulationInfo->realParameter[230]) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac83 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[228]) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac83 SEED_VAR */) * (data->simulationInfo->realParameter[229])))));
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacNLSJac83_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_SEXS_INDEX_JAC_NLSJac83;
  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_198(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_199(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_200(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_201(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_202(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_203(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_204(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_205(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_206(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_207(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_208(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_209(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_210(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_211(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_212(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_213(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_214(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_215(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_216(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_217(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_218(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_219(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_220(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_221(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_222(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_223(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_224(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_225(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_226(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_227(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_228(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_229(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_230(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_231(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_232(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_233(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_234(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_235(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_236(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_237(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_238(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_239(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_240(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_241(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_SEXS_eqFunction_242(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_SEXS_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_SEXS_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


