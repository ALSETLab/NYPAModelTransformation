/* Jacobians 5 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianNLSJac69(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,8,11,11,8};
  const int rowIndex[112] = {1,12,13,14,1,10,11,12,1,12,13,14,1,10,11,12,5,15,16,5,6,7,4,6,7,4,15,16,1,2,3,12,1,2,3,12,17,18,19,20,17,18,19,20,0,17,18,21,0,17,18,21,13,16,17,18,19,20,21,0,14,15,17,18,19,20,1,8,9,12,1,8,9,12,2,4,5,6,7,15,16,17,1,2,3,6,9,10,11,12,13,14,19,1,2,3,7,8,10,11,12,13,14,20,3,4,5,6,7,15,16,18};
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
  jacobian->sparsePattern.colorCols[20] = 1;
  jacobian->sparsePattern.colorCols[19] = 2;
  jacobian->sparsePattern.colorCols[17] = 3;
  jacobian->sparsePattern.colorCols[21] = 3;
  jacobian->sparsePattern.colorCols[16] = 4;
  jacobian->sparsePattern.colorCols[18] = 4;
  jacobian->sparsePattern.colorCols[9] = 5;
  jacobian->sparsePattern.colorCols[15] = 5;
  jacobian->sparsePattern.colorCols[8] = 6;
  jacobian->sparsePattern.colorCols[14] = 6;
  jacobian->sparsePattern.colorCols[3] = 7;
  jacobian->sparsePattern.colorCols[13] = 7;
  jacobian->sparsePattern.colorCols[2] = 8;
  jacobian->sparsePattern.colorCols[12] = 8;
  jacobian->sparsePattern.colorCols[1] = 9;
  jacobian->sparsePattern.colorCols[5] = 9;
  jacobian->sparsePattern.colorCols[7] = 9;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[0] = 10;
  jacobian->sparsePattern.colorCols[4] = 10;
  jacobian->sparsePattern.colorCols[6] = 10;
  jacobian->sparsePattern.colorCols[10] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+13] = {0,4,4,2,3,5,10,10,10,10,10,10,10,2};
  const int rowIndex[90] = {0,2,3,4,1,2,3,4,2,4,2,3,4,1,2,3,4,8,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,11,12};
  int i = 0;
  
  jacobian->sizeCols = 13;
  jacobian->sizeRows = 13;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(90*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 90;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern.maxColors = 12;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 90*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  jacobian->sparsePattern.colorCols[4] = 2;
  jacobian->sparsePattern.colorCols[3] = 3;
  jacobian->sparsePattern.colorCols[1] = 4;
  jacobian->sparsePattern.colorCols[10] = 5;
  jacobian->sparsePattern.colorCols[9] = 6;
  jacobian->sparsePattern.colorCols[8] = 7;
  jacobian->sparsePattern.colorCols[7] = 8;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[12] = 10;
  jacobian->sparsePattern.colorCols[2] = 10;
  jacobian->sparsePattern.colorCols[6] = 11;
  jacobian->sparsePattern.colorCols[5] = 12;
  TRACE_POP
  return 0;
}


/*
equation index: 816
type: SIMPLE_ASSIGN
constantLoad._v._$pDERNLSJac69._dummyVarNLSJac69 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac69 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac69) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_816(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,816};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp7 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */) + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */),sqrt((tmp6 * tmp6) + (tmp7 * tmp7)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
constantLoad._kI._$pDERNLSJac69._dummyVarNLSJac69 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_817(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,817};
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
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp50 = (modelica_boolean)tmp8;
  if(tmp50)
  {
    tmp9 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp16 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
    }tmp31 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp31)
    {
      tmp32 = 0.0;
    }
    else
    {
      tmp24 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
      tmp32 = (tmp26) * ((data->simulationInfo->realParameter[63]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */));
    }
    tmp41 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp41)
    {
      tmp42 = 0.0;
    }
    else
    {
      tmp34 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
      tmp42 = (tmp36) * ((-1.0 + data->simulationInfo->realParameter[63]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */));
    }
    tmp43 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
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
  jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = tmp51;
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
constantLoad._kP._$pDERNLSJac69._dummyVarNLSJac69 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_818(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,818};
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[36], 13, Less);
  jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (tmp52?(data->simulationInfo->realParameter[56]) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76])))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[76]))) + (data->simulationInfo->realParameter[62]) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[76]))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[76]))):0.0);
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
constantLoad._Q._$pDERNLSJac69._dummyVarNLSJac69 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 + constantLoad.kI.$pDERNLSJac69.dummyVarNLSJac69 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 + constantLoad.kP.$pDERNLSJac69.dummyVarNLSJac69 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 + constantLoad.kI.$pDERNLSJac69.dummyVarNLSJac69 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 + constantLoad.kP.$pDERNLSJac69.dummyVarNLSJac69 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_819(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,819};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 3, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = ((tmp53 && tmp54)?(data->simulationInfo->realParameter[39]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41] + data->simulationInfo->realParameter[65]):(data->simulationInfo->realParameter[39]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[43]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[41]));
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
constantLoad._P._$pDERNLSJac69._dummyVarNLSJac69 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 + constantLoad.kI.$pDERNLSJac69.dummyVarNLSJac69 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 + constantLoad.kP.$pDERNLSJac69.dummyVarNLSJac69 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 + constantLoad.kI.$pDERNLSJac69.dummyVarNLSJac69 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 + constantLoad.kP.$pDERNLSJac69.dummyVarNLSJac69 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_820(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,820};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[72], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[72] + data->simulationInfo->realParameter[66], 3, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = ((tmp55 && tmp56)?(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[64]):(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[1] /* constantLoad.kI.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* constantLoad.kP.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42]));
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
gENROE._PSIq._$pDERNLSJac69._dummyVarNLSJac69 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_821(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,821};
  jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[257])) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac69 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
pwLine._is._re._$pDERNLSJac69._dummyVarNLSJac69 = ($cse7 * gENROE.iq.SeedNLSJac69 + $cse6 * gENROE.id.SeedNLSJac69) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_822(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,822};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac69 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[205]);
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
pwLine._is._im._$pDERNLSJac69._dummyVarNLSJac69 = ($cse6 * gENROE.iq.SeedNLSJac69 - $cse7 * gENROE.id.SeedNLSJac69) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_823(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,823};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac69 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac69 SEED_VAR */))) * (data->simulationInfo->realParameter[205]);
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
gENROE._ud._$pDERNLSJac69._dummyVarNLSJac69 = (-gENROE.PSIq.$pDERNLSJac69.dummyVarNLSJac69) - gENROE.R_a * gENROE.id.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_824(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,824};
  jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROE.PSIq.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[239]) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac69 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
