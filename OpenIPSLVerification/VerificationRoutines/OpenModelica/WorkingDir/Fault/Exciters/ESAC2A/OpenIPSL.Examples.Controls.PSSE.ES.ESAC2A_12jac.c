/* Jacobians 5 */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESAC2A_12jac.h"
OMC_DISABLE_OPT
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_initialAnalyticJacobianNLSJac51(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+22] = {0,3,3,4,4,4,4,3,3,4,4,4,4,4,4,7,7,4,4,11,8,8,11};
  const int rowIndex[112] = {4,5,15,5,7,14,0,17,18,19,12,13,17,18,3,16,17,18,3,12,13,16,6,7,14,4,6,15,3,16,17,18,0,3,16,19,8,11,20,21,8,11,20,21,8,9,10,11,8,9,10,11,8,10,11,13,14,20,21,7,8,9,11,12,20,21,0,1,2,19,0,1,2,19,0,1,3,12,13,15,16,17,18,19,20,4,5,6,7,11,14,15,16,3,4,5,6,7,8,14,15,0,2,3,4,12,13,16,17,18,19,21};
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
  jacobian->sparsePattern.colorCols[14] = 6;
  jacobian->sparsePattern.colorCols[8] = 7;
  jacobian->sparsePattern.colorCols[13] = 7;
  jacobian->sparsePattern.colorCols[17] = 7;
  jacobian->sparsePattern.colorCols[4] = 8;
  jacobian->sparsePattern.colorCols[12] = 8;
  jacobian->sparsePattern.colorCols[16] = 8;
  jacobian->sparsePattern.colorCols[1] = 9;
  jacobian->sparsePattern.colorCols[3] = 9;
  jacobian->sparsePattern.colorCols[7] = 9;
  jacobian->sparsePattern.colorCols[9] = 9;
  jacobian->sparsePattern.colorCols[11] = 9;
  jacobian->sparsePattern.colorCols[0] = 10;
  jacobian->sparsePattern.colorCols[2] = 10;
  jacobian->sparsePattern.colorCols[5] = 10;
  jacobian->sparsePattern.colorCols[6] = 10;
  jacobian->sparsePattern.colorCols[10] = 10;
  TRACE_POP
  return 0;
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
  const int colPtrIndex[1+13] = {0,4,3,4,5,2,10,10,10,10,10,10,10,2};
  const int rowIndex[90] = {0,1,3,4,1,3,4,1,2,3,4,0,1,3,4,8,3,4,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,0,1,2,3,4,7,8,9,10,12,11,12};
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
  jacobian->sparsePattern.colorCols[3] = 1;
  jacobian->sparsePattern.colorCols[0] = 2;
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
equation index: 805
type: SIMPLE_ASSIGN
constantLoad._v._$pDERNLSJac51._dummyVarNLSJac51 = (pwLine1.vs.re * pwLine1.vs.re.SeedNLSJac51 + pwLine1.vs.im * pwLine1.vs.im.SeedNLSJac51) / sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_805(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,805};
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = data->localData[0]->realVars[134] /* pwLine1.vs.re variable */;
  tmp7 = data->localData[0]->realVars[133] /* pwLine1.vs.im variable */;
  jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */) + (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */),sqrt((tmp6 * tmp6) + (tmp7 * tmp7)),"sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)");
  TRACE_POP
}

