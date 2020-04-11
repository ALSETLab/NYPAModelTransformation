/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2B_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 1278
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1 = smooth(0, if eSST1A.add3_1.y > eSST1A.imLimited.uMax then eSST1A.imLimited.uMax else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then eSST1A.imLimited.uMin else eSST1A.add3_1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */:data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */);
  }
  data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 1279
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 14, Less);
  data->localData[0]->realVars[91] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 1280
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y = (eSST1A.add3_1.y - (eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y)) / eSST1A.add3_1.k1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1280};
  data->localData[0]->realVars[93] /* eSST1A.imDerivativeLag.y variable */ = DIVISION_SIM(data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */ - ((data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[75] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[133] /* eSST1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[79] /* eSST1A.Limiters.y variable */)),data->simulationInfo->realParameter[131] /* eSST1A.add3_1.k1 PARAM */,"eSST1A.add3_1.k1",equationIndexes);
  TRACE_POP
}
/*
equation index: 1281
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y = (eSST1A.imLeadLag.TF.bb[2] - eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.d) * eSST1A.imLeadLag.TF.x[1] + eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  data->localData[0]->realVars[97] /* eSST1A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[157] /* eSST1A.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[152] /* eSST1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[158] /* eSST1A.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[96] /* eSST1A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[158] /* eSST1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[91] /* eSST1A.hV_GATE.p variable */);
  TRACE_POP
}
/*
equation index: 1282
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[98] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[147] /* eSST1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[91] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[97] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1283
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y = (eSST1A.imLeadLag1.TF.bb[2] - eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.d) * eSST1A.imLeadLag1.TF.x[1] + eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  data->localData[0]->realVars[100] /* eSST1A.imLeadLag1.TF.y variable */ = (data->simulationInfo->realParameter[175] /* eSST1A.imLeadLag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[170] /* eSST1A.imLeadLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[176] /* eSST1A.imLeadLag1.TF.d PARAM */))) * (data->localData[0]->realVars[99] /* eSST1A.imLeadLag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[176] /* eSST1A.imLeadLag1.TF.d PARAM */) * (data->localData[0]->realVars[98] /* eSST1A.imLeadLag.y variable */);
  TRACE_POP
}
/*
equation index: 1284
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag1.K PARAM */) * (data->localData[0]->realVars[98] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[100] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1285
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[189] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 1286
type: SIMPLE_ASSIGN
eSST1A.add3_2.y = eSST1A.add3_2.k1 * eSST1A.VOTHSG2 + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[134] /* eSST1A.add3_2.k1 PARAM */) * (data->localData[0]->realVars[80] /* eSST1A.VOTHSG2 variable */) + (data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k2 PARAM */) * (data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k3 PARAM */) * (data->localData[0]->realVars[88] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}

void residualFunc1298(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1298};
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
  data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1278(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1279(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1280(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1281(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1282(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1283(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1284(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1285(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1286(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */ + (-data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1) */) - ((data->localData[0]->realVars[93] /* eSST1A.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[139] /* eSST1A.imDerivativeLag.T PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1298(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS1298(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST1A.add3_1.y */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* eSST1A.add3_1.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* eSST1A.add3_1.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* eSST1A.add3_1.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1298(sysData);
}

void getIterationVarsNLS1298(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */;
}


/* inner equations */

/*
equation index: 1128
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1128};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[183] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[182] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[73] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1129
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1129};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[73] /* constantLoad.v variable */, 0.5, 10, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[69] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 1130
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[73] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  data->localData[0]->realVars[70] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[73] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[73] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 1131
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1131};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 12, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[67] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 1132
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1132};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 12, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[66] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 1133
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1133};
  data->localData[0]->realVars[116] /* gENROE.PSId variable */ = data->localData[0]->realVars[118] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 1134
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1134};
  data->localData[0]->realVars[168] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[48] /* $cse6 variable */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - ((data->localData[0]->realVars[49] /* $cse7 variable */) * (data->localData[0]->realVars[126] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 1135
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1135};
  data->localData[0]->realVars[169] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[49] /* $cse7 variable */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[48] /* $cse6 variable */)) * (data->localData[0]->realVars[126] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 1136
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1136};
  data->localData[0]->realVars[129] /* gENROE.uq variable */ = data->localData[0]->realVars[116] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 1137
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1137};
  data->localData[0]->realVars[120] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[119] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 1138
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1138};
  data->localData[0]->realVars[128] /* gENROE.ud variable */ = (-data->localData[0]->realVars[120] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 1139
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1139};
  data->localData[0]->realVars[170] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[48] /* $cse6 variable */) * (data->localData[0]->realVars[129] /* gENROE.uq variable */) - ((data->localData[0]->realVars[49] /* $cse7 variable */) * (data->localData[0]->realVars[128] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 1140
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1140};
  data->localData[0]->realVars[171] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[48] /* $cse6 variable */) * (data->localData[0]->realVars[128] /* gENROE.ud variable */) + (data->localData[0]->realVars[49] /* $cse7 variable */) * (data->localData[0]->realVars[129] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 1141
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1141};
  data->localData[0]->realVars[110] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[45] /* $cse2 variable */) * (data->localData[0]->realVars[107] /* gENCLS.id variable */) - ((data->localData[0]->realVars[44] /* $cse1 variable */) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 1142
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1142};
  data->localData[0]->realVars[111] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[44] /* $cse1 variable */)) * (data->localData[0]->realVars[107] /* gENCLS.id variable */) - ((data->localData[0]->realVars[45] /* $cse2 variable */) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 1143
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1143};
  data->localData[0]->realVars[113] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[107] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 1144
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1144};
  data->localData[0]->realVars[112] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[107] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 1145
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1145};
  data->localData[0]->realVars[176] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[198] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[110] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 1146
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[199] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[111] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 1147
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  data->localData[0]->realVars[160] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[188] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[200] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 1148
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1148};
  data->localData[0]->realVars[161] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[189] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[201] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 1149
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1149};
  data->localData[0]->realVars[72] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[167] /* pwLine.ir.re variable */) - data->localData[0]->realVars[179] /* pwLine1.is.re variable */ - data->localData[0]->realVars[191] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 1150
type: SIMPLE_ASSIGN
constantLoad.p.ii = (-pwLine.ir.im) - pwLine1.is.im - pwLine3.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1150};
  data->localData[0]->realVars[71] /* constantLoad.p.ii variable */ = (-data->localData[0]->realVars[166] /* pwLine.ir.im variable */) - data->localData[0]->realVars[178] /* pwLine1.is.im variable */ - data->localData[0]->realVars[190] /* pwLine3.is.im variable */;
  TRACE_POP
}