gENROE._PSId._$pDERNLSJac69._dummyVarNLSJac69 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_825(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,825};
  jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[256])) * (jacobian->seedVars[16] /* gENROE.id.SeedNLSJac69 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
gENROE._uq._$pDERNLSJac69._dummyVarNLSJac69 = gENROE.PSId.$pDERNLSJac69.dummyVarNLSJac69 - gENROE.R_a * gENROE.iq.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_826(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,826};
  jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROE.PSId.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[239]) * (jacobian->seedVars[17] /* gENROE.iq.SeedNLSJac69 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
pwLine._vs._re._$pDERNLSJac69._dummyVarNLSJac69 = $cse6 * gENROE.ud.$pDERNLSJac69.dummyVarNLSJac69 + $cse7 * gENROE.uq.$pDERNLSJac69.dummyVarNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_827(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,827};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
pwLine._vs._im._$pDERNLSJac69._dummyVarNLSJac69 = $cse6 * gENROE.uq.$pDERNLSJac69.dummyVarNLSJac69 - $cse7 * gENROE.ud.$pDERNLSJac69.dummyVarNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_828(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,828};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.uq.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.ud.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
gENCLS._p._ir._$pDERNLSJac69._dummyVarNLSJac69 = ((-$cse1) * gENCLS.id.SeedNLSJac69 - $cse2 * gENCLS.iq.SeedNLSJac69) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_829(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,829};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac69 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac69 SEED_VAR */))) * (data->simulationInfo->realParameter[179]);
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
gENCLS._p._ii._$pDERNLSJac69._dummyVarNLSJac69 = ($cse2 * gENCLS.id.SeedNLSJac69 - $cse1 * gENCLS.iq.SeedNLSJac69) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_830(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,830};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac69 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac69 SEED_VAR */))) * (data->simulationInfo->realParameter[179]);
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
gENCLS._vd._$pDERNLSJac69._dummyVarNLSJac69 = gENCLS.X_d * gENCLS.iq.SeedNLSJac69 - gENCLS.R_a * gENCLS.id.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_831(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,831};
  jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[188]) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac69 SEED_VAR */) - ((data->simulationInfo->realParameter[185]) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac69 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
gENCLS._vq._$pDERNLSJac69._dummyVarNLSJac69 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac69 - gENCLS.X_d * gENCLS.id.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_832(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,832};
  jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[185])) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac69 SEED_VAR */) - ((data->simulationInfo->realParameter[188]) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac69 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
pwLine4._ir._im._$pDERNLSJac69._dummyVarNLSJac69 = (-pwLine1.ir.im.SeedNLSJac69) - gENCLS.p.ii.$pDERNLSJac69.dummyVarNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_833(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,833};
  jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac69 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
pwLine4._ir._re._$pDERNLSJac69._dummyVarNLSJac69 = (-pwLine1.ir.re.SeedNLSJac69) - gENCLS.p.ir.$pDERNLSJac69.dummyVarNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_834(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,834};
  jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac69 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
pwFault._p._ir._$pDERNLSJac69._dummyVarNLSJac69 = (-pwLine3.ir.re.SeedNLSJac69) - pwLine4.is.re.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_835(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,835};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac69 SEED_VAR */) - jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac69 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
pwFault._p._ii._$pDERNLSJac69._dummyVarNLSJac69 = (-pwLine3.ir.im.SeedNLSJac69) - pwLine4.is.im.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_836(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,836};
  jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac69 SEED_VAR */) - jacobian->seedVars[4] /* pwLine4.is.im.SeedNLSJac69 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
pwLine._ir._im._$pDERNLSJac69._dummyVarNLSJac69 = (-pwLine1.is.im.SeedNLSJac69) - pwLine3.is.im.SeedNLSJac69 - constantLoad.p.ii.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_837(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,837};
  jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac69 SEED_VAR */) - jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac69 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