/*
equation index: 806
type: SIMPLE_ASSIGN
constantLoad._kP._$pDERNLSJac51._dummyVarNLSJac51 = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a1 * (-sin(constantLoad.v * constantLoad.wp)) * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 * constantLoad.wp + constantLoad.b1 * cos(constantLoad.v * constantLoad.wp) * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 * constantLoad.wp else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_806(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,806};
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[39], 7, Less);
  jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (tmp8?(data->simulationInfo->realParameter[59]) * (((-sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79])))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[79]))) + (data->simulationInfo->realParameter[65]) * ((cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[79]))) * ((jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[79]))):0.0);
  TRACE_POP
}

/*
equation index: 807
type: SIMPLE_ASSIGN
constantLoad._kI._$pDERNLSJac51._dummyVarNLSJac51 = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * (constantLoad.v ^ (-1.0 + constantLoad.b2) * (-exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) * constantLoad.a2 * (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (constantLoad.b2 - 1.0) * constantLoad.b2 * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51) + (if noEvent(constantLoad.v == 0.0) then 0.0 else constantLoad.v ^ (-1.0 + constantLoad.b2 - 1.0) * (-1.0 + constantLoad.b2) * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2)) else 0.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_807(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,807};
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
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 6, Less);
  tmp51 = (modelica_boolean)tmp9;
  if(tmp51)
  {
    tmp10 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp11 = -1.0 + data->simulationInfo->realParameter[66];
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
    tmp18 = data->simulationInfo->realParameter[66];
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
      tmp26 = data->simulationInfo->realParameter[66] - 1.0;
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
      tmp33 = (tmp27) * ((data->simulationInfo->realParameter[66]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */));
    }
    tmp42 = (modelica_boolean)(data->localData[0]->realVars[55] /* constantLoad.v variable */ == 0.0);
    if(tmp42)
    {
      tmp43 = 0.0;
    }
    else
    {
      tmp35 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
      tmp36 = -1.0 + data->simulationInfo->realParameter[66] - 1.0;
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
      tmp43 = (tmp37) * ((-1.0 + data->simulationInfo->realParameter[66]) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */));
    }
    tmp44 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp45 = data->simulationInfo->realParameter[66];
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
    tmp52 = (data->simulationInfo->realParameter[60]) * ((data->simulationInfo->realParameter[66]) * ((tmp12) * (((-exp(((-data->simulationInfo->realParameter[60])) * (tmp19)))) * ((data->simulationInfo->realParameter[60]) * (tmp33))) + (tmp43) * (exp(((-data->simulationInfo->realParameter[60])) * (tmp46)))));
  }
  else
  {
    tmp52 = 0.0;
  }
  jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = tmp52;
  TRACE_POP
}

/*
equation index: 808
type: SIMPLE_ASSIGN
constantLoad._Q._$pDERNLSJac51._dummyVarNLSJac51 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 + constantLoad.kI.$pDERNLSJac51.dummyVarNLSJac51 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 + constantLoad.kP.$pDERNLSJac51.dummyVarNLSJac51 * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.S_I.im * (constantLoad.kI * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 + constantLoad.kI.$pDERNLSJac51.dummyVarNLSJac51 * constantLoad.v) + constantLoad.S_Y.im * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 + constantLoad.kP.$pDERNLSJac51.dummyVarNLSJac51 * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_808(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,808};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[75], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] + data->simulationInfo->realParameter[69], 5, LessEq);
  jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = ((tmp53 && tmp54)?(data->simulationInfo->realParameter[42]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[44] + data->simulationInfo->realParameter[68]):(data->simulationInfo->realParameter[42]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[46]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[44]));
  TRACE_POP
}

/*
equation index: 809
type: SIMPLE_ASSIGN
constantLoad._P._$pDERNLSJac51._dummyVarNLSJac51 = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 + constantLoad.kI.$pDERNLSJac51.dummyVarNLSJac51 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 + constantLoad.kP.$pDERNLSJac51.dummyVarNLSJac51 * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.S_I.re * (constantLoad.kI * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 + constantLoad.kI.$pDERNLSJac51.dummyVarNLSJac51 * constantLoad.v) + constantLoad.S_Y.re * 2.0 * constantLoad.v * constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 + constantLoad.kP.$pDERNLSJac51.dummyVarNLSJac51 * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_809(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,809};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[75], 4, GreaterEq);
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[75] + data->simulationInfo->realParameter[69], 5, LessEq);
  jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = ((tmp55 && tmp56)?(data->simulationInfo->realParameter[43]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[45] + data->simulationInfo->realParameter[67]):(data->simulationInfo->realParameter[43]) * ((data->localData[0]->realVars[51] /* constantLoad.kI variable */) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) + (jacobian->tmpVars[2] /* constantLoad.kI.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[47]) * (((2.0) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) * (jacobian->tmpVars[0] /* constantLoad.v.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[1] /* constantLoad.kP.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[45]));
  TRACE_POP
}

/*
equation index: 810
type: SIMPLE_ASSIGN
generator._PSIq._$pDERNLSJac51._dummyVarNLSJac51 = (-generator.Xppq) * generator.iq.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_810(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,810};
  jacobian->tmpVars[5] /* generator.PSIq.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[254])) * (jacobian->seedVars[17] /* generator.iq.SeedNLSJac51 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 811
type: SIMPLE_ASSIGN
pwLine._is._im._$pDERNLSJac51._dummyVarNLSJac51 = ($cse6 * generator.iq.SeedNLSJac51 - $cse7 * generator.id.SeedNLSJac51) * generator.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_811(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,811};
  jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[17] /* generator.iq.SeedNLSJac51 SEED_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[16] /* generator.id.SeedNLSJac51 SEED_VAR */))) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}