void residualFunc1218(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1218};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
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
  data->localData[0]->realVars[178] /* pwLine1.is.im variable */ = xloc[0];
  data->localData[0]->realVars[166] /* pwLine.ir.im variable */ = xloc[1];
  data->localData[0]->realVars[179] /* pwLine1.is.re variable */ = xloc[2];
  data->localData[0]->realVars[167] /* pwLine.ir.re variable */ = xloc[3];
  data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ = xloc[4];
  data->localData[0]->realVars[201] /* pwLine4.is.re variable */ = xloc[5];
  data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[200] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[190] /* pwLine3.is.im variable */ = xloc[8];
  data->localData[0]->realVars[191] /* pwLine3.is.re variable */ = xloc[9];
  data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[108] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[107] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ = xloc[14];
  data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ = xloc[15];
  data->localData[0]->realVars[127] /* gENROE.iq variable */ = xloc[16];
  data->localData[0]->realVars[126] /* gENROE.id variable */ = xloc[17];
  data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ = xloc[18];
  data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ = xloc[19];
  data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ = xloc[20];
  data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1128(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1129(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1130(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1131(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1132(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1133(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1134(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1135(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1136(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1137(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1138(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1139(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1140(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1141(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1142(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1143(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1144(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1145(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1146(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1147(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1148(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1149(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_1150(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, 9, Less);
  res[0] = ((tmp0 && tmp1)?data->localData[0]->realVars[177] /* pwLine1.ir.re variable */:data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[176] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, 9, Less);
  res[1] = ((tmp2 && tmp3)?data->localData[0]->realVars[176] /* pwLine1.ir.im variable */:data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[176] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, 3, Less);
  res[2] = ((tmp4 && tmp5)?data->localData[0]->realVars[190] /* pwLine3.is.im variable */:data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[190] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[191] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, 3, Less);
  res[3] = ((tmp6 && tmp7)?data->localData[0]->realVars[191] /* pwLine3.is.re variable */:data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[191] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[190] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp8, data->localData[0]->timeValue, data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */, 4, Less);
  tmp17 = (modelica_boolean)tmp8;
  if(tmp17)
  {
    tmp18 = data->localData[0]->realVars[160] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, 5, Less);
    tmp15 = (modelica_boolean)(tmp9 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp15)
    {
      tmp16 = data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, 5, Less);
      tmp13 = (modelica_boolean)tmp10;
      if(tmp13)
      {
        tmp11 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp12 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp14 = data->localData[0]->realVars[160] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[476] /* pwFault.R PARAM */) * (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[477] /* pwFault.X PARAM */) * (data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)),(tmp11 * tmp11) + (tmp12 * tmp12),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp14 = data->localData[0]->realVars[160] /* pwFault.p.ii variable */;
      }
      tmp16 = tmp14;
    }
    tmp18 = tmp16;
  }
  res[4] = tmp18;

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, 7, Less);
  res[5] = ((tmp19 && tmp20)?data->localData[0]->realVars[201] /* pwLine4.is.re variable */:data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[201] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[200] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, 7, Less);
  res[6] = ((tmp21 && tmp22)?data->localData[0]->realVars[200] /* pwLine4.is.im variable */:data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[200] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[201] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */, 4, Less);
  tmp32 = (modelica_boolean)tmp23;
  if(tmp32)
  {
    tmp33 = data->localData[0]->realVars[161] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, 5, Less);
    tmp30 = (modelica_boolean)(tmp24 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp30)
    {
      tmp31 = data->localData[0]->realVars[192] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */, 5, Less);
      tmp28 = (modelica_boolean)tmp25;
      if(tmp28)
      {
        tmp26 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp27 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp29 = data->localData[0]->realVars[161] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[476] /* pwFault.R PARAM */) * (data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[477] /* pwFault.X PARAM */) * (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */),(tmp26 * tmp26) + (tmp27 * tmp27),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp29 = data->localData[0]->realVars[161] /* pwFault.p.ir variable */;
      }
      tmp31 = tmp29;
    }
    tmp33 = tmp31;
  }
  res[7] = tmp33;

  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, 3, Less);
  res[8] = ((tmp34 && tmp35)?data->localData[0]->realVars[188] /* pwLine3.ir.im variable */:data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */, 3, Less);
  res[9] = ((tmp36 && tmp37)?data->localData[0]->realVars[189] /* pwLine3.ir.re variable */:data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, 1, Less);
  res[10] = ((tmp38 && tmp39)?data->localData[0]->realVars[169] /* pwLine.is.re variable */:data->localData[0]->realVars[171] /* pwLine.vs.re variable */ - data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */ + (data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[171] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, 1, Less);
  res[11] = ((tmp40 && tmp41)?data->localData[0]->realVars[168] /* pwLine.is.im variable */:data->localData[0]->realVars[170] /* pwLine.vs.im variable */ - data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[171] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */ + (data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, 1, Less);
  res[12] = ((tmp42 && tmp43)?data->localData[0]->realVars[166] /* pwLine.ir.im variable */:data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[170] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[166] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[167] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp44, data->localData[0]->timeValue, data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp45, data->localData[0]->timeValue, data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */, 1, Less);
  res[13] = ((tmp44 && tmp45)?data->localData[0]->realVars[167] /* pwLine.ir.re variable */:data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[171] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[167] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[166] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))))));

  res[14] = (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[72] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[71] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[67] /* constantLoad.Q variable */;

  res[15] = (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[71] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[72] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[66] /* constantLoad.P variable */;

  RELATIONHYSTERESIS(tmp46, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp47, data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, 9, Less);
  res[16] = ((tmp46 && tmp47)?data->localData[0]->realVars[179] /* pwLine1.is.re variable */:data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[179] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[178] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */, 9, Less);
  res[17] = ((tmp48 && tmp49)?data->localData[0]->realVars[178] /* pwLine1.is.im variable */:data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[178] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[179] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */)))));

  res[18] = (data->localData[0]->realVars[44] /* $cse1 variable */) * (data->localData[0]->realVars[113] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[45] /* $cse2 variable */)) * (data->localData[0]->realVars[112] /* gENCLS.vd variable */) - data->localData[0]->realVars[180] /* pwLine1.vr.im variable */;

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, 7, Less);
  res[19] = ((tmp50 && tmp51)?data->localData[0]->realVars[199] /* pwLine4.ir.re variable */:data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */, 7, Less);
  res[20] = ((tmp52 && tmp53)?data->localData[0]->realVars[198] /* pwLine4.ir.im variable */:data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */)))));

  res[21] = (data->localData[0]->realVars[45] /* $cse2 variable */) * (data->localData[0]->realVars[113] /* gENCLS.vq variable */) + (data->localData[0]->realVars[44] /* $cse1 variable */) * (data->localData[0]->realVars[112] /* gENCLS.vd variable */) - data->localData[0]->realVars[181] /* pwLine1.vr.re variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1218(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,4,4,4,4,3,3,3,3,4,4,4,4,4,4,7,7,4,4,11,8,8,11};
  const int rowIndex[112] = {14,15,16,17,12,13,14,15,14,15,16,17,12,13,14,15,7,8,9,5,6,7,4,8,9,4,5,6,2,3,14,15,2,3,14,15,0,1,19,20,0,1,19,20,0,1,18,21,0,1,18,21,0,1,5,16,19,20,21,0,1,6,17,18,19,20,10,11,12,13,10,11,12,13,0,2,3,9,10,12,13,14,15,16,17,2,4,5,6,7,8,9,20,3,4,5,6,7,8,9,19,1,2,3,8,11,12,13,14,15,16,17};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(112*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 112;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 8;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 112*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[21] = 1;
  inSysData->sparsePattern->colorCols[18] = 2;
  inSysData->sparsePattern->colorCols[9] = 3;
  inSysData->sparsePattern->colorCols[15] = 3;
  inSysData->sparsePattern->colorCols[8] = 4;
  inSysData->sparsePattern->colorCols[14] = 4;
  inSysData->sparsePattern->colorCols[3] = 5;
  inSysData->sparsePattern->colorCols[13] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[2] = 6;
  inSysData->sparsePattern->colorCols[12] = 6;
  inSysData->sparsePattern->colorCols[17] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[1] = 7;
  inSysData->sparsePattern->colorCols[5] = 7;
  inSysData->sparsePattern->colorCols[6] = 7;
  inSysData->sparsePattern->colorCols[11] = 7;
  inSysData->sparsePattern->colorCols[0] = 8;
  inSysData->sparsePattern->colorCols[4] = 8;
  inSysData->sparsePattern->colorCols[7] = 8;
  inSysData->sparsePattern->colorCols[10] = 8;
  inSysData->sparsePattern->colorCols[16] = 8;
}
void initializeStaticDataNLS1218(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[178].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[178].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[178].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[179].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[179].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[179].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[167].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[167].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[167].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[189].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[189].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[189].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[201].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[201].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[201].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[188].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[188].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[188].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[200].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[200].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[200].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[190].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[190].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[190].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[191].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[191].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[191].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[199].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[199].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[199].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[198].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[198].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[198].attribute /* pwLine4.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[181].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[181].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[181].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[180].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[180].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[180].attribute /* pwLine1.vr.im */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* gENROE.id */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[193].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[193].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[193].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1218(sysData);
}

void getIterationVarsNLS1218(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[178] /* pwLine1.is.im variable */;
  array[1] = data->localData[0]->realVars[166] /* pwLine.ir.im variable */;
  array[2] = data->localData[0]->realVars[179] /* pwLine1.is.re variable */;
  array[3] = data->localData[0]->realVars[167] /* pwLine.ir.re variable */;
  array[4] = data->localData[0]->realVars[189] /* pwLine3.ir.re variable */;
  array[5] = data->localData[0]->realVars[201] /* pwLine4.is.re variable */;
  array[6] = data->localData[0]->realVars[188] /* pwLine3.ir.im variable */;
  array[7] = data->localData[0]->realVars[200] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[190] /* pwLine3.is.im variable */;
  array[9] = data->localData[0]->realVars[191] /* pwLine3.is.re variable */;
  array[10] = data->localData[0]->realVars[199] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[198] /* pwLine4.ir.im variable */;
  array[12] = data->localData[0]->realVars[108] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[107] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[181] /* pwLine1.vr.re variable */;
  array[15] = data->localData[0]->realVars[180] /* pwLine1.vr.im variable */;
  array[16] = data->localData[0]->realVars[127] /* gENROE.iq variable */;
  array[17] = data->localData[0]->realVars[126] /* gENROE.id variable */;
  array[18] = data->localData[0]->realVars[183] /* pwLine1.vs.re variable */;
  array[19] = data->localData[0]->realVars[192] /* pwLine3.vr.im variable */;
  array[20] = data->localData[0]->realVars[193] /* pwLine3.vr.re variable */;
  array[21] = data->localData[0]->realVars[182] /* pwLine1.vs.im variable */;
}


/* inner equations */

/*
equation index: 907
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[183] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[182] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[73] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 908
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[73] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[70] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[73] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[73] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 909
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
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
  tmp0 = Less(data->localData[0]->realVars[73] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[69] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 910
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
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
    tmp2 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[67] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 911
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
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
    tmp2 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[66] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 912
type: SIMPLE_ASSIGN
eSST1A.add2.y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->localData[0]->realVars[82] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[126] /* eSST1A.add2.k1 PARAM */) * (data->simulationInfo->realParameter[124] /* eSST1A.Vref1.k PARAM */) + (data->simulationInfo->realParameter[127] /* eSST1A.add2.k2 PARAM */) * (data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
eSST1A.imGain.y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[143] /* eSST1A.imGain.k PARAM */) * (data->localData[0]->realVars[82] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
eSST1A.EFD = eSST1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  data->localData[0]->realVars[77] /* eSST1A.EFD variable */ = data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */ + (data->localData[0]->realVars[30] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[264] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
eSST1A.lV_GATE.p = eSST1A.EFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */ = data->localData[0]->realVars[77] /* eSST1A.EFD variable */;
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
eSST1A.add3_2.u3 = eSST1A.imGain.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[88] /* eSST1A.add3_2.u3 variable */ = data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */;
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
eSST1A.IFD0 = eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ = data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
eSST1A.VA0 = eSST1A.Efd0 + eSST1A.K_LR * (eSST1A.IFD0 - eSST1A.I_LR)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */ = data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */ + (data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */) * (data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ - data->simulationInfo->realParameter[88] /* eSST1A.I_LR PARAM */);
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  data->simulationInfo->realParameter[164] /* eSST1A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->simulationInfo->realParameter[182] /* eSST1A.imLeadLag1.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y_start = eSST1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[164] /* eSST1A.imLeadLag.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 922
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y = eSST1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[97] /* eSST1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 923
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y_start = eSST1A.imLeadLag1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.y_start PARAM */ = data->simulationInfo->realParameter[182] /* eSST1A.imLeadLag1.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 924
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y = eSST1A.imLeadLag1.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  data->localData[0]->realVars[100] /* eSST1A.imLeadLag1.TF.y variable */ = data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 925
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.y_start = eSST1A.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */;
  TRACE_POP
}
/*
equation index: 926
type: SIMPLE_ASSIGN
$START.eSST1A.add3_2.u2 = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  data->modelData->realVarsData[87].attribute /* eSST1A.add3_2.u2 variable */.start = data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */ = data->modelData->realVarsData[87].attribute /* eSST1A.add3_2.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* eSST1A.add3_2.u2 */.name, (modelica_real) data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */);
  TRACE_POP
}
/*
equation index: 927
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.state = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 928
type: SIMPLE_ASSIGN
eSST1A.ECOMP0 = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */ = data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 929
type: SIMPLE_ASSIGN
eSST1A.V_REF = eSST1A.VA0 / eSST1A.K_A + eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->simulationInfo->realParameter[119] /* eSST1A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes) + data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 930
type: SIMPLE_ASSIGN
eSST1A.VoltageReference.k = eSST1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  data->simulationInfo->realParameter[122] /* eSST1A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[119] /* eSST1A.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 931
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.y_start = eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 932
type: SIMPLE_ASSIGN
$START.eSST1A.DiffV.u2 = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  data->modelData->realVarsData[74].attribute /* eSST1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */ = data->modelData->realVarsData[74].attribute /* eSST1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* eSST1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 933
type: SIMPLE_ASSIGN
$START.eSST1A.TransducerDelay.state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSST1A.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 934
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 935
type: SIMPLE_ASSIGN
eSST1A.DiffV.u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 936
type: SIMPLE_ASSIGN
eSST1A.DiffV.y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  data->localData[0]->realVars[75] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[122] /* eSST1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 937
type: SIMPLE_ASSIGN
eSST1A.add3_1.y = eSST1A.add3_1.k1 * eSST1A.imDerivativeLag.y + eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */ = (data->simulationInfo->realParameter[131] /* eSST1A.add3_1.k1 PARAM */) * (data->localData[0]->realVars[93] /* eSST1A.imDerivativeLag.y variable */) + (data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[75] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[133] /* eSST1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[79] /* eSST1A.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 938
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1 = eSST1A.add3_1.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */ = data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */;
  TRACE_POP
}
/*
equation index: 939
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[91] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 940
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[98] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[147] /* eSST1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[91] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[97] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 941
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag1.K PARAM */) * (data->localData[0]->realVars[98] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[100] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 942
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[189] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 943
type: SIMPLE_ASSIGN
gENROE.P = pSS2B.V_S2 * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  data->localData[0]->realVars[115] /* gENROE.P variable */ = (data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 944
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.u = pSS2B.V_S2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  data->localData[0]->realVars[156] /* pSS2B.derivativeLag2.u variable */ = data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */;
  TRACE_POP
}
/*
equation index: 945
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.y = if abs(pSS2B.derivativeLag2.T) < 1e-15 then pSS2B.derivativeLag2.u else pSS2B.derivativeLag2.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[435] /* pSS2B.derivativeLag2.T PARAM */),1e-15);
  data->localData[0]->realVars[157] /* pSS2B.derivativeLag2.y variable */ = (tmp0?data->localData[0]->realVars[156] /* pSS2B.derivativeLag2.u variable */:data->localData[0]->realVars[155] /* pSS2B.derivativeLag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 946
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.u = if abs(pSS2B.derivativeLag3.T) < 1e-15 then pSS2B.derivativeLag2.y else pSS2B.derivativeLag3.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[452] /* pSS2B.derivativeLag3.T PARAM */),1e-15);
  data->localData[0]->realVars[142] /* pSS2B.SimpleLag2.u variable */ = (tmp0?data->localData[0]->realVars[157] /* pSS2B.derivativeLag2.y variable */:data->localData[0]->realVars[159] /* pSS2B.derivativeLag3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 947
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.y = if abs(pSS2B.SimpleLag2.T) <= 1e-15 then pSS2B.SimpleLag2.u * pSS2B.SimpleLag2.K else pSS2B.SimpleLag2.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[369] /* pSS2B.SimpleLag2.T PARAM */),1e-15);
  data->localData[0]->realVars[143] /* pSS2B.SimpleLag2.y variable */ = (tmp0?(data->localData[0]->realVars[142] /* pSS2B.SimpleLag2.u variable */) * (data->simulationInfo->realParameter[368] /* pSS2B.SimpleLag2.K PARAM */):data->localData[0]->realVars[17] /* pSS2B.SimpleLag2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 948
type: SIMPLE_ASSIGN
pSS2B.add1.u1 = pSS2B.add.k1 * pSS2B.SimpleLag1.y + pSS2B.add.k2 * pSS2B.SimpleLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  data->localData[0]->realVars[146] /* pSS2B.add1.u1 variable */ = (data->simulationInfo->realParameter[395] /* pSS2B.add.k1 PARAM */) * (data->localData[0]->realVars[141] /* pSS2B.SimpleLag1.y variable */) + (data->simulationInfo->realParameter[396] /* pSS2B.add.k2 PARAM */) * (data->localData[0]->realVars[143] /* pSS2B.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 949
type: SIMPLE_ASSIGN
pSS2B.add1.y = pSS2B.add1.k1 * pSS2B.add1.u1 + pSS2B.add1.k2 * pSS2B.SimpleLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  data->localData[0]->realVars[147] /* pSS2B.add1.y variable */ = (data->simulationInfo->realParameter[397] /* pSS2B.add1.k1 PARAM */) * (data->localData[0]->realVars[146] /* pSS2B.add1.u1 variable */) + (data->simulationInfo->realParameter[398] /* pSS2B.add1.k2 PARAM */) * (data->localData[0]->realVars[143] /* pSS2B.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 950
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.u = pSS2B.gain.k * pSS2B.add1.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  data->localData[0]->realVars[132] /* pSS2B.Leadlag1.u variable */ = (data->simulationInfo->realParameter[467] /* pSS2B.gain.k PARAM */) * (data->localData[0]->realVars[147] /* pSS2B.add1.y variable */);
  TRACE_POP
}
/*
equation index: 951
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.y = if abs(pSS2B.Leadlag1.T1 - pSS2B.Leadlag1.T2) < 1e-15 then pSS2B.Leadlag1.K * pSS2B.Leadlag1.u else pSS2B.Leadlag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[310] /* pSS2B.Leadlag1.T1 PARAM */ - data->simulationInfo->realParameter[311] /* pSS2B.Leadlag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[133] /* pSS2B.Leadlag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[309] /* pSS2B.Leadlag1.K PARAM */) * (data->localData[0]->realVars[132] /* pSS2B.Leadlag1.u variable */):data->localData[0]->realVars[131] /* pSS2B.Leadlag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 952
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.y = if abs(pSS2B.Leadlag2.T1 - pSS2B.Leadlag2.T2) < 1e-15 then pSS2B.Leadlag2.K * pSS2B.Leadlag1.y else pSS2B.Leadlag2.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[328] /* pSS2B.Leadlag2.T1 PARAM */ - data->simulationInfo->realParameter[329] /* pSS2B.Leadlag2.T2 PARAM */),1e-15);
  data->localData[0]->realVars[136] /* pSS2B.Leadlag2.y variable */ = (tmp0?(data->simulationInfo->realParameter[327] /* pSS2B.Leadlag2.K PARAM */) * (data->localData[0]->realVars[133] /* pSS2B.Leadlag1.y variable */):data->localData[0]->realVars[135] /* pSS2B.Leadlag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 953
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.y = if abs(pSS2B.Leadlag3.T1 - pSS2B.Leadlag3.T2) < 1e-15 then pSS2B.Leadlag3.K * pSS2B.Leadlag2.y else pSS2B.Leadlag3.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[346] /* pSS2B.Leadlag3.T1 PARAM */ - data->simulationInfo->realParameter[347] /* pSS2B.Leadlag3.T2 PARAM */),1e-15);
  data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */ = (tmp0?(data->simulationInfo->realParameter[345] /* pSS2B.Leadlag3.K PARAM */) * (data->localData[0]->realVars[136] /* pSS2B.Leadlag2.y variable */):data->localData[0]->realVars[138] /* pSS2B.Leadlag3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 954
type: SIMPLE_ASSIGN
eSST1A.VOTHSG2 = pSS2B.Leadlag3.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  data->localData[0]->realVars[80] /* eSST1A.VOTHSG2 variable */ = data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */;
  TRACE_POP
}
/*
equation index: 955
type: SIMPLE_ASSIGN
eSST1A.add3_2.y = eSST1A.add3_2.k1 * eSST1A.VOTHSG2 + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[134] /* eSST1A.add3_2.k1 PARAM */) * (data->localData[0]->realVars[80] /* eSST1A.VOTHSG2 variable */) + (data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k2 PARAM */) * (data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k3 PARAM */) * (data->localData[0]->realVars[88] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}
/*
equation index: 956
type: SIMPLE_ASSIGN
eSST1A.hV_GATE1.p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 957
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  data->localData[0]->realVars[169] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[126] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 958
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  data->localData[0]->realVars[168] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[126] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 959
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,959};
  data->localData[0]->realVars[120] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[119] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 960
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  data->localData[0]->realVars[128] /* gENROE.ud variable */ = (-data->localData[0]->realVars[120] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 961
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[118] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[119] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[117] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 962
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  data->localData[0]->realVars[116] /* gENROE.PSId variable */ = data->localData[0]->realVars[118] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 963
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  data->localData[0]->realVars[129] /* gENROE.uq variable */ = data->localData[0]->realVars[116] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 964
type: SIMPLE_ASSIGN
gENROE.Epd = (gENROE.XaqIlq - (((gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) * gENROE.K1q + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))) / (1.0 + gENROE.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[123] /* gENROE.XaqIlq variable */ - (((data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */) + (data->localData[0]->realVars[127] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[117] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[119] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */,"1.0 + gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 965
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSST1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[126] /* gENROE.id variable */) * (data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[117] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[118] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 966
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  data->localData[0]->realVars[111] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[107] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 967
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  data->localData[0]->realVars[110] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[107] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 968
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  data->localData[0]->realVars[113] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[107] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 969
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  data->localData[0]->realVars[112] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[107] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 970
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[177] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[111] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 971
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  data->localData[0]->realVars[176] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[198] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[110] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 972
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  data->localData[0]->realVars[161] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[189] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[201] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 973
type: SIMPLE_ASSIGN
pwLine3.is.re = (-pwLine.ir.re) - pwLine1.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  data->localData[0]->realVars[191] /* pwLine3.is.re variable */ = (-data->localData[0]->realVars[167] /* pwLine.ir.re variable */) - data->localData[0]->realVars[179] /* pwLine1.is.re variable */ - data->localData[0]->realVars[72] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 974
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  data->localData[0]->realVars[160] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[188] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[200] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 975
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  data->localData[0]->realVars[190] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[166] /* pwLine.ir.im variable */) - data->localData[0]->realVars[178] /* pwLine1.is.im variable */ - data->localData[0]->realVars[71] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc1007(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1007};
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
  modelica_real tmp32;
  modelica_real tmp33;
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
  for (i=0; i<31; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<31; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[166] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[178] /* pwLine1.is.im variable */ = xloc[1];
  data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[200] /* pwLine4.is.im variable */ = xloc[3];
  data->localData[0]->realVars[167] /* pwLine.ir.re variable */ = xloc[4];
  data->localData[0]->realVars[179] /* pwLine1.is.re variable */ = xloc[5];
  data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[201] /* pwLine4.is.re variable */ = xloc[7];
  data->localData[0]->realVars[72] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[71] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[108] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[107] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[118] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[119] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[127] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[126] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[171] /* pwLine.vs.re variable */ = xloc[20];
  data->localData[0]->realVars[170] /* pwLine.vs.im variable */ = xloc[21];
  data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ = xloc[22];
  data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ = xloc[23];
  data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */ = xloc[24];
  data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */ = xloc[25];
  data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */ = xloc[26];
  data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ = xloc[27];
  data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ = xloc[28];
  data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ = xloc[29];
  data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ = xloc[30];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_907(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_908(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_909(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_910(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_911(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_912(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_913(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_914(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_915(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_916(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_917(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_918(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_919(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_920(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_921(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_922(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_923(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_924(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_925(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_926(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_927(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_928(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_929(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_930(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_931(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_932(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_933(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_934(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_935(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_936(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_937(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_938(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_939(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_940(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_941(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_942(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_943(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_944(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_945(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_946(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_947(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_948(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_949(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_950(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_951(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_952(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_953(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_954(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_955(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_956(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_957(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_958(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_959(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_960(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_961(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_962(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_963(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_964(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_965(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_966(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_967(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_968(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_969(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_970(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_971(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_972(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_973(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_974(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_975(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[112] /* gENCLS.vd variable */) - data->localData[0]->realVars[180] /* pwLine1.vr.im variable */;

  res[1] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENCLS.vd variable */) - data->localData[0]->realVars[181] /* pwLine1.vr.re variable */;

  res[2] = (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[72] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[71] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[67] /* constantLoad.Q variable */;

  res[3] = (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[71] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[72] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[66] /* constantLoad.P variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[160] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[160] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[476] /* pwFault.R PARAM */) * (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[477] /* pwFault.X PARAM */) * (data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[160] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[4] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[161] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[192] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[161] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[476] /* pwFault.R PARAM */) * (data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[477] /* pwFault.X PARAM */) * (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[161] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[5] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */);
  res[6] = ((tmp22 && tmp23)?data->localData[0]->realVars[201] /* pwLine4.is.re variable */:data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[201] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[200] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */);
  res[7] = ((tmp24 && tmp25)?data->localData[0]->realVars[191] /* pwLine3.is.re variable */:data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[191] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[190] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp26 && tmp27)?data->localData[0]->realVars[200] /* pwLine4.is.im variable */:data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[200] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[201] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */)))));

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */);
  res[9] = ((tmp28 && tmp29)?data->localData[0]->realVars[188] /* pwLine3.ir.im variable */:data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */)))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp30 && tmp31)?data->localData[0]->realVars[189] /* pwLine3.ir.re variable */:data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))))));

  tmp32 = data->localData[0]->realVars[171] /* pwLine.vs.re variable */;
  tmp33 = data->localData[0]->realVars[170] /* pwLine.vs.im variable */;
  res[11] = sqrt((tmp32 * tmp32) + (tmp33 * tmp33)) - data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */;

  tmp34 = Greater(data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */,data->simulationInfo->realParameter[38] /* const2.k PARAM */);
  res[12] = (tmp34?data->simulationInfo->realParameter[38] /* const2.k PARAM */:data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */) - data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */;

  res[13] = data->localData[0]->realVars[115] /* gENROE.P variable */ - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */)) - ((data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */));

  res[14] = (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[129] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[128] /* gENROE.ud variable */) - data->localData[0]->realVars[171] /* pwLine.vs.re variable */;

  res[15] = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[129] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[128] /* gENROE.ud variable */) - data->localData[0]->realVars[170] /* pwLine.vs.im variable */;

  tmp35 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */);
  tmp36 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */);
  res[16] = ((tmp35 && tmp36)?data->localData[0]->realVars[169] /* pwLine.is.re variable */:data->localData[0]->realVars[171] /* pwLine.vs.re variable */ - data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */ + (data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[171] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))))));

  tmp37 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */);
  tmp38 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */);
  res[17] = ((tmp37 && tmp38)?data->localData[0]->realVars[178] /* pwLine1.is.im variable */:data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[178] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[179] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */)))));

  tmp39 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */);
  tmp40 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */);
  res[18] = ((tmp39 && tmp40)?data->localData[0]->realVars[179] /* pwLine1.is.re variable */:data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[179] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[178] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))))));

  tmp41 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */);
  tmp42 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */);
  res[19] = ((tmp41 && tmp42)?data->localData[0]->realVars[199] /* pwLine4.ir.re variable */:data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))))));

  tmp43 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */);
  tmp44 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */);
  res[20] = ((tmp43 && tmp44)?data->localData[0]->realVars[198] /* pwLine4.ir.im variable */:data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */)))));

  tmp45 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */);
  tmp46 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */);
  res[21] = ((tmp45 && tmp46)?data->localData[0]->realVars[177] /* pwLine1.ir.re variable */:data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[176] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))))));

  tmp47 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */);
  tmp48 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */);
  res[22] = ((tmp47 && tmp48)?data->localData[0]->realVars[176] /* pwLine1.ir.im variable */:data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[176] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */)))));

  tmp49 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */);
  tmp50 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */);
  res[23] = ((tmp49 && tmp50)?data->localData[0]->realVars[190] /* pwLine3.is.im variable */:data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[190] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[191] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */)))));

  tmp51 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */);
  tmp52 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */);
  res[24] = ((tmp51 && tmp52)?data->localData[0]->realVars[166] /* pwLine.ir.im variable */:data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[170] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[166] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[167] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */)))));

  tmp53 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */);
  tmp54 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */);
  res[25] = ((tmp53 && tmp54)?data->localData[0]->realVars[167] /* pwLine.ir.re variable */:data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[171] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[167] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[166] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))))));

  tmp55 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */);
  tmp56 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */);
  res[26] = ((tmp55 && tmp56)?data->localData[0]->realVars[168] /* pwLine.is.im variable */:data->localData[0]->realVars[170] /* pwLine.vs.im variable */ - data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[171] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */ + (data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */)))));

  res[27] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[239] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[118] /* gENROE.PSIppd variable */;

  res[28] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[31] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[265] /* gENROE.Tppd0 PARAM */));

  res[29] = data->localData[0]->realVars[119] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[240] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[242] /* gENROE.K4q PARAM */));

  res[30] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[32] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[266] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1007(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+31] = {0,4,4,3,3,4,4,3,3,4,4,4,4,6,6,2,2,6,6,7,7,6,6,7,7,2,2,3,11,11,8,8};
  const int rowIndex[157] = {7,23,24,25,7,17,18,23,4,9,10,4,6,8,7,23,24,25,7,17,18,23,5,9,10,5,6,8,2,3,7,23,2,3,7,23,19,20,21,22,19,20,21,22,0,1,19,20,21,22,0,1,19,20,21,22,27,28,29,30,14,15,27,28,29,30,14,15,27,28,29,30,13,14,15,16,26,29,30,13,14,15,16,26,27,28,11,13,14,16,25,26,11,13,15,16,24,26,0,8,17,19,20,21,22,1,6,18,19,20,21,22,12,13,11,12,12,27,28,2,3,7,9,17,18,22,23,24,25,26,2,3,7,10,16,17,18,21,23,24,25,4,5,6,7,8,9,10,19,4,5,6,8,9,10,20,23};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((31+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(157*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 157;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(31*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (31+1)*sizeof(int));
  
  for(i=2;i<31+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 157*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[30] = 1;
  inSysData->sparsePattern->colorCols[28] = 2;
  inSysData->sparsePattern->colorCols[27] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[29] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[5] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[26] = 7;
  inSysData->sparsePattern->colorCols[4] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[25] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[2] = 10;
  inSysData->sparsePattern->colorCols[7] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[24] = 10;
}
void initializeStaticDataNLS1007(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[178].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[178].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[178].attribute /* pwLine1.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[188].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[188].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[188].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[200].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[200].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[200].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[167].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[167].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[167].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[179].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[179].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[179].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[189].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[189].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[189].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[201].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[201].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[201].attribute /* pwLine4.is.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[72].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[72].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[72].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[198].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[198].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[198].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[177].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[177].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[177].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* gENROE.id */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[171].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[171].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[171].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[170].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[170].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[170].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[180].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[180].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[180].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[181].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[181].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[181].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pSS2B.V_S2 */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pSS2B.V_S2 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pSS2B.V_S2 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pSS2B.V_S2 */.max;
  /* static nls data for eSST1A.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* eSST1A.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* eSST1A.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* eSST1A.ECOMP */.max;
  /* static nls data for eSST1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* eSST1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* eSST1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* eSST1A.XADIFD */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[193].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[193].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[193].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* pwLine3.vr.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1007(sysData);
}

void getIterationVarsNLS1007(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[166] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[178] /* pwLine1.is.im variable */;
  array[2] = data->localData[0]->realVars[188] /* pwLine3.ir.im variable */;
  array[3] = data->localData[0]->realVars[200] /* pwLine4.is.im variable */;
  array[4] = data->localData[0]->realVars[167] /* pwLine.ir.re variable */;
  array[5] = data->localData[0]->realVars[179] /* pwLine1.is.re variable */;
  array[6] = data->localData[0]->realVars[189] /* pwLine3.ir.re variable */;
  array[7] = data->localData[0]->realVars[201] /* pwLine4.is.re variable */;
  array[8] = data->localData[0]->realVars[72] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[71] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[198] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[177] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[108] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[107] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */;
  array[16] = data->localData[0]->realVars[118] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[119] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[127] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[126] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[171] /* pwLine.vs.re variable */;
  array[21] = data->localData[0]->realVars[170] /* pwLine.vs.im variable */;
  array[22] = data->localData[0]->realVars[180] /* pwLine1.vr.im variable */;
  array[23] = data->localData[0]->realVars[181] /* pwLine1.vr.re variable */;
  array[24] = data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */;
  array[25] = data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */;
  array[26] = data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */;
  array[27] = data->localData[0]->realVars[182] /* pwLine1.vs.im variable */;
  array[28] = data->localData[0]->realVars[183] /* pwLine1.vs.re variable */;
  array[29] = data->localData[0]->realVars[193] /* pwLine3.vr.re variable */;
  array[30] = data->localData[0]->realVars[192] /* pwLine3.vr.im variable */;
}


/* inner equations */

/*
equation index: 44
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[183] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[182] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[73] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[73] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[70] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[73] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[73] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
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
  tmp0 = Less(data->localData[0]->realVars[73] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[69] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
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
    tmp2 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[67] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
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
    tmp2 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[73] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[69] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[73] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[70] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[66] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
eSST1A.add2.y = eSST1A.add2.k1 * eSST1A.Vref1.k + eSST1A.add2.k2 * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[82] /* eSST1A.add2.y variable */ = (data->simulationInfo->realParameter[126] /* eSST1A.add2.k1 PARAM */) * (data->simulationInfo->realParameter[124] /* eSST1A.Vref1.k PARAM */) + (data->simulationInfo->realParameter[127] /* eSST1A.add2.k2 PARAM */) * (data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
eSST1A.imGain.y = eSST1A.imGain.k * eSST1A.add2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */ = (data->simulationInfo->realParameter[143] /* eSST1A.imGain.k PARAM */) * (data->localData[0]->realVars[82] /* eSST1A.add2.y variable */);
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
eSST1A.add3_2.u3 = homotopy(smooth(0, if eSST1A.imGain.y > eSST1A.imLimited1.uMax then eSST1A.imLimited1.uMax else if eSST1A.imGain.y < eSST1A.imLimited1.uMin then eSST1A.imLimited1.uMin else eSST1A.imGain.y), eSST1A.imGain.y)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[185] /* eSST1A.imLimited1.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */,data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[186] /* eSST1A.imLimited1.uMin PARAM */:data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */);
  }
  data->localData[0]->realVars[88] /* eSST1A.add3_2.u3 variable */ = homotopy(tmp3, data->localData[0]->realVars[94] /* eSST1A.imGain.y variable */);
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
eSST1A.add3.u1 = eSST1A.imGain3.k * eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[83] /* eSST1A.add3.u1 variable */ = (data->simulationInfo->realParameter[146] /* eSST1A.imGain3.k PARAM */) * (data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
eSST1A.EFD = eSST1A.XADIFD + $DER.gENROE.Epq * gENROE.Tpd0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[77] /* eSST1A.EFD variable */ = data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */ + (data->localData[0]->realVars[30] /* der(gENROE.Epq) STATE_DER */) * (data->simulationInfo->realParameter[264] /* gENROE.Tpd0 PARAM */);
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
eSST1A.IFD0 = eSST1A.XADIFD
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ = data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */;
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
eSST1A.VA0 = eSST1A.Efd0 + eSST1A.K_LR * (eSST1A.IFD0 - eSST1A.I_LR)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */ = data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */ + (data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */) * (data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ - data->simulationInfo->realParameter[88] /* eSST1A.I_LR PARAM */);
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->simulationInfo->realParameter[164] /* eSST1A.imLeadLag.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y_start = eSST1A.VA0 / eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->simulationInfo->realParameter[182] /* eSST1A.imLeadLag1.y_start PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y_start = eSST1A.imLeadLag.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[164] /* eSST1A.imLeadLag.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y = eSST1A.imLeadLag.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[97] /* eSST1A.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[160] /* eSST1A.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y_start = eSST1A.imLeadLag1.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.y_start PARAM */ = data->simulationInfo->realParameter[182] /* eSST1A.imLeadLag1.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y = eSST1A.imLeadLag1.TF.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[100] /* eSST1A.imLeadLag1.TF.y variable */ = data->simulationInfo->realParameter[178] /* eSST1A.imLeadLag1.TF.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.y_start = eSST1A.VA0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */;
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
$START.eSST1A.add3_2.u2 = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->modelData->realVarsData[87].attribute /* eSST1A.add3_2.u2 variable */.start = data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */ = data->modelData->realVarsData[87].attribute /* eSST1A.add3_2.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* eSST1A.add3_2.u2 */.name, (modelica_real) data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
eSST1A.simpleLagLim.state = eSST1A.simpleLagLim.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[194] /* eSST1A.simpleLagLim.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
eSST1A.add3.u2 = eSST1A.imGain2.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[84] /* eSST1A.add3.u2 variable */ = (data->simulationInfo->realParameter[145] /* eSST1A.imGain2.k PARAM */) * (data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
eSST1A.add3.y = eSST1A.add3.k1 * eSST1A.add3.u1 + eSST1A.add3.k2 * eSST1A.add3.u2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[85] /* eSST1A.add3.y variable */ = (data->simulationInfo->realParameter[129] /* eSST1A.add3.k1 PARAM */) * (data->localData[0]->realVars[83] /* eSST1A.add3.u1 variable */) + (data->simulationInfo->realParameter[130] /* eSST1A.add3.k2 PARAM */) * (data->localData[0]->realVars[84] /* eSST1A.add3.u2 variable */);
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
eSST1A.imGain1.y = eSST1A.imGain1.k * eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[95] /* eSST1A.imGain1.y variable */ = (data->simulationInfo->realParameter[144] /* eSST1A.imGain1.k PARAM */) * (data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */);
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
eSST1A.ECOMP0 = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */ = data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
eSST1A.V_REF = eSST1A.VA0 / eSST1A.K_A + eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->simulationInfo->realParameter[119] /* eSST1A.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */,data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */,"eSST1A.K_A",equationIndexes) + data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.y_start = eSST1A.ECOMP0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */;
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
$START.eSST1A.DiffV.u2 = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->modelData->realVarsData[74].attribute /* eSST1A.DiffV.u2 variable */.start = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */ = data->modelData->realVarsData[74].attribute /* eSST1A.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* eSST1A.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
$START.eSST1A.TransducerDelay.state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[0].attribute /* eSST1A.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* eSST1A.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
eSST1A.TransducerDelay.state = eSST1A.TransducerDelay.y_start
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[108] /* eSST1A.TransducerDelay.y_start PARAM */;
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
eSST1A.DiffV.u2 = if abs(eSST1A.TransducerDelay.T) <= 1e-15 then eSST1A.ECOMP * eSST1A.TransducerDelay.K else eSST1A.TransducerDelay.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[105] /* eSST1A.TransducerDelay.T PARAM */),1e-15);
  data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */ = (tmp0?(data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */) * (data->simulationInfo->realParameter[104] /* eSST1A.TransducerDelay.K PARAM */):data->localData[0]->realVars[0] /* eSST1A.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
eSST1A.VoltageReference.k = eSST1A.V_REF
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->simulationInfo->realParameter[122] /* eSST1A.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[119] /* eSST1A.V_REF PARAM */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
eSST1A.DiffV.y = eSST1A.DiffV.k1 * eSST1A.VoltageReference.k + eSST1A.DiffV.k2 * eSST1A.DiffV.u2
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[75] /* eSST1A.DiffV.y variable */ = (data->simulationInfo->realParameter[82] /* eSST1A.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[122] /* eSST1A.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[83] /* eSST1A.DiffV.k2 PARAM */) * (data->localData[0]->realVars[74] /* eSST1A.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
eSST1A.add3_1.y = eSST1A.add3_1.k1 * eSST1A.imDerivativeLag.y + eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */ = (data->simulationInfo->realParameter[131] /* eSST1A.add3_1.k1 PARAM */) * (data->localData[0]->realVars[93] /* eSST1A.imDerivativeLag.y variable */) + (data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[75] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[133] /* eSST1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[79] /* eSST1A.Limiters.y variable */);
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1 = homotopy(smooth(0, if eSST1A.add3_1.y > eSST1A.imLimited.uMax then eSST1A.imLimited.uMax else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then eSST1A.imLimited.uMin else eSST1A.add3_1.y), eSST1A.add3_1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */:data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */);
  }
  data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */ = homotopy(tmp3, data->localData[0]->realVars[86] /* eSST1A.add3_1.y variable */);
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[91] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[90] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[98] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[147] /* eSST1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[91] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[97] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag1.K PARAM */) * (data->localData[0]->realVars[98] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[100] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 82
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[189] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[101] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 83
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.u = homotopy(smooth(0, if pSS2B.V_S2 > pSS2B.limiter2.uMax then pSS2B.limiter2.uMax else if pSS2B.V_S2 < pSS2B.limiter2.uMin then pSS2B.limiter2.uMin else pSS2B.V_S2), pSS2B.V_S2)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */,data->simulationInfo->realParameter[472] /* pSS2B.limiter2.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[472] /* pSS2B.limiter2.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */,data->simulationInfo->realParameter[473] /* pSS2B.limiter2.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[473] /* pSS2B.limiter2.uMin PARAM */:data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */);
  }
  data->localData[0]->realVars[156] /* pSS2B.derivativeLag2.u variable */ = homotopy(tmp3, data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */);
  TRACE_POP
}
/*
equation index: 84
type: SIMPLE_ASSIGN
pSS2B.derivativeLag2.y = if abs(pSS2B.derivativeLag2.T) < 1e-15 then pSS2B.derivativeLag2.u else pSS2B.derivativeLag2.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[435] /* pSS2B.derivativeLag2.T PARAM */),1e-15);
  data->localData[0]->realVars[157] /* pSS2B.derivativeLag2.y variable */ = (tmp0?data->localData[0]->realVars[156] /* pSS2B.derivativeLag2.u variable */:data->localData[0]->realVars[155] /* pSS2B.derivativeLag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 85
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.u = if abs(pSS2B.derivativeLag3.T) < 1e-15 then pSS2B.derivativeLag2.y else pSS2B.derivativeLag3.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[452] /* pSS2B.derivativeLag3.T PARAM */),1e-15);
  data->localData[0]->realVars[142] /* pSS2B.SimpleLag2.u variable */ = (tmp0?data->localData[0]->realVars[157] /* pSS2B.derivativeLag2.y variable */:data->localData[0]->realVars[159] /* pSS2B.derivativeLag3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 86
type: SIMPLE_ASSIGN
pSS2B.SimpleLag2.y = if abs(pSS2B.SimpleLag2.T) <= 1e-15 then pSS2B.SimpleLag2.u * pSS2B.SimpleLag2.K else pSS2B.SimpleLag2.state
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[369] /* pSS2B.SimpleLag2.T PARAM */),1e-15);
  data->localData[0]->realVars[143] /* pSS2B.SimpleLag2.y variable */ = (tmp0?(data->localData[0]->realVars[142] /* pSS2B.SimpleLag2.u variable */) * (data->simulationInfo->realParameter[368] /* pSS2B.SimpleLag2.K PARAM */):data->localData[0]->realVars[17] /* pSS2B.SimpleLag2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
pSS2B.add1.u1 = pSS2B.add.k1 * pSS2B.SimpleLag1.y + pSS2B.add.k2 * pSS2B.SimpleLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->realVars[146] /* pSS2B.add1.u1 variable */ = (data->simulationInfo->realParameter[395] /* pSS2B.add.k1 PARAM */) * (data->localData[0]->realVars[141] /* pSS2B.SimpleLag1.y variable */) + (data->simulationInfo->realParameter[396] /* pSS2B.add.k2 PARAM */) * (data->localData[0]->realVars[143] /* pSS2B.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
pSS2B.add1.y = pSS2B.add1.k1 * pSS2B.add1.u1 + pSS2B.add1.k2 * pSS2B.SimpleLag2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->realVars[147] /* pSS2B.add1.y variable */ = (data->simulationInfo->realParameter[397] /* pSS2B.add1.k1 PARAM */) * (data->localData[0]->realVars[146] /* pSS2B.add1.u1 variable */) + (data->simulationInfo->realParameter[398] /* pSS2B.add1.k2 PARAM */) * (data->localData[0]->realVars[143] /* pSS2B.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.u = pSS2B.gain.k * pSS2B.add1.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[132] /* pSS2B.Leadlag1.u variable */ = (data->simulationInfo->realParameter[467] /* pSS2B.gain.k PARAM */) * (data->localData[0]->realVars[147] /* pSS2B.add1.y variable */);
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
pSS2B.Leadlag1.y = if abs(pSS2B.Leadlag1.T1 - pSS2B.Leadlag1.T2) < 1e-15 then pSS2B.Leadlag1.K * pSS2B.Leadlag1.u else pSS2B.Leadlag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[310] /* pSS2B.Leadlag1.T1 PARAM */ - data->simulationInfo->realParameter[311] /* pSS2B.Leadlag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[133] /* pSS2B.Leadlag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[309] /* pSS2B.Leadlag1.K PARAM */) * (data->localData[0]->realVars[132] /* pSS2B.Leadlag1.u variable */):data->localData[0]->realVars[131] /* pSS2B.Leadlag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
pSS2B.Leadlag2.y = if abs(pSS2B.Leadlag2.T1 - pSS2B.Leadlag2.T2) < 1e-15 then pSS2B.Leadlag2.K * pSS2B.Leadlag1.y else pSS2B.Leadlag2.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[328] /* pSS2B.Leadlag2.T1 PARAM */ - data->simulationInfo->realParameter[329] /* pSS2B.Leadlag2.T2 PARAM */),1e-15);
  data->localData[0]->realVars[136] /* pSS2B.Leadlag2.y variable */ = (tmp0?(data->simulationInfo->realParameter[327] /* pSS2B.Leadlag2.K PARAM */) * (data->localData[0]->realVars[133] /* pSS2B.Leadlag1.y variable */):data->localData[0]->realVars[135] /* pSS2B.Leadlag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
pSS2B.Leadlag3.y = if abs(pSS2B.Leadlag3.T1 - pSS2B.Leadlag3.T2) < 1e-15 then pSS2B.Leadlag3.K * pSS2B.Leadlag2.y else pSS2B.Leadlag3.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[346] /* pSS2B.Leadlag3.T1 PARAM */ - data->simulationInfo->realParameter[347] /* pSS2B.Leadlag3.T2 PARAM */),1e-15);
  data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */ = (tmp0?(data->simulationInfo->realParameter[345] /* pSS2B.Leadlag3.K PARAM */) * (data->localData[0]->realVars[136] /* pSS2B.Leadlag2.y variable */):data->localData[0]->realVars[138] /* pSS2B.Leadlag3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 93
type: SIMPLE_ASSIGN
eSST1A.VOTHSG2 = homotopy(smooth(0, if pSS2B.Leadlag3.y > pSS2B.limiter.uMax then pSS2B.limiter.uMax else if pSS2B.Leadlag3.y < pSS2B.limiter.uMin then pSS2B.limiter.uMin else pSS2B.Leadlag3.y), pSS2B.Leadlag3.y)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */,data->simulationInfo->realParameter[468] /* pSS2B.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[468] /* pSS2B.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */,data->simulationInfo->realParameter[469] /* pSS2B.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[469] /* pSS2B.limiter.uMin PARAM */:data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */);
  }
  data->localData[0]->realVars[80] /* eSST1A.VOTHSG2 variable */ = homotopy(tmp3, data->localData[0]->realVars[139] /* pSS2B.Leadlag3.y variable */);
  TRACE_POP
}
/*
equation index: 94
type: SIMPLE_ASSIGN
eSST1A.add3_2.y = eSST1A.add3_2.k1 * eSST1A.VOTHSG2 + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[134] /* eSST1A.add3_2.k1 PARAM */) * (data->localData[0]->realVars[80] /* eSST1A.VOTHSG2 variable */) + (data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k2 PARAM */) * (data->localData[0]->realVars[87] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k3 PARAM */) * (data->localData[0]->realVars[88] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}
/*
equation index: 95
type: SIMPLE_ASSIGN
eSST1A.hV_GATE1.p = if eSST1A.add3_2.y < const1.k then const1.k else eSST1A.add3_2.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[89] /* eSST1A.add3_2.y variable */);
  TRACE_POP
}
/*
equation index: 96
type: SIMPLE_ASSIGN
eSST1A.lV_GATE.p = if eSST1A.hV_GATE1.p > const2.k then const2.k else eSST1A.hV_GATE1.p
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */,data->simulationInfo->realParameter[38] /* const2.k PARAM */);
  data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[38] /* const2.k PARAM */:data->localData[0]->realVars[92] /* eSST1A.hV_GATE1.p variable */);
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
gENROE.P = pSS2B.V_S2 * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[115] /* gENROE.P variable */ = (data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->realVars[169] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[126] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[168] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[126] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->realVars[120] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[119] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[128] /* gENROE.ud variable */ = (-data->localData[0]->realVars[120] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[118] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[119] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[117] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[116] /* gENROE.PSId variable */ = data->localData[0]->realVars[118] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[129] /* gENROE.uq variable */ = data->localData[0]->realVars[116] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSST1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[126] /* gENROE.id variable */) * (data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[117] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[118] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 106
type: SIMPLE_ASSIGN
gENROE.PSIkq = ((gENROE.Epd + (gENROE.Xpq - gENROE.Xl) * gENROE.iq) * gENROE.K1q + gENROE.Epd + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl) - gENROE.XaqIlq) / gENROE.K1q
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */)) * (data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */) + data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->localData[0]->realVars[127] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[117] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[119] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes))) - data->localData[0]->realVars[123] /* gENROE.XaqIlq variable */,data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */,"gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[111] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[107] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[110] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[107] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[113] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[107] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 110
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[112] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[108] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[107] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[177] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[111] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
pwLine1.ir.im = (-pwLine4.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->localData[0]->realVars[176] /* pwLine1.ir.im variable */ = (-data->localData[0]->realVars[198] /* pwLine4.ir.im variable */) - data->localData[0]->realVars[110] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[160] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[188] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[200] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[161] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[189] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[201] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
pwLine.ir.re = (-pwLine1.is.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->localData[0]->realVars[167] /* pwLine.ir.re variable */ = (-data->localData[0]->realVars[179] /* pwLine1.is.re variable */) - data->localData[0]->realVars[191] /* pwLine3.is.re variable */ - data->localData[0]->realVars[72] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
pwLine1.is.im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[178] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[166] /* pwLine.ir.im variable */) - data->localData[0]->realVars[190] /* pwLine3.is.im variable */ - data->localData[0]->realVars[71] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc148(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,148};
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
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  /* iteration variables */
  for (i=0; i<31; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<31; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[166] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[190] /* pwLine3.is.im variable */ = xloc[1];
  data->localData[0]->realVars[179] /* pwLine1.is.re variable */ = xloc[2];
  data->localData[0]->realVars[191] /* pwLine3.is.re variable */ = xloc[3];
  data->localData[0]->realVars[201] /* pwLine4.is.re variable */ = xloc[4];
  data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ = xloc[5];
  data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ = xloc[6];
  data->localData[0]->realVars[200] /* pwLine4.is.im variable */ = xloc[7];
  data->localData[0]->realVars[72] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[71] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[108] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[107] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = xloc[14];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[118] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[119] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[126] /* gENROE.id variable */ = xloc[18];
  data->localData[0]->realVars[127] /* gENROE.iq variable */ = xloc[19];
  data->localData[0]->realVars[170] /* pwLine.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[171] /* pwLine.vs.re variable */ = xloc[21];
  data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */ = xloc[24];
  data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */ = xloc[25];
  data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */ = xloc[26];
  data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ = xloc[27];
  data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ = xloc[28];
  data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ = xloc[29];
  data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ = xloc[30];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_44(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_45(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_46(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_47(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_48(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_49(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_50(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_76(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_77(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_78(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_79(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_80(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_81(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_82(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_83(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_84(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_85(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_86(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_87(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_88(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_89(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_90(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_91(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_92(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_93(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_94(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_95(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_96(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_97(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_98(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_99(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_100(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_101(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_102(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_103(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_104(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_105(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_106(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_107(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_108(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_109(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_110(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_111(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_112(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_113(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_114(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_115(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_eqFunction_116(data, threadData);
  /* body */
  res[0] = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[129] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[128] /* gENROE.ud variable */) - data->localData[0]->realVars[170] /* pwLine.vs.im variable */;

  res[1] = (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[129] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[128] /* gENROE.ud variable */) - data->localData[0]->realVars[171] /* pwLine.vs.re variable */;

  res[2] = data->localData[0]->realVars[115] /* gENROE.P variable */ - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */)) - ((data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */));

  res[3] = data->localData[0]->realVars[119] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[240] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[242] /* gENROE.K4q PARAM */));

  res[4] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[127] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[32] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[266] /* gENROE.Tppq0 PARAM */));

  res[5] = (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[72] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[71] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[67] /* constantLoad.Q variable */;

  res[6] = (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[71] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[72] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[66] /* constantLoad.P variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[160] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[160] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[476] /* pwFault.R PARAM */) * (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[477] /* pwFault.X PARAM */) * (data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[160] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[7] = tmp10;

  tmp11 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[478] /* pwFault.t1 PARAM */);
  tmp20 = (modelica_boolean)tmp11;
  if(tmp20)
  {
    tmp21 = data->localData[0]->realVars[161] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */);
    tmp18 = (modelica_boolean)(tmp12 && data->simulationInfo->booleanParameter[76] /* pwFault.ground PARAM */);
    if(tmp18)
    {
      tmp19 = data->localData[0]->realVars[192] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp13 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[479] /* pwFault.t2 PARAM */);
      tmp16 = (modelica_boolean)tmp13;
      if(tmp16)
      {
        tmp14 = data->simulationInfo->realParameter[476] /* pwFault.R PARAM */;
        tmp15 = data->simulationInfo->realParameter[477] /* pwFault.X PARAM */;
        tmp17 = data->localData[0]->realVars[161] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[476] /* pwFault.R PARAM */) * (data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[477] /* pwFault.X PARAM */) * (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */),(tmp14 * tmp14) + (tmp15 * tmp15),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp17 = data->localData[0]->realVars[161] /* pwFault.p.ir variable */;
      }
      tmp19 = tmp17;
    }
    tmp21 = tmp19;
  }
  res[8] = tmp21;

  tmp22 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */);
  tmp23 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */);
  res[9] = ((tmp22 && tmp23)?data->localData[0]->realVars[201] /* pwLine4.is.re variable */:data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[201] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[200] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))))));

  tmp24 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */);
  tmp25 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp24 && tmp25)?data->localData[0]->realVars[191] /* pwLine3.is.re variable */:data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[191] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[190] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))))));

  tmp26 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */);
  tmp27 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */);
  res[11] = ((tmp26 && tmp27)?data->localData[0]->realVars[200] /* pwLine4.is.im variable */:data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[200] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[201] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */)))));

  res[12] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[112] /* gENCLS.vd variable */) - data->localData[0]->realVars[180] /* pwLine1.vr.im variable */;

  res[13] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[113] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[112] /* gENCLS.vd variable */) - data->localData[0]->realVars[181] /* pwLine1.vr.re variable */;

  tmp28 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */);
  tmp29 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */);
  res[14] = ((tmp28 && tmp29)?data->localData[0]->realVars[199] /* pwLine4.ir.re variable */:data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))))));

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[522] /* pwLine4.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[523] /* pwLine4.t2 PARAM */);
  res[15] = ((tmp30 && tmp31)?data->localData[0]->realVars[198] /* pwLine4.ir.im variable */:data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[521] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[198] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[520] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[199] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[518] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[519] /* pwLine4.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */);
  res[16] = ((tmp32 && tmp33)?data->localData[0]->realVars[189] /* pwLine3.ir.re variable */:data->localData[0]->realVars[193] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */);
  res[17] = ((tmp34 && tmp35)?data->localData[0]->realVars[188] /* pwLine3.ir.im variable */:data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[188] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[193] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[189] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[192] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[193] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */)))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[511] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[512] /* pwLine3.t2 PARAM */);
  res[18] = ((tmp36 && tmp37)?data->localData[0]->realVars[190] /* pwLine3.is.im variable */:data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[192] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[510] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[190] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[509] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[191] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[507] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[508] /* pwLine3.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */);
  res[19] = ((tmp38 && tmp39)?data->localData[0]->realVars[178] /* pwLine1.is.im variable */:data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[178] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[179] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */)))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */);
  res[20] = ((tmp40 && tmp41)?data->localData[0]->realVars[179] /* pwLine1.is.re variable */:data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[179] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[178] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */);
  res[21] = ((tmp42 && tmp43)?data->localData[0]->realVars[176] /* pwLine1.ir.im variable */:data->localData[0]->realVars[180] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[176] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */)))));

  tmp44 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[500] /* pwLine1.t1 PARAM */);
  tmp45 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[501] /* pwLine1.t2 PARAM */);
  res[22] = ((tmp44 && tmp45)?data->localData[0]->realVars[177] /* pwLine1.ir.re variable */:data->localData[0]->realVars[181] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[499] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[177] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[181] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[498] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[176] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[181] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[496] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[180] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[497] /* pwLine1.Y.re PARAM */))))));

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */);
  res[23] = ((tmp46 && tmp47)?data->localData[0]->realVars[169] /* pwLine.is.re variable */:data->localData[0]->realVars[171] /* pwLine.vs.re variable */ - data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */ + (data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[171] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */);
  res[24] = ((tmp48 && tmp49)?data->localData[0]->realVars[168] /* pwLine.is.im variable */:data->localData[0]->realVars[170] /* pwLine.vs.im variable */ - data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[168] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[171] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[169] /* pwLine.is.re variable */ + (data->localData[0]->realVars[170] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[171] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */);
  res[25] = ((tmp50 && tmp51)?data->localData[0]->realVars[167] /* pwLine.ir.re variable */:data->localData[0]->realVars[183] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[171] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[167] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[166] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[489] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[490] /* pwLine.t2 PARAM */);
  res[26] = ((tmp52 && tmp53)?data->localData[0]->realVars[166] /* pwLine.ir.im variable */:data->localData[0]->realVars[182] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[170] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[488] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[166] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[183] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[487] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[167] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[182] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[485] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[183] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[486] /* pwLine.Y.re PARAM */)))));

  tmp54 = data->localData[0]->realVars[171] /* pwLine.vs.re variable */;
  tmp55 = data->localData[0]->realVars[170] /* pwLine.vs.im variable */;
  res[27] = sqrt((tmp54 * tmp54) + (tmp55 * tmp55)) - data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */;

  tmp56 = Greater(data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[85] /* eSST1A.add3.y variable */);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = data->localData[0]->realVars[85] /* eSST1A.add3.y variable */;
  }
  else
  {
    tmp57 = Less(data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[95] /* eSST1A.imGain1.y variable */);
    tmp59 = (tmp57?data->localData[0]->realVars[95] /* eSST1A.imGain1.y variable */:data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */);
  }
  res[28] = homotopy(tmp59, data->localData[0]->realVars[102] /* eSST1A.lV_GATE.p variable */) - data->localData[0]->realVars[77] /* eSST1A.EFD variable */;

  res[29] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[239] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[118] /* gENROE.PSIppd variable */;

  res[30] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[126] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[31] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[265] /* gENROE.Tppd0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS148(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+31] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,2,2,6,6,7,7,6,6,7,7,2,2,3,11,11,8,8};
  const int rowIndex[157] = {19,20,25,26,10,18,19,20,19,20,25,26,10,18,25,26,8,9,11,8,16,17,7,16,17,7,9,11,5,6,25,26,5,6,19,20,14,15,21,22,14,15,21,22,12,13,14,15,21,22,12,13,14,15,21,22,3,4,29,30,0,1,3,4,29,30,0,1,3,4,29,30,0,1,2,23,24,29,30,0,1,2,3,4,23,24,0,2,23,24,26,27,1,2,23,24,25,27,9,13,14,15,20,21,22,11,12,14,15,19,21,22,2,28,27,28,28,29,30,5,6,10,16,18,19,20,22,23,25,26,5,6,10,17,18,19,20,21,24,25,26,7,8,9,11,15,16,17,18,7,8,9,10,11,14,16,17};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((31+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(157*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 157;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(31*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (31+1)*sizeof(int));
  
  for(i=2;i<31+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 157*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[30] = 1;
  inSysData->sparsePattern->colorCols[28] = 2;
  inSysData->sparsePattern->colorCols[27] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[29] = 4;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[23] = 5;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[22] = 6;
  inSysData->sparsePattern->colorCols[26] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[9] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[2] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[5] = 9;
  inSysData->sparsePattern->colorCols[7] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[25] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[4] = 10;
  inSysData->sparsePattern->colorCols[6] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
  inSysData->sparsePattern->colorCols[14] = 10;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[24] = 10;
}
void initializeStaticDataNLS148(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[190].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[190].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[190].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[179].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[179].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[179].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[191].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[191].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[191].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[201].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[201].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[201].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[189].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[189].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[189].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[188].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[188].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[188].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[200].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[200].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[200].attribute /* pwLine4.is.im */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[72].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[72].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[72].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine4.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[198].attribute /* pwLine4.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[198].attribute /* pwLine4.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[198].attribute /* pwLine4.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[177].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[177].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[177].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epd */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* gENROE.Epd */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[126].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[126].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[126].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[127].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[127].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[127].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[170].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[170].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[170].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[171].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[171].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[171].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[181].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[181].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[181].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[180].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[180].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[180].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pSS2B.V_S2 */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* pSS2B.V_S2 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* pSS2B.V_S2 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* pSS2B.V_S2 */.max;
  /* static nls data for eSST1A.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[76].attribute /* eSST1A.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[76].attribute /* eSST1A.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[76].attribute /* eSST1A.ECOMP */.max;
  /* static nls data for eSST1A.XADIFD */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* eSST1A.XADIFD */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* eSST1A.XADIFD */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* eSST1A.XADIFD */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[193].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[193].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[193].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS148(sysData);
}

