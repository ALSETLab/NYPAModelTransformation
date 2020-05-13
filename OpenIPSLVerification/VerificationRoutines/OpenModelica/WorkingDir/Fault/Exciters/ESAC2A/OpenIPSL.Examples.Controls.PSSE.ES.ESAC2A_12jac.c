/* Jacobians 6 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,4,4,3,3,3,3,4,4,4,4,4,4,6,6,7,7,4,4,8,11,11,8};
  const int rowIndex[116] = {9,10,11,12,5,6,9,10,18,19,20,3,4,18,2,19,20,2,3,4,0,1,9,10,9,10,11,12,0,1,9,10,5,6,9,10,13,16,17,21,13,16,17,21,13,14,15,16,17,21,13,14,15,16,17,21,11,13,15,16,17,20,21,12,13,14,16,17,19,21,5,6,7,8,5,6,7,8,0,2,3,4,17,18,19,20,0,1,3,5,6,8,9,10,11,12,21,0,1,4,5,6,7,9,10,11,12,13,1,2,3,4,16,18,19,20};
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
  jacobian->sparsePattern->colorCols[9] = 5;
  jacobian->sparsePattern->colorCols[15] = 5;
  jacobian->sparsePattern->colorCols[8] = 6;
  jacobian->sparsePattern->colorCols[14] = 6;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[13] = 7;
  jacobian->sparsePattern->colorCols[6] = 8;
  jacobian->sparsePattern->colorCols[12] = 8;
  jacobian->sparsePattern->colorCols[17] = 8;
  jacobian->sparsePattern->colorCols[1] = 9;
  jacobian->sparsePattern->colorCols[3] = 9;
  jacobian->sparsePattern->colorCols[4] = 9;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[0] = 10;
  jacobian->sparsePattern->colorCols[2] = 10;
  jacobian->sparsePattern->colorCols[5] = 10;
  jacobian->sparsePattern->colorCols[10] = 10;
  jacobian->sparsePattern->colorCols[16] = 10;
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+13] = {0,5,5,6,5,5,10,10,10,10,10,10,10,2};
  const int rowIndex[98] = {0,1,3,4,8,0,1,3,4,8,0,1,2,3,4,8,0,1,3,4,8,0,1,3,4,8,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,11,12};
  int i = 0;
  
  jacobian->sizeCols = 13;
  jacobian->sizeRows = 13;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(13,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((13+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(98*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 98;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(13*sizeof(int));
  jacobian->sparsePattern->maxColors = 12;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (13+1)*sizeof(int));
  
  for(i=2;i<13+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 98*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[0] = 2;
  jacobian->sparsePattern->colorCols[4] = 3;
  jacobian->sparsePattern->colorCols[2] = 4;
  jacobian->sparsePattern->colorCols[10] = 5;
  jacobian->sparsePattern->colorCols[9] = 6;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[7] = 8;
  jacobian->sparsePattern->colorCols[11] = 9;
  jacobian->sparsePattern->colorCols[12] = 10;
  jacobian->sparsePattern->colorCols[1] = 10;
  jacobian->sparsePattern->colorCols[6] = 11;
  jacobian->sparsePattern->colorCols[5] = 12;
  TRACE_POP
  return 0;
}


/*
equation index: 850
type: SIMPLE_ASSIGN
constantLoad._v.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac2 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac2) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_850(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,850};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[141] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[140] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
constantLoad._kP.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,851};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (tmp2?(data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */)))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):0.0);
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
constantLoad._kI.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,852};
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
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 6, Less);
  tmp45 = (modelica_boolean)tmp3;
  if(tmp45)
  {
    tmp4 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp12 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
      tmp20 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp27 = (tmp21) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
    }
    tmp36 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp36)
    {
      tmp37 = 0.0;
    }
    else
    {
      tmp29 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
      tmp30 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */ - 1.0;
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
      tmp37 = (tmp31) * ((-1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
    }
    tmp38 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp39 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
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
    tmp46 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp6) * (((-exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp13)))) * ((data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * (tmp27))) + (tmp37) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp40)))));
  }
  else
  {
    tmp46 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
constantLoad._Q.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 + constantLoad.kI.$pDERNLSJac2.dummyVarNLSJac2 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 + constantLoad.kP.$pDERNLSJac2.dummyVarNLSJac2 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 + constantLoad.kI.$pDERNLSJac2.dummyVarNLSJac2 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 + constantLoad.kP.$pDERNLSJac2.dummyVarNLSJac2 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,853};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 8, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp47 && tmp48)?(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */):(data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
constantLoad._P.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 + constantLoad.kI.$pDERNLSJac2.dummyVarNLSJac2 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 + constantLoad.kP.$pDERNLSJac2.dummyVarNLSJac2 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 + constantLoad.kI.$pDERNLSJac2.dummyVarNLSJac2 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 + constantLoad.kP.$pDERNLSJac2.dummyVarNLSJac2 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,854};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 7, GreaterEq);
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 8, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp49 && tmp50)?(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */):(data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
gENROU._PSIq.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-gENROU.Xppq) * gENROU.iq.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,855};
  jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[283] /* gENROU.Xppq PARAM */)) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
