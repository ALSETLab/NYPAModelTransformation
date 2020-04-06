/* Jacobians 5 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESDC1A_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianNLSJac53(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,6,6,7,7,4,4,11,8,8,11};
  const int rowIndex[116] = {7,13,14,9,10,13,8,9,10,7,8,14,6,15,16,17,4,5,6,15,6,15,16,17,4,5,6,15,2,3,6,15,2,3,6,15,11,12,18,19,11,12,18,19,11,12,18,19,20,21,11,12,18,19,20,21,10,11,12,16,18,19,20,9,11,12,17,18,19,21,0,1,4,5,0,1,4,5,0,2,3,4,5,6,14,15,16,17,19,6,7,8,9,10,12,13,14,7,8,9,10,11,13,14,15,1,2,3,4,5,6,7,15,16,17,18};
  int i = 0;
  
  jacobian->sizeCols = 22;
  jacobian->sizeRows = 22;
  jacobian->sizeTmpVars = 45;
  jacobian->seedVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(22,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(45,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(116*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 116;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(22*sizeof(int));
  jacobian->sparsePattern.maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 116*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[21] = 1;
  jacobian->sparsePattern.colorCols[20] = 2;
  jacobian->sparsePattern.colorCols[19] = 3;
  jacobian->sparsePattern.colorCols[18] = 4;
  jacobian->sparsePattern.colorCols[9] = 5;
  jacobian->sparsePattern.colorCols[15] = 5;
  jacobian->sparsePattern.colorCols[8] = 6;
  jacobian->sparsePattern.colorCols[14] = 6;
  jacobian->sparsePattern.colorCols[7] = 7;
  jacobian->sparsePattern.colorCols[13] = 7;
  jacobian->sparsePattern.colorCols[6] = 8;
  jacobian->sparsePattern.colorCols[12] = 8;
  jacobian->sparsePattern.colorCols[17] = 8;
  jacobian->sparsePattern.colorCols[1] = 9;
  jacobian->sparsePattern.colorCols[3] = 9;
  jacobian->sparsePattern.colorCols[5] = 9;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[0] = 10;
  jacobian->sparsePattern.colorCols[2] = 10;
  jacobian->sparsePattern.colorCols[4] = 10;
  jacobian->sparsePattern.colorCols[10] = 10;
  jacobian->sparsePattern.colorCols[16] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+13] = {0,4,4,3,5,2,9,9,9,9,9,9,9,2};
  const int rowIndex[83] = {0,2,3,4,1,2,3,4,2,3,4,1,2,3,4,8,3,4,0,2,3,4,7,8,9,10,12,0,2,3,4,7,8,9,10,12,0,2,3,4,7,8,9,10,12,0,2,3,4,7,8,9,10,12,0,2,3,4,7,8,9,10,12,0,2,3,4,7,8,9,10,12,0,2,3,4,7,8,9,10,12,11,12};
  int i = 0;
  
  jacobian->sizeCols = 13;
  jacobian->sizeRows = 13;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(83*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 83;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern.maxColors = 12;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 83*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[4] = 3;
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
equation index: 229
type: SIMPLE_ASSIGN
constantLoad._v._$pDERNLSJac53._dummyVarNLSJac53 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac53 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac53) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_229(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,229};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[125] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[124] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[125] /* pwLine1.vs.re variable */) * (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */) + (data->localData[0]->realVars[124] /* pwLine1.vs.im variable */) * (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
constantLoad._kP._$pDERNLSJac53._dummyVarNLSJac53 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_230(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,230};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[37], 5, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[57]) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77])))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77]))) + (data->simulationInfo->realParameter[63]) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[77]))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[77]))):0.0);
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
constantLoad._kI._$pDERNLSJac53._dummyVarNLSJac53 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_231(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,231};
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
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 4, Less);
  tmp45 = (modelica_boolean)tmp3;
  if(tmp45)
  {
    tmp4 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = -1.0 + data->simulationInfo->realParameter[64];
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
    }tmp11 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp12 = data->simulationInfo->realParameter[64];
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
    }tmp26 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp26)
    {
      tmp27 = 0.0;
    }
    else
    {
      tmp19 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
      tmp20 = data->simulationInfo->realParameter[64] - 1.0;
      if(tmp19 < 0.0 && tmp20 != 0.0)
      {
        tmp22 = modf(tmp20, &tmp23);
        
        if(tmp22 > 0.5)
        {
          tmp22 -= 1.0;
          tmp23 += 1.0;
        }
        else if(tmp22 < -0.5)
        {
          tmp22 += 1.0;
          tmp23 -= 1.0;
        }
        
        if(fabs(tmp22) < 1e-10)
          tmp21 = pow(tmp19, tmp23);
        else
        {
          tmp25 = modf(1.0/tmp20, &tmp24);
          if(tmp25 > 0.5)
          {
            tmp25 -= 1.0;
            tmp24 += 1.0;
          }
          else if(tmp25 < -0.5)
          {
            tmp25 += 1.0;
            tmp24 -= 1.0;
          }
          if(fabs(tmp25) < 1e-10 && ((unsigned long)tmp24 & 1))
          {
            tmp21 = -pow(-tmp19, tmp22)*pow(tmp19, tmp23);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
          }
        }
      }
      else
      {
        tmp21 = pow(tmp19, tmp20);
      }
      if(isnan(tmp21) || isinf(tmp21))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
      }
      tmp27 = (tmp21) * ((data->simulationInfo->realParameter[64]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */));
    }
    tmp36 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp36)
    {
      tmp37 = 0.0;
    }
    else
    {
      tmp29 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
      tmp30 = -1.0 + data->simulationInfo->realParameter[64] - 1.0;
      if(tmp29 < 0.0 && tmp30 != 0.0)
      {
        tmp32 = modf(tmp30, &tmp33);
        
        if(tmp32 > 0.5)
        {
          tmp32 -= 1.0;
          tmp33 += 1.0;
        }
        else if(tmp32 < -0.5)
        {
          tmp32 += 1.0;
          tmp33 -= 1.0;
        }
        
        if(fabs(tmp32) < 1e-10)
          tmp31 = pow(tmp29, tmp33);
        else
        {
          tmp35 = modf(1.0/tmp30, &tmp34);
          if(tmp35 > 0.5)
          {
            tmp35 -= 1.0;
            tmp34 += 1.0;
          }
          else if(tmp35 < -0.5)
          {
            tmp35 += 1.0;
            tmp34 -= 1.0;
          }
          if(fabs(tmp35) < 1e-10 && ((unsigned long)tmp34 & 1))
          {
            tmp31 = -pow(-tmp29, tmp32)*pow(tmp29, tmp33);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp29, tmp30);
          }
        }
      }
      else
      {
        tmp31 = pow(tmp29, tmp30);
      }
      if(isnan(tmp31) || isinf(tmp31))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp29, tmp30);
      }
      tmp37 = (tmp31) * ((-1.0 + data->simulationInfo->realParameter[64]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */));
    }
    tmp38 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp39 = data->simulationInfo->realParameter[64];
    if(tmp38 < 0.0 && tmp39 != 0.0)
    {
      tmp41 = modf(tmp39, &tmp42);
      
      if(tmp41 > 0.5)
      {
        tmp41 -= 1.0;
        tmp42 += 1.0;
      }
      else if(tmp41 < -0.5)
      {
        tmp41 += 1.0;
        tmp42 -= 1.0;
      }
      
      if(fabs(tmp41) < 1e-10)
        tmp40 = pow(tmp38, tmp42);
      else
      {
        tmp44 = modf(1.0/tmp39, &tmp43);
        if(tmp44 > 0.5)
        {
          tmp44 -= 1.0;
          tmp43 += 1.0;
        }
        else if(tmp44 < -0.5)
        {
          tmp44 += 1.0;
          tmp43 -= 1.0;
        }
        if(fabs(tmp44) < 1e-10 && ((unsigned long)tmp43 & 1))
        {
          tmp40 = -pow(-tmp38, tmp41)*pow(tmp38, tmp42);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
        }
      }
    }
    else
    {
      tmp40 = pow(tmp38, tmp39);
    }
    if(isnan(tmp40) || isinf(tmp40))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
    }
    tmp46 = (data->simulationInfo->realParameter[58]) * ((data->simulationInfo->realParameter[64]) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[58])) * (tmp13)))) * ((data->simulationInfo->realParameter[58]) * (tmp27))) + (tmp37) * (exp(((-data->simulationInfo->realParameter[58])) * (tmp40)))));
  }
  else
  {
    tmp46 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
constantLoad._Q._$pDERNLSJac53._dummyVarNLSJac53 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 + constantLoad.kI.$pDERNLSJac53.dummyVarNLSJac53 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 + constantLoad.kP.$pDERNLSJac53.dummyVarNLSJac53 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 + constantLoad.kI.$pDERNLSJac53.dummyVarNLSJac53 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 + constantLoad.kP.$pDERNLSJac53.dummyVarNLSJac53 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_232(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,232};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[73], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], 3, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42] + data->simulationInfo->realParameter[66]):(data->simulationInfo->realParameter[40]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[44]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[42]));
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
constantLoad._P._$pDERNLSJac53._dummyVarNLSJac53 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 + constantLoad.kI.$pDERNLSJac53.dummyVarNLSJac53 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 + constantLoad.kP.$pDERNLSJac53.dummyVarNLSJac53 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 + constantLoad.kI.$pDERNLSJac53.dummyVarNLSJac53 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 + constantLoad.kP.$pDERNLSJac53.dummyVarNLSJac53 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_233(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,233};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[73], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[73] + data->simulationInfo->realParameter[67], 3, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[41]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43] + data->simulationInfo->realParameter[65]):(data->simulationInfo->realParameter[41]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[45]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[43]));
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
gENROE._PSId._$pDERNLSJac53._dummyVarNLSJac53 = (-gENROE.Xppd) * gENROE.id.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_234(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,234};
  jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[234])) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac53 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
