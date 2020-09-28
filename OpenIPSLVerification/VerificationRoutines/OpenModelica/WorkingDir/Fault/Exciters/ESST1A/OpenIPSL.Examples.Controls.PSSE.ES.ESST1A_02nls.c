/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.ES.ESST1A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 484
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1 = smooth(0, if eSST1A.add3_1.y > eSST1A.imLimited.uMax then eSST1A.imLimited.uMax else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then eSST1A.imLimited.uMin else eSST1A.add3_1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */:data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */);
  }
  data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 485
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 14, Less);
  data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 486
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y = (eSST1A.add3_1.y - (eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y)) / eSST1A.add3_1.k1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */ = DIVISION_SIM(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */ - ((data->simulationInfo->realParameter[133] /* eSST1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[134] /* eSST1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[61] /* eSST1A.Limiters.y variable */)),data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k1 PARAM */,"eSST1A.add3_1.k1",equationIndexes);
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y = (eSST1A.imLeadLag.TF.bb[2] - eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.d) * eSST1A.imLeadLag.TF.x[1] + eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[159] /* eSST1A.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[154] /* eSST1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[77] /* eSST1A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */);
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[150] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y = (eSST1A.imLeadLag1.TF.bb[2] - eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.d) * eSST1A.imLeadLag1.TF.x[1] + eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */ = (data->simulationInfo->realParameter[177] /* eSST1A.imLeadLag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[172] /* eSST1A.imLeadLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.d PARAM */))) * (data->localData[0]->realVars[80] /* eSST1A.imLeadLag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.d PARAM */) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */);
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[168] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.K PARAM */) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 491
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[191] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 492
type: SIMPLE_ASSIGN
eSST1A.add3_2.y = eSST1A.add3_2.k1 * const.k + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k2 PARAM */) * (data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[137] /* eSST1A.add3_2.k3 PARAM */) * (data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}