pwLine._is._im.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = ($cse6 * gENROU.iq.SeedNLSJac2 - $cse7 * gENROU.id.SeedNLSJac2) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,856};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
pwLine._is._re.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = ($cse7 * gENROU.iq.SeedNLSJac2 + $cse6 * gENROU.id.SeedNLSJac2) * gENROU.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,857};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[228] /* gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
gENROU._ud.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2) - gENROU.R_a * gENROU.id.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,858};
  jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
gENROU._PSId.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-gENROU.Xppd) * gENROU.id.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,859};
  jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[282] /* gENROU.Xppd PARAM */)) * (jacobian->seedVars[16] /* gENROU.id.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
gENROU._uq.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 - gENROU.R_a * gENROU.iq.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,860};
  jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[265] /* gENROU.R_a PARAM */) * (jacobian->seedVars[17] /* gENROU.iq.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
pwLine._vs._im.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = $cse6 * gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 - $cse7 * gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,861};
  jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 862
type: SIMPLE_ASSIGN
pwLine._vs._re.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = $cse6 * gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 + $cse7 * gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_862(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,862};
  jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 863
type: SIMPLE_ASSIGN
gENCLS._p._ir.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = ((-$cse1) * gENCLS.id.SeedNLSJac2 - $cse2 * gENCLS.iq.SeedNLSJac2) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,863};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[202] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 864
type: SIMPLE_ASSIGN
gENCLS._p._ii.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = ($cse2 * gENCLS.id.SeedNLSJac2 - $cse1 * gENCLS.iq.SeedNLSJac2) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,864};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[202] /* gENCLS.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 865
type: SIMPLE_ASSIGN
gENCLS._vd.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = gENCLS.X_d * gENCLS.iq.SeedNLSJac2 - gENCLS.R_a * gENCLS.id.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_865(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,865};
  jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 866
type: SIMPLE_ASSIGN
gENCLS._vq.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac2 - gENCLS.X_d * gENCLS.id.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_866(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,866};
  jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[208] /* gENCLS.R_a PARAM */)) * (jacobian->seedVars[13] /* gENCLS.iq.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[211] /* gENCLS.X_d PARAM */) * (jacobian->seedVars[12] /* gENCLS.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 867
type: SIMPLE_ASSIGN
pwLine4._ir._re.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-pwLine1.ir.re.SeedNLSJac2) - gENCLS.p.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_867(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,867};
  jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac2 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 868
type: SIMPLE_ASSIGN
pwLine1._ir._im.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-pwLine4.ir.im.SeedNLSJac2) - gENCLS.p.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,868};
  jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac2 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 869
type: SIMPLE_ASSIGN
constantLoad._p._ir.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-pwLine.ir.re.SeedNLSJac2) - pwLine1.is.re.SeedNLSJac2 - pwLine3.is.re.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,869};
  jacobian->tmpVars[19] /* constantLoad.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */) - jacobian->seedVars[7] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