void getIterationVarsNLS148(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[166] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[190] /* pwLine3.is.im variable */;
  array[2] = data->localData[0]->realVars[179] /* pwLine1.is.re variable */;
  array[3] = data->localData[0]->realVars[191] /* pwLine3.is.re variable */;
  array[4] = data->localData[0]->realVars[201] /* pwLine4.is.re variable */;
  array[5] = data->localData[0]->realVars[189] /* pwLine3.ir.re variable */;
  array[6] = data->localData[0]->realVars[188] /* pwLine3.ir.im variable */;
  array[7] = data->localData[0]->realVars[200] /* pwLine4.is.im variable */;
  array[8] = data->localData[0]->realVars[72] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[71] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[198] /* pwLine4.ir.im variable */;
  array[11] = data->localData[0]->realVars[177] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[108] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[107] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */;
  array[15] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[16] = data->localData[0]->realVars[118] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[119] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[126] /* gENROE.id variable */;
  array[19] = data->localData[0]->realVars[127] /* gENROE.iq variable */;
  array[20] = data->localData[0]->realVars[170] /* pwLine.vs.im variable */;
  array[21] = data->localData[0]->realVars[171] /* pwLine.vs.re variable */;
  array[22] = data->localData[0]->realVars[181] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[180] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[145] /* pSS2B.V_S2 variable */;
  array[25] = data->localData[0]->realVars[76] /* eSST1A.ECOMP variable */;
  array[26] = data->localData[0]->realVars[81] /* eSST1A.XADIFD variable */;
  array[27] = data->localData[0]->realVars[183] /* pwLine1.vs.re variable */;
  array[28] = data->localData[0]->realVars[182] /* pwLine1.vs.im variable */;
  array[29] = data->localData[0]->realVars[192] /* pwLine3.vr.im variable */;
  array[30] = data->localData[0]->realVars[193] /* pwLine3.vr.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[3].equationIndex = 1298;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc1298;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacNLSJac27_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianNLSJac27;
  nonLinearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS1298;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS1298;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 1218;
  nonLinearSystemData[2].size = 22;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc1218;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_functionJacNLSJac26_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2B_initialAnalyticJacobianNLSJac26;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS1218;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS1218;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 1007;
  nonLinearSystemData[1].size = 31;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc1007;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS1007;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS1007;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 148;
  nonLinearSystemData[0].size = 31;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc148;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS148;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS148;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