/*
equation index: 812
type: SIMPLE_ASSIGN
pwLine._is._re._$pDERNLSJac51._dummyVarNLSJac51 = ($cse7 * generator.iq.SeedNLSJac51 + $cse6 * generator.id.SeedNLSJac51) * generator.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_812(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,812};
  jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->seedVars[17] /* generator.iq.SeedNLSJac51 SEED_VAR */) + (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->seedVars[16] /* generator.id.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}

/*
equation index: 813
type: SIMPLE_ASSIGN
generator._ud._$pDERNLSJac51._dummyVarNLSJac51 = (-generator.PSIq.$pDERNLSJac51.dummyVarNLSJac51) - generator.R_a * generator.id.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_813(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,813};
  jacobian->tmpVars[8] /* generator.ud.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[5] /* generator.PSIq.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[236]) * (jacobian->seedVars[16] /* generator.id.SeedNLSJac51 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
generator._PSId._$pDERNLSJac51._dummyVarNLSJac51 = (-generator.Xppd) * generator.id.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_814(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,814};
  jacobian->tmpVars[9] /* generator.PSId.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[253])) * (jacobian->seedVars[16] /* generator.id.SeedNLSJac51 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
generator._uq._$pDERNLSJac51._dummyVarNLSJac51 = generator.PSId.$pDERNLSJac51.dummyVarNLSJac51 - generator.R_a * generator.iq.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_815(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,815};
  jacobian->tmpVars[10] /* generator.uq.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* generator.PSId.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[236]) * (jacobian->seedVars[17] /* generator.iq.SeedNLSJac51 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
pwLine._vs._re._$pDERNLSJac51._dummyVarNLSJac51 = $cse6 * generator.ud.$pDERNLSJac51.dummyVarNLSJac51 + $cse7 * generator.uq.$pDERNLSJac51.dummyVarNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_816(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,816};
  jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[8] /* generator.ud.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[10] /* generator.uq.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
pwLine._vs._im._$pDERNLSJac51._dummyVarNLSJac51 = $cse6 * generator.uq.$pDERNLSJac51.dummyVarNLSJac51 - $cse7 * generator.ud.$pDERNLSJac51.dummyVarNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_817(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,817};
  jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (jacobian->tmpVars[10] /* generator.uq.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (jacobian->tmpVars[8] /* generator.ud.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
gENCLS._p._ir._$pDERNLSJac51._dummyVarNLSJac51 = ((-$cse1) * gENCLS.id.SeedNLSJac51 - $cse2 * gENCLS.iq.SeedNLSJac51) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_818(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,818};
  jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac51 SEED_VAR */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac51 SEED_VAR */))) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
gENCLS._p._ii._$pDERNLSJac51._dummyVarNLSJac51 = ($cse2 * gENCLS.id.SeedNLSJac51 - $cse1 * gENCLS.iq.SeedNLSJac51) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_819(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,819};
  jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac51 SEED_VAR */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac51 SEED_VAR */))) * (data->simulationInfo->realParameter[176]);
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
gENCLS._vd._$pDERNLSJac51._dummyVarNLSJac51 = gENCLS.X_d * gENCLS.iq.SeedNLSJac51 - gENCLS.R_a * gENCLS.id.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_820(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,820};
  jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[185]) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac51 SEED_VAR */) - ((data->simulationInfo->realParameter[182]) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac51 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
gENCLS._vq._$pDERNLSJac51._dummyVarNLSJac51 = (-gENCLS.R_a) * gENCLS.iq.SeedNLSJac51 - gENCLS.X_d * gENCLS.id.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_821(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,821};
  jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[182])) * (jacobian->seedVars[12] /* gENCLS.iq.SeedNLSJac51 SEED_VAR */) - ((data->simulationInfo->realParameter[185]) * (jacobian->seedVars[13] /* gENCLS.id.SeedNLSJac51 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
pwLine4._ir._re._$pDERNLSJac51._dummyVarNLSJac51 = (-pwLine1.ir.re.SeedNLSJac51) - gENCLS.p.ir.$pDERNLSJac51.dummyVarNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_822(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,822};
  jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac51 SEED_VAR */) - jacobian->tmpVars[13] /* gENCLS.p.ir.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
pwLine4._ir._im._$pDERNLSJac51._dummyVarNLSJac51 = (-pwLine1.ir.im.SeedNLSJac51) - gENCLS.p.ii.$pDERNLSJac51.dummyVarNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_823(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,823};
  jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac51 SEED_VAR */) - jacobian->tmpVars[14] /* gENCLS.p.ii.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
pwFault._p._ir._$pDERNLSJac51._dummyVarNLSJac51 = (-pwLine3.ir.re.SeedNLSJac51) - pwLine4.is.re.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_824(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,824};
  jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac51 SEED_VAR */) - jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac51 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