pwLine._is._re._$pDERNLSJac53._dummyVarNLSJac53 = ($cse7 * gENROE.iq.SeedNLSJac53 + $cse6 * gENROE.id.SeedNLSJac53) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_235(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,235};
  jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac53 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[183]);
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
pwLine._is._im._$pDERNLSJac53._dummyVarNLSJac53 = ($cse6 * gENROE.iq.SeedNLSJac53 - $cse7 * gENROE.id.SeedNLSJac53) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac53 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac53 SEED_VAR */))) * (data->simulationInfo->realParameter[183]);
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
gENROE._uq._$pDERNLSJac53._dummyVarNLSJac53 = gENROE.PSId.$pDERNLSJac53.dummyVarNLSJac53 - gENROE.R_a * gENROE.iq.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
  jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* gENROE.PSId.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[217]) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac53 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
gENROE._PSIq._$pDERNLSJac53._dummyVarNLSJac53 = (-gENROE.Xppq) * gENROE.iq.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[235])) * (jacobian->seedVars[16] /* gENROE.iq.SeedNLSJac53 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
gENROE._ud._$pDERNLSJac53._dummyVarNLSJac53 = (-gENROE.PSIq.$pDERNLSJac53.dummyVarNLSJac53) - gENROE.R_a * gENROE.id.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,239};
  jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[9] /* gENROE.PSIq.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[217]) * (jacobian->seedVars[17] /* gENROE.id.SeedNLSJac53 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
pwLine._vs._re._$pDERNLSJac53._dummyVarNLSJac53 = $cse6 * gENROE.ud.$pDERNLSJac53.dummyVarNLSJac53 + $cse7 * gENROE.uq.$pDERNLSJac53.dummyVarNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
pwLine._vs._im._$pDERNLSJac53._dummyVarNLSJac53 = $cse6 * gENROE.uq.$pDERNLSJac53.dummyVarNLSJac53 - $cse7 * gENROE.ud.$pDERNLSJac53.dummyVarNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROE.uq.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROE.ud.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
gENCLS._p._ir._$pDERNLSJac53._dummyVarNLSJac53 = ((-$cse1) * gENCLS.id.SeedNLSJac53 - $cse2 * gENCLS.iq.SeedNLSJac53) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac53 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac53 SEED_VAR */))) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
gENCLS._p._ii._$pDERNLSJac53._dummyVarNLSJac53 = ($cse2 * gENCLS.id.SeedNLSJac53 - $cse1 * gENCLS.iq.SeedNLSJac53) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac53 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac53 SEED_VAR */))) * (data->simulationInfo->realParameter[157]);
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
gENCLS._vq._$pDERNLSJac53._dummyVarNLSJac53 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac53 - gENCLS.X_d * gENCLS.id.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_244(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,244};
  jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[163])) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac53 SEED_VAR */) - ((data->simulationInfo->realParameter[166]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac53 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
gENCLS._vd._$pDERNLSJac53._dummyVarNLSJac53 = gENCLS.X_d * gENCLS.iq.SeedNLSJac53 - gENCLS.R_a * gENCLS.id.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_245(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,245};
  jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[166]) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac53 SEED_VAR */) - ((data->simulationInfo->realParameter[163]) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac53 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
pwLine4._ir._re._$pDERNLSJac53._dummyVarNLSJac53 = (-pwLine1.ir.re.SeedNLSJac53) - gENCLS.p.ir.$pDERNLSJac53.dummyVarNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_246(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,246};
  jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac53 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
pwLine1._ir._im._$pDERNLSJac53._dummyVarNLSJac53 = (-pwLine4.ir.im.SeedNLSJac53) - gENCLS.p.ii.$pDERNLSJac53.dummyVarNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_247(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,247};
  jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac53 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
pwLine3._is._re._$pDERNLSJac53._dummyVarNLSJac53 = (-pwLine.ir.re.SeedNLSJac53) - pwLine1.is.re.SeedNLSJac53 - constantLoad.p.ir.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_248(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,248};
  jacobian->tmpVars[19] /* pwLine3.is.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac53 SEED_VAR */) - jacobian->seedVars[6] /* pwLine1.is.re.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[9] /* constantLoad.p.ir.SeedNLSJac53 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
pwLine3._is._im._$pDERNLSJac53._dummyVarNLSJac53 = (-pwLine.ir.im.SeedNLSJac53) - pwLine1.is.im.SeedNLSJac53 - constantLoad.p.ii.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_249(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,249};
  jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine.ir.im.SeedNLSJac53 SEED_VAR */) - jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[8] /* constantLoad.p.ii.SeedNLSJac53 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
pwFault._p._ir._$pDERNLSJac53._dummyVarNLSJac53 = (-pwLine3.ir.re.SeedNLSJac53) - pwLine4.is.re.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_250(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,250};
  jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac53 SEED_VAR */) - jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac53 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