pwFault._p._ir.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-pwLine3.ir.re.SeedNLSJac2) - pwLine4.is.re.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_870(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,870};
  jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac2 SEED_VAR */) - jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
pwFault._p._ii.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-pwLine3.ir.im.SeedNLSJac2) - pwLine4.is.im.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_871(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,871};
  jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac2 SEED_VAR */) - jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
constantLoad._p._ii.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = (-pwLine.ir.im.SeedNLSJac2) - pwLine1.is.im.SeedNLSJac2 - pwLine3.is.im.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,872};
  jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */) - jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac2 else pwLine1.vs.im.SeedNLSJac2 - pwLine3.vr.im.SeedNLSJac2 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,873};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp51 && tmp52)?jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
_omcQuot_2472657332.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac2 else pwLine1.vs.re.SeedNLSJac2 - pwLine3.vr.re.SeedNLSJac2 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,874};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp53 && tmp54)?jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[6] /* pwLine3.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
_omcQuot_2472657333.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac2 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 - (pwFault.R * pwLine3.vr.re.SeedNLSJac2 + pwFault.X * pwLine3.vr.im.SeedNLSJac2) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,875};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwFault.t1 PARAM */, 4, Less);
  tmp67 = (modelica_boolean)tmp55;
  if(tmp67)
  {
    tmp68 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */, 5, Less);
    tmp65 = (modelica_boolean)(tmp56 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp65)
    {
      tmp66 = jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */, 5, Less);
      tmp63 = (modelica_boolean)tmp57;
      if(tmp63)
      {
        tmp58 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp59 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp60 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp61 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp62 = (tmp60 * tmp60) + (tmp61 * tmp61);
        tmp64 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[313] /* pwFault.R PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */) + (data->simulationInfo->realParameter[314] /* pwFault.X PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */)) * ((tmp58 * tmp58) + (tmp59 * tmp59)),(tmp62 * tmp62),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp64 = jacobian->tmpVars[20] /* pwFault.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
      }
      tmp66 = tmp64;
    }
    tmp68 = tmp66;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp68;
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
_omcQuot_2472657334.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac2 else pwLine3.vr.re.SeedNLSJac2 - pwLine1.vs.re.SeedNLSJac2 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac2 + pwLine3.vr.im.SeedNLSJac2 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac2 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac2 + (-pwLine3.vr.re.SeedNLSJac2) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac2 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,876};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp69 && tmp70)?jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
_omcQuot_2472657335.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac2 else pwLine3.vr.im.SeedNLSJac2 - pwLine1.vs.im.SeedNLSJac2 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac2 + (-pwLine3.vr.re.SeedNLSJac2) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac2 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac2 + pwLine3.vr.im.SeedNLSJac2 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac2 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  RELATIONHYSTERESIS(tmp71, data->localData[0]->timeValue, data->simulationInfo->realParameter[348] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp72, data->localData[0]->timeValue, data->simulationInfo->realParameter[349] /* pwLine3.t2 PARAM */, 3, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp71 && tmp72)?jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[347] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine3.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[346] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine3.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[344] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[345] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 878
type: SIMPLE_ASSIGN
_omcQuot_2472657336.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac2 else pwLine1.vs.im.SeedNLSJac2 - pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,878};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  RELATIONHYSTERESIS(tmp73, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp74, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp73 && tmp74)?jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
_omcQuot_2472657337.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac2 else pwLine1.vs.re.SeedNLSJac2 - pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_879(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  RELATIONHYSTERESIS(tmp75, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp76, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[6] /* $res7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp75 && tmp76)?jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 880
type: SIMPLE_ASSIGN
_omcQuot_2472657338.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac2.dummyVarNLSJac2 else pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 - pwLine1.vs.im.SeedNLSJac2 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac2.dummyVarNLSJac2 + (-pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  RELATIONHYSTERESIS(tmp77, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp78, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp77 && tmp78)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
_omcQuot_2472657339.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac2.dummyVarNLSJac2 else pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 - pwLine1.vs.re.SeedNLSJac2 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac2.dummyVarNLSJac2 + (-pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  RELATIONHYSTERESIS(tmp79, data->localData[0]->timeValue, data->simulationInfo->realParameter[326] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp80, data->localData[0]->timeValue, data->simulationInfo->realParameter[327] /* pwLine.t2 PARAM */, 1, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp79 && tmp80)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[325] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[324] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[12] /* pwLine.vs.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[322] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[11] /* pwLine.vs.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[323] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 882
type: SIMPLE_ASSIGN
_omcQuot_247265733130.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = pwLine1.vs.im * constantLoad.p.ii.$pDERNLSJac2.dummyVarNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac2.dummyVarNLSJac2 + pwLine1.vs.re.SeedNLSJac2 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,882};
  jacobian->resultVars[9] /* $res10.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[19] /* constantLoad.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 883
type: SIMPLE_ASSIGN
_omcQuot_247265733131.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac2.dummyVarNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac2) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac2.dummyVarNLSJac2 - pwLine1.vs.re * constantLoad.p.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,883};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[140] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[19] /* constantLoad.p.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[141] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[22] /* constantLoad.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 884
type: SIMPLE_ASSIGN
_omcQuot_247265733132.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac2 else pwLine1.vs.re.SeedNLSJac2 - pwLine1.vr.re.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */, 10, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp81 && tmp82)?jacobian->seedVars[7] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 885
type: SIMPLE_ASSIGN
_omcQuot_247265733133.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac2 else pwLine1.vs.im.SeedNLSJac2 - pwLine1.vr.im.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac2 + (-pwLine1.vs.re.SeedNLSJac2) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac2 + pwLine1.vs.im.SeedNLSJac2 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_885(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */, 10, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp83 && tmp84)?jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine1.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 886
type: SIMPLE_ASSIGN
_omcQuot_247265733134.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else pwLine1.vr.im.SeedNLSJac2 - pwLine1.vs.im.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-pwLine1.vr.re.SeedNLSJac2) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac2 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac2 + pwLine1.vr.im.SeedNLSJac2 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  RELATIONHYSTERESIS(tmp85, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp86, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */, 10, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp85 && tmp86)?jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[20] /* pwLine1.vs.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 887
type: SIMPLE_ASSIGN
_omcQuot_247265733135.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = $cse1 * gENCLS.vq.$pDERNLSJac2.dummyVarNLSJac2 + (-$cse2) * gENCLS.vd.$pDERNLSJac2.dummyVarNLSJac2 - pwLine1.vr.im.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,887};
  jacobian->resultVars[14] /* $res15.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 888
type: SIMPLE_ASSIGN
_omcQuot_247265733136.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = $cse2 * gENCLS.vq.$pDERNLSJac2.dummyVarNLSJac2 + $cse1 * gENCLS.vd.$pDERNLSJac2.dummyVarNLSJac2 - pwLine1.vr.re.SeedNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_888(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,888};
  jacobian->resultVars[15] /* $res16.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 889
type: SIMPLE_ASSIGN
_omcQuot_247265733137.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac2.dummyVarNLSJac2 else pwLine1.vr.re.SeedNLSJac2 - pwLine3.vr.re.SeedNLSJac2 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine1.vr.im.SeedNLSJac2 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac2 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.SeedNLSJac2 + (-pwLine1.vr.re.SeedNLSJac2) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac2 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  RELATIONHYSTERESIS(tmp87, data->localData[0]->timeValue, data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp88, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp87 && tmp88)?jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 890
type: SIMPLE_ASSIGN
_omcQuot_247265733138.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.SeedNLSJac2 else pwLine1.vr.im.SeedNLSJac2 - pwLine3.vr.im.SeedNLSJac2 - (pwLine4.Z.re * (pwLine4.ir.im.SeedNLSJac2 + (-pwLine1.vr.re.SeedNLSJac2) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac2 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + pwLine1.vr.im.SeedNLSJac2 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac2 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_890(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  RELATIONHYSTERESIS(tmp89, data->localData[0]->timeValue, data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp90, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[17] /* $res18.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp89 && tmp90)?jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[10] /* pwLine4.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 891
type: SIMPLE_ASSIGN
_omcQuot_247265733139.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac2 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 - (pwFault.R * pwLine3.vr.im.SeedNLSJac2 - pwFault.X * pwLine3.vr.re.SeedNLSJac2) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_891(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,891};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_boolean tmp99;
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  modelica_boolean tmp103;
  modelica_real tmp104;
  RELATIONHYSTERESIS(tmp91, data->localData[0]->timeValue, data->simulationInfo->realParameter[315] /* pwFault.t1 PARAM */, 4, Less);
  tmp103 = (modelica_boolean)tmp91;
  if(tmp103)
  {
    tmp104 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp92, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */, 5, Less);
    tmp101 = (modelica_boolean)(tmp92 && data->simulationInfo->booleanParameter[66] /* pwFault.ground PARAM */);
    if(tmp101)
    {
      tmp102 = jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp93, data->localData[0]->timeValue, data->simulationInfo->realParameter[316] /* pwFault.t2 PARAM */, 5, Less);
      tmp99 = (modelica_boolean)tmp93;
      if(tmp99)
      {
        tmp94 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp95 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp96 = data->simulationInfo->realParameter[314] /* pwFault.X PARAM */;
        tmp97 = data->simulationInfo->realParameter[313] /* pwFault.R PARAM */;
        tmp98 = (tmp96 * tmp96) + (tmp97 * tmp97);
        tmp100 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[313] /* pwFault.R PARAM */) * (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[314] /* pwFault.X PARAM */) * (jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */))) * ((tmp94 * tmp94) + (tmp95 * tmp95)),(tmp98 * tmp98),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp100 = jacobian->tmpVars[21] /* pwFault.p.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
      }
      tmp102 = tmp100;
    }
    tmp104 = tmp102;
  }
  jacobian->resultVars[18] /* $res19.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp104;
  TRACE_POP
}

/*
equation index: 892
type: SIMPLE_ASSIGN
_omcQuot_247265733230.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac2 else pwLine3.vr.im.SeedNLSJac2 - pwLine1.vr.im.SeedNLSJac2 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac2 + (-pwLine3.vr.re.SeedNLSJac2) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac2 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac2 + pwLine3.vr.im.SeedNLSJac2 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac2 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_892(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,892};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 893
type: SIMPLE_ASSIGN
_omcQuot_247265733231.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac2 else pwLine3.vr.re.SeedNLSJac2 - pwLine1.vr.re.SeedNLSJac2 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac2 + pwLine3.vr.im.SeedNLSJac2 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac2 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac2 + (-pwLine3.vr.re.SeedNLSJac2) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac2 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_893(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,893};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[359] /* pwLine4.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[360] /* pwLine4.t2 PARAM */, 12, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[358] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[4] /* pwLine4.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[357] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine4.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[21] /* pwLine3.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[355] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[18] /* pwLine3.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[356] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 894
type: SIMPLE_ASSIGN
_omcQuot_247265733232.__omcQuot_24704445524E4C534A616332._dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac2 else pwLine1.vr.re.SeedNLSJac2 - pwLine1.vs.re.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac2 + pwLine1.vr.im.SeedNLSJac2 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac2 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-pwLine1.vr.re.SeedNLSJac2) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac2 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_894(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,894};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[337] /* pwLine1.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[338] /* pwLine1.t2 PARAM */, 10, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[19] /* pwLine1.vs.re.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[336] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[335] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[18] /* pwLine1.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[14] /* pwLine1.vr.re.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[333] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[15] /* pwLine1.vr.im.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[334] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_NLSJac2;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_850(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_851(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_852(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_853(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_854(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_855(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_856(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_857(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_858(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_859(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_860(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_861(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_862(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_863(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_864(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_865(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_866(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_867(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_868(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_869(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_870(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_871(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_872(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_873(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_874(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_875(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_876(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_877(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_878(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_879(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_880(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_881(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_882(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_883(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_884(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_885(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_886(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_887(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_888(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_889(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_890(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_891(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_892(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_893(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_894(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