pwLine3._is._im._$pDERNLSJac51._dummyVarNLSJac51 = (-pwLine.ir.im.SeedNLSJac51) - pwLine1.is.im.SeedNLSJac51 - constantLoad.p.ii.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_825(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,825};
  jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[9] /* pwLine.ir.im.SeedNLSJac51 SEED_VAR */) - jacobian->seedVars[5] /* pwLine1.is.im.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[4] /* constantLoad.p.ii.SeedNLSJac51 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
constantLoad._p._ir._$pDERNLSJac51._dummyVarNLSJac51 = (-pwLine.ir.re.SeedNLSJac51) - pwLine1.is.re.SeedNLSJac51 - pwLine3.is.re.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_826(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,826};
  jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac51 SEED_VAR */) - jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac51 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
pwFault._p._ii._$pDERNLSJac51._dummyVarNLSJac51 = (-pwLine3.ir.im.SeedNLSJac51) - pwLine4.is.im.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_827(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,827};
  jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ = (-jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac51 SEED_VAR */) - jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac51 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.SeedNLSJac51 else pwLine1.vs.im.SeedNLSJac51 - pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 - (pwLine.Z.re * (pwLine.ir.im.SeedNLSJac51 + (-pwLine1.vs.re.SeedNLSJac51) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac51 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac51 + pwLine1.vs.im.SeedNLSJac51 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac51 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_828(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,828};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp58, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 1, Less);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp57 && tmp58)?jacobian->seedVars[9] /* pwLine.ir.im.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */ - jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[296]) * (jacobian->seedVars[9] /* pwLine.ir.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[294])))));
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.$pDERNLSJac51.dummyVarNLSJac51 else pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 - pwLine1.vs.re.SeedNLSJac51 - (pwLine.Z.re * (pwLine.is.re.$pDERNLSJac51.dummyVarNLSJac51 + pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.$pDERNLSJac51.dummyVarNLSJac51 + (-pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_829(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,829};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  RELATIONHYSTERESIS(tmp59, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp60, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 1, Less);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp59 && tmp60)?jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[296]) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[293]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[293]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[294]))))));
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.$pDERNLSJac51.dummyVarNLSJac51 else pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 - pwLine1.vs.im.SeedNLSJac51 - (pwLine.Z.re * (pwLine.is.im.$pDERNLSJac51.dummyVarNLSJac51 + (-pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51) * pwLine.Y.im - pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.$pDERNLSJac51.dummyVarNLSJac51 + pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 * pwLine.Y.im - pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_830(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,830};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  RELATIONHYSTERESIS(tmp61, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp62, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 1, Less);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp61 && tmp62)?jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[296]) * (jacobian->tmpVars[6] /* pwLine.is.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[293]) - ((jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[294]))) + (data->simulationInfo->realParameter[295]) * (jacobian->tmpVars[7] /* pwLine.is.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[12] /* pwLine.vs.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[293]) - ((jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[294])))));
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.SeedNLSJac51 else pwLine1.vs.re.SeedNLSJac51 - pwLine3.vr.re.SeedNLSJac51 - (pwLine3.Z.re * (pwLine3.is.re.SeedNLSJac51 + pwLine1.vs.im.SeedNLSJac51 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac51 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.$pDERNLSJac51.dummyVarNLSJac51 + (-pwLine1.vs.re.SeedNLSJac51) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac51 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_831(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,831};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  RELATIONHYSTERESIS(tmp63, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp64, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 9, Less);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp63 && tmp64)?jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[318]) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[315]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[315]) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[316]))))));
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac51 else pwLine3.vr.im.SeedNLSJac51 - pwLine1.vs.im.SeedNLSJac51 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac51 + (-pwLine3.vr.re.SeedNLSJac51) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac51 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac51 + pwLine3.vr.im.SeedNLSJac51 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac51 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_832(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,832};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  RELATIONHYSTERESIS(tmp65, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp66, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 9, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp65 && tmp66)?jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[318]) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[315]) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[315]) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[316])))));
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac51._dummyVarNLSJac51 = if time < pwFault.t1 then pwFault.p.ii.$pDERNLSJac51.dummyVarNLSJac51 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.re.SeedNLSJac51 else if time < pwFault.t2 then pwFault.p.ii.$pDERNLSJac51.dummyVarNLSJac51 - (pwFault.R * pwLine3.vr.im.SeedNLSJac51 - pwFault.X * pwLine3.vr.re.SeedNLSJac51) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else pwFault.p.ii.$pDERNLSJac51.dummyVarNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_833(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,833};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  RELATIONHYSTERESIS(tmp67, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 10, Less);
  tmp79 = (modelica_boolean)tmp67;
  if(tmp79)
  {
    tmp80 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 11, Less);
    tmp77 = (modelica_boolean)(tmp68 && data->simulationInfo->booleanParameter[66]);
    if(tmp77)
    {
      tmp78 = jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 11, Less);
      tmp75 = (modelica_boolean)tmp69;
      if(tmp75)
      {
        tmp70 = data->simulationInfo->realParameter[285];
        tmp71 = data->simulationInfo->realParameter[284];
        tmp72 = data->simulationInfo->realParameter[285];
        tmp73 = data->simulationInfo->realParameter[284];
        tmp74 = (tmp72 * tmp72) + (tmp73 * tmp73);
        tmp76 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[284]) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */) - ((data->simulationInfo->realParameter[285]) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */))) * ((tmp70 * tmp70) + (tmp71 * tmp71)),(tmp74 * tmp74),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp76 = jacobian->tmpVars[22] /* pwFault.p.ii.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */;
      }
      tmp78 = tmp76;
    }
    tmp80 = tmp78;
  }
  jacobian->resultVars[5] /* $res6.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = tmp80;
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac51._dummyVarNLSJac51 = if time < pwFault.t1 then pwFault.p.ir.$pDERNLSJac51.dummyVarNLSJac51 else if time < pwFault.t2 and pwFault.ground then pwLine3.vr.im.SeedNLSJac51 else if time < pwFault.t2 then pwFault.p.ir.$pDERNLSJac51.dummyVarNLSJac51 - (pwFault.R * pwLine3.vr.re.SeedNLSJac51 + pwFault.X * pwLine3.vr.im.SeedNLSJac51) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else pwFault.p.ir.$pDERNLSJac51.dummyVarNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_834(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,834};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_boolean tmp89;
  modelica_real tmp90;
  modelica_boolean tmp91;
  modelica_real tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  RELATIONHYSTERESIS(tmp81, data->localData[0]->timeValue, data->simulationInfo->realParameter[286], 10, Less);
  tmp93 = (modelica_boolean)tmp81;
  if(tmp93)
  {
    tmp94 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 11, Less);
    tmp91 = (modelica_boolean)(tmp82 && data->simulationInfo->booleanParameter[66]);
    if(tmp91)
    {
      tmp92 = jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[287], 11, Less);
      tmp89 = (modelica_boolean)tmp83;
      if(tmp89)
      {
        tmp84 = data->simulationInfo->realParameter[284];
        tmp85 = data->simulationInfo->realParameter[285];
        tmp86 = data->simulationInfo->realParameter[284];
        tmp87 = data->simulationInfo->realParameter[285];
        tmp88 = (tmp86 * tmp86) + (tmp87 * tmp87);
        tmp90 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ - (DIVISION(((data->simulationInfo->realParameter[284]) * (jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */) + (data->simulationInfo->realParameter[285]) * (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */)) * ((tmp84 * tmp84) + (tmp85 * tmp85)),(tmp88 * tmp88),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp90 = jacobian->tmpVars[19] /* pwFault.p.ir.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */;
      }
      tmp92 = tmp90;
    }
    tmp94 = tmp92;
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = tmp94;
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
$res8._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac51 else pwLine3.vr.re.SeedNLSJac51 - pwLine1.vr.re.SeedNLSJac51 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac51 + pwLine3.vr.im.SeedNLSJac51 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac51 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.SeedNLSJac51 + (-pwLine3.vr.re.SeedNLSJac51) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac51 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_835(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,835};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  RELATIONHYSTERESIS(tmp95, data->localData[0]->timeValue, data->simulationInfo->realParameter[330], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[331], 13, Less);
  jacobian->resultVars[7] /* $res8.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp95 && tmp96)?jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[329]) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[326]) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[327]))) - ((data->simulationInfo->realParameter[328]) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[326]) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[327]))))));
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
$res9._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.$pDERNLSJac51.dummyVarNLSJac51 else pwLine1.vr.re.SeedNLSJac51 - pwLine3.vr.re.SeedNLSJac51 - (pwLine4.Z.re * (pwLine4.ir.re.$pDERNLSJac51.dummyVarNLSJac51 + pwLine1.vr.im.SeedNLSJac51 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac51 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac51.dummyVarNLSJac51 + (-pwLine1.vr.re.SeedNLSJac51) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac51 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_836(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,836};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[330], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[331], 13, Less);
  jacobian->resultVars[8] /* $res9.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp97 && tmp98)?jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[329]) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[326]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[327]))) - ((data->simulationInfo->realParameter[328]) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[326]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[327]))))));
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
$res10._$pDERNLSJac51._dummyVarNLSJac51 = $cse2 * gENCLS.vq.$pDERNLSJac51.dummyVarNLSJac51 + $cse1 * gENCLS.vd.$pDERNLSJac51.dummyVarNLSJac51 - pwLine1.vr.re.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_837(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,837};
  jacobian->resultVars[9] /* $res10.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = (data->localData[0]->realVars[27] /* $cse2 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
$res11._$pDERNLSJac51._dummyVarNLSJac51 = $cse1 * gENCLS.vq.$pDERNLSJac51.dummyVarNLSJac51 + (-$cse2) * gENCLS.vd.$pDERNLSJac51.dummyVarNLSJac51 - pwLine1.vr.im.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_838(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,838};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = (data->localData[0]->realVars[26] /* $cse1 variable */) * (jacobian->tmpVars[16] /* gENCLS.vq.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (jacobian->tmpVars[15] /* gENCLS.vd.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
$res12._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac51.dummyVarNLSJac51 else pwLine1.vr.im.SeedNLSJac51 - pwLine3.vr.im.SeedNLSJac51 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac51.dummyVarNLSJac51 + (-pwLine1.vr.re.SeedNLSJac51) * pwLine4.Y.im - pwLine1.vr.im.SeedNLSJac51 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.$pDERNLSJac51.dummyVarNLSJac51 + pwLine1.vr.im.SeedNLSJac51 * pwLine4.Y.im - pwLine1.vr.re.SeedNLSJac51 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_839(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,839};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[330], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[331], 13, Less);
  jacobian->resultVars[11] /* $res12.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp99 && tmp100)?jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[329]) * (jacobian->tmpVars[18] /* pwLine4.ir.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[326]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[327]))) + (data->simulationInfo->realParameter[328]) * (jacobian->tmpVars[17] /* pwLine4.ir.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[326]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[327])))));
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
$res13._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.SeedNLSJac51 else pwLine1.vs.re.SeedNLSJac51 - pwLine1.vr.re.SeedNLSJac51 - (pwLine1.Z.re * (pwLine1.is.re.SeedNLSJac51 + pwLine1.vs.im.SeedNLSJac51 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac51 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac51 + (-pwLine1.vs.re.SeedNLSJac51) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac51 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_840(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,840};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp102, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 3, Less);
  jacobian->resultVars[12] /* $res13.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp101 && tmp102)?jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[307]) * (jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[304]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (jacobian->seedVars[5] /* pwLine1.is.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[304]) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[305]))))));
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
$res14._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac51 else pwLine1.vs.im.SeedNLSJac51 - pwLine1.vr.im.SeedNLSJac51 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac51 + (-pwLine1.vs.re.SeedNLSJac51) * pwLine1.Y.im - pwLine1.vs.im.SeedNLSJac51 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.SeedNLSJac51 + pwLine1.vs.im.SeedNLSJac51 * pwLine1.Y.im - pwLine1.vs.re.SeedNLSJac51 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,841};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  RELATIONHYSTERESIS(tmp103, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp104, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 3, Less);
  jacobian->resultVars[13] /* $res14.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp103 && tmp104)?jacobian->seedVars[5] /* pwLine1.is.im.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[307]) * (jacobian->seedVars[5] /* pwLine1.is.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[304]) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (jacobian->seedVars[3] /* pwLine1.is.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[304]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[305])))));
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
$res15._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.SeedNLSJac51 else pwLine3.vr.im.SeedNLSJac51 - pwLine1.vr.im.SeedNLSJac51 - (pwLine4.Z.re * (pwLine4.is.im.SeedNLSJac51 + (-pwLine3.vr.re.SeedNLSJac51) * pwLine4.Y.im - pwLine3.vr.im.SeedNLSJac51 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac51 + pwLine3.vr.im.SeedNLSJac51 * pwLine4.Y.im - pwLine3.vr.re.SeedNLSJac51 * pwLine4.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_842(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,842};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  RELATIONHYSTERESIS(tmp105, data->localData[0]->timeValue, data->simulationInfo->realParameter[330], 12, GreaterEq);
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[331], 13, Less);
  jacobian->resultVars[14] /* $res15.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp105 && tmp106)?jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[329]) * (jacobian->seedVars[1] /* pwLine4.is.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[326]) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[327]))) + (data->simulationInfo->realParameter[328]) * (jacobian->seedVars[6] /* pwLine4.is.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[326]) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[327])))));
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
$res16._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac51 else pwLine3.vr.re.SeedNLSJac51 - pwLine1.vs.re.SeedNLSJac51 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac51 + pwLine3.vr.im.SeedNLSJac51 * pwLine3.Y.im - pwLine3.vr.re.SeedNLSJac51 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac51 + (-pwLine3.vr.re.SeedNLSJac51) * pwLine3.Y.im - pwLine3.vr.im.SeedNLSJac51 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_843(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,843};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 9, Less);
  jacobian->resultVars[15] /* $res16.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp107 && tmp108)?jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[318]) * (jacobian->seedVars[7] /* pwLine3.ir.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[315]) - ((jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[316]))) - ((data->simulationInfo->realParameter[317]) * (jacobian->seedVars[0] /* pwLine3.ir.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[20] /* pwLine3.vr.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[315]) - ((jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[316]))))));
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
$res17._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.$pDERNLSJac51.dummyVarNLSJac51 else pwLine1.vs.im.SeedNLSJac51 - pwLine3.vr.im.SeedNLSJac51 - (pwLine3.Z.re * (pwLine3.is.im.$pDERNLSJac51.dummyVarNLSJac51 + (-pwLine1.vs.re.SeedNLSJac51) * pwLine3.Y.im - pwLine1.vs.im.SeedNLSJac51 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.SeedNLSJac51 + pwLine1.vs.im.SeedNLSJac51 * pwLine3.Y.im - pwLine1.vs.re.SeedNLSJac51 * pwLine3.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_844(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,844};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[319], 8, GreaterEq);
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[320], 9, Less);
  jacobian->resultVars[16] /* $res17.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp109 && tmp110)?jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */:jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[19] /* pwLine3.vr.im.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[318]) * (jacobian->tmpVars[20] /* pwLine3.is.im.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[315]) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[316]))) + (data->simulationInfo->realParameter[317]) * (jacobian->seedVars[8] /* pwLine3.is.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[315]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[316])))));
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
$res18._$pDERNLSJac51._dummyVarNLSJac51 = pwLine1.vs.im * constantLoad.p.ir.$pDERNLSJac51.dummyVarNLSJac51 + pwLine1.vs.im.SeedNLSJac51 * constantLoad.p.ir + (-pwLine1.vs.re.SeedNLSJac51) * constantLoad.p.ii - constantLoad.Q.$pDERNLSJac51.dummyVarNLSJac51 - pwLine1.vs.re * constantLoad.p.ii.SeedNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_845(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,845};
  jacobian->resultVars[17] /* $res18.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - jacobian->tmpVars[3] /* constantLoad.Q.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (jacobian->seedVars[4] /* constantLoad.p.ii.SeedNLSJac51 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
$res19._$pDERNLSJac51._dummyVarNLSJac51 = pwLine1.vs.im * constantLoad.p.ii.SeedNLSJac51 + pwLine1.vs.im.SeedNLSJac51 * constantLoad.p.ii + pwLine1.vs.re * constantLoad.p.ir.$pDERNLSJac51.dummyVarNLSJac51 + pwLine1.vs.re.SeedNLSJac51 * constantLoad.p.ir - constantLoad.P.$pDERNLSJac51.dummyVarNLSJac51
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_846(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,846};
  jacobian->resultVars[18] /* $res19.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = (data->localData[0]->realVars[133] /* pwLine1.vs.im variable */) * (jacobian->seedVars[4] /* constantLoad.p.ii.SeedNLSJac51 SEED_VAR */) + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[134] /* pwLine1.vs.re variable */) * (jacobian->tmpVars[21] /* constantLoad.p.ir.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - jacobian->tmpVars[4] /* constantLoad.P.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
$res20._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac51 else pwLine1.vs.re.SeedNLSJac51 - pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac51 + pwLine1.vs.im.SeedNLSJac51 * pwLine.Y.im - pwLine1.vs.re.SeedNLSJac51 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.SeedNLSJac51 + (-pwLine1.vs.re.SeedNLSJac51) * pwLine.Y.im - pwLine1.vs.im.SeedNLSJac51 * pwLine.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_847(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,847};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[297], 0, GreaterEq);
  RELATIONHYSTERESIS(tmp112, data->localData[0]->timeValue, data->simulationInfo->realParameter[298], 1, Less);
  jacobian->resultVars[19] /* $res20.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp111 && tmp112)?jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */ - jacobian->tmpVars[11] /* pwLine.vs.re.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[296]) * (jacobian->seedVars[2] /* pwLine.ir.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[294]))) - ((data->simulationInfo->realParameter[295]) * (jacobian->seedVars[9] /* pwLine.ir.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[293]) - ((jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[294]))))));
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
$res21._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac51 else pwLine1.vr.re.SeedNLSJac51 - pwLine1.vs.re.SeedNLSJac51 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac51 + pwLine1.vr.im.SeedNLSJac51 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac51 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac51 + (-pwLine1.vr.re.SeedNLSJac51) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac51 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_848(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,848};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  RELATIONHYSTERESIS(tmp113, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 3, Less);
  jacobian->resultVars[20] /* $res21.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp113 && tmp114)?jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[18] /* pwLine1.vs.re.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[307]) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[304]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[305]))) - ((data->simulationInfo->realParameter[306]) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[304]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[305]))))));
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
$res22._$pDERNLSJac51._dummyVarNLSJac51 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac51 else pwLine1.vr.im.SeedNLSJac51 - pwLine1.vs.im.SeedNLSJac51 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac51 + (-pwLine1.vr.re.SeedNLSJac51) * pwLine1.Y.im - pwLine1.vr.im.SeedNLSJac51 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac51 + pwLine1.vr.im.SeedNLSJac51 * pwLine1.Y.im - pwLine1.vr.re.SeedNLSJac51 * pwLine1.Y.re))
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_849(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,849};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[308], 2, GreaterEq);
  RELATIONHYSTERESIS(tmp116, data->localData[0]->timeValue, data->simulationInfo->realParameter[309], 3, Less);
  jacobian->resultVars[21] /* $res22.$pDERNLSJac51.dummyVarNLSJac51 JACOBIAN_VAR */ = ((tmp115 && tmp116)?jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac51 SEED_VAR */:jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */ - jacobian->seedVars[21] /* pwLine1.vs.im.SeedNLSJac51 SEED_VAR */ - ((data->simulationInfo->realParameter[307]) * (jacobian->seedVars[10] /* pwLine1.ir.im.SeedNLSJac51 SEED_VAR */ + ((-jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */)) * (data->simulationInfo->realParameter[304]) - ((jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[305]))) + (data->simulationInfo->realParameter[306]) * (jacobian->seedVars[11] /* pwLine1.ir.re.SeedNLSJac51 SEED_VAR */ + (jacobian->seedVars[14] /* pwLine1.vr.im.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[304]) - ((jacobian->seedVars[15] /* pwLine1.vr.re.SeedNLSJac51 SEED_VAR */) * (data->simulationInfo->realParameter[305])))));
  TRACE_POP
}
int OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_functionJacNLSJac51_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_INDEX_JAC_NLSJac51;
  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_805(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_806(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_807(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_808(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_809(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_810(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_811(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_812(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_813(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_814(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_815(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_816(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_817(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_818(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_819(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_820(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_821(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_822(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_823(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_824(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_825(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_826(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_827(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_828(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_829(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_830(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_831(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_832(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_833(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_834(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_835(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_836(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_837(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_838(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_839(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_840(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_841(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_842(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_843(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_844(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_845(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_846(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_847(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_848(data, threadData, jacobian, parentJacobian);

  OpenIPSL_Examples_Controls_PSSE_ES_ESAC2A_eqFunction_849(data, threadData, jacobian, parentJacobian);
  
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