pwFault._p._ii._$pDERNLSJac53._dummyVarNLSJac53 = (-pwLine3.ir.im.SeedNLSJac53) - pwLine4.is.im.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_251(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,251};
  jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac53 SEED_VAR */) - jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac53 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac53.dummyVarNLSJac53 else pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 - pwLine1.vs.im.SeedNLSJac53 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac53.dummyVarNLSJac53 + (-pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac53.dummyVarNLSJac53 + pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_252(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,252};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[278], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[279], 1, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[277]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[274]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275]))) + (data->simulationInfo->realParameter[276]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[274]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275])))));
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac53.dummyVarNLSJac53 else pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 - pwLine1.vs.re.SeedNLSJac53 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac53.dummyVarNLSJac53 + pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac53.dummyVarNLSJac53 + (-pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_253(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,253};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[278], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[279], 1, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp53 && tmp54)?jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[277]) * (jacobian->tmpVars[6] /* pwLine.is.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[274]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275]))) - ((data->simulationInfo->realParameter[276]) * (jacobian->tmpVars[7] /* pwLine.is.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[274]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[275]))))));
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac53._dummyVarNLSJac53 = pwLine1.vs.im * constantLoad.p.ir.SeedNLSJac53 + pwLine1.vs.im.SeedNLSJac53 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac53) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac53.dummyVarNLSJac53 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_254(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,254};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = (data->localData[0]->realVars[124] /* pwLine1.vs.im variable */) * (jacobian->seedVars[9] /* constantLoad.p.ir.SeedNLSJac53 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[125] /* pwLine1.vs.re variable */) * (jacobian->seedVars[8] /* constantLoad.p.ii.SeedNLSJac53 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac53._dummyVarNLSJac53 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac53 + pwLine1.vs.im.SeedNLSJac53 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.SeedNLSJac53 + pwLine1.vs.re.SeedNLSJac53 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac53.dummyVarNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_255(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,255};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = (data->localData[0]->realVars[124] /* pwLine1.vs.im variable */) * (jacobian->seedVars[8] /* constantLoad.p.ii.SeedNLSJac53 SEED_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[125] /* pwLine1.vs.re variable */) * (jacobian->seedVars[9] /* constantLoad.p.ir.SeedNLSJac53 SEED_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac53 else pwLine1.vs.im.SeedNLSJac53 - pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac53 + (-pwLine1.vs.re.SeedNLSJac53) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac53 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac53 + pwLine1.vs.im.SeedNLSJac53 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac53 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_256(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,256};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[278], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[279], 1, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp55 && tmp56)?jacobian->seedVars[5] /* pwLine.ir.im.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[277]) * (jacobian->seedVars[5] /* pwLine.ir.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[274]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[275]))) + (data->simulationInfo->realParameter[276]) * (jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[274]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[275])))));
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac53 else pwLine1.vs.re.SeedNLSJac53 - pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac53 + pwLine1.vs.im.SeedNLSJac53 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac53 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac53 + (-pwLine1.vs.re.SeedNLSJac53) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac53 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_257(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,257};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[278], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[279], 1, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[277]) * (jacobian->seedVars[7] /* pwLine.ir.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[274]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[275]))) - ((data->simulationInfo->realParameter[276]) * (jacobian->seedVars[5] /* pwLine.ir.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[274]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[275]))))));
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.$pDERNLSJac53.dummyVarNLSJac53 else pwLine1.vs.re.SeedNLSJac53 - pwLine3.vr.re.SeedNLSJac53 - (pwLine3.Z.re * (pwLine3.is.re.$pDERNLSJac53.dummyVarNLSJac53 + pwLine1.vs.im.SeedNLSJac53 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac53 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.$pDERNLSJac53.dummyVarNLSJac53 + (-pwLine1.vs.re.SeedNLSJac53) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac53 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_258(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,258};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[300], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[301], 7, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp59 && tmp60)?jacobian->tmpVars[19] /* pwLine3.is.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[299]) * (jacobian->tmpVars[19] /* pwLine3.is.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[297]))) - ((data->simulationInfo->realParameter[298]) * (jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[297]))))));
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac53 else pwLine3.vr.re.SeedNLSJac53 - pwLine1.vs.re.SeedNLSJac53 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac53 + pwLine3.vr.im.SeedNLSJac53 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac53 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac53 + (-pwLine3.vr.re.SeedNLSJac53) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac53 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_259(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,259};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[300], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[301], 7, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp61 && tmp62)?jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[299]) * (jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[297]))) - ((data->simulationInfo->realParameter[298]) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[297]))))));
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac53._dummyVarNLSJac53 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac53.dummyVarNLSJac53 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac53 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac53.dummyVarNLSJac53 - (pwFault.R * pwLine3.vr.re.SeedNLSJac53 + pwFault.X * pwLine3.vr.im.SeedNLSJac53) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac53.dummyVarNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_260(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,260};
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
  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[267], 8, Less);
  tmp75 = (modelica_boolean)tmp63;
  if(tmp75)
  {
    tmp76 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[268], 9, Less);
    tmp73 = (modelica_boolean)(tmp64 && data->simulationInfo->booleanParameter[66]);
    if(tmp73)
    {
      tmp74 = jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[268], 9, Less);
      tmp71 = (modelica_boolean)tmp65;
      if(tmp71)
      {
        tmp66 = data->simulationInfo->realParameter[265];
        tmp67 = data->simulationInfo->realParameter[266];
        tmp68 = data->simulationInfo->realParameter[265];
        tmp69 = data->simulationInfo->realParameter[266];
        tmp70 = (tmp68 * tmp68) + (tmp69 * tmp69);
        tmp72 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[265]) * (jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */) + (data->simulationInfo->realParameter[266]) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */)) * ((tmp66 * tmp66) + (tmp67 * tmp67)),(tmp70 * tmp70),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp72 = jacobian->tmpVars[21] /* pwFault.p.ir.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */;
      }
      tmp74 = tmp72;
    }
    tmp76 = tmp74;
  }
  jacobian->resultVars[8] /* $res9.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = tmp76;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac53 else pwLine3.vr.re.SeedNLSJac53 - pwLine1.vr.re.SeedNLSJac53 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac53 + pwLine3.vr.im.SeedNLSJac53 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac53 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac53 + (-pwLine3.vr.re.SeedNLSJac53) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac53 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_261(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,261};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[311], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[312], 11, Less);
  jacobian->resultVars[9] /* $res10.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp77 && tmp78)?jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[310]) * (jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[308]))) - ((data->simulationInfo->realParameter[309]) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[308]))))));
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac53 else pwLine3.vr.im.SeedNLSJac53 - pwLine1.vr.im.SeedNLSJac53 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac53 + (-pwLine3.vr.re.SeedNLSJac53) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac53 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac53 + pwLine3.vr.im.SeedNLSJac53 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac53 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_262(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,262};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[311], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[312], 11, Less);
  jacobian->resultVars[10] /* $res11.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp79 && tmp80)?jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[310]) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[308]))) + (data->simulationInfo->realParameter[309]) * (jacobian->seedVars[2] /* pwLine4.is.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[308])))));
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac53 else pwLine1.vr.im.SeedNLSJac53 - pwLine3.vr.im.SeedNLSJac53 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac53 + (-pwLine1.vr.re.SeedNLSJac53) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac53 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac53.dummyVarNLSJac53 + pwLine1.vr.im.SeedNLSJac53 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac53 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_263(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,263};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[311], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[312], 11, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp81 && tmp82)?jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[310]) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[308]))) + (data->simulationInfo->realParameter[309]) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[308])))));
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac53.dummyVarNLSJac53 else pwLine1.vr.re.SeedNLSJac53 - pwLine3.vr.re.SeedNLSJac53 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac53.dummyVarNLSJac53 + pwLine1.vr.im.SeedNLSJac53 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac53 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac53 + (-pwLine1.vr.re.SeedNLSJac53) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac53 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_264(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,264};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[311], 10, GreaterEq);
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[312], 11, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[310]) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[308]))) - ((data->simulationInfo->realParameter[309]) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[307]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[308]))))));
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac53._dummyVarNLSJac53 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac53.dummyVarNLSJac53 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac53 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac53.dummyVarNLSJac53 - (pwFault.R * pwLine3.vr.im.SeedNLSJac53 - pwFault.X * pwLine3.vr.re.SeedNLSJac53) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac53.dummyVarNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_265(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,265};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  modelica_boolean tmp97;
  modelica_real tmp98;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[267], 8, Less);
  tmp97 = (modelica_boolean)tmp85;
  if(tmp97)
  {
    tmp98 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[268], 9, Less);
    tmp95 = (modelica_boolean)(tmp86 && data->simulationInfo->booleanParameter[66]);
    if(tmp95)
    {
      tmp96 = jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[268], 9, Less);
      tmp93 = (modelica_boolean)tmp87;
      if(tmp93)
      {
        tmp88 = data->simulationInfo->realParameter[266];
        tmp89 = data->simulationInfo->realParameter[265];
        tmp90 = data->simulationInfo->realParameter[266];
        tmp91 = data->simulationInfo->realParameter[265];
        tmp92 = (tmp90 * tmp90) + (tmp91 * tmp91);
        tmp94 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[265]) * (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */) - ((data->simulationInfo->realParameter[266]) * (jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */))) * ((tmp88 * tmp88) + (tmp89 * tmp89)),(tmp92 * tmp92),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp94 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */;
      }
      tmp96 = tmp94;
    }
    tmp98 = tmp96;
  }
  jacobian->resultVars[13] /* $res14.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = tmp98;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac53 else pwLine3.vr.im.SeedNLSJac53 - pwLine1.vs.im.SeedNLSJac53 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac53 + (-pwLine3.vr.re.SeedNLSJac53) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac53 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac53 + pwLine3.vr.im.SeedNLSJac53 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac53 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_266(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,266};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[300], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[301], 7, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[299]) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[297]))) + (data->simulationInfo->realParameter[298]) * (jacobian->seedVars[3] /* pwLine3.ir.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[19] /* pwLine3.vr.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[297])))));
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.$pDERNLSJac53.dummyVarNLSJac53 else pwLine1.vs.im.SeedNLSJac53 - pwLine3.vr.im.SeedNLSJac53 - (pwLine3.Z.re * (pwLine3.is.im.$pDERNLSJac53.dummyVarNLSJac53 + (-pwLine1.vs.re.SeedNLSJac53) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac53 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.$pDERNLSJac53.dummyVarNLSJac53 + pwLine1.vs.im.SeedNLSJac53 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac53 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_267(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,267};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[300], 6, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[301], 7, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.im.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[299]) * (jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[297]))) + (data->simulationInfo->realParameter[298]) * (jacobian->tmpVars[19] /* pwLine3.is.re.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[296]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[297])))));
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac53 else pwLine1.vs.im.SeedNLSJac53 - pwLine1.vr.im.SeedNLSJac53 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac53 + (-pwLine1.vs.re.SeedNLSJac53) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac53 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac53 + pwLine1.vs.im.SeedNLSJac53 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac53 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_268(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,268};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[289], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[290], 13, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[288]) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[285]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[286]))) + (data->simulationInfo->realParameter[287]) * (jacobian->seedVars[6] /* pwLine1.is.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[285]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[286])))));
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac53 else pwLine1.vs.re.SeedNLSJac53 - pwLine1.vr.re.SeedNLSJac53 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac53 + pwLine1.vs.im.SeedNLSJac53 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac53 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac53 + (-pwLine1.vs.re.SeedNLSJac53) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac53 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_269(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,269};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[289], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[290], 13, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[6] /* pwLine1.is.re.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[288]) * (jacobian->seedVars[6] /* pwLine1.is.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[285]) - ((jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[286]))) - ((data->simulationInfo->realParameter[287]) * (jacobian->seedVars[4] /* pwLine1.is.im.SeedNLSJac53 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[285]) - ((jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[286]))))));
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac53 else pwLine1.vr.re.SeedNLSJac53 - pwLine1.vs.re.SeedNLSJac53 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac53 + pwLine1.vr.im.SeedNLSJac53 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac53 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac53.dummyVarNLSJac53 + (-pwLine1.vr.re.SeedNLSJac53) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac53 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_270(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,270};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[289], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[290], 13, Less);
  jacobian->resultVars[18] /* $res19.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac53 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.re.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[288]) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[285]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[286]))) - ((data->simulationInfo->realParameter[287]) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[285]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[286]))))));
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac53._dummyVarNLSJac53 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac53.dummyVarNLSJac53 else pwLine1.vr.im.SeedNLSJac53 - pwLine1.vs.im.SeedNLSJac53 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac53.dummyVarNLSJac53 + (-pwLine1.vr.re.SeedNLSJac53) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac53 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac53 + pwLine1.vr.im.SeedNLSJac53 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac53 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_271(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,271};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[289], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[290], 13, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.im.SeedNLSJac53 SEED_VAR */ - ((data->simulationInfo->realParameter[288]) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */)) * (data->simulationInfo->realParameter[285]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[286]))) + (data->simulationInfo->realParameter[287]) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac53 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[285]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */) * (data->simulationInfo->realParameter[286])))));
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac53._dummyVarNLSJac53 = $cse1 * gENCLS.vq.$pDERNLSJac53.dummyVarNLSJac53 + (-$cse2) * gENCLS.vd.$pDERNLSJac53.dummyVarNLSJac53 - pwLine1.vr.im.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_272(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,272};
  jacobian->resultVars[20] /* $res21.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac53 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac53._dummyVarNLSJac53 = $cse2 * gENCLS.vq.$pDERNLSJac53.dummyVarNLSJac53 + $cse1 * gENCLS.vd.$pDERNLSJac53.dummyVarNLSJac53 - pwLine1.vr.re.SeedNLSJac53
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_273(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,273};
  jacobian->resultVars[21] /* $res22.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[15] /* gENCLS.vq.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vd.$pDERNLSJac53.dummyVarNLSJac53 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac53 SEED_VAR */;
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacNLSJac53_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_INDEX_JAC_NLSJac53;
  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_229(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_230(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_231(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_232(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_233(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_234(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_235(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_236(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_237(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_238(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_239(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_240(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_241(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_242(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_243(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_244(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_245(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_246(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_247(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_248(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_249(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_250(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_251(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_252(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_253(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_254(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_255(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_256(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_257(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_258(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_259(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_260(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_261(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_262(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_263(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_264(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_265(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_266(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_267(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_268(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_269(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_270(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_271(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_272(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_eqFunction_273(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESDC1A_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


