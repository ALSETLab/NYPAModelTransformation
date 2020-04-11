/* Non Linear Systems */
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_model.h"
#include "OpenIPSL.Examples.Controls.PSSE.PSS.PSS2A_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 1342
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.n1 = smooth(0, if eSST1A.add3_1.y > eSST1A.imLimited.uMax then eSST1A.imLimited.uMax else if eSST1A.add3_1.y < eSST1A.imLimited.uMin then eSST1A.imLimited.uMin else eSST1A.add3_1.y)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1342};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[183] /* eSST1A.imLimited.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */,data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[184] /* eSST1A.imLimited.uMin PARAM */:data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */);
  }
  data->localData[0]->realVars[100] /* eSST1A.hV_GATE.n1 variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 1343
type: SIMPLE_ASSIGN
eSST1A.hV_GATE.p = if eSST1A.hV_GATE.n1 < const1.k then const1.k else eSST1A.hV_GATE.n1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1343};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[100] /* eSST1A.hV_GATE.n1 variable */, data->simulationInfo->realParameter[36] /* const1.k PARAM */, 14, Less);
  data->localData[0]->realVars[101] /* eSST1A.hV_GATE.p variable */ = (tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[100] /* eSST1A.hV_GATE.n1 variable */);
  TRACE_POP
}
/*
equation index: 1344
type: SIMPLE_ASSIGN
eSST1A.imDerivativeLag.y = (eSST1A.add3_1.y - (eSST1A.add3_1.k2 * eSST1A.DiffV.y + eSST1A.add3_1.k3 * eSST1A.Limiters.y)) / eSST1A.add3_1.k1
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1344};
  data->localData[0]->realVars[103] /* eSST1A.imDerivativeLag.y variable */ = DIVISION_SIM(data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */ - ((data->simulationInfo->realParameter[132] /* eSST1A.add3_1.k2 PARAM */) * (data->localData[0]->realVars[85] /* eSST1A.DiffV.y variable */) + (data->simulationInfo->realParameter[133] /* eSST1A.add3_1.k3 PARAM */) * (data->localData[0]->realVars[89] /* eSST1A.Limiters.y variable */)),data->simulationInfo->realParameter[131] /* eSST1A.add3_1.k1 PARAM */,"eSST1A.add3_1.k1",equationIndexes);
  TRACE_POP
}
/*
equation index: 1345
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.TF.y = (eSST1A.imLeadLag.TF.bb[2] - eSST1A.imLeadLag.TF.a[2] * eSST1A.imLeadLag.TF.d) * eSST1A.imLeadLag.TF.x[1] + eSST1A.imLeadLag.TF.d * eSST1A.hV_GATE.p
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1345};
  data->localData[0]->realVars[107] /* eSST1A.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[157] /* eSST1A.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[152] /* eSST1A.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[158] /* eSST1A.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[106] /* eSST1A.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[158] /* eSST1A.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.hV_GATE.p variable */);
  TRACE_POP
}
/*
equation index: 1346
type: SIMPLE_ASSIGN
eSST1A.imLeadLag.y = if abs(eSST1A.imLeadLag.T1 - eSST1A.imLeadLag.T2) < 1e-15 then eSST1A.imLeadLag.K * eSST1A.hV_GATE.p else eSST1A.imLeadLag.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1346};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[148] /* eSST1A.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[149] /* eSST1A.imLeadLag.T2 PARAM */),1e-15);
  data->localData[0]->realVars[108] /* eSST1A.imLeadLag.y variable */ = (tmp0?(data->simulationInfo->realParameter[147] /* eSST1A.imLeadLag.K PARAM */) * (data->localData[0]->realVars[101] /* eSST1A.hV_GATE.p variable */):data->localData[0]->realVars[107] /* eSST1A.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1347
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.TF.y = (eSST1A.imLeadLag1.TF.bb[2] - eSST1A.imLeadLag1.TF.a[2] * eSST1A.imLeadLag1.TF.d) * eSST1A.imLeadLag1.TF.x[1] + eSST1A.imLeadLag1.TF.d * eSST1A.imLeadLag.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1347};
  data->localData[0]->realVars[110] /* eSST1A.imLeadLag1.TF.y variable */ = (data->simulationInfo->realParameter[175] /* eSST1A.imLeadLag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[170] /* eSST1A.imLeadLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[176] /* eSST1A.imLeadLag1.TF.d PARAM */))) * (data->localData[0]->realVars[109] /* eSST1A.imLeadLag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[176] /* eSST1A.imLeadLag1.TF.d PARAM */) * (data->localData[0]->realVars[108] /* eSST1A.imLeadLag.y variable */);
  TRACE_POP
}
/*
equation index: 1348
type: SIMPLE_ASSIGN
eSST1A.imLeadLag1.y = if abs(eSST1A.imLeadLag1.T1 - eSST1A.imLeadLag1.T2) < 1e-15 then eSST1A.imLeadLag1.K * eSST1A.imLeadLag.y else eSST1A.imLeadLag1.TF.y
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1348};
  modelica_boolean tmp0;
  tmp0 = Less(fabs(data->simulationInfo->realParameter[166] /* eSST1A.imLeadLag1.T1 PARAM */ - data->simulationInfo->realParameter[167] /* eSST1A.imLeadLag1.T2 PARAM */),1e-15);
  data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */ = (tmp0?(data->simulationInfo->realParameter[165] /* eSST1A.imLeadLag1.K PARAM */) * (data->localData[0]->realVars[108] /* eSST1A.imLeadLag.y variable */):data->localData[0]->realVars[110] /* eSST1A.imLeadLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1349
type: SIMPLE_ASSIGN
eSST1A.add3_2.u2 = if abs(eSST1A.simpleLagLim.T) <= 1e-15 then max(min(eSST1A.imLeadLag1.y * eSST1A.simpleLagLim.K, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin) else max(min(eSST1A.simpleLagLim.state, eSST1A.simpleLagLim.outMax), eSST1A.simpleLagLim.outMin)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1349};
  modelica_boolean tmp0;
  tmp0 = LessEq(fabs(data->simulationInfo->realParameter[189] /* eSST1A.simpleLagLim.T PARAM */),1e-15);
  data->localData[0]->realVars[97] /* eSST1A.add3_2.u2 variable */ = (tmp0?fmax(fmin((data->localData[0]->realVars[111] /* eSST1A.imLeadLag1.y variable */) * (data->simulationInfo->realParameter[188] /* eSST1A.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[4] /* eSST1A.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[192] /* eSST1A.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[193] /* eSST1A.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 1350
type: SIMPLE_ASSIGN
eSST1A.add3_2.y = eSST1A.add3_2.k1 * eSST1A.VOTHSG2 + eSST1A.add3_2.k2 * eSST1A.add3_2.u2 + eSST1A.add3_2.k3 * eSST1A.add3_2.u3
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1350};
  data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */ = (data->simulationInfo->realParameter[134] /* eSST1A.add3_2.k1 PARAM */) * (data->localData[0]->realVars[90] /* eSST1A.VOTHSG2 variable */) + (data->simulationInfo->realParameter[135] /* eSST1A.add3_2.k2 PARAM */) * (data->localData[0]->realVars[97] /* eSST1A.add3_2.u2 variable */) + (data->simulationInfo->realParameter[136] /* eSST1A.add3_2.k3 PARAM */) * (data->localData[0]->realVars[98] /* eSST1A.add3_2.u3 variable */);
  TRACE_POP
}

void residualFunc1362(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1362};
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
  data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1342(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1343(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1344(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1345(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1346(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1347(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1348(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1349(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1350(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */ + (-data->localData[0]->realVars[1] /* eSST1A.imDerivativeLag.x STATE(1) */) - ((data->localData[0]->realVars[103] /* eSST1A.imDerivativeLag.y variable */) * (data->simulationInfo->realParameter[139] /* eSST1A.imDerivativeLag.T PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1362(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS1362(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST1A.add3_1.y */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* eSST1A.add3_1.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* eSST1A.add3_1.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* eSST1A.add3_1.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1362(sysData);
}

void getIterationVarsNLS1362(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[96] /* eSST1A.add3_1.y variable */;
}


/* inner equations */

/*
equation index: 1198
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1198};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[199] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[198] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[83] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 1199
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[83] /* constantLoad.v variable */, data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */, 13, Less);
  data->localData[0]->realVars[80] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[83] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[83] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 1200
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1200};
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
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[83] /* constantLoad.v variable */, 0.5, 8, Less);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[79] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 1201
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 10, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[77] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 1202
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1202};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */, 9, GreaterEq);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[77] /* constantLoad.t1 PARAM */ + data->simulationInfo->realParameter[71] /* constantLoad.d_t PARAM */, 10, LessEq);
  tmp4 = (modelica_boolean)(tmp0 && tmp1);
  if(tmp4)
  {
    tmp2 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[76] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 1203
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  data->localData[0]->realVars[131] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[130] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 1204
type: SIMPLE_ASSIGN
pwLine.is.im = ($cse6 * gENROE.iq - $cse7 * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  data->localData[0]->realVars[184] /* pwLine.is.im variable */ = ((data->localData[0]->realVars[58] /* $cse6 variable */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - ((data->localData[0]->realVars[59] /* $cse7 variable */) * (data->localData[0]->realVars[137] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 1205
type: SIMPLE_ASSIGN
pwLine.is.re = ($cse7 * gENROE.iq - (-$cse6) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1205};
  data->localData[0]->realVars[185] /* pwLine.is.re variable */ = ((data->localData[0]->realVars[59] /* $cse7 variable */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - (((-data->localData[0]->realVars[58] /* $cse6 variable */)) * (data->localData[0]->realVars[137] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 1206
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1206};
  data->localData[0]->realVars[139] /* gENROE.ud variable */ = (-data->localData[0]->realVars[131] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 1207
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1207};
  data->localData[0]->realVars[127] /* gENROE.PSId variable */ = data->localData[0]->realVars[129] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 1208
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1208};
  data->localData[0]->realVars[140] /* gENROE.uq variable */ = data->localData[0]->realVars[127] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 1209
type: SIMPLE_ASSIGN
pwLine.vs.im = $cse6 * gENROE.uq - $cse7 * gENROE.ud
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  data->localData[0]->realVars[186] /* pwLine.vs.im variable */ = (data->localData[0]->realVars[58] /* $cse6 variable */) * (data->localData[0]->realVars[140] /* gENROE.uq variable */) - ((data->localData[0]->realVars[59] /* $cse7 variable */) * (data->localData[0]->realVars[139] /* gENROE.ud variable */));
  TRACE_POP
}
/*
equation index: 1210
type: SIMPLE_ASSIGN
pwLine.vs.re = $cse6 * gENROE.ud + $cse7 * gENROE.uq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  data->localData[0]->realVars[187] /* pwLine.vs.re variable */ = (data->localData[0]->realVars[58] /* $cse6 variable */) * (data->localData[0]->realVars[139] /* gENROE.ud variable */) + (data->localData[0]->realVars[59] /* $cse7 variable */) * (data->localData[0]->realVars[140] /* gENROE.uq variable */);
  TRACE_POP
}
/*
equation index: 1211
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-$cse1) * gENCLS.id - $cse2 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  data->localData[0]->realVars[121] /* gENCLS.p.ir variable */ = (((-data->localData[0]->realVars[54] /* $cse1 variable */)) * (data->localData[0]->realVars[117] /* gENCLS.id variable */) - ((data->localData[0]->realVars[55] /* $cse2 variable */) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 1212
type: SIMPLE_ASSIGN
gENCLS.p.ii = ($cse2 * gENCLS.id - $cse1 * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  data->localData[0]->realVars[120] /* gENCLS.p.ii variable */ = ((data->localData[0]->realVars[55] /* $cse2 variable */) * (data->localData[0]->realVars[117] /* gENCLS.id variable */) - ((data->localData[0]->realVars[54] /* $cse1 variable */) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 1213
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  data->localData[0]->realVars[123] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[117] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 1214
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  data->localData[0]->realVars[122] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[117] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 1215
type: SIMPLE_ASSIGN
pwLine4.ir.re = (-pwLine1.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1215};
  data->localData[0]->realVars[215] /* pwLine4.ir.re variable */ = (-data->localData[0]->realVars[193] /* pwLine1.ir.re variable */) - data->localData[0]->realVars[121] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 1216
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  data->localData[0]->realVars[214] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[192] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[120] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 1217
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  data->localData[0]->realVars[176] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[204] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[216] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 1218
type: SIMPLE_ASSIGN
constantLoad.p.ir = (-pwLine.ir.re) - pwLine1.is.re - pwLine3.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  data->localData[0]->realVars[82] /* constantLoad.p.ir variable */ = (-data->localData[0]->realVars[183] /* pwLine.ir.re variable */) - data->localData[0]->realVars[195] /* pwLine1.is.re variable */ - data->localData[0]->realVars[207] /* pwLine3.is.re variable */;
  TRACE_POP
}
/*
equation index: 1219
type: SIMPLE_ASSIGN
pwLine3.is.im = (-pwLine.ir.im) - pwLine1.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  data->localData[0]->realVars[206] /* pwLine3.is.im variable */ = (-data->localData[0]->realVars[182] /* pwLine.ir.im variable */) - data->localData[0]->realVars[194] /* pwLine1.is.im variable */ - data->localData[0]->realVars[81] /* constantLoad.p.ii variable */;
  TRACE_POP
}
/*
equation index: 1220
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  data->localData[0]->realVars[177] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[205] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[217] /* pwLine4.is.re variable */;
  TRACE_POP
}

void residualFunc1288(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1288};
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
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
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
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
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
  data->localData[0]->realVars[217] /* pwLine4.is.re variable */ = xloc[0];
  data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ = xloc[1];
  data->localData[0]->realVars[182] /* pwLine.ir.im variable */ = xloc[2];
  data->localData[0]->realVars[194] /* pwLine1.is.im variable */ = xloc[3];
  data->localData[0]->realVars[81] /* constantLoad.p.ii variable */ = xloc[4];
  data->localData[0]->realVars[195] /* pwLine1.is.re variable */ = xloc[5];
  data->localData[0]->realVars[183] /* pwLine.ir.re variable */ = xloc[6];
  data->localData[0]->realVars[207] /* pwLine3.is.re variable */ = xloc[7];
  data->localData[0]->realVars[216] /* pwLine4.is.im variable */ = xloc[8];
  data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ = xloc[9];
  data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ = xloc[10];
  data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ = xloc[11];
  data->localData[0]->realVars[118] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[117] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ = xloc[14];
  data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ = xloc[15];
  data->localData[0]->realVars[137] /* gENROE.id variable */ = xloc[16];
  data->localData[0]->realVars[138] /* gENROE.iq variable */ = xloc[17];
  data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ = xloc[18];
  data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ = xloc[19];
  data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ = xloc[20];
  data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1198(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1199(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1200(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1201(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1202(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1203(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1204(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1205(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1206(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1207(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1208(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1209(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1210(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1211(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1212(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1213(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1214(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1215(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1216(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1217(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1218(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1219(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_1220(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, data->localData[0]->timeValue, data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */, 4, Less);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[176] /* pwFault.p.ii variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, 5, Less);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[72] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, 5, Less);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp4 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp6 = data->localData[0]->realVars[176] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[501] /* pwFault.R PARAM */) * (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[502] /* pwFault.X PARAM */) * (data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[176] /* pwFault.p.ii variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[0] = tmp10;

  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, 3, Less);
  res[1] = ((tmp11 && tmp12)?data->localData[0]->realVars[207] /* pwLine3.is.re variable */:data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[207] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[206] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, 1, Less);
  res[2] = ((tmp13 && tmp14)?data->localData[0]->realVars[182] /* pwLine.ir.im variable */:data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[186] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[182] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[183] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, 1, Less);
  res[3] = ((tmp15 && tmp16)?data->localData[0]->realVars[185] /* pwLine.is.re variable */:data->localData[0]->realVars[187] /* pwLine.vs.re variable */ - data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */ + (data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[187] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, 1, Less);
  res[4] = ((tmp17 && tmp18)?data->localData[0]->realVars[184] /* pwLine.is.im variable */:data->localData[0]->realVars[186] /* pwLine.vs.im variable */ - data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[187] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */ + (data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */)))));

  res[5] = (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[81] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[82] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[76] /* constantLoad.P variable */;

  res[6] = (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[82] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[81] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[77] /* constantLoad.Q variable */;

  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, 12, Less);
  res[7] = ((tmp19 && tmp20)?data->localData[0]->realVars[194] /* pwLine1.is.im variable */:data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[194] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[195] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp22, data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, 12, Less);
  res[8] = ((tmp21 && tmp22)?data->localData[0]->realVars[195] /* pwLine1.is.re variable */:data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[195] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[194] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))))));

  res[9] = (data->localData[0]->realVars[54] /* $cse1 variable */) * (data->localData[0]->realVars[123] /* gENCLS.vq variable */) + ((-data->localData[0]->realVars[55] /* $cse2 variable */)) * (data->localData[0]->realVars[122] /* gENCLS.vd variable */) - data->localData[0]->realVars[196] /* pwLine1.vr.im variable */;

  res[10] = (data->localData[0]->realVars[55] /* $cse2 variable */) * (data->localData[0]->realVars[123] /* gENCLS.vq variable */) + (data->localData[0]->realVars[54] /* $cse1 variable */) * (data->localData[0]->realVars[122] /* gENCLS.vd variable */) - data->localData[0]->realVars[197] /* pwLine1.vr.re variable */;

  RELATIONHYSTERESIS(tmp23, data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, 12, Less);
  res[11] = ((tmp23 && tmp24)?data->localData[0]->realVars[193] /* pwLine1.ir.re variable */:data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, 7, Less);
  res[12] = ((tmp25 && tmp26)?data->localData[0]->realVars[215] /* pwLine4.ir.re variable */:data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[215] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[214] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, 7, Less);
  res[13] = ((tmp27 && tmp28)?data->localData[0]->realVars[214] /* pwLine4.ir.im variable */:data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[214] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[215] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, 3, Less);
  res[14] = ((tmp29 && tmp30)?data->localData[0]->realVars[206] /* pwLine3.is.im variable */:data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[206] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[207] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */, 0, GreaterEq);
  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */, 1, Less);
  res[15] = ((tmp31 && tmp32)?data->localData[0]->realVars[183] /* pwLine.ir.re variable */:data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[187] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[183] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[182] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, 3, Less);
  res[16] = ((tmp33 && tmp34)?data->localData[0]->realVars[205] /* pwLine3.ir.re variable */:data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */, 2, GreaterEq);
  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */, 3, Less);
  res[17] = ((tmp35 && tmp36)?data->localData[0]->realVars[204] /* pwLine3.ir.im variable */:data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */, 4, Less);
  tmp46 = (modelica_boolean)tmp37;
  if(tmp46)
  {
    tmp47 = data->localData[0]->realVars[177] /* pwFault.p.ir variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, 5, Less);
    tmp44 = (modelica_boolean)(tmp38 && data->simulationInfo->booleanParameter[72] /* pwFault.ground PARAM */);
    if(tmp44)
    {
      tmp45 = data->localData[0]->realVars[208] /* pwLine3.vr.im variable */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */, 5, Less);
      tmp42 = (modelica_boolean)tmp39;
      if(tmp42)
      {
        tmp40 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp41 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp43 = data->localData[0]->realVars[177] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[501] /* pwFault.R PARAM */) * (data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[502] /* pwFault.X PARAM */) * (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */),(tmp40 * tmp40) + (tmp41 * tmp41),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp43 = data->localData[0]->realVars[177] /* pwFault.p.ir variable */;
      }
      tmp45 = tmp43;
    }
    tmp47 = tmp45;
  }
  res[18] = tmp47;

  RELATIONHYSTERESIS(tmp48, data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp49, data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, 7, Less);
  res[19] = ((tmp48 && tmp49)?data->localData[0]->realVars[217] /* pwLine4.is.re variable */:data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[217] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[216] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))))));

  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */, 6, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */, 7, Less);
  res[20] = ((tmp50 && tmp51)?data->localData[0]->realVars[216] /* pwLine4.is.im variable */:data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[216] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[217] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */)))));

  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */, 11, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */, 12, Less);
  res[21] = ((tmp52 && tmp53)?data->localData[0]->realVars[192] /* pwLine1.ir.im variable */:data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */)))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1288(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,3,3,4,4,4,4,4,4,3,3,4,4,4,4,7,7,4,4,8,11,8,11};
  const int rowIndex[112] = {18,19,20,16,17,18,1,2,14,15,1,7,8,14,1,5,6,14,5,6,7,8,2,5,6,15,1,5,6,14,0,19,20,0,16,17,11,12,13,21,11,12,13,21,9,10,12,13,9,10,12,13,7,9,11,12,13,20,21,8,10,11,12,13,19,21,2,3,4,15,2,3,4,15,0,1,12,16,17,18,19,20,1,2,3,5,6,7,8,11,14,15,16,0,13,14,16,17,18,19,20,1,2,4,5,6,7,8,14,15,17,21};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(112*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 112;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
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
  inSysData->sparsePattern->colorCols[18] = 4;
  inSysData->sparsePattern->colorCols[15] = 5;
  inSysData->sparsePattern->colorCols[14] = 6;
  inSysData->sparsePattern->colorCols[7] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[17] = 7;
  inSysData->sparsePattern->colorCols[4] = 8;
  inSysData->sparsePattern->colorCols[12] = 8;
  inSysData->sparsePattern->colorCols[16] = 8;
  inSysData->sparsePattern->colorCols[1] = 9;
  inSysData->sparsePattern->colorCols[3] = 9;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[8] = 9;
  inSysData->sparsePattern->colorCols[11] = 9;
  inSysData->sparsePattern->colorCols[0] = 10;
  inSysData->sparsePattern->colorCols[2] = 10;
  inSysData->sparsePattern->colorCols[5] = 10;
  inSysData->sparsePattern->colorCols[9] = 10;
  inSysData->sparsePattern->colorCols[10] = 10;
}
void initializeStaticDataNLS1288(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[217].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[217].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[217].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[205].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[205].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[205].attribute /* pwLine3.ir.re */.max;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine1.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[194].attribute /* pwLine1.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[194].attribute /* pwLine1.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[194].attribute /* pwLine1.is.im */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine1.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[195].attribute /* pwLine1.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[195].attribute /* pwLine1.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[195].attribute /* pwLine1.is.re */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[207].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[207].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[207].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[216].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[216].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[216].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[204].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[204].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[204].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* pwLine1.ir.im */.max;
  /* static nls data for pwLine1.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[193].attribute /* pwLine1.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[193].attribute /* pwLine1.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[193].attribute /* pwLine1.ir.re */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* gENCLS.id */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* gENROE.id */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* gENROE.iq */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1288(sysData);
}

void getIterationVarsNLS1288(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[217] /* pwLine4.is.re variable */;
  array[1] = data->localData[0]->realVars[205] /* pwLine3.ir.re variable */;
  array[2] = data->localData[0]->realVars[182] /* pwLine.ir.im variable */;
  array[3] = data->localData[0]->realVars[194] /* pwLine1.is.im variable */;
  array[4] = data->localData[0]->realVars[81] /* constantLoad.p.ii variable */;
  array[5] = data->localData[0]->realVars[195] /* pwLine1.is.re variable */;
  array[6] = data->localData[0]->realVars[183] /* pwLine.ir.re variable */;
  array[7] = data->localData[0]->realVars[207] /* pwLine3.is.re variable */;
  array[8] = data->localData[0]->realVars[216] /* pwLine4.is.im variable */;
  array[9] = data->localData[0]->realVars[204] /* pwLine3.ir.im variable */;
  array[10] = data->localData[0]->realVars[192] /* pwLine1.ir.im variable */;
  array[11] = data->localData[0]->realVars[193] /* pwLine1.ir.re variable */;
  array[12] = data->localData[0]->realVars[118] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[117] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[196] /* pwLine1.vr.im variable */;
  array[15] = data->localData[0]->realVars[197] /* pwLine1.vr.re variable */;
  array[16] = data->localData[0]->realVars[137] /* gENROE.id variable */;
  array[17] = data->localData[0]->realVars[138] /* gENROE.iq variable */;
  array[18] = data->localData[0]->realVars[209] /* pwLine3.vr.re variable */;
  array[19] = data->localData[0]->realVars[199] /* pwLine1.vs.re variable */;
  array[20] = data->localData[0]->realVars[208] /* pwLine3.vr.im variable */;
  array[21] = data->localData[0]->realVars[198] /* pwLine1.vs.im variable */;
}


/* inner equations */

void residualFunc1062(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1062};
  int i;
  modelica_boolean tmp0;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  res[0] = data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */ - ((tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1062(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1062(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST1A.add3_2.y */
  sysData->nominal[i] = data->modelData->realVarsData[99].attribute /* eSST1A.add3_2.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[99].attribute /* eSST1A.add3_2.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[99].attribute /* eSST1A.add3_2.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1062(sysData);
}

void getIterationVarsNLS1062(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */;
}


/* inner equations */

void residualFunc1060(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1060};
  int i;
  modelica_boolean tmp0;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Greater(data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */,data->simulationInfo->realParameter[38] /* const2.k PARAM */);
  res[0] = data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */ - ((tmp0?data->simulationInfo->realParameter[38] /* const2.k PARAM */:data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1060(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1060(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST1A.hV_GATE1.p */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* eSST1A.hV_GATE1.p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* eSST1A.hV_GATE1.p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* eSST1A.hV_GATE1.p */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1060(sysData);
}

void getIterationVarsNLS1060(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */;
}


/* inner equations */

/*
equation index: 971
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[199] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[198] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[83] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 972
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[83] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[80] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[83] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[83] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 973
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
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
  tmp0 = Less(data->localData[0]->realVars[83] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[79] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 974
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
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
    tmp2 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[77] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 975
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
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
    tmp2 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[76] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 976
type: SIMPLE_ASSIGN
eSST1A.ECOMP0 = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */ = data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 977
type: SIMPLE_ASSIGN
eSST1A.VA0 = (eSST1A.V_REF - eSST1A.ECOMP0) * eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */ = (data->simulationInfo->realParameter[119] /* eSST1A.V_REF PARAM */ - data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */) * (data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */);
  TRACE_POP
}
/*
equation index: 978
type: SIMPLE_ASSIGN
eSST1A.IFD0 = (eSST1A.VA0 - (eSST1A.Efd0 - eSST1A.I_LR * eSST1A.K_LR)) / eSST1A.K_LR
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */ - (data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */ - ((data->simulationInfo->realParameter[88] /* eSST1A.I_LR PARAM */) * (data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */))),data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */,"eSST1A.K_LR",equationIndexes);
  TRACE_POP
}
/*
equation index: 979
type: SIMPLE_ASSIGN
eSST1A.XADIFD = eSST1A.IFD0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */ = data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */;
  TRACE_POP
}
/*
equation index: 980
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  data->localData[0]->realVars[185] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[137] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 981
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  data->localData[0]->realVars[184] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[137] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 982
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  data->localData[0]->realVars[131] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[130] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 983
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  data->localData[0]->realVars[139] /* gENROE.ud variable */ = (-data->localData[0]->realVars[131] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 984
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[129] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[130] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[128] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 985
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  data->localData[0]->realVars[127] /* gENROE.PSId variable */ = data->localData[0]->realVars[129] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 986
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  data->localData[0]->realVars[140] /* gENROE.uq variable */ = data->localData[0]->realVars[127] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 987
type: SIMPLE_ASSIGN
gENROE.Epd = (gENROE.XaqIlq - (((gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) * gENROE.K1q + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))) / (1.0 + gENROE.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[134] /* gENROE.XaqIlq variable */ - (((data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */) + (data->localData[0]->realVars[138] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[128] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[130] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */,"1.0 + gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 988
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSST1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[137] /* gENROE.id variable */) * (data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[128] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[129] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 989
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  data->localData[0]->realVars[120] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[117] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 990
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  data->localData[0]->realVars[121] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[117] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 991
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  data->localData[0]->realVars[123] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[117] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 992
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  data->localData[0]->realVars[122] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[117] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 993
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  data->localData[0]->realVars[214] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[192] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[120] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 994
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[215] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[121] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 995
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  data->localData[0]->realVars[177] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[205] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[217] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 996
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  data->localData[0]->realVars[176] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[204] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[216] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 997
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  data->localData[0]->realVars[195] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[183] /* pwLine.ir.re variable */) - data->localData[0]->realVars[207] /* pwLine3.is.re variable */ - data->localData[0]->realVars[82] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 998
type: SIMPLE_ASSIGN
pwLine1.is.im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  data->localData[0]->realVars[194] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[182] /* pwLine.ir.im variable */) - data->localData[0]->realVars[206] /* pwLine3.is.im variable */ - data->localData[0]->realVars[81] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc1028(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1028};
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
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
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
  modelica_real tmp44;
  modelica_real tmp45;
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
  /* iteration variables */
  for (i=0; i<29; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<29; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[182] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[206] /* pwLine3.is.im variable */ = xloc[1];
  data->localData[0]->realVars[183] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[207] /* pwLine3.is.re variable */ = xloc[3];
  data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[216] /* pwLine4.is.im variable */ = xloc[5];
  data->localData[0]->realVars[217] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[82] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[81] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[215] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[118] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[117] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[129] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[130] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[138] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[137] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[186] /* pwLine.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[187] /* pwLine.vs.re variable */ = xloc[21];
  data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */ = xloc[24];
  data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ = xloc[25];
  data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ = xloc[26];
  data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ = xloc[28];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_971(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_972(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_973(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_974(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_975(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_976(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_977(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_978(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_979(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_980(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_981(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_982(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_983(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_984(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_985(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_986(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_987(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_988(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_989(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_990(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_991(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_992(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_993(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_994(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_995(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_996(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_997(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_998(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[82] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[81] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[77] /* constantLoad.Q variable */;

  res[1] = (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[81] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[82] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[76] /* constantLoad.P variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[177] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[72] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[208] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp4 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp6 = data->localData[0]->realVars[177] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[501] /* pwFault.R PARAM */) * (data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[502] /* pwFault.X PARAM */) * (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[177] /* pwFault.p.ir variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[2] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */);
  res[3] = ((tmp11 && tmp12)?data->localData[0]->realVars[217] /* pwLine4.is.re variable */:data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[217] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[216] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp13 && tmp14)?data->localData[0]->realVars[216] /* pwLine4.is.im variable */:data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[216] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[217] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */)))));

  res[5] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[123] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[122] /* gENCLS.vd variable */) - data->localData[0]->realVars[196] /* pwLine1.vr.im variable */;

  res[6] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[123] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[122] /* gENCLS.vd variable */) - data->localData[0]->realVars[197] /* pwLine1.vr.re variable */;

  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */);
  res[7] = ((tmp15 && tmp16)?data->localData[0]->realVars[214] /* pwLine4.ir.im variable */:data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[214] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[215] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */)))));

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp17 && tmp18)?data->localData[0]->realVars[215] /* pwLine4.ir.re variable */:data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[215] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[214] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))))));

  tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */);
  tmp28 = (modelica_boolean)tmp19;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[176] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */);
    tmp26 = (modelica_boolean)(tmp20 && data->simulationInfo->booleanParameter[72] /* pwFault.ground PARAM */);
    if(tmp26)
    {
      tmp27 = data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */);
      tmp24 = (modelica_boolean)tmp21;
      if(tmp24)
      {
        tmp22 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp23 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp25 = data->localData[0]->realVars[176] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[501] /* pwFault.R PARAM */) * (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[502] /* pwFault.X PARAM */) * (data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)),(tmp22 * tmp22) + (tmp23 * tmp23),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp25 = data->localData[0]->realVars[176] /* pwFault.p.ii variable */;
      }
      tmp27 = tmp25;
    }
    tmp29 = tmp27;
  }
  res[9] = tmp29;

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp30 && tmp31)?data->localData[0]->realVars[204] /* pwLine3.ir.im variable */:data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp32 && tmp33)?data->localData[0]->realVars[205] /* pwLine3.ir.re variable */:data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp34 && tmp35)?data->localData[0]->realVars[207] /* pwLine3.is.re variable */:data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[207] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[206] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[206] /* pwLine3.is.im variable */:data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[206] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[207] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[195] /* pwLine1.is.re variable */:data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[195] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[194] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[193] /* pwLine1.ir.re variable */:data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[192] /* pwLine1.ir.im variable */:data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */)))));

  res[17] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[36] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[265] /* gENROE.Tppd0 PARAM */));

  res[18] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[239] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[129] /* gENROE.PSIppd variable */;

  tmp44 = data->localData[0]->realVars[187] /* pwLine.vs.re variable */;
  tmp45 = data->localData[0]->realVars[186] /* pwLine.vs.im variable */;
  res[19] = sqrt((tmp44 * tmp44) + (tmp45 * tmp45)) - data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */;

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[185] /* pwLine.is.re variable */:data->localData[0]->realVars[187] /* pwLine.vs.re variable */ - data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */ + (data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[187] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[184] /* pwLine.is.im variable */:data->localData[0]->realVars[186] /* pwLine.vs.im variable */ - data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[187] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */ + (data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[194] /* pwLine1.is.im variable */:data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[194] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[195] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[183] /* pwLine.ir.re variable */:data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[187] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[183] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[182] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */);
  res[24] = ((tmp54 && tmp55)?data->localData[0]->realVars[182] /* pwLine.ir.im variable */:data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[186] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[182] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[183] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */)))));

  res[25] = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[140] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[139] /* gENROE.ud variable */) - data->localData[0]->realVars[186] /* pwLine.vs.im variable */;

  res[26] = (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[140] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[139] /* gENROE.ud variable */) - data->localData[0]->realVars[187] /* pwLine.vs.re variable */;

  res[27] = data->localData[0]->realVars[130] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[240] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[242] /* gENROE.K4q PARAM */));

  res[28] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[37] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[266] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1028(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+29] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,2,2,6,6,6,6,5,5,7,7,3,11,11,8,8};
  const int rowIndex[149] = {14,22,23,24,12,13,14,22,14,22,23,24,12,13,14,22,9,10,11,3,4,9,2,3,4,2,10,11,0,1,14,22,0,1,14,22,7,8,15,16,7,8,15,16,5,6,7,8,15,16,5,6,7,8,15,16,17,18,27,28,17,18,25,26,27,28,17,18,25,26,27,28,20,21,25,26,27,28,17,18,20,21,25,26,19,20,21,24,25,19,20,21,23,26,3,6,7,8,14,15,16,4,5,7,8,15,16,22,17,18,19,0,1,10,12,13,14,16,21,22,23,24,0,1,11,12,13,14,15,20,22,23,24,2,3,4,7,9,10,11,13,2,3,4,8,9,10,11,12};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((29+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(149*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 149;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(29*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (29+1)*sizeof(int));
  
  for(i=2;i<29+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 149*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[26] = 1;
  inSysData->sparsePattern->colorCols[25] = 2;
  inSysData->sparsePattern->colorCols[23] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[22] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[28] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[27] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[24] = 7;
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
}
void initializeStaticDataNLS1028(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[206].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[206].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[206].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[207].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[207].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[207].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[204].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[204].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[204].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[216].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[216].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[216].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[217].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[217].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[217].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[205].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[205].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[205].attribute /* pwLine3.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[82].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[82].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[82].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[215].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[215].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[215].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* gENROE.id */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[186].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[186].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[186].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im */.max;
  /* static nls data for eSST1A.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* eSST1A.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* eSST1A.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* eSST1A.ECOMP */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1028(sysData);
}

void getIterationVarsNLS1028(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[182] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[206] /* pwLine3.is.im variable */;
  array[2] = data->localData[0]->realVars[183] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[207] /* pwLine3.is.re variable */;
  array[4] = data->localData[0]->realVars[204] /* pwLine3.ir.im variable */;
  array[5] = data->localData[0]->realVars[216] /* pwLine4.is.im variable */;
  array[6] = data->localData[0]->realVars[217] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[205] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[82] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[81] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[215] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[192] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[118] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[117] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */;
  array[16] = data->localData[0]->realVars[129] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[130] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[138] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[137] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[186] /* pwLine.vs.im variable */;
  array[21] = data->localData[0]->realVars[187] /* pwLine.vs.re variable */;
  array[22] = data->localData[0]->realVars[197] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[196] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */;
  array[25] = data->localData[0]->realVars[198] /* pwLine1.vs.im variable */;
  array[26] = data->localData[0]->realVars[199] /* pwLine1.vs.re variable */;
  array[27] = data->localData[0]->realVars[208] /* pwLine3.vr.im variable */;
  array[28] = data->localData[0]->realVars[209] /* pwLine3.vr.re variable */;
}


/* inner equations */

void residualFunc186(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,186};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Greater(data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[442] /* pSS2A.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[442] /* pSS2A.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[443] /* pSS2A.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[443] /* pSS2A.limiter.uMin PARAM */:data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */);
  }
  res[0] = data->localData[0]->realVars[90] /* eSST1A.VOTHSG2 variable */ - homotopy(tmp3, data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS186(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS186(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pSS2A.Leadlag2.y */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* pSS2A.Leadlag2.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* pSS2A.Leadlag2.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* pSS2A.Leadlag2.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS186(sysData);
}

void getIterationVarsNLS186(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[147] /* pSS2A.Leadlag2.y variable */;
}


/* inner equations */

void residualFunc183(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,183};
  int i;
  modelica_boolean tmp0;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */,data->simulationInfo->realParameter[36] /* const1.k PARAM */);
  res[0] = data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */ - ((tmp0?data->simulationInfo->realParameter[36] /* const1.k PARAM */:data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS183(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS183(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST1A.add3_2.y */
  sysData->nominal[i] = data->modelData->realVarsData[99].attribute /* eSST1A.add3_2.y */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[99].attribute /* eSST1A.add3_2.y */.min;
  sysData->max[i++]   = data->modelData->realVarsData[99].attribute /* eSST1A.add3_2.y */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS183(sysData);
}

void getIterationVarsNLS183(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[99] /* eSST1A.add3_2.y variable */;
}


/* inner equations */

void residualFunc181(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,181};
  int i;
  modelica_boolean tmp0;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Greater(data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */,data->simulationInfo->realParameter[38] /* const2.k PARAM */);
  res[0] = data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */ - ((tmp0?data->simulationInfo->realParameter[38] /* const2.k PARAM */:data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS181(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS181(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST1A.hV_GATE1.p */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* eSST1A.hV_GATE1.p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* eSST1A.hV_GATE1.p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* eSST1A.hV_GATE1.p */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS181(sysData);
}

void getIterationVarsNLS181(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[102] /* eSST1A.hV_GATE1.p variable */;
}


/* inner equations */

void residualFunc179(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,179};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Greater(data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[95] /* eSST1A.add3.y variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[95] /* eSST1A.add3.y variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */,data->localData[0]->realVars[105] /* eSST1A.imGain1.y variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[105] /* eSST1A.imGain1.y variable */:data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */);
  }
  res[0] = data->localData[0]->realVars[87] /* eSST1A.EFD variable */ - homotopy(tmp3, data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS179(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS179(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for eSST1A.lV_GATE.p */
  sysData->nominal[i] = data->modelData->realVarsData[112].attribute /* eSST1A.lV_GATE.p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[112].attribute /* eSST1A.lV_GATE.p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[112].attribute /* eSST1A.lV_GATE.p */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS179(sysData);
}

void getIterationVarsNLS179(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[112] /* eSST1A.lV_GATE.p variable */;
}


/* inner equations */

/*
equation index: 51
type: SIMPLE_ASSIGN
constantLoad.v = sqrt(pwLine1.vs.re ^ 2.0 + pwLine1.vs.im ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[199] /* pwLine1.vs.re variable */;
  tmp1 = data->localData[0]->realVars[198] /* pwLine1.vs.im variable */;
  data->localData[0]->realVars[83] /* constantLoad.v variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
constantLoad.kP = if constantLoad.v < constantLoad.PQBRAK then constantLoad.a0 + constantLoad.a1 * cos(constantLoad.v * constantLoad.wp) + constantLoad.b1 * sin(constantLoad.v * constantLoad.wp) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[83] /* constantLoad.v variable */,data->simulationInfo->realParameter[41] /* constantLoad.PQBRAK PARAM */);
  data->localData[0]->realVars[80] /* constantLoad.kP variable */ = (tmp0?data->simulationInfo->realParameter[60] /* constantLoad.a0 PARAM */ + (data->simulationInfo->realParameter[61] /* constantLoad.a1 PARAM */) * (cos((data->localData[0]->realVars[83] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))) + (data->simulationInfo->realParameter[67] /* constantLoad.b1 PARAM */) * (sin((data->localData[0]->realVars[83] /* constantLoad.v variable */) * (data->simulationInfo->realParameter[81] /* constantLoad.wp PARAM */))):1.0);
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
constantLoad.kI = if constantLoad.v < 0.5 then constantLoad.a2 * constantLoad.b2 * constantLoad.v ^ (-1.0 + constantLoad.b2) * exp((-constantLoad.a2) * constantLoad.v ^ constantLoad.b2) else 1.0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
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
  tmp0 = Less(data->localData[0]->realVars[83] /* constantLoad.v variable */,0.5);
  tmp15 = (modelica_boolean)tmp0;
  if(tmp15)
  {
    tmp1 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
    }tmp8 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
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
  data->localData[0]->realVars[79] /* constantLoad.kI variable */ = tmp16;
  TRACE_POP
}
/*
equation index: 54
type: SIMPLE_ASSIGN
constantLoad.Q = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.im + constantLoad.d_Q) else constantLoad.kI * constantLoad.S_I.im * constantLoad.v + constantLoad.S_Y.im * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
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
    tmp2 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */ + data->simulationInfo->realParameter[70] /* constantLoad.d_Q PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[44] /* constantLoad.S_I.im PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[48] /* constantLoad.S_Y.im PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[46] /* constantLoad.S_P.im PARAM */);
  }
  data->localData[0]->realVars[77] /* constantLoad.Q variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 55
type: SIMPLE_ASSIGN
constantLoad.P = if time >= constantLoad.t1 and time <= constantLoad.t1 + constantLoad.d_t then constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * (constantLoad.S_P.re + constantLoad.d_P) else constantLoad.kI * constantLoad.S_I.re * constantLoad.v + constantLoad.S_Y.re * constantLoad.v ^ 2.0 + constantLoad.kP * constantLoad.S_P.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
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
    tmp2 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp2 * tmp2)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */ + data->simulationInfo->realParameter[69] /* constantLoad.d_P PARAM */);
  }
  else
  {
    tmp3 = data->localData[0]->realVars[83] /* constantLoad.v variable */;
    tmp5 = (data->localData[0]->realVars[79] /* constantLoad.kI variable */) * ((data->simulationInfo->realParameter[45] /* constantLoad.S_I.re PARAM */) * (data->localData[0]->realVars[83] /* constantLoad.v variable */)) + (data->simulationInfo->realParameter[49] /* constantLoad.S_Y.re PARAM */) * ((tmp3 * tmp3)) + (data->localData[0]->realVars[80] /* constantLoad.kP variable */) * (data->simulationInfo->realParameter[47] /* constantLoad.S_P.re PARAM */);
  }
  data->localData[0]->realVars[76] /* constantLoad.P variable */ = tmp5;
  TRACE_POP
}
/*
equation index: 56
type: SIMPLE_ASSIGN
eSST1A.ECOMP0 = eSST1A.ECOMP
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */ = data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */;
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
eSST1A.VA0 = (eSST1A.V_REF - eSST1A.ECOMP0) * eSST1A.K_A
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */ = (data->simulationInfo->realParameter[119] /* eSST1A.V_REF PARAM */ - data->simulationInfo->realParameter[85] /* eSST1A.ECOMP0 PARAM */) * (data->simulationInfo->realParameter[89] /* eSST1A.K_A PARAM */);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
eSST1A.IFD0 = (eSST1A.VA0 - (eSST1A.Efd0 - eSST1A.I_LR * eSST1A.K_LR)) / eSST1A.K_LR
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[109] /* eSST1A.VA0 PARAM */ - (data->simulationInfo->realParameter[86] /* eSST1A.Efd0 PARAM */ - ((data->simulationInfo->realParameter[88] /* eSST1A.I_LR PARAM */) * (data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */))),data->simulationInfo->realParameter[92] /* eSST1A.K_LR PARAM */,"eSST1A.K_LR",equationIndexes);
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
eSST1A.XADIFD = eSST1A.IFD0
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */ = data->simulationInfo->realParameter[87] /* eSST1A.IFD0 PARAM */;
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
pwLine.is.re = (cos(gENROE.delta) * gENROE.iq - (-sin(gENROE.delta)) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[185] /* pwLine.is.re variable */ = ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - (((-sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[137] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
pwLine.is.im = (sin(gENROE.delta) * gENROE.iq - cos(gENROE.delta) * gENROE.id) * gENROE.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[184] /* pwLine.is.im variable */ = ((sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - ((cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[137] /* gENROE.id variable */))) * (data->simulationInfo->realParameter[221] /* gENROE.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
gENROE.PSIq = (-gENROE.PSIppq) - gENROE.Xppq * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[131] /* gENROE.PSIq variable */ = (-data->localData[0]->realVars[130] /* gENROE.PSIppq variable */) - ((data->simulationInfo->realParameter[276] /* gENROE.Xppq PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
gENROE.ud = (-gENROE.PSIq) - gENROE.R_a * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[139] /* gENROE.ud variable */ = (-data->localData[0]->realVars[131] /* gENROE.PSIq variable */) - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
gENROE.PSIpp = sqrt(gENROE.PSIppd ^ 2.0 + gENROE.PSIppq ^ 2.0)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[129] /* gENROE.PSIppd variable */;
  tmp1 = data->localData[0]->realVars[130] /* gENROE.PSIppq variable */;
  data->localData[0]->realVars[128] /* gENROE.PSIpp variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
gENROE.PSId = gENROE.PSIppd - gENROE.Xppd * gENROE.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[127] /* gENROE.PSId variable */ = data->localData[0]->realVars[129] /* gENROE.PSIppd variable */ - ((data->simulationInfo->realParameter[275] /* gENROE.Xppd PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */));
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
gENROE.uq = gENROE.PSId - gENROE.R_a * gENROE.iq
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[140] /* gENROE.uq variable */ = data->localData[0]->realVars[127] /* gENROE.PSId variable */ - ((data->simulationInfo->realParameter[258] /* gENROE.R_a PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */));
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
gENROE.Epd = (gENROE.XaqIlq - (((gENROE.Xpq - gENROE.Xl) * gENROE.iq - gENROE.PSIkq) * gENROE.K1q + gENROE.iq * (gENROE.Xpq - gENROE.Xq) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppq * (gENROE.Xq - gENROE.Xl) / (gENROE.Xd - gENROE.Xl))) / (1.0 + gENROE.K1q)
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[134] /* gENROE.XaqIlq variable */ - (((data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) - data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */) + (data->localData[0]->realVars[138] /* gENROE.iq variable */) * (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[128] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2)) * ((data->localData[0]->realVars[130] /* gENROE.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[278] /* gENROE.Xq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */,"gENROE.Xd - gENROE.Xl",equationIndexes)))),1.0 + data->simulationInfo->realParameter[236] /* gENROE.K1q PARAM */,"1.0 + gENROE.K1q",equationIndexes);
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
gENROE.PSIkd = ((gENROE.Epq + (gENROE.Xl - gENROE.Xpd) * gENROE.id) * gENROE.K1d + gENROE.Epq + gENROE.id * (gENROE.Xd - gENROE.Xpd) + OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1.0, 1.2) * gENROE.PSIppd - eSST1A.XADIFD) / gENROE.K1d
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */ = DIVISION_SIM((data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */)) * (data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */) + data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->localData[0]->realVars[137] /* gENROE.id variable */) * (data->simulationInfo->realParameter[271] /* gENROE.Xd PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) + (omc_OpenIPSL_NonElectrical_Functions_SE__exp(threadData, data->localData[0]->realVars[128] /* gENROE.PSIpp variable */, data->simulationInfo->realParameter[261] /* gENROE.S10 PARAM */, data->simulationInfo->realParameter[262] /* gENROE.S12 PARAM */, 1.0, 1.2)) * (data->localData[0]->realVars[129] /* gENROE.PSIppd variable */) - data->localData[0]->realVars[91] /* eSST1A.XADIFD variable */,data->simulationInfo->realParameter[235] /* gENROE.K1d PARAM */,"gENROE.K1d",equationIndexes);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
gENCLS.p.ii = (cos(gENCLS.delta) * gENCLS.id - sin(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[120] /* gENCLS.p.ii variable */ = ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[117] /* gENCLS.id variable */) - ((sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
gENCLS.p.ir = ((-sin(gENCLS.delta)) * gENCLS.id - cos(gENCLS.delta) * gENCLS.iq) * gENCLS.CoB
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[121] /* gENCLS.p.ir variable */ = (((-sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[117] /* gENCLS.id variable */) - ((cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */))) * (data->simulationInfo->realParameter[195] /* gENCLS.CoB PARAM */);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
gENCLS.vq = gENCLS.eq + (-gENCLS.R_a) * gENCLS.iq - gENCLS.X_d * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[123] /* gENCLS.vq variable */ = data->localData[0]->realVars[6] /* gENCLS.eq STATE(1) */ + ((-data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */)) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[117] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
gENCLS.vd = gENCLS.X_d * gENCLS.iq - gENCLS.R_a * gENCLS.id
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[122] /* gENCLS.vd variable */ = (data->simulationInfo->realParameter[204] /* gENCLS.X_d PARAM */) * (data->localData[0]->realVars[118] /* gENCLS.iq variable */) - ((data->simulationInfo->realParameter[201] /* gENCLS.R_a PARAM */) * (data->localData[0]->realVars[117] /* gENCLS.id variable */));
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
pwLine4.ir.im = (-pwLine1.ir.im) - gENCLS.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[214] /* pwLine4.ir.im variable */ = (-data->localData[0]->realVars[192] /* pwLine1.ir.im variable */) - data->localData[0]->realVars[120] /* gENCLS.p.ii variable */;
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
pwLine1.ir.re = (-pwLine4.ir.re) - gENCLS.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ = (-data->localData[0]->realVars[215] /* pwLine4.ir.re variable */) - data->localData[0]->realVars[121] /* gENCLS.p.ir variable */;
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
pwFault.p.ir = (-pwLine3.ir.re) - pwLine4.is.re
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[177] /* pwFault.p.ir variable */ = (-data->localData[0]->realVars[205] /* pwLine3.ir.re variable */) - data->localData[0]->realVars[217] /* pwLine4.is.re variable */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
pwFault.p.ii = (-pwLine3.ir.im) - pwLine4.is.im
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[176] /* pwFault.p.ii variable */ = (-data->localData[0]->realVars[204] /* pwLine3.ir.im variable */) - data->localData[0]->realVars[216] /* pwLine4.is.im variable */;
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
pwLine1.is.re = (-pwLine.ir.re) - pwLine3.is.re - constantLoad.p.ir
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[195] /* pwLine1.is.re variable */ = (-data->localData[0]->realVars[183] /* pwLine.ir.re variable */) - data->localData[0]->realVars[207] /* pwLine3.is.re variable */ - data->localData[0]->realVars[82] /* constantLoad.p.ir variable */;
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
pwLine1.is.im = (-pwLine.ir.im) - pwLine3.is.im - constantLoad.p.ii
*/
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[194] /* pwLine1.is.im variable */ = (-data->localData[0]->realVars[182] /* pwLine.ir.im variable */) - data->localData[0]->realVars[206] /* pwLine3.is.im variable */ - data->localData[0]->realVars[81] /* constantLoad.p.ii variable */;
  TRACE_POP
}

void residualFunc108(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,108};
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
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
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
  modelica_real tmp44;
  modelica_real tmp45;
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
  /* iteration variables */
  for (i=0; i<29; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<29; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[182] /* pwLine.ir.im variable */ = xloc[0];
  data->localData[0]->realVars[206] /* pwLine3.is.im variable */ = xloc[1];
  data->localData[0]->realVars[183] /* pwLine.ir.re variable */ = xloc[2];
  data->localData[0]->realVars[207] /* pwLine3.is.re variable */ = xloc[3];
  data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ = xloc[4];
  data->localData[0]->realVars[216] /* pwLine4.is.im variable */ = xloc[5];
  data->localData[0]->realVars[217] /* pwLine4.is.re variable */ = xloc[6];
  data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ = xloc[7];
  data->localData[0]->realVars[82] /* constantLoad.p.ir variable */ = xloc[8];
  data->localData[0]->realVars[81] /* constantLoad.p.ii variable */ = xloc[9];
  data->localData[0]->realVars[215] /* pwLine4.ir.re variable */ = xloc[10];
  data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ = xloc[11];
  data->localData[0]->realVars[118] /* gENCLS.iq variable */ = xloc[12];
  data->localData[0]->realVars[117] /* gENCLS.id variable */ = xloc[13];
  data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ = xloc[14];
  data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */ = xloc[15];
  data->localData[0]->realVars[129] /* gENROE.PSIppd variable */ = xloc[16];
  data->localData[0]->realVars[130] /* gENROE.PSIppq variable */ = xloc[17];
  data->localData[0]->realVars[138] /* gENROE.iq variable */ = xloc[18];
  data->localData[0]->realVars[137] /* gENROE.id variable */ = xloc[19];
  data->localData[0]->realVars[186] /* pwLine.vs.im variable */ = xloc[20];
  data->localData[0]->realVars[187] /* pwLine.vs.re variable */ = xloc[21];
  data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ = xloc[22];
  data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ = xloc[23];
  data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */ = xloc[24];
  data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ = xloc[25];
  data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ = xloc[26];
  data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ = xloc[27];
  data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ = xloc[28];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_51(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_52(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_53(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_54(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_55(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_56(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_57(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_58(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_59(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_60(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_61(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_62(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_63(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_64(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_65(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_66(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_67(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_68(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_69(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_70(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_71(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_72(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_73(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_74(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_75(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_76(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_77(data, threadData);

  /* local constraints */
  OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_eqFunction_78(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[82] /* constantLoad.p.ir variable */) + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->localData[0]->realVars[81] /* constantLoad.p.ii variable */) - data->localData[0]->realVars[77] /* constantLoad.Q variable */;

  res[1] = (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->localData[0]->realVars[81] /* constantLoad.p.ii variable */) + (data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->localData[0]->realVars[82] /* constantLoad.p.ir variable */) - data->localData[0]->realVars[76] /* constantLoad.P variable */;

  tmp0 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */);
  tmp9 = (modelica_boolean)tmp0;
  if(tmp9)
  {
    tmp10 = data->localData[0]->realVars[177] /* pwFault.p.ir variable */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */);
    tmp7 = (modelica_boolean)(tmp1 && data->simulationInfo->booleanParameter[72] /* pwFault.ground PARAM */);
    if(tmp7)
    {
      tmp8 = data->localData[0]->realVars[208] /* pwLine3.vr.im variable */;
    }
    else
    {
      tmp2 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */);
      tmp5 = (modelica_boolean)tmp2;
      if(tmp5)
      {
        tmp3 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp4 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp6 = data->localData[0]->realVars[177] /* pwFault.p.ir variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[501] /* pwFault.R PARAM */) * (data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) + (data->simulationInfo->realParameter[502] /* pwFault.X PARAM */) * (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */),(tmp3 * tmp3) + (tmp4 * tmp4),"pwFault.R ^ 2.0 + pwFault.X ^ 2.0",equationIndexes));
      }
      else
      {
        tmp6 = data->localData[0]->realVars[177] /* pwFault.p.ir variable */;
      }
      tmp8 = tmp6;
    }
    tmp10 = tmp8;
  }
  res[2] = tmp10;

  tmp11 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */);
  tmp12 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */);
  res[3] = ((tmp11 && tmp12)?data->localData[0]->realVars[217] /* pwLine4.is.re variable */:data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[217] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[216] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))))));

  tmp13 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */);
  tmp14 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */);
  res[4] = ((tmp13 && tmp14)?data->localData[0]->realVars[216] /* pwLine4.is.im variable */:data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[216] /* pwLine4.is.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[217] /* pwLine4.is.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */)))));

  res[5] = (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[123] /* gENCLS.vq variable */) + ((-cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */))) * (data->localData[0]->realVars[122] /* gENCLS.vd variable */) - data->localData[0]->realVars[196] /* pwLine1.vr.im variable */;

  res[6] = (cos(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[123] /* gENCLS.vq variable */) + (sin(data->localData[0]->realVars[5] /* gENCLS.delta STATE(1) */)) * (data->localData[0]->realVars[122] /* gENCLS.vd variable */) - data->localData[0]->realVars[197] /* pwLine1.vr.re variable */;

  tmp15 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */);
  tmp16 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */);
  res[7] = ((tmp15 && tmp16)?data->localData[0]->realVars[214] /* pwLine4.ir.im variable */:data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[214] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[215] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */)))));

  tmp17 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[547] /* pwLine4.t1 PARAM */);
  tmp18 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[548] /* pwLine4.t2 PARAM */);
  res[8] = ((tmp17 && tmp18)?data->localData[0]->realVars[215] /* pwLine4.ir.re variable */:data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[546] /* pwLine4.Z.re PARAM */) * (data->localData[0]->realVars[215] /* pwLine4.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[545] /* pwLine4.Z.im PARAM */) * (data->localData[0]->realVars[214] /* pwLine4.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[543] /* pwLine4.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[544] /* pwLine4.Y.re PARAM */))))));

  tmp19 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[503] /* pwFault.t1 PARAM */);
  tmp28 = (modelica_boolean)tmp19;
  if(tmp28)
  {
    tmp29 = data->localData[0]->realVars[176] /* pwFault.p.ii variable */;
  }
  else
  {
    tmp20 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */);
    tmp26 = (modelica_boolean)(tmp20 && data->simulationInfo->booleanParameter[72] /* pwFault.ground PARAM */);
    if(tmp26)
    {
      tmp27 = data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - 1e-10;
    }
    else
    {
      tmp21 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[504] /* pwFault.t2 PARAM */);
      tmp24 = (modelica_boolean)tmp21;
      if(tmp24)
      {
        tmp22 = data->simulationInfo->realParameter[502] /* pwFault.X PARAM */;
        tmp23 = data->simulationInfo->realParameter[501] /* pwFault.R PARAM */;
        tmp25 = data->localData[0]->realVars[176] /* pwFault.p.ii variable */ - (DIVISION_SIM((data->simulationInfo->realParameter[501] /* pwFault.R PARAM */) * (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) - ((data->simulationInfo->realParameter[502] /* pwFault.X PARAM */) * (data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)),(tmp22 * tmp22) + (tmp23 * tmp23),"pwFault.X ^ 2.0 + pwFault.R ^ 2.0",equationIndexes));
      }
      else
      {
        tmp25 = data->localData[0]->realVars[176] /* pwFault.p.ii variable */;
      }
      tmp27 = tmp25;
    }
    tmp29 = tmp27;
  }
  res[9] = tmp29;

  tmp30 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */);
  tmp31 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */);
  res[10] = ((tmp30 && tmp31)?data->localData[0]->realVars[204] /* pwLine3.ir.im variable */:data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */)))));

  tmp32 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */);
  tmp33 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */);
  res[11] = ((tmp32 && tmp33)?data->localData[0]->realVars[205] /* pwLine3.ir.re variable */:data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[205] /* pwLine3.ir.re variable */ + (data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[209] /* pwLine3.vr.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[204] /* pwLine3.ir.im variable */ + ((-data->localData[0]->realVars[209] /* pwLine3.vr.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[208] /* pwLine3.vr.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))))));

  tmp34 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */);
  tmp35 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */);
  res[12] = ((tmp34 && tmp35)?data->localData[0]->realVars[207] /* pwLine3.is.re variable */:data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[209] /* pwLine3.vr.re variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[207] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[206] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))))));

  tmp36 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[536] /* pwLine3.t1 PARAM */);
  tmp37 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[537] /* pwLine3.t2 PARAM */);
  res[13] = ((tmp36 && tmp37)?data->localData[0]->realVars[206] /* pwLine3.is.im variable */:data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[208] /* pwLine3.vr.im variable */ - ((data->simulationInfo->realParameter[535] /* pwLine3.Z.re PARAM */) * (data->localData[0]->realVars[206] /* pwLine3.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[534] /* pwLine3.Z.im PARAM */) * (data->localData[0]->realVars[207] /* pwLine3.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[532] /* pwLine3.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[533] /* pwLine3.Y.re PARAM */)))));

  tmp38 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */);
  tmp39 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */);
  res[14] = ((tmp38 && tmp39)?data->localData[0]->realVars[195] /* pwLine1.is.re variable */:data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[195] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[194] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))))));

  tmp40 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */);
  tmp41 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */);
  res[15] = ((tmp40 && tmp41)?data->localData[0]->realVars[193] /* pwLine1.ir.re variable */:data->localData[0]->realVars[197] /* pwLine1.vr.re variable */ - data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))))));

  tmp42 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */);
  tmp43 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */);
  res[16] = ((tmp42 && tmp43)?data->localData[0]->realVars[192] /* pwLine1.ir.im variable */:data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[192] /* pwLine1.ir.im variable */ + ((-data->localData[0]->realVars[197] /* pwLine1.vr.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[193] /* pwLine1.ir.re variable */ + (data->localData[0]->realVars[196] /* pwLine1.vr.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[197] /* pwLine1.vr.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */)))));

  res[17] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */ + (data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */ - data->simulationInfo->realParameter[273] /* gENROE.Xpd PARAM */) * (data->localData[0]->realVars[137] /* gENROE.id variable */) + (-data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) - ((data->localData[0]->realVars[36] /* der(gENROE.PSIkd) STATE_DER */) * (data->simulationInfo->realParameter[265] /* gENROE.Tppd0 PARAM */));

  res[18] = (data->localData[0]->realVars[9] /* gENROE.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[241] /* gENROE.K4d PARAM */) + (data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */) * (data->simulationInfo->realParameter[239] /* gENROE.K3d PARAM */) - data->localData[0]->realVars[129] /* gENROE.PSIppd variable */;

  tmp44 = data->localData[0]->realVars[187] /* pwLine.vs.re variable */;
  tmp45 = data->localData[0]->realVars[186] /* pwLine.vs.im variable */;
  res[19] = sqrt((tmp44 * tmp44) + (tmp45 * tmp45)) - data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */;

  tmp46 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */);
  tmp47 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */);
  res[20] = ((tmp46 && tmp47)?data->localData[0]->realVars[185] /* pwLine.is.re variable */:data->localData[0]->realVars[187] /* pwLine.vs.re variable */ - data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */ + (data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[187] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))))));

  tmp48 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */);
  tmp49 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */);
  res[21] = ((tmp48 && tmp49)?data->localData[0]->realVars[184] /* pwLine.is.im variable */:data->localData[0]->realVars[186] /* pwLine.vs.im variable */ - data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[184] /* pwLine.is.im variable */ + ((-data->localData[0]->realVars[187] /* pwLine.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[185] /* pwLine.is.re variable */ + (data->localData[0]->realVars[186] /* pwLine.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[187] /* pwLine.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */)))));

  tmp50 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[525] /* pwLine1.t1 PARAM */);
  tmp51 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[526] /* pwLine1.t2 PARAM */);
  res[22] = ((tmp50 && tmp51)?data->localData[0]->realVars[194] /* pwLine1.is.im variable */:data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[196] /* pwLine1.vr.im variable */ - ((data->simulationInfo->realParameter[524] /* pwLine1.Z.re PARAM */) * (data->localData[0]->realVars[194] /* pwLine1.is.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[523] /* pwLine1.Z.im PARAM */) * (data->localData[0]->realVars[195] /* pwLine1.is.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[521] /* pwLine1.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[522] /* pwLine1.Y.re PARAM */)))));

  tmp52 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */);
  tmp53 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */);
  res[23] = ((tmp52 && tmp53)?data->localData[0]->realVars[183] /* pwLine.ir.re variable */:data->localData[0]->realVars[199] /* pwLine1.vs.re variable */ - data->localData[0]->realVars[187] /* pwLine.vs.re variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[183] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[182] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))))));

  tmp54 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realParameter[514] /* pwLine.t1 PARAM */);
  tmp55 = Less(data->localData[0]->timeValue,data->simulationInfo->realParameter[515] /* pwLine.t2 PARAM */);
  res[24] = ((tmp54 && tmp55)?data->localData[0]->realVars[182] /* pwLine.ir.im variable */:data->localData[0]->realVars[198] /* pwLine1.vs.im variable */ - data->localData[0]->realVars[186] /* pwLine.vs.im variable */ - ((data->simulationInfo->realParameter[513] /* pwLine.Z.re PARAM */) * (data->localData[0]->realVars[182] /* pwLine.ir.im variable */ + ((-data->localData[0]->realVars[199] /* pwLine1.vs.re variable */)) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[512] /* pwLine.Z.im PARAM */) * (data->localData[0]->realVars[183] /* pwLine.ir.re variable */ + (data->localData[0]->realVars[198] /* pwLine1.vs.im variable */) * (data->simulationInfo->realParameter[510] /* pwLine.Y.im PARAM */) - ((data->localData[0]->realVars[199] /* pwLine1.vs.re variable */) * (data->simulationInfo->realParameter[511] /* pwLine.Y.re PARAM */)))));

  res[25] = (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[140] /* gENROE.uq variable */) + ((-cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */))) * (data->localData[0]->realVars[139] /* gENROE.ud variable */) - data->localData[0]->realVars[186] /* pwLine.vs.im variable */;

  res[26] = (cos(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[140] /* gENROE.uq variable */) + (sin(data->localData[0]->realVars[11] /* gENROE.delta STATE(1) */)) * (data->localData[0]->realVars[139] /* gENROE.ud variable */) - data->localData[0]->realVars[187] /* pwLine.vs.re variable */;

  res[27] = data->localData[0]->realVars[130] /* gENROE.PSIppq variable */ - ((data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */) * (data->simulationInfo->realParameter[240] /* gENROE.K3q PARAM */)) - ((data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[242] /* gENROE.K4q PARAM */));

  res[28] = data->localData[0]->realVars[7] /* gENROE.Epd STATE(1) */ + (data->simulationInfo->realParameter[277] /* gENROE.Xpq PARAM */ - data->simulationInfo->realParameter[272] /* gENROE.Xl PARAM */) * (data->localData[0]->realVars[138] /* gENROE.iq variable */) + (-data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */) - ((data->localData[0]->realVars[37] /* der(gENROE.PSIkq) STATE_DER */) * (data->simulationInfo->realParameter[266] /* gENROE.Tppq0 PARAM */));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS108(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+29] = {0,4,4,4,4,3,3,3,3,4,4,4,4,6,6,2,2,6,6,6,6,5,5,7,7,3,11,11,8,8};
  const int rowIndex[149] = {14,22,23,24,12,13,14,22,14,22,23,24,12,13,14,22,9,10,11,3,4,9,2,3,4,2,10,11,0,1,14,22,0,1,14,22,7,8,15,16,7,8,15,16,5,6,7,8,15,16,5,6,7,8,15,16,17,18,27,28,17,18,25,26,27,28,17,18,25,26,27,28,20,21,25,26,27,28,17,18,20,21,25,26,19,20,21,24,25,19,20,21,23,26,3,6,7,8,14,15,16,4,5,7,8,15,16,22,17,18,19,0,1,10,12,13,14,16,21,22,23,24,0,1,11,12,13,14,15,20,22,23,24,2,3,4,7,9,10,11,13,2,3,4,8,9,10,11,12};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((29+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(149*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 149;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(29*sizeof(int));
  inSysData->sparsePattern->maxColors = 10;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (29+1)*sizeof(int));
  
  for(i=2;i<29+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 149*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[26] = 1;
  inSysData->sparsePattern->colorCols[25] = 2;
  inSysData->sparsePattern->colorCols[23] = 3;
  inSysData->sparsePattern->colorCols[21] = 4;
  inSysData->sparsePattern->colorCols[22] = 4;
  inSysData->sparsePattern->colorCols[9] = 5;
  inSysData->sparsePattern->colorCols[20] = 5;
  inSysData->sparsePattern->colorCols[28] = 5;
  inSysData->sparsePattern->colorCols[8] = 6;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[27] = 6;
  inSysData->sparsePattern->colorCols[3] = 7;
  inSysData->sparsePattern->colorCols[13] = 7;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[24] = 7;
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
}
void initializeStaticDataNLS108(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for pwLine.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* pwLine.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* pwLine.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* pwLine.ir.im */.max;
  /* static nls data for pwLine3.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[206].attribute /* pwLine3.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[206].attribute /* pwLine3.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[206].attribute /* pwLine3.is.im */.max;
  /* static nls data for pwLine.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* pwLine.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* pwLine.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* pwLine.ir.re */.max;
  /* static nls data for pwLine3.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[207].attribute /* pwLine3.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[207].attribute /* pwLine3.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[207].attribute /* pwLine3.is.re */.max;
  /* static nls data for pwLine3.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[204].attribute /* pwLine3.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[204].attribute /* pwLine3.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[204].attribute /* pwLine3.ir.im */.max;
  /* static nls data for pwLine4.is.im */
  sysData->nominal[i] = data->modelData->realVarsData[216].attribute /* pwLine4.is.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[216].attribute /* pwLine4.is.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[216].attribute /* pwLine4.is.im */.max;
  /* static nls data for pwLine4.is.re */
  sysData->nominal[i] = data->modelData->realVarsData[217].attribute /* pwLine4.is.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[217].attribute /* pwLine4.is.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[217].attribute /* pwLine4.is.re */.max;
  /* static nls data for pwLine3.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[205].attribute /* pwLine3.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[205].attribute /* pwLine3.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[205].attribute /* pwLine3.ir.re */.max;
  /* static nls data for constantLoad.p.ir */
  sysData->nominal[i] = data->modelData->realVarsData[82].attribute /* constantLoad.p.ir */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[82].attribute /* constantLoad.p.ir */.min;
  sysData->max[i++]   = data->modelData->realVarsData[82].attribute /* constantLoad.p.ir */.max;
  /* static nls data for constantLoad.p.ii */
  sysData->nominal[i] = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii */.min;
  sysData->max[i++]   = data->modelData->realVarsData[81].attribute /* constantLoad.p.ii */.max;
  /* static nls data for pwLine4.ir.re */
  sysData->nominal[i] = data->modelData->realVarsData[215].attribute /* pwLine4.ir.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[215].attribute /* pwLine4.ir.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[215].attribute /* pwLine4.ir.re */.max;
  /* static nls data for pwLine1.ir.im */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* pwLine1.ir.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* pwLine1.ir.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* pwLine1.ir.im */.max;
  /* static nls data for gENCLS.iq */
  sysData->nominal[i] = data->modelData->realVarsData[118].attribute /* gENCLS.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[118].attribute /* gENCLS.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[118].attribute /* gENCLS.iq */.max;
  /* static nls data for gENCLS.id */
  sysData->nominal[i] = data->modelData->realVarsData[117].attribute /* gENCLS.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[117].attribute /* gENCLS.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[117].attribute /* gENCLS.id */.max;
  /* static nls data for gENROE.Epq */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* gENROE.Epq */.max;
  /* static nls data for gENROE.PSIkq */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* gENROE.PSIkq */.max;
  /* static nls data for gENROE.PSIppd */
  sysData->nominal[i] = data->modelData->realVarsData[129].attribute /* gENROE.PSIppd */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[129].attribute /* gENROE.PSIppd */.min;
  sysData->max[i++]   = data->modelData->realVarsData[129].attribute /* gENROE.PSIppd */.max;
  /* static nls data for gENROE.PSIppq */
  sysData->nominal[i] = data->modelData->realVarsData[130].attribute /* gENROE.PSIppq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[130].attribute /* gENROE.PSIppq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[130].attribute /* gENROE.PSIppq */.max;
  /* static nls data for gENROE.iq */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* gENROE.iq */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* gENROE.iq */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* gENROE.iq */.max;
  /* static nls data for gENROE.id */
  sysData->nominal[i] = data->modelData->realVarsData[137].attribute /* gENROE.id */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[137].attribute /* gENROE.id */.min;
  sysData->max[i++]   = data->modelData->realVarsData[137].attribute /* gENROE.id */.max;
  /* static nls data for pwLine.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[186].attribute /* pwLine.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[186].attribute /* pwLine.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[186].attribute /* pwLine.vs.im */.max;
  /* static nls data for pwLine.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* pwLine.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* pwLine.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* pwLine.vs.re */.max;
  /* static nls data for pwLine1.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[197].attribute /* pwLine1.vr.re */.max;
  /* static nls data for pwLine1.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[196].attribute /* pwLine1.vr.im */.max;
  /* static nls data for eSST1A.ECOMP */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* eSST1A.ECOMP */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* eSST1A.ECOMP */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* eSST1A.ECOMP */.max;
  /* static nls data for pwLine1.vs.im */
  sysData->nominal[i] = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[198].attribute /* pwLine1.vs.im */.max;
  /* static nls data for pwLine1.vs.re */
  sysData->nominal[i] = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[199].attribute /* pwLine1.vs.re */.max;
  /* static nls data for pwLine3.vr.im */
  sysData->nominal[i] = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im */.min;
  sysData->max[i++]   = data->modelData->realVarsData[208].attribute /* pwLine3.vr.im */.max;
  /* static nls data for pwLine3.vr.re */
  sysData->nominal[i] = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re */.min;
  sysData->max[i++]   = data->modelData->realVarsData[209].attribute /* pwLine3.vr.re */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS108(sysData);
}

void getIterationVarsNLS108(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[182] /* pwLine.ir.im variable */;
  array[1] = data->localData[0]->realVars[206] /* pwLine3.is.im variable */;
  array[2] = data->localData[0]->realVars[183] /* pwLine.ir.re variable */;
  array[3] = data->localData[0]->realVars[207] /* pwLine3.is.re variable */;
  array[4] = data->localData[0]->realVars[204] /* pwLine3.ir.im variable */;
  array[5] = data->localData[0]->realVars[216] /* pwLine4.is.im variable */;
  array[6] = data->localData[0]->realVars[217] /* pwLine4.is.re variable */;
  array[7] = data->localData[0]->realVars[205] /* pwLine3.ir.re variable */;
  array[8] = data->localData[0]->realVars[82] /* constantLoad.p.ir variable */;
  array[9] = data->localData[0]->realVars[81] /* constantLoad.p.ii variable */;
  array[10] = data->localData[0]->realVars[215] /* pwLine4.ir.re variable */;
  array[11] = data->localData[0]->realVars[192] /* pwLine1.ir.im variable */;
  array[12] = data->localData[0]->realVars[118] /* gENCLS.iq variable */;
  array[13] = data->localData[0]->realVars[117] /* gENCLS.id variable */;
  array[14] = data->localData[0]->realVars[8] /* gENROE.Epq STATE(1) */;
  array[15] = data->localData[0]->realVars[10] /* gENROE.PSIkq STATE(1) */;
  array[16] = data->localData[0]->realVars[129] /* gENROE.PSIppd variable */;
  array[17] = data->localData[0]->realVars[130] /* gENROE.PSIppq variable */;
  array[18] = data->localData[0]->realVars[138] /* gENROE.iq variable */;
  array[19] = data->localData[0]->realVars[137] /* gENROE.id variable */;
  array[20] = data->localData[0]->realVars[186] /* pwLine.vs.im variable */;
  array[21] = data->localData[0]->realVars[187] /* pwLine.vs.re variable */;
  array[22] = data->localData[0]->realVars[197] /* pwLine1.vr.re variable */;
  array[23] = data->localData[0]->realVars[196] /* pwLine1.vr.im variable */;
  array[24] = data->localData[0]->realVars[86] /* eSST1A.ECOMP variable */;
  array[25] = data->localData[0]->realVars[198] /* pwLine1.vs.im variable */;
  array[26] = data->localData[0]->realVars[199] /* pwLine1.vs.re variable */;
  array[27] = data->localData[0]->realVars[208] /* pwLine3.vr.im variable */;
  array[28] = data->localData[0]->realVars[209] /* pwLine3.vr.re variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[9].equationIndex = 1362;
  nonLinearSystemData[9].size = 1;
  nonLinearSystemData[9].homotopySupport = 0;
  nonLinearSystemData[9].mixedSystem = 1;
  nonLinearSystemData[9].residualFunc = residualFunc1362;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacNLSJac9_column;
  nonLinearSystemData[9].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianNLSJac9;
  nonLinearSystemData[9].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS1362;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS1362;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  
  nonLinearSystemData[8].equationIndex = 1288;
  nonLinearSystemData[8].size = 22;
  nonLinearSystemData[8].homotopySupport = 0;
  nonLinearSystemData[8].mixedSystem = 1;
  nonLinearSystemData[8].residualFunc = residualFunc1288;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_functionJacNLSJac8_column;
  nonLinearSystemData[8].initialAnalyticalJacobian = OpenIPSL_Examples_Controls_PSSE_PSS_PSS2A_initialAnalyticJacobianNLSJac8;
  nonLinearSystemData[8].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS1288;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS1288;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  
  nonLinearSystemData[7].equationIndex = 1062;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 0;
  nonLinearSystemData[7].mixedSystem = 0;
  nonLinearSystemData[7].residualFunc = residualFunc1062;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS1062;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS1062;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  
  nonLinearSystemData[6].equationIndex = 1060;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0;
  nonLinearSystemData[6].mixedSystem = 0;
  nonLinearSystemData[6].residualFunc = residualFunc1060;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS1060;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS1060;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  
  nonLinearSystemData[5].equationIndex = 1028;
  nonLinearSystemData[5].size = 29;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 1;
  nonLinearSystemData[5].residualFunc = residualFunc1028;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS1028;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS1028;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 186;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 1;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc186;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS186;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS186;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 183;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc183;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS183;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS183;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 181;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc181;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS181;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS181;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 179;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 1;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc179;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS179;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS179;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 108;
  nonLinearSystemData[0].size = 29;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc108;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS108;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS108;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