void residualFunc504(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,504};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_484(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_485(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_486(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_487(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_488(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_489(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_490(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_491(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_492(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */ + (-data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1) */) - ((data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[141] /* eSST1A.imDerivativeLag.T PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS504(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS504(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST1A.add3_1.y */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* eSST1A.add3_1.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* eSST1A.add3_1.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* eSST1A.add3_1.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS504(sysData);
}

void getIterationVarsNLS504(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */;
}


/* inner equations */

/*
equation index: 370
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 371
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 372
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
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
  modelica_boolean tmp15;
  modelica_real tmp16;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[55] /* constantLoad.v variable */, 0.5, 2, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 3, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 4, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[278] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 376
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->localData[0]->realVars[121] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[30] /* $cse6 variable */)) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 377
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->localData[0]->realVars[120] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 378
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->localData[0]->realVars[110] /* gENROE.ud variable */ = (-data->localData[0]->realVars[102] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 379
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[277] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 380
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->localData[0]->realVars[98] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 381
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) + (data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[111] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 382
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[30] /* $cse6 variable */) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) - ((data->localData[0]->realVars[31] /* $cse7 variable */) * (data->localData[0]->realVars[110] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 383
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[26] /* $cse1 variable */)) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 384
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 385
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 386
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->localData[0]->realVars[93] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 387
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[151] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[92] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 388
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[150] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 389
type: SIMPLE_ASSIGN
pwLine1.is.im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[118] /* pwLine.ir.im variable */) - data->localData[0]->realVars[142] /* pwLine3.is.im variable */ - data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 390
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - data->localData[0]->realVars[131] /* pwLine1.is.re variable */ - data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 391
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->localData[0]->realVars[113] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 392
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->localData[0]->realVars[112] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  TRACE_POP
}

void residualFunc460(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,460};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  /* iteration variables */
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = xloc[0];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = xloc[1];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = xloc[3];
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = xloc[4];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = xloc[5];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = xloc[6];
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = xloc[7];
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = xloc[8];
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = xloc[9];
  data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = xloc[12];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = xloc[13];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = xloc[16];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = xloc[17];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = xloc[18];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = xloc[19];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_370(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_371(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_372(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_373(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_374(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_375(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_376(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_377(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_378(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_379(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_380(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_381(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_382(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_383(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_384(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_385(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_386(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_387(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_388(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_389(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_390(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_391(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_392(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */, 7, Less);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */, 7, Less);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */, 8, Less);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[1] = tmp21;

  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  res[2] = ((tmp22 && tmp23)?data->localData[0]->realVars[120] /* pwLine.is.im variable */:data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  res[3] = ((tmp24 && tmp25)?data->localData[0]->realVars[121] /* pwLine.is.re variable */:data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  res[4] = ((tmp26 && tmp27)?data->localData[0]->realVars[118] /* pwLine.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */, 1, Less);
  res[5] = ((tmp28 && tmp29)?data->localData[0]->realVars[119] /* pwLine.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));

  res[6] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  res[7] = ((tmp30 && tmp31)?data->localData[0]->realVars[143] /* pwLine3.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));

  res[8] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  res[9] = ((tmp32 && tmp33)?data->localData[0]->realVars[130] /* pwLine1.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  res[10] = ((tmp34 && tmp35)?data->localData[0]->realVars[131] /* pwLine1.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));

  res[11] = (data->localData[0]->realVars[27] /* $cse2 variable */) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;

  res[12] = (data->localData[0]->realVars[26] /* $cse1 variable */) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[27] /* $cse2 variable */)) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[129] /* pwLine1.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */, 12, Less);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[128] /* pwLine1.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[142] /* pwLine3.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[153] /* pwLine4.is.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  res[17] = ((tmp44 && tmp45)?data->localData[0]->realVars[141] /* pwLine3.ir.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */, 5, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */, 6, Less);
  res[18] = ((tmp46 && tmp47)?data->localData[0]->realVars[140] /* pwLine3.ir.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[152] /* pwLine4.is.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[151] /* pwLine4.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */, 10, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[150] /* pwLine4.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS460(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,3,3,3,3,4,4,4,4,4,4,4,4,4,4,7,7,4,4,8,8,11,11};
  const int rowIndex[112] = {0,16,19,0,17,18,1,17,18,1,16,19,6,8,9,10,6,7,8,15,7,9,10,15,6,8,9,10,4,5,9,10,4,5,6,8,13,14,20,21,13,14,20,21,11,12,13,14,11,12,13,14,9,12,13,14,19,20,21,10,11,13,14,16,20,21,2,3,4,5,2,3,4,5,0,1,7,16,17,18,19,20,0,1,15,16,17,18,19,21,2,4,5,6,7,8,9,10,14,15,18,3,4,5,6,7,8,9,10,13,15,17};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(112*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 112;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 9;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 112*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[21] = 1;
  inSysData->sparsePattern->colorCols[20] = 2;
  inSysData->sparsePattern->colorCols[19] = 3;
  inSysData->sparsePattern->colorCols[15] = 4;
  inSysData->sparsePattern->colorCols[14] = 5;
  inSysData->sparsePattern->colorCols[7] = 6;
  inSysData->sparsePattern->colorCols[13] = 6;
  inSysData->sparsePattern->colorCols[17] = 6;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[6] = 7;
  inSysData->sparsePattern->colorCols[9] = 7;
  inSysData->sparsePattern->colorCols[12] = 7;
  inSysData->sparsePattern->colorCols[1] = 8;
  inSysData->sparsePattern->colorCols[3] = 8;
  inSysData->sparsePattern->colorCols[5] = 8;
  inSysData->sparsePattern->colorCols[8] = 8;
  inSysData->sparsePattern->colorCols[11] = 8;
  inSysData->sparsePattern->colorCols[0] = 9;
  inSysData->sparsePattern->colorCols[2] = 9;
  inSysData->sparsePattern->colorCols[4] = 9;
  inSysData->sparsePattern->colorCols[10] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
}
void initializeStaticDataNLS460(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[150].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[150].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[150].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* pwLine4.ir.re */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.id */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS460(sysData);
}

void getIterationVarsNLS460(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  array[1] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  array[2] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  array[3] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  array[4] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  array[5] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  array[6] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  array[7] = data->localData[0]->realVars[53] /* constantLoad.p.ii variable */;
  array[8] = data->localData[0]->realVars[118] /* pwLine.ir.im variable */;
  array[9] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  array[10] = data->localData[0]->realVars[150] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[151] /* pwLine4.ir.re variable */;
  array[12] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  array[13] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  array[14] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  array[15] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  array[16] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  array[17] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  array[18] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  array[19] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  array[20] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  array[21] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
}


/* inner equations */

/*
equation index: 197
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
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
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
eSST1A.add2.y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[63] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[127] /* eSST1A.add2.k1 PARAM */) * (data->simulationInfo->realParameter[125] /* eSST1A.Vref1.k PARAM */) + (data->simulationInfo->realParameter[128] /* eSST1A.add2.k2 PARAM */) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
eSST1A.imGain.y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[145] /* eSST1A.imGain.k PARAM */) * (data->localData[0]->realVars[63] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
eSST1A.EFD = eSST1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->localData[0]->realVars[59] /* eSST1A.EFD variable */ = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[266] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
eSST1A.IFD0 = eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
eSST1A.VA0 = eSST1A.Efd0 + eSST1A.K_LR * (eSST1A.IFD0 - eSST1A.I_LR)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */ = data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */ + (data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */) * (data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ - data->simulationInfo->realParameter[88] /* eSST1A.I_LR PARAM */);
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->simulationInfo->realParameter[184] /* eSST1A.imLeadLag1.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 209
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y_start = eSST1A.imLeadLag1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->simulationInfo->realParameter[180] /* eSST1A.imLeadLag1.TF.y_start PARAM */ = data->simulationInfo->realParameter[184] /* eSST1A.imLeadLag1.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 210
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y = eSST1A.imLeadLag1.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */ = data->simulationInfo->realParameter[180] /* eSST1A.imLeadLag1.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 211
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y_start = eSST1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->simulationInfo->realParameter[162] /* eSST1A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 212
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y = eSST1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[162] /* eSST1A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 213
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.y_start = eSST1A.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->simulationInfo->realParameter[196] /* eSST1A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */;
  TRACE_POP
}
/*
equation index: 214
type: SIMPLE_ASSIGN
$START.eSST1A.add3_2.u2 = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->modelData->realVarsData[68].attribute /* eSST1A.add3_2.u2 variable */.start = data->simulationInfo->realParameter[196] /* eSST1A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = data->modelData->realVarsData[68].attribute /* eSST1A.add3_2.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* eSST1A.add3_2.u2 */.name, (modelica_real) data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */);
  TRACE_POP
}
/*
equation index: 215
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.state = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[196] /* eSST1A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 216
type: SIMPLE_ASSIGN
eSST1A.lV_GATE.p = eSST1A.EFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */ = data->localData[0]->realVars[59] /* eSST1A.EFD variable */;
  TRACE_POP
}
/*
equation index: 217
type: SIMPLE_ASSIGN
eSST1A.add3_2.u3 = eSST1A.imGain.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */ = data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */;
  TRACE_POP
}
/*
equation index: 218
type: SIMPLE_ASSIGN
eSST1A.ECOMP0 = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */ = data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
eSST1A.V_REF = eSST1A.VA0 / eSST1A.K_A + eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->realParameter[120] /* eSST1A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes) + data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 220
type: SIMPLE_ASSIGN
eSST1A.VoltageReference.k = eSST1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->realParameter[123] /* eSST1A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[120] /* eSST1A.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 221
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.y_start = eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 222
type: SIMPLE_ASSIGN
$START.eSST1A.DiffV.u2 = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->modelData->realVarsData[56].attribute /* eSST1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eSST1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSST1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 223
type: SIMPLE_ASSIGN
$START.eSST1A.TransducerDelay.state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSST1A.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 224
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 225
type: SIMPLE_ASSIGN
eSST1A.DiffV.u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 226
type: SIMPLE_ASSIGN
eSST1A.DiffV.y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[123] /* eSST1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 227
type: SIMPLE_ASSIGN
eSST1A.add3_1.y = eSST1A.add3_1.k1 * eSST1A.imDerivativeLag.y + eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */ = (data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k1 PARAM */) * (data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */) + (data->simulationInfo->realParameter[133] /* eSST1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[134] /* eSST1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[61] /* eSST1A.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1 = eSST1A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */ = data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */;
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[150] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 231
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[168] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.K PARAM */) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 232
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[191] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 233
type: SIMPLE_ASSIGN
eSST1A.add3_2.y = eSST1A.add3_2.k1 * const.k + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k2 PARAM */) * (data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[137] /* eSST1A.add3_2.k3 PARAM */) * (data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}
/*
equation index: 234
type: SIMPLE_ASSIGN
eSST1A.hV_GATE1.p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 235
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->localData[0]->realVars[121] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 236
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[120] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 237
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[278] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 238
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->localData[0]->realVars[110] /* gENROE.ud variable */ = (-data->localData[0]->realVars[102] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 239
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[99] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[277] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->localData[0]->realVars[98] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
gENROE.Epq = (eSST1A.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ - (((data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[237] /* gENROE.K1d PARAM */) + (data->localData[0]->realVars[108] /* gENROE.id variable */) * (data->simulationInfo->realParameter[273] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[263] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[264] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[100] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[237] /* gENROE.K1d PARAM */,"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[238] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[109] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[279] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[263] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[264] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[280] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[273] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[238] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[93] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[128] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[151] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[92] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[113] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[112] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[118] /* pwLine.ir.im variable */) - data->localData[0]->realVars[130] /* pwLine1.is.im variable */ - data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - data->localData[0]->realVars[131] /* pwLine1.is.re variable */ - data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc284(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,284};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  /* iteration variables */
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = xloc[4];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = xloc[5];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = xloc[9];
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = xloc[18];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = xloc[19];
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */ = xloc[24];
  data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ = xloc[25];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = xloc[26];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = xloc[28];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_197(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_198(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_199(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_200(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_201(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_202(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_203(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_204(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_205(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_206(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_207(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_208(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_209(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_210(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_211(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_212(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_213(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_214(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_215(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_216(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_217(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_218(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_219(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_220(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_221(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_222(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_223(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_224(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_225(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_226(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_227(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_228(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_229(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_230(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_231(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_232(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_233(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_234(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_235(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_236(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_237(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_238(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_239(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_240(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_241(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_242(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_243(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_244(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_245(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_246(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_247(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_248(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_249(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_250(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_251(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_252(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_253(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) - data->localData[0]->realVars[122] /* pwLine.vs.im variable */;

  tmp0 = Greater(data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */,data->simulationInfo->realParameter[38] /* const2.k PARAM */);
  res[1] = (tmp0?data->simulationInfo->realParameter[38] /* const2.k PARAM */:data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */) - data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */;

  tmp1 = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  tmp2 = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  res[2] = sqrt((tmp1 * tmp1) + (tmp2 * tmp2)) - data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;

  res[3] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;

  tmp3 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */);
  tmp12 = (modelica_boolean)tmp3;
  if(tmp12)
  {
    tmp13 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp4 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */);
    tmp10 = (modelica_boolean)(tmp4 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp10)
    {
      tmp11 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp5 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */);
      tmp8 = (modelica_boolean)tmp5;
      if(tmp8)
      {
        tmp6 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp7 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp9 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */),(tmp6 * tmp6) + (tmp7 * tmp7),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp9 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
      }
      tmp11 = tmp9;
    }
    tmp13 = tmp11;
  }
  res[4] = tmp13;

  tmp14 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */);
  tmp15 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */);
  res[5] = ((tmp14 && tmp15)?data->localData[0]->realVars[142] /* pwLine3.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));

  tmp16 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */);
  tmp17 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */);
  res[6] = ((tmp16 && tmp17)?data->localData[0]->realVars[143] /* pwLine3.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));

  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */);
  tmp27 = (modelica_boolean)tmp18;
  if(tmp27)
  {
    tmp28 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */);
    tmp25 = (modelica_boolean)(tmp19 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp25)
    {
      tmp26 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */);
      tmp23 = (modelica_boolean)tmp20;
      if(tmp23)
      {
        tmp21 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp22 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp24 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)),(tmp21 * tmp21) + (tmp22 * tmp22),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp24 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
      }
      tmp26 = tmp24;
    }
    tmp28 = tmp26;
  }
  res[7] = tmp28;

  tmp29 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */);
  tmp30 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp29 && tmp30)?data->localData[0]->realVars[141] /* pwLine3.ir.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));

  tmp31 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */);
  tmp32 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp31 && tmp32)?data->localData[0]->realVars[140] /* pwLine3.ir.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));

  tmp33 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */);
  tmp34 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */);
  res[10] = ((tmp33 && tmp34)?data->localData[0]->realVars[152] /* pwLine4.is.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));

  tmp35 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */);
  tmp36 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp35 && tmp36)?data->localData[0]->realVars[153] /* pwLine4.is.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));

  tmp37 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */);
  tmp38 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp37 && tmp38)?data->localData[0]->realVars[131] /* pwLine1.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));

  res[13] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;

  tmp39 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */);
  tmp40 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */);
  res[14] = ((tmp39 && tmp40)?data->localData[0]->realVars[151] /* pwLine4.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));

  tmp41 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */);
  tmp42 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp41 && tmp42)?data->localData[0]->realVars[150] /* pwLine4.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));

  tmp43 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */);
  tmp44 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp43 && tmp44)?data->localData[0]->realVars[128] /* pwLine1.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));

  tmp45 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */);
  tmp46 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */);
  res[17] = ((tmp45 && tmp46)?data->localData[0]->realVars[129] /* pwLine1.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));

  tmp47 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */);
  tmp48 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp47 && tmp48)?data->localData[0]->realVars[130] /* pwLine1.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));

  res[19] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[20] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp49 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */);
  tmp50 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */);
  res[21] = ((tmp49 && tmp50)?data->localData[0]->realVars[118] /* pwLine.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));

  tmp51 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */);
  tmp52 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */);
  res[22] = ((tmp51 && tmp52)?data->localData[0]->realVars[119] /* pwLine.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));

  tmp53 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */);
  tmp54 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */);
  res[23] = ((tmp53 && tmp54)?data->localData[0]->realVars[121] /* pwLine.is.re variable */:data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));

  tmp55 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */);
  tmp56 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */);
  res[24] = ((tmp55 && tmp56)?data->localData[0]->realVars[120] /* pwLine.is.im variable */:data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));

  res[25] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[242] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[244] /* gENROE.K4q PARAM */));

  res[26] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[268] /* gENROE.Tppq0 PARAM */));

  res[27] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[267] /* gENROE.Tppd0 PARAM */));

  res[28] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[243] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;

  res[29] = (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) - data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS284(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,2,2,6,6,6,6,5,5,7,7,2,3,11,8,8,11};
  const int rowIndex[151] = {19,20,21,22,12,18,19,20,19,20,21,22,12,18,19,20,7,10,11,7,8,9,4,8,9,4,10,11,5,6,19,20,5,6,19,20,14,15,16,17,14,15,16,17,3,13,14,15,16,17,3,13,14,15,16,17,25,26,27,28,0,25,26,27,28,29,0,25,26,27,28,29,0,23,24,27,28,29,0,23,24,25,26,29,2,22,23,24,29,0,2,21,23,24,3,10,14,15,16,17,18,11,12,13,14,15,16,17,1,2,1,27,28,5,6,8,12,17,18,19,20,21,22,23,4,5,7,8,9,10,11,15,4,6,7,8,9,10,11,14,5,6,9,12,16,18,19,20,21,22,24};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(151*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 151;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 151*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[29] = 1;
  inSysData->sparsePattern->colorCols[28] = 2;
  inSysData->sparsePattern->colorCols[26] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[27] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[25] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[24] = 10;
}
void initializeStaticDataNLS284(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.max;
  /* static nls data for eSST1A.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP */.max;
  /* static nls data for eSST1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS284(sysData);
}

void getIterationVarsNLS284(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[118] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  array[5] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  array[6] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  array[10] = data->localData[0]->realVars[151] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[15] = data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */;
  array[16] = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  array[19] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  array[20] = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  array[24] = data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;
  array[25] = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */;
  array[26] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  array[27] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  array[28] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  array[29] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 19
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[55] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[52] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[55] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 21
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
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
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp0 = Less(data->localData[0]->realVars[55] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp2 = -1.0 + data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }tmp8 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp9 = data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */;
    if(tmp8 < 0.0 && tmp9 != 0.0)
    {
      tmp11 = modf(tmp9, &tmp12);
      
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp12 -= 1.0;
      }
      
      if(fabs(tmp11) < 1e-10)
        tmp10 = pow(tmp8, tmp12);
      else
      {
        tmp14 = modf(1.0/tmp9, &tmp13);
        if(tmp14 > 0.5)
        {
          tmp14 -= 1.0;
          tmp13 += 1.0;
        }
        else if(tmp14 < -0.5)
        {
          tmp14 += 1.0;
          tmp13 -= 1.0;
        }
        if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
        {
          tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
        }
      }
    }
    else
    {
      tmp10 = pow(tmp8, tmp9);
    }
    if(isnan(tmp10) || isinf(tmp10))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
    }
    tmp16 = (data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */) * ((data->simulationInfo->realParameter[68] /* constantLoad.b2 PARAM */) * ((tmp3) * (exp(((-data->simulationInfo->realParameter[62] /* constantLoad.a2 PARAM */)) * (tmp10)))));
  }
  else
  {
    tmp16 = 1.0;
  }
  data->localData[0]->realVars[51] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 22
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[49] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 23
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */);
  tmp1 = LessEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[55] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[51] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[55] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[52] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[48] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 24
type: SIMPLE_ASSIGN
eSST1A.imGain1.y = eSST1A.imGain1.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */ = (data->simulationInfo->realParameter[146] /* eSST1A.imGain1.k PARAM */) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 25
type: SIMPLE_ASSIGN
eSST1A.add3.u2 = eSST1A.imGain2.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[65] /* eSST1A.add3.u2 variable */ = (data->simulationInfo->realParameter[147] /* eSST1A.imGain2.k PARAM */) * (data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 26
type: SIMPLE_ASSIGN
eSST1A.ECOMP0 = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */ = data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.y_start = eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
$START.eSST1A.DiffV.u2 = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->modelData->realVarsData[56].attribute /* eSST1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = data->modelData->realVarsData[56].attribute /* eSST1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* eSST1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
$START.eSST1A.TransducerDelay.state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSST1A.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
eSST1A.DiffV.u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
eSST1A.add2.y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[63] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[127] /* eSST1A.add2.k1 PARAM */) * (data->simulationInfo->realParameter[125] /* eSST1A.Vref1.k PARAM */) + (data->simulationInfo->realParameter[128] /* eSST1A.add2.k2 PARAM */) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
eSST1A.imGain.y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[145] /* eSST1A.imGain.k PARAM */) * (data->localData[0]->realVars[63] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
eSST1A.add3_2.u3 = homotopy(smooth(0, if eSST1A.imGain.y > eSST1A.imLimited1.uMax then eSST1A.imLimited1.uMax else if eSST1A.imGain.y < eSST1A.imLimited1.uMin then eSST1A.imLimited1.uMin else eSST1A.imGain.y), eSST1A.imGain.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[187] /* eSST1A.imLimited1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[187] /* eSST1A.imLimited1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[188] /* eSST1A.imLimited1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[188] /* eSST1A.imLimited1.uMin PARAM */:data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */);
  }
  data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */ = homotopy(tmp3, data->localData[0]->realVars[75] /* eSST1A.imGain.y variable */);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
eSST1A.add3.u1 = eSST1A.imGain3.k * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[64] /* eSST1A.add3.u1 variable */ = (data->simulationInfo->realParameter[148] /* eSST1A.imGain3.k PARAM */) * (data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
eSST1A.add3.y = eSST1A.add3.k1 * eSST1A.add3.u1 + eSST1A.add3.k2 * eSST1A.add3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[66] /* eSST1A.add3.y variable */ = (data->simulationInfo->realParameter[130] /* eSST1A.add3.k1 PARAM */) * (data->localData[0]->realVars[64] /* eSST1A.add3.u1 variable */) + (data->simulationInfo->realParameter[131] /* eSST1A.add3.k2 PARAM */) * (data->localData[0]->realVars[65] /* eSST1A.add3.u2 variable */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
eSST1A.EFD = eSST1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[59] /* eSST1A.EFD variable */ = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ + (data->localData[0]->realVars[21] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[266] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
eSST1A.IFD0 = eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
eSST1A.VA0 = eSST1A.Efd0 + eSST1A.K_LR * (eSST1A.IFD0 - eSST1A.I_LR)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */ = data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */ + (data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */) * (data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ - data->simulationInfo->realParameter[88] /* eSST1A.I_LR PARAM */);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
eSST1A.V_REF = eSST1A.VA0 / eSST1A.K_A + eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->simulationInfo->realParameter[120] /* eSST1A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes) + data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->simulationInfo->realParameter[184] /* eSST1A.imLeadLag1.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y_start = eSST1A.imLeadLag1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->simulationInfo->realParameter[180] /* eSST1A.imLeadLag1.TF.y_start PARAM */ = data->simulationInfo->realParameter[184] /* eSST1A.imLeadLag1.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y = eSST1A.imLeadLag1.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */ = data->simulationInfo->realParameter[180] /* eSST1A.imLeadLag1.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y_start = eSST1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->simulationInfo->realParameter[162] /* eSST1A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y = eSST1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[162] /* eSST1A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.y_start = eSST1A.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->simulationInfo->realParameter[196] /* eSST1A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */;
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
$START.eSST1A.add3_2.u2 = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->modelData->realVarsData[68].attribute /* eSST1A.add3_2.u2 variable */.start = data->simulationInfo->realParameter[196] /* eSST1A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = data->modelData->realVarsData[68].attribute /* eSST1A.add3_2.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* eSST1A.add3_2.u2 */.name, (modelica_real) data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */);
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.state = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[196] /* eSST1A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
eSST1A.VoltageReference.k = eSST1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->simulationInfo->realParameter[123] /* eSST1A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[120] /* eSST1A.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
eSST1A.DiffV.y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[123] /* eSST1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[56] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
eSST1A.add3_1.y = eSST1A.add3_1.k1 * eSST1A.imDerivativeLag.y + eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */ = (data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k1 PARAM */) * (data->localData[0]->realVars[74] /* eSST1A.imDerivativeLag.y variable */) + (data->simulationInfo->realParameter[133] /* eSST1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[57] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[134] /* eSST1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[61] /* eSST1A.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1 = homotopy(smooth(0, if eSST1A.add3_1.y > eSST1A.imLimited.uMax then eSST1A.imLimited.uMax else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then eSST1A.imLimited.uMin else eSST1A.add3_1.y), eSST1A.add3_1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[185] /* eSST1A.imLimited.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[186] /* eSST1A.imLimited.uMin PARAM */:data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */);
  }
  data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */ = homotopy(tmp3, data->localData[0]->realVars[67] /* eSST1A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[71] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[150] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[151] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[72] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[78] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[168] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[169] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.K PARAM */) * (data->localData[0]->realVars[79] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[81] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[191] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[82] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[190] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[195] /* eSST1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
eSST1A.add3_2.y = eSST1A.add3_2.k1 * const.k + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k1 PARAM */) * (data->simulationInfo->realParameter[34] /* const.k PARAM */) + (data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k2 PARAM */) * (data->localData[0]->realVars[68] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[137] /* eSST1A.add3_2.k3 PARAM */) * (data->localData[0]->realVars[69] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
eSST1A.hV_GATE1.p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[70] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
eSST1A.lV_GATE.p = if eSST1A.hV_GATE1.p > const2.k then const2.k else eSST1A.hV_GATE1.p
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */,data->simulationInfo->realParameter[38] /* const2.k PARAM */);
  data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[38] /* const2.k PARAM */:data->localData[0]->realVars[73] /* eSST1A.hV_GATE1.p variable */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[121] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[120] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[223] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[102] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[278] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[110] /* gENROE.ud variable */ = (-data->localData[0]->realVars[102] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[99] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[98] /* gENROE.PSId variable */ = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[277] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[111] /* gENROE.uq variable */ = data->localData[0]->realVars[98] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[260] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
gENROE.Epq = (eSST1A.XADIFD - (((gENROE.Xl - gENROE.Xpd) * gENROE.id - gENROE.PSIkd) * gENROE.K1d + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd)) / (1.0 + gENROE.K1d)
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ - (((data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */) - data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[237] /* gENROE.K1d PARAM */) + (data->localData[0]->realVars[108] /* gENROE.id variable */) * (data->simulationInfo->realParameter[273] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[263] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[264] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[100] /* gENROE.PSIppd variable */)),1.0 + data->simulationInfo->realParameter[237] /* gENROE.K1d PARAM */,"1.0 + gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[238] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[109] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[279] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[280] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[99] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[263] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[264] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[101] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[280] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[273] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[105] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[238] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[91] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[92] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[88] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[197] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[94] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[93] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[206] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[89] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[203] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[88] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[128] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[91] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[151] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[92] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[113] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[141] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[112] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[140] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[53] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[118] /* pwLine.ir.im variable */) - data->localData[0]->realVars[130] /* pwLine1.is.im variable */ - data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[54] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[119] /* pwLine.ir.re variable */) - data->localData[0]->realVars[131] /* pwLine1.is.re variable */ - data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  TRACE_POP
}

void residualFunc110(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,110};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  /* iteration variables */
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[119] /* pwLine.ir.re variable */ = xloc[0];
  data->localData[0]->realVars[131] /* pwLine1.is.re variable */ = xloc[1];
  data->localData[0]->realVars[118] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[130] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[152] /* pwLine4.is.im variable */ = xloc[4];
  data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ = xloc[5];
  data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[153] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[143] /* pwLine3.is.re variable */ = xloc[8];
  data->localData[0]->realVars[142] /* pwLine3.is.im variable */ = xloc[9];
  data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[89] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[88] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = xloc[15];
  data->localData[0]->realVars[100] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[108] /* gENROE.id variable */ = xloc[18];
  data->localData[0]->realVars[109] /* gENROE.iq variable */ = xloc[19];
  data->localData[0]->realVars[123] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[122] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */ = xloc[24];
  data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */ = xloc[25];
  data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ = xloc[26];
  data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ = xloc[28];
  data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_19(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_20(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_21(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_22(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_23(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_24(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_25(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_26(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_27(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_28(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_29(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_30(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_31(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_32(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_33(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_34(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_35(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_36(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_37(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_38(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_39(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_40(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_41(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_42(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_43(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_76(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_77(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_78(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_eqFunction_79(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) - data->localData[0]->realVars[122] /* pwLine.vs.im variable */;

  tmp0 = Greater(data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[66] /* eSST1A.add3.y variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[66] /* eSST1A.add3.y variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[76] /* eSST1A.imGain1.y variable */:data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */);
  }
  res[1] = homotopy(tmp3, data->localData[0]->realVars[83] /* eSST1A.lV_GATE.p variable */) - data->localData[0]->realVars[59] /* eSST1A.EFD variable */;

  tmp4 = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  tmp5 = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  res[2] = sqrt((tmp4 * tmp4) + (tmp5 * tmp5)) - data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;

  res[3] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;

  tmp6 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */);
  tmp15 = (modelica_boolean)tmp6;
  if(tmp15)
  {
    tmp16 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */);
    tmp13 = (modelica_boolean)(tmp7 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp13)
    {
      tmp14 = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp8 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */);
      tmp11 = (modelica_boolean)tmp8;
      if(tmp11)
      {
        tmp9 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp10 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp12 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */),(tmp9 * tmp9) + (tmp10 * tmp10),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp12 = data->localData[0]->realVars[113] /* pwFault.p.ir variable */;
      }
      tmp14 = tmp12;
    }
    tmp16 = tmp14;
  }
  res[4] = tmp16;

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */);
  res[5] = ((tmp17 && tmp18)?data->localData[0]->realVars[142] /* pwLine3.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));

  tmp19 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */);
  tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */);
  res[6] = ((tmp19 && tmp20)?data->localData[0]->realVars[143] /* pwLine3.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[143] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[142] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));

  tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[310] /* pwFault.t1 PARAM */);
  tmp30 = (modelica_boolean)tmp21;
  if(tmp30)
  {
    tmp31 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp22 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */);
    tmp28 = (modelica_boolean)(tmp22 && data->simulationInfo->booleanParameter[70] /* pwFault.ground PARAM */);
    if(tmp28)
    {
      tmp29 = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[311] /* pwFault.t2 PARAM */);
      tmp26 = (modelica_boolean)tmp23;
      if(tmp26)
      {
        tmp24 = data->simulationInfo->realParameter[309] /* pwFault.X PARAM */;
        tmp25 = data->simulationInfo->realParameter[308] /* pwFault.R PARAM */;
        tmp27 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[308] /* pwFault.R PARAM */) * (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[309] /* pwFault.X PARAM */) * (data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)),(tmp24 * tmp24) + (tmp25 * tmp25),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp27 = data->localData[0]->realVars[112] /* pwFault.p.ii variable */;
      }
      tmp29 = tmp27;
    }
    tmp31 = tmp29;
  }
  res[7] = tmp31;

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */);
  res[8] = ((tmp32 && tmp33)?data->localData[0]->realVars[141] /* pwLine3.ir.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[343] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[344] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp34 && tmp35)?data->localData[0]->realVars[140] /* pwLine3.ir.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[342] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[140] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[341] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[141] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[339] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[340] /* pwLine3.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */);
  res[10] = ((tmp36 && tmp37)?data->localData[0]->realVars[152] /* pwLine4.is.im variable */:data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp38 && tmp39)?data->localData[0]->realVars[153] /* pwLine4.is.re variable */:data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[153] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[145] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[152] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[145] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[144] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */);
  res[12] = ((tmp40 && tmp41)?data->localData[0]->realVars[131] /* pwLine1.is.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));

  res[13] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[94] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[93] /* gENCLS.vd variable */) - data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */);
  res[14] = ((tmp42 && tmp43)?data->localData[0]->realVars[151] /* pwLine4.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[145] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[354] /* pwLine4.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[355] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp44 && tmp45)?data->localData[0]->realVars[150] /* pwLine4.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[144] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[353] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[150] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[352] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[151] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[350] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[351] /* pwLine4.Y.re PARAM */)))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[128] /* pwLine1.ir.im variable */:data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */);
  res[17] = ((tmp48 && tmp49)?data->localData[0]->realVars[129] /* pwLine1.ir.re variable */:data->localData[0]->realVars[133] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[129] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[133] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[128] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[133] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[132] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[332] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[333] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp50 && tmp51)?data->localData[0]->realVars[130] /* pwLine1.is.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[132] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[331] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[130] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[330] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[131] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[328] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[329] /* pwLine1.Y.re PARAM */)))));

  res[19] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[49] /* constantLoad.Q variable */;

  res[20] = (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[53] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[54] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[48] /* constantLoad.P variable */;

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[118] /* pwLine.ir.im variable */:data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */);
  res[22] = ((tmp54 && tmp55)?data->localData[0]->realVars[119] /* pwLine.ir.re variable */:data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[119] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[135] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[118] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[135] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[134] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));

  tmp56 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */);
  tmp57 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */);
  res[23] = ((tmp56 && tmp57)?data->localData[0]->realVars[121] /* pwLine.is.re variable */:data->localData[0]->realVars[123] /* pwLine.vs.re variable */ - data->localData[0]->realVars[135] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))))));

  tmp58 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[321] /* pwLine.t1 PARAM */);
  tmp59 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[322] /* pwLine.t2 PARAM */);
  res[24] = ((tmp58 && tmp59)?data->localData[0]->realVars[120] /* pwLine.is.im variable */:data->localData[0]->realVars[122] /* pwLine.vs.im variable */ - data->localData[0]->realVars[134] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[320] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[120] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[123] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[319] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[121] /* pwLine.is.re variable */ + (data->localData[0]->realVars[122] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[317] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[123] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[318] /* pwLine.Y.re PARAM */)))));

  res[25] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[242] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[244] /* gENROE.K4q PARAM */));

  res[26] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[279] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[109] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[23] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[268] /* gENROE.Tppq0 PARAM */));

  res[27] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[274] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[275] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[108] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[22] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[267] /* gENROE.Tppd0 PARAM */));

  res[28] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[243] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;

  res[29] = (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[111] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[110] /* gENROE.ud variable */) - data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS110(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,2,2,6,6,6,6,5,5,7,7,3,2,11,8,8,11};
  const int rowIndex[151] = {19,20,21,22,12,18,19,20,19,20,21,22,12,18,19,20,7,10,11,7,8,9,4,8,9,4,10,11,5,6,19,20,5,6,19,20,14,15,16,17,14,15,16,17,3,13,14,15,16,17,3,13,14,15,16,17,25,26,27,28,0,25,26,27,28,29,0,25,26,27,28,29,0,23,24,27,28,29,0,23,24,25,26,29,2,22,23,24,29,0,2,21,23,24,3,10,14,15,16,17,18,11,12,13,14,15,16,17,1,27,28,1,2,5,6,8,12,17,18,19,20,21,22,23,4,5,7,8,9,10,11,15,4,6,7,8,9,10,11,14,5,6,9,12,16,18,19,20,21,22,24};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(151*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 151;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 151*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[29] = 1;
  inSysData->sparsePattern->colorCols[28] = 2;
  inSysData->sparsePattern->colorCols[26] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[27] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[24] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[25] = 10;
}
void initializeStaticDataNLS110(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[131].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[152].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[153].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[151].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[151].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[151].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[128].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.PSIkd */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* gENROE.PSIkd */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[123].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[122].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[132].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[133].attribute /* pwLine1.vr.re */.max;
  /* static nls data for eSST1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[62].attribute /* eSST1A.XADIFD */.max;
  /* static nls data for eSST1A.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* eSST1A.ECOMP */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[135].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[134].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS110(sysData);
}

void getIterationVarsNLS110(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[119] /* pwLine.ir.re variable */;
  array[1] = data->localData[0]->realVars[131] /* pwLine1.is.re variable */;
  array[2] = data->localData[0]->realVars[118] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[130] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[152] /* pwLine4.is.im variable */;
  array[5] = data->localData[0]->realVars[140] /* pwLine3.ir.im variable */;
  array[6] = data->localData[0]->realVars[141] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[153] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[143] /* pwLine3.is.re variable */;
  array[9] = data->localData[0]->realVars[142] /* pwLine3.is.im variable */;
  array[10] = data->localData[0]->realVars[151] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[128] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[89] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[88] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[15] = data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */;
  array[16] = data->localData[0]->realVars[100] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[101] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[108] /* gENROE.id variable */;
  array[19] = data->localData[0]->realVars[109] /* gENROE.iq variable */;
  array[20] = data->localData[0]->realVars[123] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[122] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[132] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[133] /* pwLine1.vr.re variable */;
  array[24] = data->localData[0]->realVars[62] /* eSST1A.XADIFD variable */;
  array[25] = data->localData[0]->realVars[58] /* eSST1A.ECOMP variable */;
  array[26] = data->localData[0]->realVars[135] /* pwLine1.vs.re variable */;
  array[27] = data->localData[0]->realVars[144] /* pwLine3.vr.im variable */;
  array[28] = data->localData[0]->realVars[145] /* pwLine3.vr.re variable */;
  array[29] = data->localData[0]->realVars[134] /* pwLine1.vs.im variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[3].equationIndex = 504;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc504;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac14_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac14;
  nonLinearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS504;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS504;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 460;
  nonLinearSystemData[2].size = 22;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc460;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_functionJacNLSJac13_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_ES_ESST1A_initialAnalyticJacobianNLSJac13;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS460;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS460;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 284;
  nonLinearSystemData[1].size = 30;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc284;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS284;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS284;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 110;
  nonLinearSystemData[0].size = 30;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc110;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS110;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS110;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