pwLine._ir._re._$pDERNLSJac69._dummyVarNLSJac69 = (-pwLine1.is.re.SeedNLSJac69) - pwLine3.is.re.SeedNLSJac69 - constantLoad.p.ir.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_838(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,838};
  jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac69 SEED_VAR */) - jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac69 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac69._dummyVarNLSJac69 = $cse2 * gENCLS.vq.$pDERNLSJac69.dummyVarNLSJac69 + $cse1 * gENCLS.vd.$pDERNLSJac69.dummyVarNLSJac69 - pwLine1.vr.re.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_839(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,839};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac69.dummyVarNLSJac69 else pwLine1.vs.im.SeedNLSJac69 - pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac69.dummyVarNLSJac69 + (-pwLine1.vs.re.SeedNLSJac69) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac69 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.$pDERNLSJac69.dummyVarNLSJac69 + pwLine1.vs.im.SeedNLSJac69 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac69 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_840(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,840};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[300], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[301], 1, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[299]) * (jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[297]))) + (data->simulationInfo->realParameter[298]) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[297])))));
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac69 else pwLine1.vs.im.SeedNLSJac69 - pwLine3.vr.im.SeedNLSJac69 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac69 + (-pwLine1.vs.re.SeedNLSJac69) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac69 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac69 + pwLine1.vs.im.SeedNLSJac69 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac69 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,841};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[322], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[323], 6, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp59 && tmp60)?jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[321]) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[318]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[319]))) + (data->simulationInfo->realParameter[320]) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[318]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[319])))));
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac69 else pwLine1.vs.re.SeedNLSJac69 - pwLine3.vr.re.SeedNLSJac69 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac69 + pwLine1.vs.im.SeedNLSJac69 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac69 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac69 + (-pwLine1.vs.re.SeedNLSJac69) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac69 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_842(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,842};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[322], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[323], 6, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp61 && tmp62)?jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[321]) * (jacobian->seedVars[9] /* pwLine3.is.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[318]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[319]))) - ((data->simulationInfo->realParameter[320]) * (jacobian->seedVars[8] /* pwLine3.is.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[318]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[319]))))));
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac69._dummyVarNLSJac69 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac69.dummyVarNLSJac69 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac69 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac69.dummyVarNLSJac69 - (pwFault.R * pwLine3.vr.re.SeedNLSJac69 + pwFault.X * pwLine3.vr.im.SeedNLSJac69) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac69.dummyVarNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_843(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,843};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  modelica_boolean tmp73;
  modelica_real tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[289], 9, Less);
  tmp75 = (modelica_boolean)tmp63;
  if(tmp75)
  {
    tmp76 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[290], 10, Less);
    tmp73 = (modelica_boolean)(tmp64 && data->simulationInfo->booleanParameter[68]);
    if(tmp73)
    {
      tmp74 = jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[290], 10, Less);
      tmp71 = (modelica_boolean)tmp65;
      if(tmp71)
      {
        tmp66 = data->simulationInfo->realParameter[287];
        tmp67 = data->simulationInfo->realParameter[288];
        tmp68 = data->simulationInfo->realParameter[287];
        tmp69 = data->simulationInfo->realParameter[288];
        tmp70 = (tmp68 * tmp68) + (tmp69 * tmp69);
        tmp72 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[287]) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */) + (data->simulationInfo->realParameter[288]) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */)) * ((tmp66 * tmp66) + (tmp67 * tmp67)),(tmp70 * tmp70),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp72 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */;
      }
      tmp74 = tmp72;
    }
    tmp76 = tmp74;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = tmp76;
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac69._dummyVarNLSJac69 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac69.dummyVarNLSJac69 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac69 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac69.dummyVarNLSJac69 - (pwFault.R * pwLine3.vr.im.SeedNLSJac69 - pwFault.X * pwLine3.vr.re.SeedNLSJac69) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac69.dummyVarNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_844(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,844};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  modelica_real tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  modelica_boolean tmp89;
  modelica_real tmp90;
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[289], 9, Less);
  tmp89 = (modelica_boolean)tmp77;
  if(tmp89)
  {
    tmp90 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[290], 10, Less);
    tmp87 = (modelica_boolean)(tmp78 && data->simulationInfo->booleanParameter[68]);
    if(tmp87)
    {
      tmp88 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[290], 10, Less);
      tmp85 = (modelica_boolean)tmp79;
      if(tmp85)
      {
        tmp80 = data->simulationInfo->realParameter[288];
        tmp81 = data->simulationInfo->realParameter[287];
        tmp82 = data->simulationInfo->realParameter[288];
        tmp83 = data->simulationInfo->realParameter[287];
        tmp84 = (tmp82 * tmp82) + (tmp83 * tmp83);
        tmp86 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[287]) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */) - ((data->simulationInfo->realParameter[288]) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */))) * ((tmp80 * tmp80) + (tmp81 * tmp81)),(tmp84 * tmp84),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp86 = jacobian->tmpVars[20] /* pwFault.p.ii.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */;
      }
      tmp88 = tmp86;
    }
    tmp90 = tmp88;
  }
  jacobian->resultVars[5] /* $res6.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = tmp90;
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac69 else pwLine3.vr.re.SeedNLSJac69 - pwLine1.vs.re.SeedNLSJac69 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac69 + pwLine3.vr.im.SeedNLSJac69 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac69 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac69 + (-pwLine3.vr.re.SeedNLSJac69) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac69 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_845(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,845};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[322], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[323], 6, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp91 && tmp92)?jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[321]) * (jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[318]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[319]))) - ((data->simulationInfo->realParameter[320]) * (jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[318]) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[319]))))));
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac69 else pwLine3.vr.im.SeedNLSJac69 - pwLine1.vs.im.SeedNLSJac69 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac69 + (-pwLine3.vr.re.SeedNLSJac69) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac69 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac69 + pwLine3.vr.im.SeedNLSJac69 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac69 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_846(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,846};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[322], 5, GreaterEq);
  RELATIONHYSTERESIS(tmp94, data->localData[0]->timeValue, data->simulationInfo->realParameter[323], 6, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp93 && tmp94)?jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[321]) * (jacobian->seedVars[5] /* pwLine3.ir.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[318]) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[319]))) + (data->simulationInfo->realParameter[320]) * (jacobian->seedVars[6] /* pwLine3.ir.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[318]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[319])))));
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac69.dummyVarNLSJac69 else pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 - pwLine1.vs.im.SeedNLSJac69 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac69.dummyVarNLSJac69 + (-pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac69.dummyVarNLSJac69 + pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_847(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,847};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[300], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[301], 1, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[299]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[296]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[297]))) + (data->simulationInfo->realParameter[298]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[296]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[297])))));
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac69.dummyVarNLSJac69 else pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 - pwLine1.vs.re.SeedNLSJac69 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac69.dummyVarNLSJac69 + pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac69.dummyVarNLSJac69 + (-pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_848(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,848};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[300], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[301], 1, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[299]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[296]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[297]))) - ((data->simulationInfo->realParameter[298]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[296]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[297]))))));
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac69._dummyVarNLSJac69 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac69 + pwLine1.vs.im.SeedNLSJac69 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac69) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac69.dummyVarNLSJac69 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_849(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,849};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac69 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac69 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac69._dummyVarNLSJac69 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac69 + pwLine1.vs.im.SeedNLSJac69 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac69 + pwLine1.vs.re.SeedNLSJac69 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac69.dummyVarNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_850(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,850};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (jacobian->seedVars[3] /* constantLoad.p.ii.SeedNLSJac69 SEED_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (jacobian->seedVars[1] /* constantLoad.p.ir.SeedNLSJac69 SEED_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.$pDERNLSJac69.dummyVarNLSJac69 else pwLine1.vs.re.SeedNLSJac69 - pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 - (pwLine.Z.re * (pwLine.ir.re.$pDERNLSJac69.dummyVarNLSJac69 + pwLine1.vs.im.SeedNLSJac69 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac69 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac69.dummyVarNLSJac69 + (-pwLine1.vs.re.SeedNLSJac69) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac69 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,851};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[300], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[301], 1, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[299]) * (jacobian->tmpVars[22] /* pwLine.ir.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[297]))) - ((data->simulationInfo->realParameter[298]) * (jacobian->tmpVars[21] /* pwLine.ir.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[297]))))));
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac69 else pwLine1.vs.im.SeedNLSJac69 - pwLine1.vr.im.SeedNLSJac69 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac69 + (-pwLine1.vs.re.SeedNLSJac69) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac69 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac69 + pwLine1.vs.im.SeedNLSJac69 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac69 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,852};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[311], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[312], 12, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[310]) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[308]))) + (data->simulationInfo->realParameter[309]) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[308])))));
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac69 else pwLine1.vs.re.SeedNLSJac69 - pwLine1.vr.re.SeedNLSJac69 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac69 + pwLine1.vs.im.SeedNLSJac69 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac69 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac69 + (-pwLine1.vs.re.SeedNLSJac69) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac69 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,853};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[311], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[312], 12, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[310]) * (jacobian->seedVars[0] /* pwLine1.is.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[308]))) - ((data->simulationInfo->realParameter[309]) * (jacobian->seedVars[2] /* pwLine1.is.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[308]))))));
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac69 else pwLine3.vr.re.SeedNLSJac69 - pwLine1.vr.re.SeedNLSJac69 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac69 + pwLine3.vr.im.SeedNLSJac69 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac69 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac69 + (-pwLine3.vr.re.SeedNLSJac69) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac69 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,854};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[333], 7, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[334], 8, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[332]) * (jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[329]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[330]))) - ((data->simulationInfo->realParameter[331]) * (jacobian->seedVars[4] /* pwLine4.is.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[329]) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[330]))))));
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac69 else pwLine3.vr.im.SeedNLSJac69 - pwLine1.vr.im.SeedNLSJac69 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac69 + (-pwLine3.vr.re.SeedNLSJac69) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac69 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac69 + pwLine3.vr.im.SeedNLSJac69 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac69 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,855};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[333], 7, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[334], 8, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[4] /* pwLine4.is.im.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[332]) * (jacobian->seedVars[4] /* pwLine4.is.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[329]) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[330]))) + (data->simulationInfo->realParameter[331]) * (jacobian->seedVars[7] /* pwLine4.is.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[329]) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[330])))));
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac69.dummyVarNLSJac69 else pwLine1.vr.im.SeedNLSJac69 - pwLine3.vr.im.SeedNLSJac69 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac69.dummyVarNLSJac69 + (-pwLine1.vr.re.SeedNLSJac69) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac69 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac69.dummyVarNLSJac69 + pwLine1.vr.im.SeedNLSJac69 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac69 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,856};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[333], 7, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[334], 8, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[332]) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[329]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[330]))) + (data->simulationInfo->realParameter[331]) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[329]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[330])))));
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac69.dummyVarNLSJac69 else pwLine1.vr.re.SeedNLSJac69 - pwLine3.vr.re.SeedNLSJac69 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac69.dummyVarNLSJac69 + pwLine1.vr.im.SeedNLSJac69 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac69 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac69.dummyVarNLSJac69 + (-pwLine1.vr.re.SeedNLSJac69) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac69 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,857};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[333], 7, GreaterEq);
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[334], 8, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp111 && tmp112)?jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[332]) * (jacobian->tmpVars[18] /* pwLine4.ir.re.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[329]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[330]))) - ((data->simulationInfo->realParameter[331]) * (jacobian->tmpVars[17] /* pwLine4.ir.im.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[329]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[330]))))));
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac69 else pwLine1.vr.re.SeedNLSJac69 - pwLine1.vs.re.SeedNLSJac69 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac69 + pwLine1.vr.im.SeedNLSJac69 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac69 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac69 + (-pwLine1.vr.re.SeedNLSJac69) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac69 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,858};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[311], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[312], 12, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp113 && tmp114)?jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[310]) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[308]))) - ((data->simulationInfo->realParameter[309]) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[308]))))));
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac69._dummyVarNLSJac69 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac69 else pwLine1.vr.im.SeedNLSJac69 - pwLine1.vs.im.SeedNLSJac69 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac69 + (-pwLine1.vr.re.SeedNLSJac69) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac69 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac69 + pwLine1.vr.im.SeedNLSJac69 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac69 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,859};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[311], 11, GreaterEq);
  RELATIONHYSTERESIS(tmp116, data->localData[0]->timeValue, data->simulationInfo->realParameter[312], 12, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = ((tmp115 && tmp116)?jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac69 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac69 SEED_VAR */ - ((data->simulationInfo->realParameter[310]) * (jacobian->seedVars[11] /* pwLine1.ir.im.SeedNLSJac69 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */)) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[308]))) + (data->simulationInfo->realParameter[309]) * (jacobian->seedVars[10] /* pwLine1.ir.re.SeedNLSJac69 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac69 SEED_VAR */) * (data->simulationInfo->realParameter[308])))));
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac69._dummyVarNLSJac69 = $cse1 * gENCLS.vq.$pDERNLSJac69.dummyVarNLSJac69 + (-$cse2) * gENCLS.vd.$pDERNLSJac69.dummyVarNLSJac69 - pwLine1.vr.im.SeedNLSJac69
*/
void OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,860};
  jacobian->resultVars[21] /* $res22.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac69.dummyVarNLSJac69 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac69 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacNLSJac69_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_NLSJac69;
  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_816(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_817(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_818(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_819(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_820(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_821(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_822(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_823(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_824(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_825(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_826(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_827(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_828(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_829(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_830(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_831(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_832(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_833(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_834(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_835(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_836(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_837(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_838(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_839(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_840(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_841(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_842(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_843(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_844(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_845(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_846(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_847(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_848(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_849(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_850(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_851(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_852(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_853(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_854(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_855(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_856(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_857(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_858(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_859(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_eqFunction_860(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_EXAC2_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


